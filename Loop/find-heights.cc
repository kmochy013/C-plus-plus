// Here I have to find the heights untill the ball hit the ground using for loop 

#include<iostream>
using namespace std;

int main(){

    int t, h = 0;

    for( t = 0; ; t++){
        h = 3 + (10 * t) + (t * t);
        if (h > 0 && h < 2000){
            cout << "When Time = " << t << " " <<" Heights will be = " << h << endl;        
        }
        else{
            cout << "The ball hit the ground" << endl;
            break;
        }
    }

    return 0;

}
