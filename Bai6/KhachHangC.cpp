#include "KhachHangC.h"

double KhachHangC::tinhTien() {
    double tien = soLuongHang * donGiaHang;
    return tien * 0.5 + tien * 0.1;
}
