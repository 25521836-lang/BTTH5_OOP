#ifndef NHANVIENVP_H
#define NHANVIENVP_H

#include"NhanVien.h"
class NhanVienVP:public NhanVien
{
   private:
       int soNgayLamViec;
   public:
    void nhap();
    void xuat();
    double tinhLuong();
};

#endif
