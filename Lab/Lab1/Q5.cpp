
#include <iostream>

int countTrailingZero(int num){
    int countFive = 0;
    int five = 5;
    while(true){
        if(num/five != 0){
        countFive += num/five;
        five = five*five;
        }
        else{
            return countFive;
        }
    }
}

int main()
{   int num = 16;
    std:: cout << countTrailingZero(15);

    return 0;
}
