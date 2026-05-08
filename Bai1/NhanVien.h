#ifndef NHANVIEN_H
#define NHANVIEN_H

#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
   protected:
      string hoTen;
      int ngay,thang,nam;
      double luong;
   public:
    virtual void nhap();
    virtual void xuat();
    virtual double tinhLuong()=0;
    double getLuong();
    int getNgay();
    int getThang();
    int getNam();
};

#endif
