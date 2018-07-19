#include <iostream>

using namespace std;

int sum (int num1, int num2)
{
  int result;
  result=num1+num2;
  return result;
}

int sub (int num1, int num2)
{
  int result;
  result=num1-num2;
  return result;
}


int main()
{
    int num1,num2,RESULT;
    char op;
    cout << "Give me an operation: " << endl;
    cin >> op;

    switch(op)
    {
        case '+':
            {cout << "First number: " << endl;
             cin >> num1;

             cout << "Second number: " << endl;
             cin >> num2;

             RESULT= sum(num1,num2);
             cout << "Result is: " << endl << RESULT;
             break;
            }
        case '-':
            {cout << "First number: " << endl;
             cin >> num1;

             cout << "Second number: " << endl;
             cin >> num2;

             RESULT= sub(num1,num2);
             cout << "Result is: " << endl << RESULT;
             break;
            }

    }
    return 0;
}
