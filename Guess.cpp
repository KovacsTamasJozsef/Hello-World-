#include <iostream>
#include <cstdlib> // srand(), rand()
#include <ctime> // time()

using namespace std;

int main()
{
    int guess=100,answer;
    cout << "Guess a number under 100: " << endl;

    srand(time(NULL));
    answer=rand()%100;

    while(guess!=answer)
    {
        cin >> guess;
        if(guess>answer)
            cout << "Smaller: " << endl;
        else
            cout << "Bigger: " << endl;
    }

    cout << "You got it!" << endl;

    return 0;
}
