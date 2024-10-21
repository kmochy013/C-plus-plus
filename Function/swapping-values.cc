// Swapping values using pointers

#include <iostream>
using namespace std;

void swap(int* a, int* b ){
    int num = *a;
    *a = *b;
    *b = num;
}

int main(){

    int x, y;

    x = 10;
    y = 20;
    
    cout << " Before swapping, the values are x = " << x << " " << " y = " << y << endl;
    swap(&x, &y);

    cout << " After swapping, the values will be x = " << x << " " << " y = " << y << endl;

    if (x == 20 && y == 10){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;

}