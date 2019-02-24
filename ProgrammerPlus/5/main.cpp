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
long long find_prime_by_index(long long prime_index)
{
    long long index = 0;
    long long number = 1;
    while(prime_index != index)
    {
        number++;
        if(is_prime(number))
            index++;
    }
    return number;
}


int main()
{
    int prime_index = 10001;
    std::cout << "Prime[" << prime_index << "] == "
        << find_prime_by_index(prime_index) << std::endl;
    return 0;
}
