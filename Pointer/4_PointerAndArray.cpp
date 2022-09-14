/**
 * File : 4_PointerAndArray.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 利用指针访问元素
     */
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /*
     * TODO: 指向数组的指针
     *  等同于 int *p = &arr[0];
     */
    int *p = arr;

    cout << "第一个元素： " << arr[0] << endl;
    cout << "指针访问第一个元素： " << *p << endl;

    for (int i = 0; i < 10; i++) {
        // 利用指针遍历数组
        cout << *p << endl;
        cout << p << endl;
        p++; // p++是指地址的自增，(*p)++表示地址储存的值的自增
    }
    /* 16进制 => 递增4
        0x61fde0
        0x61fde4
        0x61fde8
        0x61fdec
        0x61fdf0
        0x61fdf4
        0x61fdf8
        0x61fdfc
        0x61fe00
        0x61fe04
     */
    return 0;
}