#include "NhanVienVP.h"

void NhanVienVP::nhap(){
     NhanVien::nhap();
    cout<<"Nhap so ngay lam viec:";
    cin>>soNgayLamViec;
}
void NhanVienVP::xuat(){
    cout<<"\n====Nhan vien van phong====\n";
     NhanVien::xuat();
    cout<<"So ngay lam viec:"<<soNgayLamViec<<endl;
}
double NhanVienVP::tinhLuong(){
    return soNgayLamViec*100000;
}
