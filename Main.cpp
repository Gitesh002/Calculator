#include<iostream>
//contains code to perform arithmatic operations
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

int main()
{   //defines different arithmatic operation states
    int state {};
    //numbers to perform arithmatic operations
    int x{}, y{};
    std::cout << "Choose an option\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Multiplication\n";
    std::cout << "3. Subtraction\n";
    std::cout << "4. Division\n";
    //get state from user
    std::cin >> state;
    switch (state)
    {
    //addition state
    case 1: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.add();
        break;
    }
    //multiplication state
    case 2: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.mul();
        break;
    }
    //subtraction state
    case 3: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.sub();
        break;
    }
    //division state
    case 4: {
        std::cout << "Enter numbers with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b(x,y);
        std::cout << b.div();
        break;
    }
    //if entered state is invalid print invalid
    default: {
        std::cout << "Invalid";
        break;
    }
    }
}