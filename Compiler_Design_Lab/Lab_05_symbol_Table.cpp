#include <bits/stdc++.h>
using namespace std;
#define rootove_swapno_world
#define swapno_king_of_world
struct Symbol {
    int slno;
    string name, idType, dataType, scope, value;
};
class SymbolTable {
    vector<Symbol> table;
    int counter = 0;

public:
    void insert(string name, string idType, string dataType, string scope, string value = "") {
        for (auto &e : table) {
            if (e.name == name && e.scope == scope) {
                cout << "Error: '" << name << "' already declared in scope " << scope << "\n";
                return;
            }
        }
        table.push_back({++counter, name, idType, dataType, scope, value});
    }

    void update(string name, string scope, string value) {
        for (auto &e : table) {
            if (e.name == name && e.scope == scope) {
                e.value = value;
                return;
            }
        }
    }

    void display() {
        cout << "\nSymbol Table:\n";
        cout << left << setw(6) << "Sl.No"
             << setw(10) << "Name"
             << setw(8) << "IdType"
             << setw(10) << "DataType"
             << setw(10) << "Scope"
             << setw(10) << "Value" << "\n";
        for (auto &e : table) {
            cout << left << setw(6) << e.slno
                 << setw(10) << e.name
                 << setw(8) << e.idType
                 << setw(10) << e.dataType
                 << setw(10) << e.scope
                 << setw(10) << e.value << "\n";
        }
    }

    vector<Symbol>& getTable() { return table; }
};

SymbolTable processTokens(vector<pair<string,string>> &tokens) {
    SymbolTable st;
    string scope = "global", lastType = "", lastIdType = "var";

    for (int i = 0; i < tokens.size(); i++) {
        auto [type, val] = tokens[i];

        if (type == "kw") {
            if (val == "int" || val == "float" || val == "double" || val == "void")
                lastType = val;
        }
        else if (type == "id") {
            if (i+1 < tokens.size() && tokens[i+1].second == "(") {
                st.insert(val, "func", lastType, "global");
                scope = val;   // function scope
            } else {
                st.insert(val, "var", lastType, scope);
            }
        }
        else if (val == "}") scope = "global";
        else if (type == "num" && i >= 2 && tokens[i-1].second == "=" && tokens[i-2].first == "id") {
            st.update(tokens[i-2].second, scope, val);
        }
    }
    return st;
}

string modifiedStream(vector<pair<string,string>> &tokens, SymbolTable &st) {
    stringstream ss;
    for (auto &tok : tokens) {
        if (tok.first == "id") {
            for (auto &e : st.getTable()) {
                if (e.name == tok.second) {
                    ss << "[id " << e.slno << "] ";
                    goto nextToken;
                }
            }
        }
        ss << "[" << tok.second << "] ";
        nextToken:;
    }
    return ss.str();
}

int main() {
    int n;
    cout << "Enter number of tokens: ";
    cin >> n;

    vector<pair<string,string>> tokens;
    cout << "Enter tokens in format (type value), e.g., kw int, id x, op =, num 10, sep ;\n";

    for(int i=0; i<n; i++){
        string type, val;
        cin >> type >> val;
        tokens.push_back({type, val});
    }

    SymbolTable st = processTokens(tokens);
    st.display();

    cout << "\nModified Token Stream:\n" << modifiedStream(tokens, st) << "\n";

    return 0;
}
