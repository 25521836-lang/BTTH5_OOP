#include "NhanVien.h"

void NhanVien::nhap(){
    cin.ignore();
    cout<<"Nhap ho ten:";
    getline(cin,hoTen);
    cout<<"Nhap ngay sinh:";
    cin>>ngay>>thang>>nam;
}
void NhanVien::xuat(){
    cout<<"Ho ten:"<<hoTen<<endl;
    cout<<"Ngay sinh:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
    cout<<"luong:"<<tinhLuong()<<endl;
}
double NhanVien::getLuong(){
    return tinhLuong();
}
int NhanVien::getNgay()
{
    return ngay;
}

int NhanVien::getThang()
{
    return thang;
}

int NhanVien::getNam()
{
    return nam;
}

