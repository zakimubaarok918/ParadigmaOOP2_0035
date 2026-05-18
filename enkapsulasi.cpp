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