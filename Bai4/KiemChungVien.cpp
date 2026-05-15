#include "KiemChungVien.h"

void KiemChungVien::Nhap(){
    NhanVien::Nhap();
    cout<<"Nhap so loi:";
    cin>>soLoi;
}
void KiemChungVien::Xuat(){
    NhanVien::Xuat();
    cout<<"So loi:"<<soLoi<<endl;
}
double KiemChungVien::luong(){
    return luongCoBan+soLoi*50000;
}
