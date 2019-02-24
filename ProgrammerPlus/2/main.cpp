#include <iostream>
#include <vector>


bool is_prime(long long num)
{
    // Check if prime.
    bool prime = true;
    for(long long i=2; i < num; i++)
        if(num%i == 0)
        {
            prime = false;
        }

    return prime;
}


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
    while (i <= num)
    {
        if(num%i == 0)
        {
            if(is_prime(i))
            {
                primes.push_back(i);
                num /= i;
                i = 1;
            }
        }
        i++;
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
