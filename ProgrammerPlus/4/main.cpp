#include <iostream>


bool divi(int counter, int nums)
{
    for(int i=2; i <= nums; i++)
        if(counter%i != 0)
            return true;
    return false;
}


int main()
{
    int counter = 1;
    int nums = 20;
    while(divi(counter, nums))
        counter++;

    std::cout << counter << std::endl;
    return 0;
}
