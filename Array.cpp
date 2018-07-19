#include <iostream>

using namespace std;

int main()
{
    int arraylength,i=0;
    cout << "Length of the vector:\t" << endl;
    cin >> arraylength;

    int Array[arraylength];
    cout << "Give me the elements of the vector:\t" << endl;
    while(i<arraylength)
    {
        cin >> Array[i];
        i++;
    }
    cout << "The given vector:\t" << endl;
    i=0;
    while(i<arraylength)
    {
        cout << Array[i] <<"\t";
        i++;
    }

return 0;
}
