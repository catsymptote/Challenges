#include <iostream>


int main()
{
    int sum = 0;
    int nums [2] = {3, 5};
    for(int i=0; i<2; i++)
    {
        for(int j=1; j<1000; j++)
        {
            if(j%nums[i] == 0)
            {
                sum += j;
                //std::cout << j << std::endl;
            }
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
