#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time (0)); 
    int guess;
    int attempts = 0;
    int secretnum=rand()%100 +1;
    string name;
    cout<<"welcome to the NUMBER GUESSING game"<<endl;
    cout << "you have selected a number between 1 and 100. Try to guess it." << endl;
    23
    cout<<"enter a number";
    cin>>guess;
    
    while(guess!=secretnum)
    {
        attempts++;
        if(guess<secretnum)
            cout<<"too less! please try a higher number"<<endl;
        else if(guess>secretnum){
            cout<<"too big! please try a smaller number"<<endl;
    }
        else{
             cout<<"Congratulations! You guessed the number in " << attempts << " attempts." <<endl;
            }

       return 0;
}
