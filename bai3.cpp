#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.resize(5);
    // in vector v
    for(auto x:v) {
        cout<<x<<" ";
    }
    //tao vector 3 phan tu, cac phan tu co gia tri bang 5
    vector<int> v1;
    v1.resize(3,5);
    cout<<"\nVector v1: ";
    for(auto x:v1) {
        cout<<x<<" ";
    }
    return 0;
}