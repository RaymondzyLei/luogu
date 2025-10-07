#include <iostream>
#include <iomanip>

// 辅助函数：以二进制形式打印整数
void printBinary(int num) {
    std::cout << "二进制: ";
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        std::cout << ((num >> i) & 1);
        if (i % 4 == 0 && i > 0) std::cout << " ";
    }
    std::cout << std::endl;
}

int main() {
    int a = 12;  // 二进制: 0000 0000 0000 0000 0000 0000 0000 1100
    int b = 25;  // 二进制: 0000 0000 0000 0000 0000 0000 0001 1001
    int result;
    
    std::cout << "位运算示例程序" << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "变量 a = " << a << std::endl;
    printBinary(a);
    std::cout << "变量 b = " << b << std::endl;
    printBinary(b);
    std::cout << "====================" << std::endl;
    
    // 1. 按位与 (&)：对应位都为1时，结果位才为1
    result = a & b;
    std::cout << "1. 按位与 (a & b): " << result << std::endl;
    printBinary(result);
    
    // 2. 按位或 (|)：对应位只要有一个为1时，结果位就为1
    result = a | b;
    std::cout << "2. 按位或 (a | b): " << result << std::endl;
    printBinary(result);
    
    // 3. 按位异或 (^)：对应位不同时，结果位为1
    result = a ^ b;
    std::cout << "3. 按位异或 (a ^ b): " << result << std::endl;
    printBinary(result);
    
    // 4. 按位取反 (~)：对操作数的每一位取反
    result = ~a;
    std::cout << "4. 按位取反 (~a): " << result << std::endl;
    printBinary(result);
    
    // 5. 左移运算 (<<)：将操作数的各位向左移动指定的位数
    result = a << 2;
    std::cout << "5. 左移运算 (a << 2): " << result << std::endl;
    printBinary(result);
    
    // 6. 右移运算 (>>)：将操作数的各位向右移动指定的位数
    result = a >> 2;
    std::cout << "6. 右移运算 (a >> 2): " << result << std::endl;
    printBinary(result);
    
    // 复合赋值运算符
    int c = a;
    c &= b;
    std::cout << "7. 复合赋值与 (a &= b): " << c << std::endl;
    
    c = a;
    c |= b;
    std::cout << "8. 复合赋值或 (a |= b): " << c << std::endl;
    
    c = a;
    c ^= b;
    std::cout << "9. 复合赋值异或 (a ^= b): " << c << std::endl;
    
    c = a;
    c <<= 2;
    std::cout << "10. 复合赋值左移 (a <<= 2): " << c << std::endl;
    
    c = a;
    c >>= 2;
    std::cout << "11. 复合赋值右移 (a >>= 2): " << c << std::endl;
    
    // 位运算的实际应用示例
    std::cout << "\n位运算的实际应用" << std::endl;
    std::cout << "====================" << std::endl;
    
    // 1. 判断一个数是否为奇数（最低位是否为1）
    std::cout << "a 是" << ((a & 1) ? "奇数" : "偶数") << std::endl;
    
    // 2. 交换两个数而不使用额外变量
    int x = 10, y = 20;
    std::cout << "交换前: x = " << x << ", y = " << y << std::endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    std::cout << "交换后: x = " << x << ", y = " << y << std::endl;
    
    // 3. 计算2的n次方
    int n = 5;
    std::cout << "2^" << n << " = " << (1 << n) << std::endl;
    
    // 4. 检查特定位是否为1
    int bitPosition = 2;
    bool isBitSet = (a & (1 << bitPosition)) != 0;
    std::cout << "a的第" << bitPosition << "位" << (isBitSet ? "是1" : "是0") << std::endl;
    
    // 5. 设置特定位为1
    int setBit = a | (1 << 3);
    std::cout << "将a的第3位设为1: " << setBit << std::endl;
    
    // 6. 清除特定位为0
    int clearBit = a & ~(1 << 2);
    std::cout << "将a的第2位设为0: " << clearBit << std::endl;
    
    return 0;
}