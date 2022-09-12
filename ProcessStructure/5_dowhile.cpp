/**
 * File : 5_dowhile.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 作用： 满足循环条件，执行循环语句
     * 语法： do{ 循环语句 } while(循环条件);
     * 注意： 与while的区别在于do...while会先执行一次循环语句，再判断循环条件
     * 总结：与while循环区别在于，do...while先执行一次循环语句，再判断循环条件
     */
    /*
     * 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
         例如：1^3 + 5^3+ 3^3 = 153
       请利用do...while语句，求出所有3位数中的水仙花数
     */
    int number = 100;
    int count = 0;
    do {
        int a = number % 10;        // 个位数
        int b = (number / 10) % 10; // 十位数
        int c = number / 100;       // 百位数
        // 判断是否为水仙花数
        if ((a * a * a + b * b * b + c * c * c) == number) {
            cout << "水仙花数:" << number << endl;
            count++;
        }
        // 自增
        number++;
    } while (number < 1000);
    cout << "1000以内的三位数水仙花数共" << count << "个。"<< endl;

    return 0;
}