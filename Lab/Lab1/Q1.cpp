class Solution {
public:
    bool isPrime(int n) {
        if(n <= 1) {
            return false; // 0 and 1 are not prime
        }
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                return false; // Divisible by a number other than 1 and itself
            }
        }
        return true; // No divisors found, so it's prime
    }
};

