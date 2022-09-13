/**
 * File : 3_document.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/13 
 */
//swap.cpp文件
#include "swap.h"

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    /**
     * 作用：让代码结构更加清晰
     * 函数分文件编写一般有4个步骤
            1. 创建后缀名为.h的头文件
            2. 创建后缀名为.cpp的源文件
            3. 在头文件中写函数的声明
            4. 在源文件中写函数的定义
     */
    int a = 100;
    int b = 200;
    swap(a, b);

    return 0;
}