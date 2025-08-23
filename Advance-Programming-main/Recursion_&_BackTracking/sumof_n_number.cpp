#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vp push_back
#define vpi vector<pair<string,string>>
const int N = 1e9+7;
struct Symbol{
    int slno; string name,idType,dataType,scope,value;
};
class SymbolTable{
    vector<Symbol> table; int counter=0;
public:
    void insert(string n,string idT,string dt,string sc,string val=""){
        for(auto &e:table) if(e.name==n&&e.scope==sc){cout<<"Error: '"<<n<<"' already declared in "<<sc<<endl; return;}
        table.push_back({++counter,n,idT,dt,sc,val});
    }
    void update(string n,string sc,string val){for(auto &e:table) if(e.name==n && e.scope==sc){e.value=val; return;}}
    void display(){
        cout<<endl<<"Symbol Table:"<<endl;
        cout<<left<<setw(6)<<"Sl.No"<<setw(10)<<"Name"<<setw(8)<<"IdType"<<setw(10)<<"DataType"<<setw(10)<<"Scope"<<setw(10)<<"Value"<<endl;
        for(auto &e:table) cout<<left<<setw(6)<<e.slno<<setw(10)<<e.name<<setw(8)<<e.idType<<setw(10)<<e.dataType<<setw(10)<<e.scope<<setw(10)<<e.value<<endl;
    }
    vector<Symbol>& getTable(){return table;}
};
SymbolTable processTokens(vpi &t){
    SymbolTable st; string scope="global", lastType="";
    for(int i=0;i<t.size();i++){
        auto [tp,val]=t[i];
        if(tp=="kw" && (val=="int"||val=="float"||val=="double"||val=="void")) lastType=val;
        else if(tp=="id"){
            if(i+1<t.size() && t[i+1].second=="("){ st.insert(val,"func",lastType,"global"); scope=val;}
            else st.insert(val,"var",lastType,scope);
        }
        else if(val=="}") scope="global";
        else if(tp=="num" && i>=2 && t[i-1].second=="=" && t[i-2].first=="id") st.update(t[i-2].second,scope,val);
    }
    return st;
}

string modifiedStream(vpi &t, SymbolTable &st){
    stringstream ss;
    for(auto &x:t){
        if(x.first=="id"){for(auto &e:st.getTable()) if(e.name==x.second){ss<<"[id "<<e.slno<<"] "; goto next;}}
        ss<<"["<<x.second<<"] ";
        next:;
    }
    return ss.str();
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cout<<"Enter number of tokens: ";
    cin>>n;
    vpi tokens(n);
    cout<<"Enter tokens (type value) like: kw int, id x, op =, num 10, sep ;\n";
    for(int i=0;i<n;i++) cin>>tokens[i].first>>tokens[i].second;

    SymbolTable st = processTokens(tokens);
    st.display();
    cout<<endl<<"Modified Token Stream:"<<endl<<modifiedStream(tokens,st)<<endl;

    return 0;
}
