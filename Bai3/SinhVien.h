#ifndef SINHVIEN_H
#define SINHVIEN_H

#include<iostream>
#include<string>
using namespace std;
class SinhVien
{
   protected:
       string MSSV;
       string hoTen;
       string diaChi;
       int tongTinChi;
       double diemTB;
   public:
    virtual void Nhap();
    virtual void Xuat();
    virtual bool totNghiep();
    double getDiemTB();
};

#endif
