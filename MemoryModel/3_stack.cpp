/**
 * File : 3_stack.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

int *func() { // 如果有形参，形参数据也会放在栈内存
    int a = 10;
    return &a;
}

int main() {

    int *p = func();
    /** 报错
     * G:\Projects\CLionProjects\C++\MemoryModel\3_stack.cpp: In function 'int* func()':
       G:\Projects\CLionProjects\C++\MemoryModel\3_stack.cpp:11:9: warning: address of local variable 'a' returned [-Wreturn-local-addr]
       int a = 10;
           ^
     * 这样函数内部定义的变量在函数结束时被释放掉，所以返回是找不到的。
     */
    cout << *p << endl;

    return 0;
}