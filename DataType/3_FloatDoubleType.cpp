/**
 * File : 3_FloatDoubleType.cpp
 * Author: ������ţ��׷����'
 * Date: 2022/9/11 
 */
# include <iostream>

using namespace std;

int main() {
    /**
     * ʵ�ͣ������ͣ�
     *   1�������� float
     *   2��˫���� double
     * ���ߵ���������ռ�õĿռ䡢��ʾ����Ч���ַ�Χ��ͬ
     *   float  4  7λ��Ч����
     *   double 8  15-16λ��Ч����
     *
     * Ĭ������£�С����ʾ6λ��Ч����!!!
     */
    float f1 = 3.1415926f;
    double d1 = 3.1415926;

    cout << "f1:" << f1 << endl;
    cout << "d1:" << d1 << endl;

    // �ڴ�ռ��
    cout << "float :" << sizeof(f1) << endl;
    cout << "double :" << sizeof(d1) << endl;

    // ��ѧ������
    float f2 = 3e2; // e��Ϊ��������ʾ 3*10^2
    float f3 = 3e-2; // e��Ϊ��������ʾ 3*0.1^2
    cout << "f2 :" << f2 << endl;
    cout << "f3 :" << f3 << endl;

    return 0;
}