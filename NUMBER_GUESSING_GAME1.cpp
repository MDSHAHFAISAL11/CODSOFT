#include<iostream>
using namespace std;
int rnd ;
bool check()
{
    int no ,i=0;
    cin>>no;
    while (i<5)
    {
       
        if (rnd==no)
        {
           return true;
           break;
        }

        else if (rnd>no)
        {
            cout<<"NOPE!!  TRY AGAIN\n";
            cout<<"HINT:- try bigger no.\n";
        }
        else if (rnd<no)
        {
            cout<<"NOPE!!  TRY AGAIN\n";
            cout<<"HINT:- try smaller no.\n";
        } 
        cin>>no;
        i++; 
    }
    return false;


}
int main()
{
    cout<<"\n\n    TRY to guess a no between 0-50....\n    You will get 6 chance to guess it.\n";
    cout<<"       *****GUESS THE NUMBER*****\n";
    srand(time(0));
    rnd=rand()%51;
    
   

    if (check())
    {
        cout<<"INCREDIBLE!! YOU DID IT.\n";
    }
    else{
        cout<<"sorry YOU LOOSE!!\n\n";
    }
   return 0; 
}
