#include <iostream>

int main()
{
    float length = 0;
    float size = 0;
    std::cout << "Please enter the length: ";
    std::cin >> length;
    while (length<0)
    {
        std::cout << "Please re-enter the length: ";
        std::cin >> length;
    }
    size = length * length;
    std::cout<<"The area of the square is:" << size;
}

