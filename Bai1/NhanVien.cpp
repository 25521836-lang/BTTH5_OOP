#include "NhanVien.h"

void NhanVien::nhap(){
    cin.ignore();
    cout<<"Nhap ho ten:";
    getline(cin,hoTen);
    cout<<"Nhap ngay sinh:";
    getline(cin,ngaySinh);
}
void NhanVien::xuat(){
    cout<<"Ho ten:"<<hoTen<<endl;
    cout<<"Ngay sinh:"<<ngaySinh<<endl;
    cout<<"luong:"<<tinhLuong()<<endl;
}
double NhanVien::getLuong(){
    return tinhLuong();
}
string NhanVien::getNgaySinh(){
    return ngaySinh;
}
