#include <iostream>
using namespace std;

int main()
{
    int num1, num2, res, choice;
    cout << "Calculator APP" << endl;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    cout << "Enter Choice"<<endl;
    cout<<"1.Addition:"<<endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        res = num1 + num2;
        cout<<"Add Result: "<<res<<endl;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }
    return 0;
}