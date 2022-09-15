/**
 * File : 1_define.cpp
 * Author: ??????????????'
 * Date: 2022/9/14 
 */
# include <iostream>

using namespace std;

// 结构体定义
struct student {
    //成员列表
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
} stu3; // 创建方式3

int main() {

    /**
     > 总结1：定义结构体时的关键字是struct，不可省略
     > 总结2：创建结构体变量时，关键字struct可以省略
     > 总结3：结构体变量利用操作符 ''.''  访问成员
     */

    // 创建方式1
    student stu1; // struct关键字可以省略
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;
    cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

    // 创建方式2
    struct student stu2 = {"李四", 19, 60};
    cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;

    stu3.name = "王五";
    stu3.age = 18;
    stu3.score = 80;
    cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;

    return 0;
}