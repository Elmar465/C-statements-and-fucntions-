#include <iostream>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
};
int main()
{
    int first_Number = {3};
    std::cout << "First Number :" << first_Number << std::endl;

    int second_Number = {12};
    std::cout << "Second Number :" << second_Number << std::endl;

    int sum = first_Number + second_Number;
    std::cout << " Sum is :" << sum << std::endl;

    sum = addNumbers(21, 21);
    std::cout << "Result is :" << sum << std::endl;
    std::cout << "Function result is :" << addNumbers(12,13) << std::endl;
    return 0;


    /*
        In this lesson we learned about statement and functions 
    
    */
}