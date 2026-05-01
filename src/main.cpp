#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;

    int result = add(x, y);

    std::cout << "CMake Git Demo Program" << std::endl;
    std::cout << "The result is: " << result << std::endl;

    return 0;
}