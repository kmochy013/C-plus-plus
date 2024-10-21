#include<iostream>

using namespace std; 

int main (){
    int t, h ;
    t  = 0;
    h = 3;

    while (h > 0){
        cout << "height: " << h << endl;
        t = t = 1;
        h = 3 + (10 * t) + (t * t);
    }

}