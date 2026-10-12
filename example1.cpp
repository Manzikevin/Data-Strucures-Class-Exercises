#include <iostream>
using namespace std;

int main()
{

    double marks;
    double sum = 0, average = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks for Course :" << i + 1 << endl;
        cin >> marks;

        if (marks < 0 || marks > 100)
        {
            cout << "Invalid Marks Entered" << endl;
        }

        sum = sum + marks;
    }

    average = sum / 5;

    if (average >= 50)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}