#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
vector<int> gradingStudents(vector<int> grades) {
for(auto &grade:grades)
{
    if(grade>=38)
    {
        int var1=((grade/5)+1)*5;
        if(var1-grade<3)
        {
            grade=var1;
        }
    }
}
return grades;
     
}

int main()
{
fastIO();

int n;
cin>>n;
vector<int>v(n);
for(auto &i:v)
{
    cin>>i;
}
auto res=gradingStudents(v);
for(auto i:res)
{
    cout<<i<<endl;
}


return 0;
}