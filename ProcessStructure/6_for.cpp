/**
 * File : 6_for.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * 作用：满足循环条件，执行循环语句
     * 语法： for(起始表达式;条件表达式;末尾循环体) { 循环语句; }
     * 注意：for循环中的表达式，要用分号进行分隔
     * 总结：while , do...while, for都是开发中常用的循环语句，for循环结构比较清晰，比较常用
     */
    /**
     * 案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，
     * 其余数字直接打印输出。
     */
    for (int i = 1; i <= 100; i++) {
        int a = i % 10;   //  个位数
        int b = i / 10;    // 十位数
        int c = i % 7;     // 是否为7的倍数
        if (a == 7 || b == 7 || c == 0) {
            cout << "敲桌子" << endl;
            continue;
        }
        cout << i << endl;
    }

    /*
	  嵌套循环
        作用：在循环体中再嵌套一层循环，解决一些实际问题
        例如我们想在屏幕中打印如下图片，就需要利用嵌套循环
      案例： 利用嵌套循环，实现九九乘法表
	*/
    cout << "===============================九九乘法表==============================" << endl;
    for (int i = 1; i < 10; i++) {
        //cout << i << endl;
        // endl 换行
        for (int j = 1; j <= i; j++) {
            cout << j << "x" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }


    return 0;
}