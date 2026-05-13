#ifndef DAIHOC_H
#define DAIHOC_H

#include"SinhVien.h"
class DaiHoc:public SinhVien
{
    private:
        string tenLuanVan;
        double diemLuanVan;
    public:
        void Nhap();
        void Xuat();
        bool totNghiep();
};

#endif
