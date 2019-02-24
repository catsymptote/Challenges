#include <iostream>
#include <string>
#include <vector>


std::string flip_string(std::string str)
{
    std::string str_new;
    for (int i=str.size()-1; i >= 0; i--)
    {
        str_new += str[i];
    }
    return str_new;
}


bool is_palindromic(int num)
{
    // Make an inverse/flipped num.
    std::string num_str = std::to_string(num);
    std::string flipped_num_str = flip_string(num_str);
    int flipped_num = std::stoi(flipped_num_str);

    // Check if nums are the same (and thus palindromic).
    if(flipped_num == num)
        return true;
    return false;
}


std::vector<int> find_palindromic_number
    (int digits, int num_count)
{
    std::vector<int> palins;
    // for -> for ->

    return palins;
}


int main()
{
    //td::cout << "Hi" << std::endl;
    //std::cout << flip_string("Hey There!") << std::endl;
    if(is_palindromic(90011009))
        std::cout << "Is palin...";
    else
        std::cout << "Is NOT palin...";
    /*
    std::vector<int> palins = find_palindromic_number(2, 2);
    for(int i=0; i<palins.size(); i++)
        std::cout << palins.at(i) << "   ";
    */
    return 0;
}
