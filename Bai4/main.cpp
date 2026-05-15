#include<iostream>
#include"NhanVien.h"
#include"LapTrinhVien.h"
#include"KiemChungVien.h"
#include<string>

using namespace std;
int main(){
    int nLT,nKC;
    LapTrinhVien dsLT[100];
    KiemChungVien dsKC[100];
    cout<<"Nhap so luong lap trinh vien:";
    cin>>nLT;
    for(int i=0;i<nLT;i++){
        cout<<"\nLap trinh vien thu"<<i+1<<endl;
        dsLT[i].Nhap();
    }
    cout<<"\nNhap so luong kiem chung vien:";
    cin>>nKC;
    for(int i=0;i<nKC;i++){
        cout<<"\nKiem chung vien thu"<<i+1<<endl;
        dsKC[i].Nhap();
    }
    cout<<"\n====Danh sach lap trinh vien====\n";
    for(int i=0;i<nLT;i++){
        dsLT[i].Xuat();
        cout<<endl;
    }
    cout<<"\n====Danh sach lap trinh vien====\n";
    for(int i=0;i<nKC;i++){
        dsKC[i].Xuat();
        cout<<endl;
    }
    double tongLuong=0;
    for(int i=0;i<nLT;i++){
        tongLuong+=dsLT[i].getLuong();
    }
    for(int i=0;i<nKC;i++){
        tongLuong+=dsKC[i].getLuong();
    }
    double luongTB=tongLuong/(nLT+nKC);
    cout<<"\n--Nhan vien thap hon luong TB--\n";
    for(int i=0;i<nLT;i++){
        if(dsLT[i].getLuong()<luongTB){
            dsLT[i].Xuat();
            cout<<endl;
        }
    }
    for(int i=0;i<nKC;i++){
        if(dsKC[i].getLuong()<luongTB){
            dsKC[i].Xuat();
            cout<<endl;
        }
    }
    int a=0;
    int c=0;
    for(int i=1;i<nLT;i++){
        if(dsLT[i].getLuong()>dsLT[a].getLuong()){
            a=i;
        }
    }
     for(int i=1;i<nKC;i++){
         if(dsKC[i].getLuong()>dsKC[c].getLuong()){
            c=i;
         }
    }
    cout<<"\n----Nhan vien luong cao nhat----\n";
         if(dsLT[a].getLuong()>dsKC[c].getLuong())
            dsLT[a].Xuat();
         else
            dsKC[c].Xuat();
         cout<<endl;
    int b=0;
    int d=0;
    for(int i=1;i<nLT;i++){
        if(dsLT[i].getLuong()<dsLT[b].getLuong()){
            b=i;
        }
    }
    for(int i=1;i<nKC;i++){
         if(dsKC[i].getLuong()<dsKC[d].getLuong()){
            d=i;
         }
    }
    cout<<"\n----Nhan vien luong thap nhat----\n";
         if(dsLT[b].getLuong()<dsKC[d].getLuong())
            dsLT[b].Xuat();
         else
            dsKC[d].Xuat();
         cout<<endl;
         cout<<"\nLuong lap trinh vien cao nhat:";
         dsLT[a].Xuat();
         cout<<endl;
         cout<<"\nLuong kiem chung vien thap nhat:";
         dsKC[b].Xuat();
         cout<<endl;
}
