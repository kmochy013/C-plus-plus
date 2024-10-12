#include <iostream>
using namespace std;

int main() {
    int numberOfpods, peasPerpod, totalPeas;

    cout << "Enter the number of pods: \n";
    cin >> numberOfpods;  
    cout << "Enter the number of peas in a pod: \n";
    cin >> peasPerpod;  

    totalPeas = numberOfpods * peasPerpod;

    cout << "If you have " << numberOfpods << " pea pods\n";
    cout << "and " << peasPerpod << " peas in each pod, then \n";
    cout << "you have " << totalPeas << " peas in all the pods." << endl;

    return 0;
}



