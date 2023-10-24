#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//why are functions used ??
//functions are used to modularise code 
//functions are used to increase readibility
//functions are used to use same code multiple times
// void -> which does not return anything 
// return 
// parameterised
// non parmaterised


// non paramterised function 
void name();//function prototype
void name() {//function definition 
    cout<<"Striver"<<endl;
}

//paramaterised functon 
void Entername(string Yourname){
     cout<<"hello "<<Yourname;
}

//return function
int add(int num1, int num2){
     return num1 + num2;
}
int main()
{
    name();//function call 
    string Your_name;
    cin>>Your_name;
    Entername(Your_name);
   
    cout<<add(3,4);
    
}