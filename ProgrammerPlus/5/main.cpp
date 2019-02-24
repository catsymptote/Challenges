#include <iostream>
#include <vector>


// Check if input number is a prime.
bool is_prime(int num)
{
    // Check if prime.
    bool prime = true;

    // Loop through all numbers in the range <1, num>
    for(int i=2; i < num/2+1; i++)
        // If divisible, num is not a prime.
        if(num%i == 0)
            prime = false;
    return prime;
}


// Find all prime factors of a number.
int find_prime_by_index(int prime_index)
{
    int index = 0;
    int number = 1;
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
