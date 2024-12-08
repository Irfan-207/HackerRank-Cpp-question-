// QU : You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector<int> v;
    for (int i =0 ; i<N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q1;
    cin >> q1;
    v.erase(v.begin()+q1-1);
    
    int start , end;
    cin >> start >> end;
    if (start > 0 && end > 0 && start <= end && end <= v.size() + 1) { v.erase(v.begin() + start - 1, v.begin() + end - 1); }
    
    cout << v.size() << endl;
    for (int num : v) {
        cout << num << " ";
    }    
    return 0;
}