#include "GiaoDich.h"

void GiaoDich::Nhap(){
    cin.ignore();
    cout<<"Nhap ma giao dich:";
    getline(cin,maGD);
    cout<<"Nhap ngay giao dich:";
    getline(cin,ngayGD);
    cout<<"Nhap don gia:";
    cin>>donGia;
    cout<<"Nhap dien tich:";
    cin>>dienTich;
}
void GiaoDich::Xuat(){
    cout<<"Ma GD:"<<maGD<<endl;
    cout<<"Ngay GD:"<<ngayGD<<endl;
    cout<<"Don gia:"<<donGia<<endl;
    cout<<"Dien tich:"<<dienTich<<endl;
}
string GiaoDich::getNgayGD(){
    return ngayGD;
}
double GiaoDich::thanhTien(){
    return 0;
}
