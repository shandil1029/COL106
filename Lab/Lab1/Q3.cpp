#include <stdio.h>
#include <iostream>

bool isPerfectSqr(int num){
    if(num<= 0){
        return false;
    }
    for(int i=1; i*i <= num; i++){
        if(i*i == num){
            return true;
        }
    }
    return false;
}

int main()
{   int num = 16;
    std:: cout << isPerfectSqr(5);

    return 0;
}
