/*
Write a program that inputs a character from the keyboard and then 
outputs a large block letter “C” composed of that character. For example,  
if the user inputs the character “X,” then the output should look as 
follows:
      X X X
     X    X
    X
    X
    X
    X
    X
     X    X
      X X X    
*/

#include<iostream>

using namespace std;

int main()
{
      char ch;

      //Inputing a charecter
      cout << "Enter a charecter: \n";
      cin >> ch;

      //Outputing the charecter
      cout << "Here is showing the output \n";

      cout << "  " << ch << " " << ch << " " << ch << endl;
      cout << " " << ch << "     " << ch << endl;
      cout << "" << ch << endl;
      cout << "" << ch << endl;
      cout << "" << ch << endl;
      cout << "" << ch << endl;
      cout << "" << ch << endl;
      cout << " " << ch << "     " << ch << endl;
      cout << "  " << ch << " " << ch << " " << ch << endl;



}



