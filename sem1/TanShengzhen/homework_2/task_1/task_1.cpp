#include <iostream>
#include<stack>
#include<string>
using namespace std;

void Hexadecimal(int deciamlIntger)
{
    int quotient = deciamlIntger;
    int remainder = 0;
    stack<string> s;
    do
    {
        remainder = quotient % 16;
        quotient = quotient / 16;
        string remainderStr;
        switch (remainder)
        {
        case 10:
            remainderStr = 'A';
            s.push(remainderStr);
            break;
        case 11:
            remainderStr = 'B';
            s.push(remainderStr);
            break;
        case 12:
            remainderStr = 'C';
            s.push(remainderStr);
            break;
        case 13:
            remainderStr = 'D';
            s.push(remainderStr);
            break;
        case 14:
            remainderStr = 'E';
            s.push(remainderStr);
            break;
        case 15:
            remainderStr = 'F';
            s.push(remainderStr);
            break;
        default:
            remainderStr = to_string(remainder);
            s.push(remainderStr);
            break;
        }
    } while (quotient != 0);
    while (!s.empty())
    {
        string tp = s.top();
        cout << tp;
        s.pop();
    }
}
void Octal(int deciamlIntger)
{
    int quotient = deciamlIntger;
    int remainder = 0;
    stack<string> s;
    do
    {
        remainder = quotient % 8;
        quotient = quotient / 8;
        string remainderStr;
        remainderStr = to_string(remainder);
        s.push(remainderStr);
    } while (quotient!=0);
    while (!s.empty())
    {
        string tp = s.top();
        cout << tp;
        s.pop();
    }
}

int main()
{
    int num;
    int judge;
    std::cout << "Please enter a Decimal integer: ";
    std::cin >> num;
    cout << "Convert to hexadecimal and output 16, convert to octal and input 8:";
    std::cin >> judge;
    if (judge==16)
    {
        Hexadecimal(num);
    }
    else if (judge==8)
    {
        Octal(num);
    } 
}
