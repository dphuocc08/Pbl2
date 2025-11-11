#include "thongke.h"
#include <iostream>
using namespace std;

void Thongke::thongke_donhang_theo_ngay(const vector<CustomerOrder>& dsDonhang, const string& ngay) {
    for (int i = 0; i < dsDonhang.size(); i++) {
        if (dsDonhang[i].getOderDate() == ngay) { // So sánh ngày đặt hàng
            cout << " " << dsDonhang[i].getcustomerID()
                 << " " << dsDonhang[i].getOderDate() << endl;
        }
    }
}
