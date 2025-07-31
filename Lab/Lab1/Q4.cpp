#include <iostream>

bool checkPalindrome(int numb){
    int reverseNum = 0;
    int num = numb;
    while(num!=0){
        reverseNum = reverseNum*10 + num%10;
        num = num/10;
    }
    if(numb == reverseNum){
        return true;
    }
    else{
        return false;
    }
}

int main()
{   int num = 16;
    std:: cout << checkPalindrome(15251);

    return 0;
}
