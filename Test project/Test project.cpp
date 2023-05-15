#include <iostream>
#include "function.h"
using namespace std;

struct Date {
    short day;
    short month;
    short year;
};

int main()
{
    cout << "Hello World!\n";
    
    char name[] = "Pavlo"; 
    char surname[] = "Khasanov";

    cout << name << " " << surname;
    std::cout << "Hello World!\n";
    std::cout << "Test code";
    std::cout << "Test code 2";
    
    // before GitHub
    // after:

    //test for function
    int num1 = 7, num2 = 5;
    const char* res;
    res = (compareNumbers(num1, num2)) ? "true" : "false";
    cout << endl << num1 << " > " << num2 << " ?" << endl << "Its " << res;

}
