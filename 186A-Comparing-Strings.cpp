#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int k = 0;
string s1;
string s2;
cin>>s1>>s2;
set <char> s;
for (int i = 0; i < s1.size(); i++)
{
  if (s1[i] != s2[i])
  {
    s.insert(s1[i]);
    s.insert(s2[i]);
    k++;
  }
}
if (s1.size() != s2.size())
{
cout<<"NO";
}
else if (k != s.size())
{
   cout<<"NO";
}

else{
if(k == 2){
  cout<<"YES";
}
else
{
  cout<<"NO";
}
}

}
