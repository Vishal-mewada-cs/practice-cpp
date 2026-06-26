// you have five attempt to guess an number between 1 to 20
// Hints will be given

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
     int secret=rand()%20+1;

    int n;
    
    for(int i=1;i<=5;i++)
    {
        cout<<"\nEnter the value=";
        cin>>n;

        if(n<secret)
        {
            cout<<"\noops! wrong guess";
             cout<<"\nHint: try some higher values";
             cout<<"\nTotal "<<5-i<<" attempts left\n ";
        }
        else if(n>secret)
        {
         cout<<"\noops! wrong guess";
             cout<<"\nHint: try some lower values";
             cout<<"\nTotal "<<5-i<<" attempts left\n ";   
        }
        else if(n==secret)
        {
            cout<<"\nohhoo! you won";
            cout<<"\nyou guessed it correctly ";
            break;
        }
    }

}