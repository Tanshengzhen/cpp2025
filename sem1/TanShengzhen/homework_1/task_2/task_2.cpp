#include <iostream>

int main()
{
    float upperLength=0;
    float lowerLength=0;
    float height=0;
    float size = 0;
    std::cout << "Please enter the upperLength:";
    std::cin >> upperLength;
    std::cout << "Please enter the lowerLength:";
    std::cin >> lowerLength;
    std::cout << "Please enter the height:";
    std::cin >> height;
    while (upperLength<0 || lowerLength<0 ||  height<0)
    {
        if (upperLength<=0)
        {
            std::cout << "Please re-enter upperLength:";
            std::cin >> upperLength;
        }
        else if (lowerLength<=0)
        {
            std::cout << "Please re-enter lowerLength:";
            std::cin >> lowerLength;
        }
        else if (height<=0)
        {
            std::cout << "Please re-enter height:";
            std::cin >> height;
        }
    }
    size = ((upperLength + lowerLength) * height) / 2;
    std::cout << "The area of the trapezoid is " << size;
}
