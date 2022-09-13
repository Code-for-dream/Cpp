/**
 * File : 5_TwoDimensionalArray.cpp
 * Author: 骑着蜗牛ひ追导弹'
 * Date: 2022/9/12 
 */
# include <iostream>

using namespace std;

int main() {
    /** 数组
     * 二维数组名称的用途：
         1. 可以统计整个数组在内存中的大小
         2. 可以获取数组在内存中的首地址
     > 总结1：二维数组名就是这个数组的首地址
     > 总结2：对二维数组名进行sizeof时，可以获取整个二维数组占用的内存空间大小
     */
    //二维数组数组名
    int arr[2][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };

    cout << "二维数组大小： " << sizeof(arr) << endl;
    cout << "二维数组一行大小： " << sizeof(arr[0]) << endl;
    cout << "二维数组元素大小： " << sizeof(arr[0][0]) << endl;

    cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    //地址
    cout << "二维数组首地址：" << arr << endl;
    cout << "二维数组第一行地址：" << arr[0] << endl;
    cout << "二维数组第二行地址：" << arr[1] << endl;

    cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
    cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;

   /**
    * 案例描述：有三名同学（张三，李四，王五），
    * 在一次考试中的成绩分别如下表:
             {100,100,100},
             {90,50,100},
             {60,70,80},
    * 请分别输出三名同学的总成绩
    */
     cout << "=============成绩=============" << endl;
    int scores[3][3] =
            {
                    {100,100,100},
                    {90,50,100},
                    {60,70,80},
            };

    string names[3] = { "张三","李四","王五" };

    for (int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += scores[i][j];
        }
        cout << names[i] << "同学总成绩为： " << sum << endl;
    }

    return 0;
}