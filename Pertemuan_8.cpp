#include <iostream>
#include <string>
using namespace std;

struct Zodiak {
    string nama;
    int startDay, startMonth;
    int endDay, endMonth;
};

string cariZodiak(int hari, int bulan) {
    Zodiak zodiak[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    for (int i = 0; i < 12; i++) {
        if ((bulan == zodiak[i].startMonth && hari >= zodiak[i].startDay) ||
            (bulan == zodiak[i].endMonth && hari <= zodiak[i].endDay)) {
            return zodiak[i].nama;
        }
    }
    return "Tidak valid";
}

int main() {
    int hari, bulan, tahun;

    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: ";
    scanf("%d-%d-%d", &hari, &bulan, &tahun);

    string zodiak = cariZodiak(hari, bulan);
    cout << "Zodiak Anda adalah: " << zodiak << endl;

    return 0;
}
