#include "matrix.h"

using namespace std;

void matrix::initialize()
{//初始化矩阵大小
    p = new double*[rows];
    //分配rows_num个指针
    for (int i = 0; i < rows; ++i)
    {		p[i] = new double[cols];
        //为p[i]进行动态内存分配，大小为cols
    }
}


matrix::matrix(int row, int col)
{	rows = row;
    cols = col;
    initialize();
    for (int i = 0; i < rows; i++)
    {		for (int j = 0; j < cols; j++)
        {			p[i][j] = 0;		}
    }
}


matrix::matrix(int row, int col, double value)
{	rows = row;	cols = col;
    initialize();
    for (int i = 0; i < rows; i++)
    {		for (int j = 0; j < cols; j++)
        {			p[i][j] = value;		}
    }
}


matrix::~matrix()
{



}


matrix& matrix::operator=(const matrix& m)
{	if (this == &m)
    {
        return *this;
    }
    if (rows != m.rows || cols != m.cols)
       {		for (int i = 0; i < rows; ++i)
        {			delete[] p[i];		}
              delete[] p;
              rows= m.rows;
              cols = m.cols;
              initialize();
         } 	for (int i = 0; i < rows; i++)
    {		for (int j = 0; j < cols; j++)
        {			p[i][j] = m.p[i][j];
        }
    }	return *this;
}


   matrix& matrix::operator=(double *a)
   {	for(int i=0;i<rows;i++)
       {		for(int j=0;j<cols;j++)
           {			p[i][j]= *(a+i*cols+j);
           }
       }	return *this;
   }


   matrix& matrix::operator+=(const matrix& m)
   {	for (int i = 0; i < rows; i++)
       {		for (int j = 0; j < cols; j++)
           {			p[i][j] += m.p[i][j];		}
       }	return *this;
   }//实现-=
   matrix&matrix::operator-=(const matrix& m)
   {	for (int i = 0; i < rows; i++)
       {		for (int j = 0; j < cols; j++)
           {			p[i][j] -= m.p[i][j];
           }
       }	return *this;
   }//实现*=
  matrix& matrix::operator*=(const matrix& m)
  {	matrix temp(rows, m.cols);//若C=AB,则矩阵C的行数等于矩阵A的行数，C的列数等于B的列数。
      for (int i = 0; i < temp.rows; i++)
      {		for (int j = 0; j < temp.cols; j++)
          {			for (int k = 0; k < cols; k++)
              {				temp.p[i][j] += (p[i][k] * m.p[k][j]);
              }
          }
      }	*this = temp;
      return *this;
  }//实现矩阵的乘法
matrix matrix::operator*(const matrix & m)const
{	matrix ba_M(rows,m.cols,0.0);
    for(int i=0;i<rows;i++)
    {		for(int j=0;j<m.cols;j++)
        {			for(int k=0;k<cols;k++)
            {				ba_M.p[i][j]+=(p[i][k]*m.p[k][j]);
            }		}
    }	return ba_M;
}


