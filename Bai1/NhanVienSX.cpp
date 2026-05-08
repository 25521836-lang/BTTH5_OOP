#include "NhanVienSX.h"

void NhanVienSX::nhap(){
     NhanVien::nhap();
    cout<<"Luong can ban:";
    cin>>luongCanBan;
    cout<<"So san pham:";
    cin>>soSanPham;
}
void NhanVienSX::xuat(){
    cout<<"\n====Nhan vien san xuat====\n";
     NhanVien::xuat();
    cout<<"Luong can ban:"<<luongCanBan<<endl;
    cout<<"So san pham:"<<soSanPham<<endl;
}
double NhanVienSX::tinhLuong(){
     return luongCanBan+soSanPham*5000;
}
