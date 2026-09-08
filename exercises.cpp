#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

float celsius_to_fahrenheit(float temperature) 
{
    return temperature * 1.8 + 32;
}

int main()
{
    // ask for name and age of user and print

    string name; 
    cout << "What is your name? ";
    cin >> name; 

    int age; 
    cout << "What is your age? ";
    cin >> age;

    cout << name << endl; 
    cout << age << endl;

    // ask user for two integers, add them and print the result

    int num1;
    cout << "Enter an integer: ";
    cin >> num1;

    int num2;
    cout << "Enter a second integer: ";
    cin >> num2;

    cout << "Sum: " << num1 + num2 << std::endl;

    // create vector of 4 floats, print average - accumulate(list.begin(), list.end(), 0.0)

    vector<double> floats = {3.4, 2.5, 10.1, 6.3};
    double sum = accumulate(floats.begin(), floats.end(), 0.0);
    double average = sum / floats.size();
    
    cout << "Average: " << average << endl;

    // convert from Celsius to Fahrenheit (F = C * 1.8 + 32)

    float temp_1 = 0.0; // 0 C = 32 F
    float temp_2 = 100.0; // 100 C = 212 F
    float temp_3 = -17.778; // -17.8 C = ~0 F
    float temp_4 = -40.0; // -40 C = -40 F

    cout << temp_1 << " C = " << celsius_to_fahrenheit(temp_1) << " F" << endl;
    cout << temp_2 << " C = " << celsius_to_fahrenheit(temp_2) << " F" << endl;
    cout << temp_3 << " C = " << celsius_to_fahrenheit(temp_3) << " F" << endl;
    cout << temp_4 << " C = " << celsius_to_fahrenheit(temp_4) << " F" << endl;

    return 0;
}
