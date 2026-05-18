#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x,y;

public:

    // method untuk mengisi nilai
    // private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    // menampilkan nilai 
    void display() {
        cout << "Nilai x: " << x << endl;
        cout << "Nilai y: " << y << endl;
    }
};    

int main() {
    AbstraksiKlas obj;
    ak.setXY("Yogyakarta", "Kampus");
    ak.display();
    
    return 0;
}