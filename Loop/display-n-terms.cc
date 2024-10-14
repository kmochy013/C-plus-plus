//Sum of natural numbers and input n from the device

#include<iostream>

using namespace std;

int main(){

    int i, n , sum = 0;

    cout << "Display n terms of natural numbers and their sum:" << endl;
    cout << "-------------------------------------------------\n";
    cout << "Input a number of terms: ";
    cin >> n ;
    cout << "The natural numbers upto " << n << "th terms are: \n" ;

    for( i = 1; i <= n; i++ ){
        cout << i << " " ;

        sum = sum + i;
    }

    cout << "\n The sum of the natural numbers is: " << sum << endl ;

}
