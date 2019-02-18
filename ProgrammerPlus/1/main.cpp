#include <iostream>


int main()
{
    int sum = 2;
    int num_1 = 1;
    int num_2 = 2;
    int term_count = 20;

    std::cout << "Fibonacci sequence terms for the first " << term_count << " terms:" << std::endl;
    std::cout << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    for(int i=0; i<term_count -2; i++)
    {
        int num_next = num_1 + num_2;
        num_1 = num_2;
        num_2 = num_next;
        std::cout << num_next << std::endl;

        if(num_next %2 == 0)
        {
            sum += num_next;
        }
    }

    std::cout << "\nSum of even-numbered elements:\n" << sum << std::endl;

    return 0;
}
