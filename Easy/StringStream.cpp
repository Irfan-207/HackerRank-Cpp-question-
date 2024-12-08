// QU : Complete the parseInts function in the editor below. parseInts has the following parameters: string str: a string of comma separated integers . Returns vector<int>: a vector of the parsed integers.
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> result;
    stringstream ss(str);
    int num;
    char comma;
    
    while (ss >> num) {
        result.push_back(num);
        ss >> comma ;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
