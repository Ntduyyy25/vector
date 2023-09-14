#include <iostream>
#include <vector>

using namespace std;

int sumOfOddElements(vector<int> v) {
    int sum = 0;
    vector<int> ::iterator it;
    for(it = v.begin();it !=  v.end(); it++) {
        if(*it %2 !=0) {
            sum+=*it;
        }
    }
    return sum;
}
int main() {
    vector<int> v;
    for(int i=0; i<15; i++) {
        v.push_back(i);
    }
    cout<<"SUM: "<<sumOfOddElements(v)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    return 0;
}