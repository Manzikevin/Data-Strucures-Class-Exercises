#include <iostream>
using namespace std;
int main()
{
    int average;

    cout << "Enter Your Average Marks : ";
    cin >> average;

    if (average >= 80)
    {
        cout << "First Class" << endl;
    }
    else if (average >= 70)
    {
        cout << "Second Class Upper Division" << endl;
    }
    else if (average >= 60)
    {
        cout << "Second Class Lower Division" << endl;
    }
    else if (average >= 50)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "No Diploma" << endl;
    }
}