#ifndef MATRIX_H
#define MATRIX_H


#include<iostream>
using namespace std;

class matrixxx
{
public:
    matrixxx();
private:
    int rows, cols;
    double **p;
    void initialize();//初始化矩阵

public:
    matrixxx(int, int);
    matrixxx(int, int, double);//预配分空间
    virtual ~matrixxx();//析构函数应当是虚函数，除非此类不用做基类


    matrixxx& operator=(const matrixxx&);//矩阵的复制
    matrixxx& operator=(double *);//将数组的值传给矩阵
    matrixxx& operator+=(const matrixxx&);//矩阵的+=操作
    matrixxx& operator-=(const matrixxx&);//-=
    matrixxx& operator*=(const matrixxx&);//*=
    matrixxx operator*(const matrixxx & m)const;

    void Show() const;//矩阵显示


    int row() const;
    int col() const;

    friend istream& operator>>(istream&, matrixxx&);//实现矩阵的输入


};
#endif // MATRIX_H
