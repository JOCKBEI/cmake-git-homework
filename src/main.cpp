#include <iostream>

/* 加法函数：计算两个整数的和 */
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;     /* 第一个加数 */
    int y = 20;     /* 第二个加数 */

    int result = add(x, y);   /* 调用加法函数计算结果 */

    std::cout << "CMake Git Demo Program" << std::endl;   /* 输出程序标题 */
    std::cout << "The result is: " << result << std::endl; /* 输出计算结果 */

    return 0;
}
