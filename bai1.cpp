#include <iostream>
#include <vector>
using namespace std;

int sumOfVector(vector<int> v) {
    int sum = 0;
    for(int i=0; i<v.size(); i++) {
        sum+=v[i];
    }
    return sum;
}
int main() {
    vector <int> v;
    int n=10;
    for(int i=0; i<n; i++) {
        v.push_back(i);
    }
    cout<<sumOfVector(v);
    return 0;
}