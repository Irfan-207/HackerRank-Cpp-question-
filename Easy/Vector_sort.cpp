// QU : You are given N integers.Sort the N integers and print the sorted order
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N ;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        }
    sort(v.begin() , v.end());
    for(int num : v){
        cout << num << " ";
    } 
    return 0;
}