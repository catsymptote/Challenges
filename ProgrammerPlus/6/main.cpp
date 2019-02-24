#include <iostream>
#include <string>
#include <sstream>


int digit_len(int digit)
{
    switch(digit)
    {
        case 0: return std::string("zero").size();
        case 1: return std::string("one").size();
        case 2: return std::string("two").size();
        case 3: return std::string("three").size();
        case 4: return std::string("four").size();
        case 5: return std::string("five").size();
        case 6: return std::string("six").size();
        case 7: return std::string("seven").size();
        case 8: return std::string("eight").size();
        case 9: return std::string("nine").size();
    }
}


int chars_in_number(int num)
{
    std::string num_str = std::to_string(num);
    int counter = 0;
    int digit;
    for(int i=0; i<num_str.size(); i++)
    {
        std::stringstream str;
        str << num_str[i];
        str >> digit;
        counter += digit_len(digit);
    }

    return counter;
}


int main()
{
    int total = 0;
    for(int i=1; i <= 1000; i++)
        total += chars_in_number(i);
    std::cout << total << std::endl;
    return 0;
}
