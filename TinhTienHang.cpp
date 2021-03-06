#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dg, sl, tienHang, phiShip;
    for (int i=0; i<n; i++) {
        cin >> dg >> sl;
        // dg *= sl >= 50 ? 0.85 : 1;
        if (sl >= 50) {
            dg *= 0.85;
        }
        tienHang = dg*sl;
        phiShip = tienHang >= 10000000 ? 0 : (
            0.05*tienHang >= 200000 ? 200000 : 0.05*tienHang
        );
        cout << tienHang + phiShip << endl;
    }
    
    return 0;
}