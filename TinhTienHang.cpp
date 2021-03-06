#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dg, sl, tienHang, phiShip;
    for (int i=0; i<n; i++) {
        cin >> dg >> sl;
        // dieu_kien ? if_true : if_false
        dg *= sl >= 50 ? 0.85 : 1;
        tienHang = dg*sl;
        phiShip = tienHang >= 10000000 ? 0 : (
            0.05*tienHang >= 200000 ? 200000 : 0.05*tienHang
        );
        cout << tienHang + phiShip << endl;
    }
    
    return 0;
}