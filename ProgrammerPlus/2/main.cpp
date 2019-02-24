#include <iostream>
#include <vector>


// Check if input number is a prime.
bool is_prime(long long num)
{
    // Check if prime.
    bool prime = true;

    // Loop through all numbers in the range <1, num>
    for(long long i=2; i < num; i++)
        // If divisible, num is not a prime.
        if(num%i == 0)
            prime = false;
    return prime;
}


// Find all prime factors of a number.
std::vector<long long> find_primes(long long num)
{
    // List of primes.
    std::vector<long long> primes;

    // Add -1 if number is negative.
    // Can be replaced with absolute values.
    if(num < 0)
    {
        primes.push_back(-1);
        num *= -1;
    }

    // Looping through potential primes.
    //for(long long i=2; i < num; i++)
    long long i = 2;
    long long i_min = 2;
    while (i <= num)
    {
        // If num is divisible by i.
        if(num%i == 0)
        {
            // And num is a prime.
            if(is_prime(i))
            {
                // Add prime factor and reduce num.
                primes.push_back(i);
                num /= i;
                i = i_min -1;
            }
        }
        i++;

        // Make sure you skip the smaller, unnecessary primes.
        if (i_min < i)
            i_min = i;
    }
    return primes;
}


int main()
{
    long long num = 600851475143;
    //long long num = 13195;
    //long long num = 16;
    std::vector<long long> primes = find_primes(num);
    for(long long i=0; i < primes.size(); i++)
    {
        std::cout << primes.at(i);
        if (i < primes.size() -1)
            std::cout << ", ";
    }

    return 0;
}
