#include <iostream>
int sumDigits(int n){
    int sum = 0;
    while( n != 0){
        sum += n%10;
        n = n / 10;
    }
    return sum;
}

int main() {
    std::cout << sumDigits(356855);

    return 0;
}

