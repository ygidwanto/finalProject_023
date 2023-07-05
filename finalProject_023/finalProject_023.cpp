#include <iostream>
using namespace std;

class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    int Total(int b, int c, int d, int e) {
        return (b + c + d+ e) / 4;
    }

    void display() {
        cout << "Nilai Presensi = " << getPresensi() << endl;
        cout << "Nilai Activity = " << getActivity() << endl;
        cout << "Nilai Exercise = " << getExercise() << endl;
        cout << "Nilai Tugas Akhir = " << getTugasAkhir() << endl;
    }

    virtual float hitungNilaiAkhir() {
        return 0;
    }

    virtual void cekKelulusan() {
      
    }

    virtual void input() {
        float nilai;

        cout << "Masukkan Nilai Presensi: ";
        cin >> nilai;
        setPresensi(nilai);

        cout << "Masukkan Nilai Activity: ";
        cin >> nilai;
        setActivity(nilai);

        cout << "Masukkan Nilai Exercise: ";
        cin >> nilai;
        setExercise(nilai);

        cout << "Masukkan Nilai Tugas Akhir: ";
        cin >> nilai;
        setTugasAkhir(nilai);

        cout << "Selamat anda lulus matak kuliah pemprograman ";
    }
    void setPresensi(float nilai) {
        this->presensi = nilai;
    }
    float getPresensi() {
        return presensi;
    }
    void setActivity(float nilai) {
        this->activity = nilai;
    }
    float getActivity() {
        return activity;
    }
    void setExercise(float nilai) {
        this->exercise = nilai;
    }
    float getExercise() {
        return exercise;
    }
    void setTugasAkhir(float nilai) {
        this->tugasAkhir = nilai;
    }
    float getTugasAkhir() {
        return tugasAkhir;
    }
};

class Pemrograman : public MataKuliah {
public:
    string FirstLine() {
        return " ";
    }
};

int main() {
    Pemrograman MK;
    MK.input();
    return;
}
