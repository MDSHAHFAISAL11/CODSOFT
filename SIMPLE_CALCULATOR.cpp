#include<iostream>
using namespace std;
 int main()
 {
    int a , b ;
    char opp;
    cout<<"enter 1st no. :-  ";
    cin>>a;
    cout<<"enter operator:-  ";
    cin>>opp;
    cout<<"enter 2nd no :-  ";
    cin>>b;
    

    switch (opp)
    {
    case '+': cout<<"the sum of "<<a<<" and "<<b<< " is :- "<<a+b;
        break;

    case '*':  cout<<"the product of "<<a<<" and "<<b<<" is :- "<<a*b;
           break;

    case '/':  cout<<a<<" /"<<b<<" is :- "<<a/b<<" and remainder is :- " << a%b;
            break;

    case '-' : cout<<a<<" - "<<b<<" is :- "<<a-b;
             break;
    
    default:  cout<<"please enter valid operator";
            break;
    }
 }