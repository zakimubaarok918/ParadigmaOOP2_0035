#include <iostream>
using namespace std;

class remoteLampu {
private:
    string sakalarNo[10];
public:
    void setSakalarNo(int i, string value) {
        sakalarNo[i] = value;
    }
    string getSakalarNo(int i) {
        return sakalarNo[i];
    }
};    

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

}