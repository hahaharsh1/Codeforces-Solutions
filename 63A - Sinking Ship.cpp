#include<bits/stdc++.h>
typedef long long int li;
using namespace std;
 
int main ()
{
string name,state;
vector <string> Rats,WnC,Men,Cap;
int t;
cin>>t;
while (t--)
{
 cin>>name>>state;
 if (state == "rat")
 {
  Rats.push_back(name);
 }
 else if (state == "woman" || state == "child")
 {
  WnC.push_back(name);
 }
 else if (state == "man")
 {
  Men.push_back(name);
 }
 else
 {
  Cap.push_back(name);
 }
 
 
}
for(auto i: Rats){
  cout<<i<<endl;
}
for(auto i: WnC){
  cout<<i<<endl;
}
for(auto i: Men){
  cout<<i<<endl;
}
for(auto i: Cap){
  cout<<i<<endl;
}
}
