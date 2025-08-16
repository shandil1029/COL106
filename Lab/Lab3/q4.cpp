#include <iostream>
#include <vector>
#include <stack>
using namespace std;

string predictPolicyVictory(string parliament){
    int n = parliament.length();
    stack<char> s;
    int countL=0;
    int countJ=0;
    for (int i = 0; i<n;i++){
        if(s.empty()){
            s.push(parliament[i]);
        }
        else{
            if(parliament[i]!= s.top()){
                if(s.top()=='L'){
                    countL++;
                    s.pop();
                }
                else{
                    countJ++;
                    s.pop();
                }
            }
            else{
                s.push(parliament[i]);
            }
        }
    }
    if(!s.empty()){
        if(s.top()=='L'){
            int m = s.size();
            countL += m;
        }
        else{
            int m = s.size();
            countJ += m;
        }
    }    
    if(countJ>countL){
        return "Janmat";
    }    
    return "Loktantrik";

}
int main(){
    string s = "JJLLL";
    cout<<predictPolicyVictory(s);
}
