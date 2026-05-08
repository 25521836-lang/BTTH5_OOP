#ifndef NHANVIEN_H
#define NHANVIEN_H

#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
   protected:
      string hoTen;
      string ngaySinh;
      double luong;
   public:
    virtual void nhap();
    virtual void xuat();
    virtual double tinhLuong()=0;
    double getLuong();
    string getNgaySinh();
};

#endif
