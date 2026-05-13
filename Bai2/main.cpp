#include<iostream>
#include "GiaoDichDat.h"
#include "GiaoDichNhaPho.h"
#include "GiaoDichCanHo.h"

using namespace std;

int main(){

    int nDat, nNha, nCanHo;

    GiaoDichDat dsDat[100];
    GiaoDichNhaPho dsNha[100];
    GiaoDichCanHo dsCanHo[100];
    cout<<"Nhap so luong giao dich dat:";
    cin>>nDat;
    for(int i=0;i<nDat;i++){
        cout<<"\nGiao dich dat thu "<<i+1<<endl;
        dsDat[i].Nhap();
    }
     cout << "\nNhap so giao dich nha pho: ";
    cin >> nNha;

    for(int i = 0; i < nNha; i++){
        cout << "\nNhap giao dich nha pho thu " << i + 1 << endl;
        dsNha[i].Nhap();
    }

    cout << "\nNhap so giao dich can ho: ";
    cin >> nCanHo;

    for(int i = 0; i < nCanHo; i++){
        cout << "\nNhap giao dich can ho thu " << i + 1 << endl;
        dsCanHo[i].Nhap();
    }
    cout<<"\nTong so luong cua GD dat:"<<nDat<<endl;
    cout<<"Tong so luong cuar GD nha pho:"<<nNha<<endl;
    cout<<"Tong so luong cua GD can ho:"<<nCanHo<<endl;
    cout<<"\n====Danh sach dao dich dat====\n";
    for(int i=0;i< nDat;i++){
        dsDat[i].Xuat();
        cout<<endl;
    }
      cout << "\n===== DANH SACH GIAO DICH NHA PHO =====\n";

    for(int i = 0; i < nNha; i++){
        dsNha[i].Xuat();
        cout << endl;
    }

    cout << "\n===== DANH SACH GIAO DICH CAN HO =====\n";

    for(int i = 0; i < nCanHo; i++){
        dsCanHo[i].Xuat();
        cout << endl;
    }
    double tongCH=0;
    for(int i=0;i<nCanHo;i++){
        tongCH+=dsCanHo[i].thanhTien();
    }
    cout<<"\nTrung binh thanh tien can ho:"<<tongCH/nCanHo<<endl;
    int a=0;
    for(int i=1;i<nNha;i++){
        if(dsNha[i].thanhTien()>dsNha[a].thanhTien()){
            a=i;
        }
    }
    cout<<"\nNha pho co gia tri cao nhat:\n";
    dsNha[a].Xuat();
    for(int i = 0; i < nDat; i++){
        if(dsDat[i].getNgayGD().find("12/2024") != string::npos)
            dsDat[i].Xuat();
    }

    for(int i = 0; i < nNha; i++){
        if(dsNha[i].getNgayGD().find("12/2024") != string::npos)
            dsNha[i].Xuat();
    }

    for(int i = 0; i < nCanHo; i++){
        if(dsCanHo[i].getNgayGD().find("12/2024") != string::npos)
            dsCanHo[i].Xuat();
    }

    return 0;
}
