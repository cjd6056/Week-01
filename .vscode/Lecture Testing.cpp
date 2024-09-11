#include <iostream>

int main ()
{
    auto a = 1, b = 2, c = 3;
    auto d = 4, e = 5;
    auto f = "6";  // f is a const char*

    auto g = a + b + c + d + e + f;  // f is treated as an integer (pointer arithmetic)

    std::cout << g << std::endl;  // Print the result of the addition
    std::cout << "Type of g: " << typeid(g).name() << std::endl; // Print the type information

    return 0;
}
