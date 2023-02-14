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
{   
    Calc b(2,10);
    std::cout<<b.mul()<<std::endl;
    std::cout<<b.add()<<std::endl;
}