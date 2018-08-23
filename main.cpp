#include <iostream>
#include <string>
using namespace std;

template <class T>
T addition(T leftNum, T rightNum)
{
    return leftNum + rightNum;
}

template <class T>
T subtraction(T leftNum, T rightNum)
{
    return leftNum - rightNum;
}

template <class T>
T operation(T leftNum, T rightNum, T (*operation)(T, T))
{
    return (*operation)(leftNum, rightNum);
}

int main(int argc, char const *argv[])
{
    // Declaring a function pointer
    // and passing it as an argument to a function
    int (*integerFunctionCall)(int, int) = subtraction; 
    cout << operation<int>(2, 3, integerFunctionCall) << endl;

    string (*stringFunctionCall)(string, string) = addition; 
    cout << operation<string>("C++ is ", "pretty epic!!!", stringFunctionCall) << endl;


    // Passing a function call as an argument to a function
    cout << operation<double>(2.25, 3.25, addition) << endl;
    cout << operation<float>(2.2, 3.7, subtraction) << endl;

    return 0;
}
