#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "no induk = " << nim << endl;
    }

};


int main (){
    mahasiswa mhs{1}; // Object mhs
    mhs.showNim(); // member acces operator

    mahasiswa &refMhs = mhs; // pointer reference refMhs
    refMhs.nim == 2; // memeber acces operator
    mhs.showNim();
    
    mahasiswa *pMhs = &mhs; //pointer Dereference pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim();
    return 0;
}


    