#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//pass by value 
void doSomething (int num){
     cout<<num <<endl;
     num+=5;
     cout << num << endl;
     num += 5;
     cout << num << endl;
}
//pass by reference
void donothing(string &s){
     s[0]='t';
     cout<<s;
}

int main()
{
  int n;
  cin>>n;
  doSomething(n);
  string name;
  cin >>name;
  donothing(name);
}