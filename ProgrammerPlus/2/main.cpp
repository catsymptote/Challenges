#include <iostream>
#include <vector>


bool is_prime(int num)
{
    // Check if prime.
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
    // List of primes.
    std::vector<int> primes;

    // Add -1 if number is negative.
    if(num < 0)
        primes.push_back(-1);

    // Looping through potential primes.
    //for(int i=2; i < num; i++)
    int i = 2;
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
    //int num = 600851475143;
    int num = 13195;
    //int num = 16;
    std::vector<int> primes = find_primes(num);
    for(int i=0; i < primes.size(); i++)
    {
        std::cout << primes.at(i);
        if (i < primes.size() -1)
            std::cout << ", ";
    }

    return 0;
}
