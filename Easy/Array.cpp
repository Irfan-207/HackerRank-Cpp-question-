// QU : For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i] . There should be a total of q lines of output.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n , q;
    cin >> n >> q; 
    vector<vector<int>> array(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        array[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i<q; i++) {
        int a , b;
        cin >> a >> b;
        cout << array[a][b] << endl;
    }
    return 0;
}
