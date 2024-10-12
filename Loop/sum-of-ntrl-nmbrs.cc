#include<iostream>
using namespace std;

int main(){

    int n, sum = 0;

    cout << "Here are the first 10 natural numbers:\n";
    
    for( n = 1; n <= 10; n++){
        cout << n << " ";

        sum = sum + n;

    }
    cout << "\nHere is the sum of first 10 natural numbers: " << sum << "";

}