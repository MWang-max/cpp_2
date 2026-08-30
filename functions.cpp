#include <iostream>

void say_hello(std::string user_name, int user_age)
{
    std::cout << "Hello, world" << std::endl;
    std::cout << "Name: " << user_name << std::endl;
    std::cout << "Age: " << user_age << std::endl;
    return;
}

int triple_number(int number) // return statement
{
    return number * 3;
}

void print_triple_number(int number) // call function inside another function (not recursion)
{
    std::cout << triple_number(number) << std::endl;
}

int main()
{
    say_hello("John Doe", 30); // variables must be in same order as in declaration
    say_hello("Jane Doe", 40);

    std::cout << triple_number(10) << std::endl;
    std::cout << triple_number(-2) << std::endl;
    std::cout << triple_number(0) << std::endl;


    print_triple_number(4);
    print_triple_number(-3);
    
    return 0;
}