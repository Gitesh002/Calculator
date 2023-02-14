#include<iostream>
//test comment
class Calc
{   
private:
    int x,y;
public:
    Calc(int num1, int num2) :x(num1),y(num2){}
    int add() {return x + y;}
    int mul() {return x * y;}
    int sub() {return x - y;}
    int div() {return x / y;}
};
//main function
int main()
{   int state {};
    int x{}, y{};
    std::cout << "Choose an option\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Multiplication\n";
    std::cout << "3. Subtraction\n";
    std::cout << "4. Division\n";
    std::cin >> state;
    switch (state)
    {
    case 1: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.add();
        break;
    }

    case 2: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.mul();
        break;
    }

    case 3: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.sub();
        break;
    }

    case 4: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.div();
        break;
    }
    
    default: {
        std::cout << "Invalid";
        break;
    }
    }
}