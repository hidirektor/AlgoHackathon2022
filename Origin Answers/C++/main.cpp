#include <iostream>
#include <string.h>

using namespace std;
typedef unsigned char BYTE;


double soru1UsAlma(double taban, double us) {
    if (us != 0) {
        return (taban * soru1UsAlma(taban, us - 1));
    }
    else {
        return 1;
    }
}

void soru1() {
    double taban, us;
    cout << "Lutfen taban ve us degerlerini girin: ";
    cin >> taban >> us;
    cout << soru1UsAlma(taban, us);
}

void soru2() {
    int dizi1[8] = {8, 10, 19, 6, 17, 14, 15, 2};
    int dizi2[8] = {17, 18, 11, 2, 10, 4, 15, 3};
    int dizi3[8] = {11, 2, 9, 19, 20, 10, 12, 14};
    int dizi4[16];
    int dizi5[24];

    for(int i=0; i<16; i++) {
        if(i < 8) {
            dizi4[i] = dizi1[i];
        } else {
            dizi4[i] = dizi2[i-8];
        }
    }

    for(int y=0; y<24; y++) {
        if(y<16) {
            dizi5[y] = dizi4[y];
        } else {
            dizi5[y] = dizi3[y-16];
        }
    }

    int boyut = sizeof(dizi5)/sizeof(dizi5[0]);
    int temp = 0;

    for (int g = 0; g < boyut; g++) {
        for (int j = g+1; j < boyut; j++) {
            if(dizi5[g] > dizi5[j]) {
                temp = dizi5[g];
                dizi5[g] = dizi5[j];
                dizi5[j] = temp;
            }
        }
    }

    int size = 24;

    for (int t = 0; t < size; t ++) {
        for (int x = t + 1; x < size; x++) {
            if (dizi5[t] == dizi5[x]) {
                for (int c = x; c < size - 1; c++) {
                    dizi5[c] = dizi5[c + 1];
                }
                size--;
                x--;
            }
        }
    }

    for(int k=0; k<size; k++) {
        cout << dizi5[k] <<" ";
    }
}

int soru3Mod(int sayi, int bolen) {
    return (sayi - bolen * (sayi / bolen));
}

void soru3() {
    int sayi, temp, r, toplam=0;
    cout << "Lutfen kontrol etmek istediginiz sayiyi girin: ";
    cin >> sayi;
    temp = sayi;
    while(sayi>0) {
        r = soru3Mod(sayi, 10);
        toplam = (toplam * 10) + r;
        sayi = sayi / 10;
    }

    if(temp == toplam) {
        cout << "Sayi palindromdur";
    } else {
        cout << "Sayi palindrom degildir!";
    }
}

void soru4() {
    int matris[3][3] = {3, 5, 7, 6, 8, 3, 1, 4, 9};
    int transpose[3][3];
    for(int i=0; i<3; i++) {
        for(int k=0; k<3; k++) {
            cout << matris[i][k] << " ";
        }
        cout << endl;
    }
    cout << endl << "Transpoze hali: " << endl;
    for(int y=0; y<3; y++) {
        for(int h=0; h<3; h++) {
            transpose[h][y] = matris[y][h];
        }
    }

    for(int g=0; g<3; g++) {
        for(int t=0; t<3; t++) {
            cout << transpose[g][t] << " ";
        }
        cout << endl;
    }
}

void soru5() {
    int matris[2][2], matrisiki[2][2];
    int sonMatris[2][2];
    int p1, p2, p3, p4, p5, p6, p7;
    cout << "Lutfen ilk matrisin elemanlarini girin: ";
    cin >> matris[0][0] >> matris[0][1] >> matris[1][0] >> matris[1][1];
    cout << "Lutfen ikinci matrisin elemanlarini girin: ";
    cin >> matrisiki[0][0] >> matrisiki[0][1] >> matrisiki[1][0] >> matrisiki[1][1];
    p1 = matris[0][0] * (matrisiki[0][1] - matrisiki[1][1]);
    p2 = matrisiki[1][1] * (matris[0][0] + matris[0][1]);
    p3 = matrisiki[0][0] * (matris[1][0] + matris[1][1]);
    p4 = matris[1][1] * (matrisiki[1][0] - matrisiki[0][0]);
    p5 = (matris[0][0] + matris[1][1]) * (matrisiki[0][0] + matrisiki[1][1]);
    p6 = (matris[0][1] - matris[1][1]) * (matrisiki[1][0] + matrisiki[1][1]);
    p7 = (matris[0][0] - matris[1][0]) * (matrisiki[0][0] + matrisiki[0][1]);

    sonMatris[0][0] = p5 + p4 - p2 + p6;
    sonMatris[0][1] = p1 + p2;
    sonMatris[1][0] = p3 + p4;
    sonMatris[1][1] = p1 + p5 - p3 - p7;

    for(int i=0; i<2; i++) {
        for(int k=0; k<2; k++) {
            cout << sonMatris[i][k] << " ";
        }
        cout << endl;
    }
}

int soru6Asallik(int sayi) {
    int sayac=0;
    for(int j=2; j<sayi; j++) {
        if(sayi % j == 0){
            sayac++;
            break;
        }
    }
    if(sayac==0) {
        return 1;
    }
    return 0;
}

int soru6Us(int taban, int us) {
    int toplam = 1;

    for (;;) {
        if (us & 1) {
            toplam *= taban;
        }
        us >>= 1;

        if (!us) {
            break;
        }
        taban *= taban;
    }

    return toplam;
}

void soru6() {
    int mukSayilar[3];
    for(int b=0; b<3; b++) {
        mukSayilar[b] = 0;
    }
    int startPoint = 0;
    for(int i=2; i<500; i++) {
        int temp = soru6Us(2, i) - 1;
        if(soru6Asallik(i) == 1 && soru6Asallik(temp) == 1) {
            mukSayilar[startPoint] = soru6Us(2, (i-1)) * (soru6Us(2, i)-1);
            startPoint++;
        }
    }

    cout << "Mukemmel Sayilar: " << endl;
    for(int p=0; p<3; p++) {
        if(mukSayilar[p] != '\0') {
            cout << mukSayilar[p] << " ";
        }
    }
}

int soru7Mod(int sayi, int bolen) {
    return (sayi - bolen * (sayi / bolen));
}

void soru7() {
    int yilDegeri;
    cout << "Lutfen kontrol etmek istediginiz yil degerini girin: ";
    cin >> yilDegeri;
    if(soru7Mod(yilDegeri, 4) == 0) {
        cout << endl << "Girdiginiz yil artik yildir !";
    } else {
        cout << endl << "Girdiginiz yil artik yil degildir !";
    }
}

void soru8() {
    int k1, k2, k3, k4;
    cout << "Lutfen 4 kenar uzunlugunu girin: ";
    cin >> k1 >> k2 >> k3 >> k4;

    if(k1==k2 && k1==k3 && k1==k4) {
        cout << endl << "Girdiginiz cisim karedir !";
    } else if(k1==k2 && k3==k4 && k1!=k3) {
        cout << endl << "Girdiginiz cisim dikdortgendir !";
    } else {
        cout << endl << "Girdiginiz cisim tanimlanamiyor !";
    }
}

int soru9Mod(int sayi, int bolen) {
    return (sayi - bolen * (sayi / bolen));
}

void soru9() {
    int sayilar[9] = {129, 218, 110, 227, 120, 199, 400, 371, 237};
    int basamaklar[27];
    int temp = 0, gecici;
    int  elemanSayisi = sizeof(basamaklar) / sizeof(int);

    for(int k=0; k<9; k++) {
        while (sayilar[k] > 0){
            basamaklar[temp] = soru9Mod(sayilar[k], 10);
            sayilar[k] = sayilar[k]/10;
            temp++;
        }
    }

    for(int i = 0; i < elemanSayisi-1; i++) {
        for(int j = i+1; j < elemanSayisi; j++) {
            if(basamaklar[j] < basamaklar[i]){
                gecici = basamaklar[i];
                basamaklar[i] = basamaklar[j];
                basamaklar[j] = gecici;
            }
        }
    }

    cout << "En buyuk sayi: ";
    for(int i = 26; i >= 0; i-- ) {
        cout << basamaklar[i];
    }
}

void soru10() {
    char girilenMetin[30];

    cout << endl << "Lutfen metni girin: ";
    cin >> girilenMetin;

    for(int i = 0; i < strlen(girilenMetin); i++) {
        for(int j = i + 1; girilenMetin[j] != '\0'; j++) {
            if(girilenMetin[j] == girilenMetin[i]) {
                for(int k = j; girilenMetin[k] != '\0'; k++) {
                    girilenMetin[k] = girilenMetin[k + 1];
                }
            }
        }
    }
    cout << endl << "Tekrarsiz hali = " << girilenMetin;
}

void soru11() {
    int dizi[14] = {50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203};
    int gecici, toplam=0;
    int elemanSayisi = sizeof(dizi) / sizeof(int);

    for(int i = 0; i < elemanSayisi-1; i++) {
        for(int j = i+1; j < elemanSayisi; j++) {
            if(dizi[j] < dizi[i]){
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
    }

    cout << "Olusan en kucuk sayi: ";
    for(int k=0; k<3; k++) {
        toplam += dizi[k];
    }
    cout << toplam;
}

int soru12Mod(int sayi, int bolen) {
    return (sayi - bolen * (sayi / bolen));
}

void soru12Reverse(int dizi[], int bsl, int bts) {
    int temp;
    while (bsl < bts) {
        temp = dizi[bsl];
        dizi[bsl] = dizi[bts];
        dizi[bts] = temp;
        bsl++;
        bts--;
    }
}

void soru12() {
    int ilkHane, uretilenDegerler[5], uretilenDegerBasamaklari[15];
    int temp, tempLoop=0, tempDigit=0;
    cout << "Lutfen ilk 3 haneyi girin: ";
    cin >> ilkHane;

    for(int k=0; k<5; k++) {
        temp = soru12Mod(rand(), 900) + 100;
        uretilenDegerler[k] = temp;
    }

    cout << "Uretilen Degerler: " << endl;
    for(int u=0; u<5; u++) {
        cout << uretilenDegerler[u] << " ";
    }

    soru12Reverse(uretilenDegerler, 0, 4);

    for(int y=0; y<5; y++) {
        while (uretilenDegerler[y] > 0) {
            uretilenDegerBasamaklari[tempLoop] = soru12Mod(uretilenDegerler[y], 10);
            uretilenDegerler[y] = uretilenDegerler[y]/10;
            tempLoop++;
        }
    }

    soru12Reverse(uretilenDegerBasamaklari, 0, 14);

    cout << endl << "Basamak Degerleri: " << endl;
    for(int v=0; v<15; v++) {
        cout << uretilenDegerBasamaklari[v] << " ";
    }

    cout << endl << "Uretilen Son Degerler: " << endl;
    for(int l=0; l<5; l++) {
        cout << ilkHane;
        for(int a=0; a<3; a++) {
            cout << uretilenDegerBasamaklari[tempDigit];
            tempDigit++;
        }
        cout << endl;
    }
}

int soru13SesliKontrol(char karakter) {
    if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
        return 1;
    } else if (karakter == 'A' || karakter == 'E' || karakter == 'I' || karakter == 'O' || karakter == 'U') {
        return 1;
    } else {
        return 0;
    }
}

void soru13() {
    char dizi[30], sonDizi[30];
    int sira=0;
    cout << "Lutfen kelimeyi girin: ";
    gets(dizi);
    if(strlen(dizi) >=9) {
        cout << endl << "Girilen Kelime: " << dizi;
        for(int c = 0; dizi[c] != '\0'; c++) {
            if(soru13SesliKontrol(dizi[c]) == 0) {
                sonDizi[sira] = dizi[c];
                sira++;
            }
        }
        sonDizi[sira] = '\0';
        strcpy(dizi, sonDizi);
        cout << endl << "Son Hal: " << dizi;
    } else {
        cout << endl << "Lutfen minimum 9 karakter girin !";
    }
}

void soru14() {
    int dizi1[3];
    int dizi2[3];
    int dizi3[3];
    int matris[3][3], sonMatris[3][3];

    for(int j=0; j<3; j++) {
        if(j==0) {
            for(int i=0; i<3; i++) {
                cout << "Lutfen " << j+1 << ". dizinin " << i+1 << ". elemanini girin: ";
                cin >> dizi1[i];
            }
        } else if(j==1) {
            for(int i=0; i<3; i++) {
                cout << "Lutfen " << j+1 << ". dizinin " << i+1 << ". elemanini girin: ";
                cin >> dizi2[i];
            }
        } else if(j==2) {
            for(int i=0; i<3; i++) {
                cout << "Lutfen " << j+1 << ". dizinin " << i+1 << ". elemanini girin: ";
                cin >> dizi3[i];
            }
        }
    }

    for(int c=0; c<3; c++) {
        matris[0][c] = dizi1[c];
    }
    for(int a=0; a<3; a++) {
        matris[1][a] = dizi2[a];
    }
    for(int f=0; f<3; f++) {
        matris[2][f] = dizi3[f];
    }

    for(int t=0; t<3; t++) {
        for(int s=0; s<3; s++) {
            sonMatris[s][t] = matris[t][s];
        }
    }

    for(int u=0; u<3; u++) {
        for(int d=0; d<3; d++) {
            cout << " " << sonMatris[u][d] << " ";
        }
        cout << endl;
    }
}

void soru15S2ByteArray(char* input, BYTE* output) {
    int loop;
    int i;

    loop = 0;
    i = 0;

    while(input[loop] != '\0') {
        output[i++] = input[loop++];
    }
}

void soru15() {
    char ascii_str[] = "Heil YTK";
    int len = strlen(ascii_str);
    BYTE arr[len];
    int temp;

    soru15S2ByteArray(ascii_str, arr);

    cout << "Normal: " << ascii_str << endl;
    cout << "ASCII: " << endl;
    for(int k=0; k<len; k++) {
        cout << int(arr[k]) << " ";
    }

    for(int i = 0; i < len-1; i++) {
        for(int j = i+1; j < len; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << endl;
    for(int y=0; y<len; y++) {
        cout << int(arr[y]) << " ";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    //soru1();
    //soru2();
    //soru3();
    //soru4();
    //soru5();
    //soru6();
    //soru7();
    //soru8();
    //soru9();
    //soru10();
    //soru11();
    //soru12();
    //soru13();
    //soru14();
    soru15();
    return 0;
}
