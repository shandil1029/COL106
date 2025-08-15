// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> signalSpan(const vector<int>& A){
    int n = A.size();
    vector<int> ansVec(n);
    stack<int> s;
    for(int i = 0; i < n; i++){
        if(s.empty()==true){
            ansVec[i] = i + 1;
            s.push(i);
        }
        else{
            while(!s.empty() and A[s.top()]<A[i]){
                s.pop();
            }
            if(s.empty()){
                ansVec[i] = i + 1;
                s.push(i);
            }
            else{
                ansVec[i] = i - s.top();
                s.push(i);
            }
        }
    }
    return ansVec;
}
int main() {
    // Write C++ code here
    vector<int> a = {10 ,4 ,5 ,90 ,120 ,80};
    vector<int> s = signalSpan(a);
    cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5];

    return 0;
}
