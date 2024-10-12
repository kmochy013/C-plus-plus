#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if(a % 2 == 0){
        cout << "This number is even number.\n";
    }
    else {
        cout << "This number is odd number.\n";
    }

    return 0;

}
