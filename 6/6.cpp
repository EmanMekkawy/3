// 6
#include <iostream>
using namespace std;
int main()
{
    float firstangle;
    float secondangle;
    float thirdangle;
    int sumofangles;
    cout << "Enter the three angles :";
    cin>> firstangle>>secondangle>>thirdangle;
    sumofangles= firstangle +secondangle + thirdangle;
    cout << "sumofangles=" << sumofangles <<endl;
    if (sumofangles == 180)
    {
        cout << "the traingle is valid";
    }
    else
    {
        cout << "the traingle is  not valid";
    }
    return 0;
   
}

