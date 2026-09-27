#include <iostream>
#include <string>
using namespace std;

int main() {
string firstName;
string middleName;
string lastName;

cin >> firstName;
cin>> middleName;


 if (cin>>lastName){
cout << lastName << ", "<< (firstName.at(0))  << "."<< middleName.at(0) << "." <<endl;
}
   else {
cout << middleName << ", "<< (firstName.at(0)) << "." <<endl;
   }
   return 0;
}
