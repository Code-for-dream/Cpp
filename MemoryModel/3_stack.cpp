/**
 * File : 3_stack.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/15 
 */
# include <iostream>

using namespace std;

int *func() { // ������βΣ��β�����Ҳ�����ջ�ڴ�
    int a = 10;
    return &a;
}

int main() {

    int *p = func();
    /** ����
     * G:\Projects\CLionProjects\C++\MemoryModel\3_stack.cpp: In function 'int* func()':
       G:\Projects\CLionProjects\C++\MemoryModel\3_stack.cpp:11:9: warning: address of local variable 'a' returned [-Wreturn-local-addr]
       int a = 10;
           ^
     * ���������ڲ�����ı����ں�������ʱ���ͷŵ������Է������Ҳ����ġ�
     */
    cout << *p << endl;

    return 0;
}