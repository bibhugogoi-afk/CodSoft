#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number,guess;
    srand(time(0));
    number=rand()%100+1;   
    cout<<"Guess the number between 1 and 100\n";
    do
    {
        cout<<"Enter your guess: ";
        cin>>guess;
        if(guess>number)
            cout<<"Too high! Try again.\n";
        else if(guess<number)
            cout<<"Too low! Try again.\n";
        else
            cout<<"Congratulations! Yay you guessed the correct number.\n";

    } while(guess!=number);

return 0;
}
