#include<iostream>

int main() {
    char oprt;
    double numA;
    double numB;
    double result;

    std::cout<<"Enter operator you want to use(+ - * /): ";
    std::cin>>oprt;

    std::cout<<"A: ";
    std::cin>>numA;

    std::cout<<"B: ";
    std::cin>>numB;

    switch(oprt){
        case '+':
        result = numA+numB;
        std::cout<<"result: "<<result;
        break;

        case '-':
        result = numA-numB;
        std::cout<<"result: "<<result;
        break;

        case '*':
        result = numA*numB;
        std::cout<<"result: "<<result;
        break;

        case '/':
        result = numA/numB;
        std::cout<<"result: "<<result;
        break;

        default:
        std::cout<<"Invalid response";
    }

    return 0;
}

