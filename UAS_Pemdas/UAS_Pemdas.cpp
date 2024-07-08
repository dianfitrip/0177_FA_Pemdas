#include <iostream>
using namespace std;


class MasukUniversitas {
public:
    int uangPendaftaran;
    int uangSemester;
    int uangBangunan;
    int totalbiaya;

public:
    MasukUniversitas( int puangPendaftaran, int puangSemester, int uangBangunan, int totalBiaya) {
        uangPendaftaran = 0;

       

    }

    virtual void namaJalurMasuk() {
        return;
    }
    virtual void hitungTotalBiaya() {
        cout << "total biaya = " << endl;
        cin >> totalbiaya;
    }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran() {
        return uangPendaftaran;
    }

};

class SNBT : public MasukUniversitas {
public:
    int biayaSNBT;

    SNBT(int puangPendaftaran, int puangSemester, int uangBangunan, int totalBiaya) {
        cout << "uang pendaftaran ada\n" << endl;
    }
    ~SNBT() {
        cout << "uang pendaftaran tidak ada\n" << endl;
    }
    int biaya() {
        cout << "uang pendaftaran = 100000" << uangPendaftaran << endl;
        cout << "uang semester = 30000000" << uangSemester << endl;
        cout << "uang bangunan = 15000000" << uangBangunan << endl;
        cout << "total biaya = 45100000" << totalbiaya << endl;
        cout << "kategori : mahal" << endl;
        cout << "rekomendasi : tidak direkomendasikan" << endl;
        return ;
    }
}

class SNBP : public MasukUniversitas {
public:
    int biayaSNBP;

    SNBP(int puangPendaftaran, int puangSemester, int uangBangunan, int totalBiaya) {
        cout << "uang pendaftaran ada\n" << endl;
    }
    ~SNBP() {
        cout << "uang pendaftaran tidak ada\n" << endl;
    }
    int biaya() {
        cout << "uang pendaftaran = 100000" << uangPendaftaran << endl;
        cout << "uang semester = 9000000" << uangSemester << endl;
        cout << "total biaya = 9100000" << totalbiaya << endl;
        cout << "kategori : sedang" << endl;
        cout << "rekomendasi : direkomendasikan" << endl;
        return ;
    }
}

int main() {

}