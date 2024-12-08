// QU : You are given two strings, a and b , separated by a new line. Each string will consist of lower case Latin characters 
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    cin >> a;
    string b;
    cin >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    swap(a[0],b[0]);
    cout << a << " " << b;
    return 0;
}