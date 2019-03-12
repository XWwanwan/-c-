#ifndef MATRIX_H
#define MATRIX_H


#include<iostream>
using namespace std;

class matrix
{
public:
    matrix();
private:
    int rows, cols;
    double **p;
    void initialize();//初始化矩阵

public:
    matrix(int, int);
    matrix(int, int, double);//预配分空间
    virtual ~matrix();//析构函数应当是虚函数，除非此类不用做基类


    matrix& operator=(const matrix&);//矩阵的复制
    matrix& operator=(double *);//将数组的值传给矩阵
    matrix& operator+=(const matrix&);//矩阵的+=操作
    matrix& operator-=(const matrix&);//-=
    matrix& operator*=(const matrix&);//*=
    matrix operator*(const matrix & m)const;

    void Show() const;//矩阵显示


    int row() const;
    int col() const;

    friend istream& operator>>(istream&, matrix&);//实现矩阵的输入


};
#endif // MATRIX_H
