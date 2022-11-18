#include <iostream>


int sum(int a, int b) {
    return a + b;
}


int main(int, char**) {
    int a = 5;
    int b = 10;
    std::cout << "Hello, world!\n";
    std::cout << sum(a, b) << std::endl;
}


