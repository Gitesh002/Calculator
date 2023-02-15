#include<iostream>
//contains code to perform arithmatic operations
class Calc
{   
private:
    
public:
    int res;
    Calc() :res(0){}
    int add(int x, int y) {this->res = x + y;return x + y;}
    int mul(int x, int y) {this->res = x * y;return x * y;}
    int sub(int x, int y) {this->res = x - y;return x - y;}
    int div(int x, int y) {this->res = x / y;return x / y;}
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
        std::cout << "Enter number with spaces(n to stop) : ";
        std::cin >> x;
        std::cin >> y;
        Calc b;
        std::cout << b.add(x,y);
        while(y)
        {   std::cout <<" + ";
            std::cin >> y;
            std::cout << b.add(b.res,y);
        }   
        break;
    }
    //multiplication state
    case 2: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b;
        std::cout << b.mul(x,y);
        while(y)
        {   std::cout <<" * ";
            std::cin >> y;
            std::cout << b.mul(b.res,y);
        }   
        break;
    }
    //subtraction state
    case 3: {
        std::cout << "Enter number with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b;
        std::cout << b.sub(x,y);
        break;
    }
    //division state
    case 4: {
        std::cout << "Enter numbers with spaces : ";
        std::cin >> x;
        std::cin >> y;
        Calc b;
        std::cout << b.div(x,y);
        break;
    }
    //if entered state is invalid print invalid
    default: {
        std::cout << "Invalid";
        break;
    }
    }
}