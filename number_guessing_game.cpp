#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n,guess;
    srand(time(0));
    n=rand()%100+1;   
    cout<<"Guess the number between 1 and 100\n";
    do
    {
        cout<<"Enter guess: ";
        cin>>guess;
        if(guess>n)
            cout<<"EHHH What a noob Too high! Try again.\n";
        else if(guess<n)
            cout<<"EHHH Why so noob Too low! Try again.\n";
        else
            cout<<"Congratulations! Yay you guessed the correct number.\n";

    } while(guess!=n);

return 0;
}
