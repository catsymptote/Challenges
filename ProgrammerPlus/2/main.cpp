#include <iostream>
#include <vector>


bool is_prime(int num)
{
    // Check if prime
    bool prime = true;
    for(int i=2; i < num; i++)
        if(num%i == 0)
        {
            prime = false;
        }

    return prime;
}


std::vector<int> find_primes(int num)
{
    // List of primes
    std::vector<int> primes;

    // Looping through potential primes
    for(int i=2; i < num; i++)
    {
        if(num%i == 0)
            if(is_prime(i))
                primes.push_back(i);

    }
    return primes;
}


int main()
{
    int num = 13195;
    std::vector<int> primes = find_primes(num);
    for(int i=0; i < primes.size(); i++)
    {
        std::cout << primes.at(i);
        if (i < primes.size() -1)
            std::cout << ", ";
    }

    return 0;
}
