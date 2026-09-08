#include <iostream>

using namespace std; // avoid "using namespace" unless for std or other very common name spaces to avoid collisions

void say_hello(string user_name, int user_age)
{
    cout << "Hello, world" << endl;
    cout << "Name: " << user_name << endl;
    cout << "Age: " << user_age << endl;
    return;
}

namespace abc {
    int triple_number(int number) // return statement
    {
        return number * 3;
    }

    void cout() {}
}

int a;

void print_triple_number(int number) // call function inside another function (not recursion)
{
    a = 3; // a can be modified here (in scope)
    cout << abc::triple_number(number) << endl; // must include abc for triple_number as it is in namespace
}

int main()
{
    say_hello("John Doe", 30); // variables must be in same order as in declaration
    say_hello("Jane Doe", 40);

    cout << abc::triple_number(10) << endl;
    cout << abc::triple_number(-2) << endl;
    cout << abc::triple_number(0) << endl;

    abc::cout(); // different from std::cout

    print_triple_number(4);
    print_triple_number(-3);

    a = 2;
    int b;
    b = 4;

    int number; // 'number' variable can be used as different variables with the same name with different scopes (different functions), this variable has a different scope from the other two

    {
        a = 4; // a and b also in scope to be modified here
        b = 5;
        int c;
    }
    
    // c = 3; c not in scope (more nested), cannot be modified here

    return 0;
}
