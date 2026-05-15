#include "NhanVien.h"

void NhanVien::Nhap(){
    cin.ignore(1000,'\n');
    cout<<"Nhap ma nhan vien:";
    getline(cin,maNV);
    cout<<"Nhap ho ten:";
    getline(cin,hoTen);
    cout<<"Nhap sdt:";
    getline(cin,sdt);
    cout<<"Nhap emali:";
    getline(cin,email);
    cout<<"Nhap luong co ban:";
    cin>>luongCoBan;
}
void NhanVien::Xuat(){
    cout<<"ma NV:"<<maNV<<endl;
    cout<<"Ho ten:"<<hoTen<<endl;
    cout<<"So dien thoai:"<<sdt<<endl;
    cout<<"Email:"<<email<<endl;
    cout<<"Luong:"<<luongCoBan<<endl;
}
double NhanVien::luong(){
    return 0;
}
double NhanVien::getLuong(){
    return luong();
}

