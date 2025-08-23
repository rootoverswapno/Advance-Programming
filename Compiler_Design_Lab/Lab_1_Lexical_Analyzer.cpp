#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main()
{
  char c;
  string word;
   cout<<"Enter code (end with $):"<<endl;
   while((c=cin.get())!='$')
   {
       if(isalpha(c))
       {
        word="";
        while(isalnum(c)||c=='_')
        {
            word+=c;
            c=cin.get();
        }
        if(isKeyword(word))
        {
            cout<<word<<" -> Keyword"<<endl;
        }
        else
        {
             cout << word << " → Identifier" << endl;
        }
        cin.putback(c);
       }
   }

}