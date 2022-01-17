
/****************************************************************************
**	SAKARYA UNIVERSITY
**	BILGISAYAR MUHENDISLIGI BOLUMU
**	PROGRAMLAMAYA GIRIS
**
**	ÖĞRENCİ ADI......:MERT UMUL
**	ÖĞRENCİ NUMARASI.:2
**	DERS GRUBU…………………:C
****************************************************************************/
#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;
/*
windowstan tanimli renk degerleri
LIGHTBLUE = 9
LIGHTGREEN = 10
LIGHTCYAN = 11
LIGHTRED = 12
LIGHTMAGENTA = 13
YELLOW = 14
BRİGHTWHİTE=15
*/



//Karakter sinifi tanimliyorum ve bu karakter sinifi harfi ve rengi tutuyor.
class Karakter {
public:
	char harf;
	int renk;

};
//Katar sınıfı tanımlıyorum bu sinifin genel amaci karakter ekleme,karakter yazdirma  ve karakter silme islemlerini yapmaktır.
class Katar :public Karakter {
private:

	Karakter karakterler[50];//Karakter türünde sinif tanimliyorum.
	int karakter_sayisi = 0;//karakter sayisini 0 dan baslatiyorum
	int onceki_karakter_sayısı = 0;//onceki durumu yazdirmak icin bir tane daha karater sayisina  gerek duydugumdan bunu tanımladım

public:
	char DUZCIZGI = 205;
	char SOLUSTKOSE = 201;
	char SAGUSTKOSE = 187;
	char DIKEYCIZGI = 186;
	char ASAGIAYRAC = 203;
	char SOLALTKOSE = 200;
	char SAGALTKOSE = 188;
	char YUKARIAYRAC = 202;

	HANDLE R = GetStdHandle(STD_OUTPUT_HANDLE);//renkler icin gerekli tanimlama
	//karakter ekleme islemlerinin yapildigi fonksiyon
	void karakter_ekle() {
		//burada gelen harf ve renk, mainden rastgele rastgele harf ve renklerdir.Bu harf ve renkleri karakterler dizisine tanimler ve karakter sayisini bir arttirir.
		if (karakter_sayisi >= 0 && karakter_sayisi < 50 ) {
			karakterler[karakter_sayisi].harf = harf;
			karakterler[karakter_sayisi].renk = renk;
			onceki_karakter_sayısı = karakter_sayisi;//burada onceki_karakter_sayisi önceki karakter_sayisi nin degerine esittir.
			karakter_sayisi++;
		}

		else if (karakter_sayisi >= 50) {
			SetConsoleTextAttribute(R, 4);

			cout << "Ekleme Yapilamaz" << endl;
			SetConsoleTextAttribute(R, 15);
		}

	}
	//karakter cikarma islemlerinin yapildigi fonksiyon
	void karakter_cikar() {
		if (karakter_sayisi > 0) {
			onceki_karakter_sayısı = karakter_sayisi; // burada onceki_karakter_sayisi önceki karakter_sayisi nin degerine esittir.
			karakter_sayisi--;//karakter sayisi bir azaltilir.
		}
		else
		{
			SetConsoleTextAttribute(R, 4);//burada konsol rengini kirmiziya çeviriyorum, 4=kirmiziya rengine esittir esittir. 
			cout << "cikarma islemi yapilamaz..." << endl;
			SetConsoleTextAttribute(R, 15);//burada konsol rengini beyaza ceviriyorum ,15=beyaz rengine esittir.

		}
	}
	//ekledigim veya sildigim karakterlerin sonraki durumunu gosteren fonksiyon.
	void yazdir() {
		cout << "sonraki durum: " << "eleman sayisi: " << karakter_sayisi << endl;

		//buradaki for fonksiyonlarının amaci dikdörtgen sekillerini cikartmaktir bu yüzden bu for döngülerini kullandim
		//dikdörtgenin üst kismini yazdirir.
		for (int i = 0; i <= karakter_sayisi - 1 && karakter_sayisi <= 50; i++) {
			cout << SOLUSTKOSE << DUZCIZGI << SAGUSTKOSE;
		}
		cout << endl;//bunun kullanmamın nedeni bir alt satira geçmek dikdörtgen yapabilmemiz icin öbür kisimlarinda alt alta olmasina ihtiyacimiz var.
		//dikdörtgenin orta kismini yazdirir.
		for (int i = 0; i <= karakter_sayisi - 1 && karakter_sayisi <= 50; i++) {
			cout << DIKEYCIZGI;
			SetConsoleTextAttribute(R, karakterler[i].renk);//burada rengi değistiriyorum karakter dizisindeki elemanin rengi neyle tanimliysa
			cout << karakterler[i].harf;
			SetConsoleTextAttribute(R, 15);//tekrardan beyaz renge geri ceviriyorum konsolu
			cout << DIKEYCIZGI;
		}

		cout << endl;
		//dikdörtgenin alt kismini yazdirir.
		for (int i = 0; i <= karakter_sayisi - 1 && karakter_sayisi <= 50; i++) {
			cout << SOLALTKOSE << DUZCIZGI << SAGALTKOSE;
		}
		cout << endl;
	}
	//ekledigim veya sildigim karakterlerin önceki durumunu gosteren fonksiyon.
	void yazdır2() {
		cout << "onceki durum: " << "eleman sayisi: " << onceki_karakter_sayısı << endl;
		//dikdörtgenin üst kismini yazdirir.
		for (int i = 0; i <= onceki_karakter_sayısı-1 && karakter_sayisi <= 50; i++) {
			cout << SOLUSTKOSE << DUZCIZGI << SAGUSTKOSE;
		}
		cout << endl;
		//dikdörtgenin orta kismini yazdirir.
		for (int i = 0; i <= onceki_karakter_sayısı-1 && karakter_sayisi <= 50; i++) {
			//if kullanmamin nedeni ilk dikdörtgen elemaninin icinin bos olamsini istememizdir.
			if (onceki_karakter_sayısı == 0) {
				cout << DIKEYCIZGI;
				cout << ' ';
				cout << DIKEYCIZGI;

			}
			else if (onceki_karakter_sayısı > 0) {
				cout << DIKEYCIZGI;
				SetConsoleTextAttribute(R, karakterler[i].renk);//burada rengi değistiriyorum karakter dizisindeki elemanin rengi neyle tanimliysa
				cout << karakterler[i].harf;
				SetConsoleTextAttribute(R, 15);//tekrardan beyaz renge geri ceviriyorum konsolu
				cout << DIKEYCIZGI;
			}
		}
		cout << endl;
		//dikdörtgenin alt kismini yazdirir.
		for (int i = 0; i <= onceki_karakter_sayısı-1 && karakter_sayisi <= 50; i++) {
			cout << SOLALTKOSE << DUZCIZGI << SAGALTKOSE;
		}
		cout << endl;
	}
};

int main() {
	int secim;
	char harfler[26] = { 'A','B','C','D','E','F','G','H','J','I','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//harfleri tanimliyorum
	Katar k1;
	do {
		cout << "\nIslem seciniz" << endl;
		cout << "1.Karakter Ekle" << endl;
		cout << "2.Karakter Cikar" << endl;
		cout << "3.Programdan Cikis" << endl;
		cin >> secim;
		if (secim == 1) {
			srand(time(NULL));
			int harfc = rand() % 26;//rastgele 0 ila 26 arasında deger alir.
			k1.harf = harfler[harfc];//rastgele aldığımız harf c değerini harf karsılıgini alıp harfe ekletiyorum
			int renkc = 9 + (rand() % 5);//9 ila 14 arasi  rastgele harf sectiriyorum.
			k1.renk = renkc; //rastgele aldığımız renkc değerini renk olarak sinifa gönderiyorum
			//ekletme fonkisiyonlarini cagiriyorum.
			k1.karakter_ekle();
			k1.yazdır2();
			k1.yazdir();
		}
		else if (secim == 2) {
			//cikartma fonkisiyonlarini cagiriyorum.
			k1.karakter_cikar();
			k1.yazdır2();
			k1.yazdir();

		}//3 ü secerse program sonlanir.
		else if (secim == 3) {
			break;
		}
		else {
			cout << "Lutfen dogru islemi giriniz." << endl;

		}
	} while (TRUE);

}

