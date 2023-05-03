#include<iostream>
using namespace std;
#include<fstream>
#include<string>
int main() {
	//Urunle ilgili degiskenleri tanimladim.
	string Urun_kodu_kontrol;
	string urun_kodu;
	string urun_adı;
	string uretici;
	string uretim_tarihi;
	int temin_suresi;
	int fiyat_genel;
	int fiyat_ozel;
	float kdv_orani;
	int stok_adedi;
	//********************************************************
	//Musteri ve Siparis ilgili degiskenleri tanimladim .
	string firma_no_kontrol;
	string firma_no;
	string firma_adi;
	string firma_telefon;
	string firma_sorumlusu;
	string musteri_katagorisi;
	string adres;
	string urun_kodu2;
	int urun_adedi;
	string siparis_alan;
	int siparis_tutari;
	string siparis_tarihi;

	//********************************************************
	int secim;
	int secim2;
	char cevap = 'e';
	int i = 1;
	string satir;
	//**********************************************
	cout << "****************************************HOSGELDINIZ****************************************" << endl;
	//Yapmak istddiginiz secim icin arayüz yaptim.
	do {
		cout << "*********ISLEMLER*********" << endl;
		cout << " 1.Urun Islemleri" << endl;
		cout << "2.Musteri Dosya Islemleri" << endl;
		cout << "3.Siparis" << endl;
		cout << "4.Cikis" << endl;
		cout << "Lutfen yapmak istediginiz islemi giriniz."; cin >> secim;
	} while (secim != 1 && secim != 2 && secim != 3 && secim != 4);
	if (secim == 1) {
		cout << "*********ISLEMLER*********" << endl;
		do {
			cout << "1.Urun Ekleme" << endl;
			cout << "2.Urun Arama" << endl;
			cout << "3.Urun Listeleme " << endl;
			cout << "4.Urun Duzeltme" << endl;
			cout << "5.Urun Silme" << endl;
			cout << "Lutfen yapmak istediginiz islemi giriniz."; cin >> secim2;

		} while (secim2 != 1 && secim2 != 2 && secim2 != 3 && secim2 != 4 && secim2 != 5);
		//urun ekleme, burada ilk urun.txt dosyasını okutup eslesen urun kodu var mı onu kontrol ettirdim varsa yeni urun yazdirmadim.
		if (secim2 == 1) {
			string istedigin_urunun_kodu;
			cout << "Urun Kodu Kapilmis mi diye kontrol etmek icin istediginiz urun kodunu lutfen giriniz: "; cin >> istedigin_urunun_kodu;
			ifstream DosyaOku("urun.txt");
			while (DosyaOku >> urun_kodu >> urun_adı >> uretici >> temin_suresi >> uretim_tarihi >> fiyat_genel >> fiyat_ozel >> kdv_orani >> stok_adedi) {
				if (istedigin_urunun_kodu == urun_kodu) {
					Urun_kodu_kontrol = "Kullanılamaz";
				}

			}
			DosyaOku.close();
			if (Urun_kodu_kontrol == "Kullanılamaz") {
				cout << "Bu urun kodu kullanilmistir." << endl;
			}
			//burada onceden kayitli olmadıgına emin olup urun.txt dosyasına bilhileri yazdirdim.
			else if (Urun_kodu_kontrol != "Kullanılamaz") {
				fstream DosyaYaz;
				DosyaYaz.open("urun.txt", ios::app);
				cout << "\n Urun Kodu: "; cin >> urun_kodu;
				cout << "\n Urun adi: "; cin >> urun_adı;
				cout << "\n Urun Ureticisi: "; cin >> uretici;
				cout << "\n Temin  Suresi: "; cin >> temin_suresi;
				cout << "\n Uretim Tarihi(../../..): "; cin >> uretim_tarihi;
				cout << "\n Normal Musteriler Fiyat: "; cin >> fiyat_genel;
				cout << "\n Ozel Musteriler Fiyat: "; cin >> fiyat_ozel;
				cout << "\n KDV Orani (%): "; cin >> kdv_orani;
				cout << "\n Stok Adedi:"; cin >> stok_adedi;
				DosyaYaz << urun_kodu << " " << urun_adı << " " << uretici << " " << temin_suresi << " " << uretim_tarihi << " " << fiyat_genel << ' ' << fiyat_ozel << ' ' << kdv_orani << " " << stok_adedi << "\n";
				DosyaYaz.close();
				cout << "Dosya Yazimi Tamamlandi" << endl;
			}
		}
		//urun arama
		else if (secim2 == 2) {
			string aranan_urun_kodu;//burada yeni degisken olusturdum.
			cout << "Aranacak urunun kodu: "; cin >> aranan_urun_kodu;
			ifstream DosyaOku("urun.txt");//urun.txt dosyasını okuma modunda actim ve aranan urun koduyla urun kodu eslesiyorsa urun bulundu yazdirip degerleri yazdirdim .
			while (!DosyaOku.eof())
			{

				DosyaOku >> urun_kodu >> urun_adı >> uretici >> temin_suresi >> uretim_tarihi >> fiyat_genel >> fiyat_ozel >> kdv_orani >> stok_adedi;
				if (aranan_urun_kodu == urun_kodu) {
					cout << "Bulunan Urun" << endl;
					cout << urun_kodu << endl;
					cout << urun_adı << endl;
					cout << uretici << endl;
					cout << temin_suresi << endl;
					cout << uretim_tarihi << endl;
					cout << fiyat_genel << endl;
					cout << fiyat_ozel << endl;
					cout << kdv_orani << endl;
					cout << stok_adedi << endl;
					aranan_urun_kodu = "bulundu";
				}

			}
			if (aranan_urun_kodu != "bulundu") {
				cout << "Urun bulunamadi lUtfen farkli bir urun kodu girin! " << endl;
			}

		}
		//Urun listeleme
		else if (secim2 == 3) {//burada dosyadaki urun.txt urunleri yazdirir getline yardimi ile.
			ifstream DosyaOku("urun.txt");
			while (!DosyaOku.eof()) {
				cout << "Dosyadan Okunan  " << i << " . kayit" << endl;
				getline(DosyaOku, satir);
				cout << satir << endl;
				i++;
			}
			DosyaOku.close();
			cout << "okumama tamamlandi" << endl;
		}
		else if (secim2 == 4) {//urun duzeltme
			// buradaki düzeltileek urunun kodunu girip dosyadaki urun koduyla eslesiyorsa degistiriyorum.
			string duzeltilecek_urun_kodu;
			cout << "Duzeltilecek urunun kodu: "; cin >> duzeltilecek_urun_kodu;
			ifstream DosyaOku("urun.txt");
			ofstream DosyaYaz("urun.tmp");
			while (!DosyaOku.eof()) {
				DosyaOku >> urun_kodu >> urun_adı >> uretici >> temin_suresi >> uretim_tarihi >> fiyat_genel >> fiyat_ozel >> kdv_orani >> stok_adedi;
				if (duzeltilecek_urun_kodu == urun_kodu) {
					cout << "Dosyadaki Kayit" << endl;
					cout << urun_kodu << endl;
					cout << urun_adı << endl;
					cout << uretici << endl;
					cout << temin_suresi << endl;
					cout << uretim_tarihi << endl;
					cout << fiyat_genel << endl;
					cout << fiyat_ozel << endl;
					cout << kdv_orani << endl;
					cout << stok_adedi << endl;
					cout << "\n Girmek istediginiz yeni degerleri lütfen giriniz." << endl;
					cout << "\n Urun Kodu: "; cin >> urun_kodu;
					cout << "\n Urun adi: "; cin >> urun_adı;
					cout << "\n Urun Ureticisi: "; cin >> uretici;
					cout << "\n Temin  Suresi: "; cin >> temin_suresi;
					cout << "\n Uretim Tarihi(../../..): "; cin >> uretim_tarihi;
					cout << "\n Normal Musteriler Fiyat: "; cin >> fiyat_genel;
					cout << "\n Ozel Musteriler Fiyat: "; cin >> fiyat_ozel;
					cout << "\n KDV Orani (%): "; cin >> kdv_orani;
					cout << "\n Stok Adedi:"; cin >> stok_adedi;
					DosyaYaz << urun_kodu << " " << urun_adı << " " << uretici << " " << temin_suresi << " " << uretim_tarihi << " " << fiyat_genel << ' ' << fiyat_ozel << ' ' << kdv_orani << " " << stok_adedi << "\n";
				}
				else {
					DosyaYaz << urun_kodu << " " << urun_adı << " " << uretici << " " << temin_suresi << " " << uretim_tarihi << " " << fiyat_genel << ' ' << fiyat_ozel << ' ' << kdv_orani << " " << stok_adedi << "\n";
				}
			}
			DosyaYaz.close();
			DosyaOku.close();
			remove("urun.txt");//eski urun.txt dosyasını silip gecici urun tmp dosyasının adını urun.txt dosyası olarak degistiriyorum.
			rename("urun.tmp", "urun.txt");
		}
		else if (secim2 == 5) {//urun silme silinecek urunun kodu eslesiyorsa silme islemini yapar.
			string silinecek_urun_kodu;
			cout << "Silinecek urunun kodu: "; cin >> silinecek_urun_kodu;
			ifstream DosyaOku("urun.txt");
			ofstream DosyaYaz("urun.tmp");//gecici tmp dosyası olusturdum.
			while (!DosyaOku.eof()) {
				DosyaOku >> urun_kodu >> urun_adı >> uretici >> temin_suresi >> uretim_tarihi >> fiyat_genel >> fiyat_ozel >> kdv_orani >> stok_adedi;
				if (silinecek_urun_kodu == urun_kodu) {
					cout << "Dosyadaki Kayit" << endl;
					cout << urun_kodu << endl;
					cout << urun_adı << endl;
					cout << uretici << endl;
					cout << temin_suresi << endl;
					cout << uretim_tarihi << endl;
					cout << fiyat_genel << endl;
					cout << fiyat_ozel << endl;
					cout << kdv_orani << endl;
					cout << stok_adedi << endl;
				}
				else
				{
					DosyaYaz << urun_kodu << " " << urun_adı << " " << uretici << " " << temin_suresi << " " << uretim_tarihi << " " << fiyat_genel << ' ' << fiyat_ozel << ' ' << kdv_orani << " " << stok_adedi << "\n";
				}
			}
			DosyaOku.close();
			DosyaYaz.close();
			remove("urun.txt");
			rename("urun.tmp", "urun.txt");
		}

	}
	else if (secim == 2) {
		cout << "*********ISLEMLER*********" << endl;
		do {
			cout << "1.Musteri Ekleme" << endl;
			cout << "2.Musteri Arama" << endl;
			cout << "3.Musteri Duzeltme" << endl;
			cout << "4.Musteri Silme" << endl;
			cout << "Lutfen yapmak istediginiz islemi giriniz."; cin >> secim2;

		} while (secim2 != 1 && secim2 != 2 && secim2 != 3 && secim2 != 4);
		if (secim2 == 1) {//burada tekil kod yapamk icin kontrol mekanizması kurdum.
			string istedigin_firma_numarasi;
			cout << "Istedigin firma Numarasini girin kapilmis mi kontrol edeyim: "; cin >> istedigin_firma_numarasi;
			ifstream DosyaOku("cari.txt");
			while (DosyaOku >> firma_no >> firma_adi >> firma_telefon >> firma_sorumlusu >> musteri_katagorisi >> adres) {
				if (istedigin_firma_numarasi == firma_no) {
					firma_no_kontrol = "Kullanilamaz";
				}

			}
			DosyaOku.close();
			if (firma_no_kontrol == "Kullanilamaz") {
				cout << "Bu firma numarasi kullanilmaktadir!!!" << endl;

			}
			else if (firma_no_kontrol != "Kullanilamaz") {
				ofstream DosyaYaz;//burada musteri bilgilerini cari.txt dosyasına yazdirdim.
				DosyaYaz.open("cari.txt", ios::app);
				cout << "\n Firma No: "; cin >> firma_no;
				cout << "\n Firma Adı: "; cin >> firma_adi;
				cout << "\n Firma Telefon: "; cin >> firma_telefon;
				cout << "\n Firma Sorumlusu: "; cin >> firma_sorumlusu;
				cout << "\n Musteri katagorisi(Ozel/Normal): "; cin >> musteri_katagorisi;
				cout << "\n Adres: "; cin >> adres;
				DosyaYaz << firma_no << " " << firma_adi << " " << firma_telefon << " " << firma_sorumlusu << " " << musteri_katagorisi << " " << adres << "\n";
				DosyaYaz.close();
				cout << "Dosya Yazimi Tamamlandi" << endl;
			}
		}
		else if (secim2 == 2) {
			string aranan_firma_no;//bir degisken olusturdum firma no ile aranan firma numarasi esit ise bulma islemini yapacaktir.
			cout << "Aranacak Musterinin  Firma No: "; cin >> aranan_firma_no;
			ifstream DosyaOku("cari.txt");//cari.txt dosyasını okuma modunda açtim.
			while (!DosyaOku.eof())
			{
				DosyaOku >> firma_no >> firma_adi >> firma_telefon >> firma_sorumlusu >> musteri_katagorisi >> adres;
				if (aranan_firma_no == firma_no) {
					cout << "Bulunan Musteri" << endl;
					cout << firma_no << endl;
					cout << firma_adi << endl;
					cout << firma_telefon << endl;
					cout << firma_sorumlusu << endl;
					cout << musteri_katagorisi << endl;
					cout << adres << endl;
					aranan_firma_no = "bulundu";
				}
			}
			//eslesme olmazsa yeniden girmemizi istemektedir aranan firma numarasini.
			if (aranan_firma_no != "bulundu") {
				cout << "Aranan musteri bulunamadı lUtfen farkli bir firma numarasi girin! " << endl;
			}
		}
		else if (secim2 == 3) {//düzeltilecek musterini firma bumarsı diye degisken tanimladim bunun amaci ayni kişi oludgundan emin olmaktir.
			string duzeltilecek_musteri_firma_no;
			cout << "Duzeltilecek musterinin firma no: "; cin >> duzeltilecek_musteri_firma_no;
			ifstream DosyaOku("cari.txt");//cari.txt okuma modunda actim.
			ofstream DosyaYaz("cari.tmp");//gecici dosyayi yazma modunda yazip bir nevi yeni degerler girerek düzeltme islemini yaptik.
			while (!DosyaOku.eof()) {
				DosyaOku >> firma_no >> firma_adi >> firma_telefon >> firma_sorumlusu >> musteri_katagorisi >> adres;
				if (duzeltilecek_musteri_firma_no == firma_no) {//eslesme varsa gecici dosyaya yeni degerler atanacak.
					cout << "Dosyadaki Kayit" << endl;
					cout << firma_no << endl;
					cout << firma_adi << endl;
					cout << firma_telefon << endl;
					cout << firma_sorumlusu << endl;
					cout << musteri_katagorisi << endl;
					cout << adres << endl;

					cout << "\n Girmek istediginiz yeni degerleri lutfen giriniz." << endl;
					cout << "\n Firma Numarasi: "; cin >> firma_no;
					cout << "\nFirma Adi: "; cin >> firma_adi;
					cout << "\nFirma Telefon: "; cin >> firma_telefon;
					cout << "\n Firma Sorumlusu: "; cin >> firma_sorumlusu;
					cout << "\n Musteri Katagorisi "; cin >> musteri_katagorisi;
					cout << "\n Adres: "; cin >> adres;

					DosyaYaz << firma_no << " " << firma_adi << " " << firma_telefon << " " << firma_sorumlusu << " " << musteri_katagorisi << " " << adres << "\n";
				}
				else {
					DosyaYaz << firma_no << " " << firma_adi << " " << firma_telefon << " " << firma_sorumlusu << " " << musteri_katagorisi << " " << adres << "\n";
				}
			}
			DosyaYaz.close();
			DosyaOku.close();
			remove("cari.txt");//cari.txt dosyasini sildim.
			rename("cari.tmp", "cari.txt");//cari.tmp nin adini degistirdim cari.txt diye bir deni düzenleme yapmis olduk.

		}
		else if (secim2 == 4) {//müsteri silme islemleri ürün silmeyle ayni mantik.
			string silinecek_musteri_firma_no;
			cout << "Silinecek Musteri Firma No:"; cin >> silinecek_musteri_firma_no;
			ifstream DosyaOku("cari.txt");
			ofstream DosyaYaz("cari.tmp");
			while (!DosyaOku.eof()) {
				DosyaOku >> firma_no >> firma_adi >> firma_telefon >> firma_sorumlusu >> musteri_katagorisi >> adres;

				if (silinecek_musteri_firma_no == firma_no) {
					cout << "Dosyadaki Kayit" << endl;
					cout << firma_no << endl;
					cout << firma_adi << endl;
					cout << firma_telefon << endl;
					cout << firma_sorumlusu << endl;
					cout << musteri_katagorisi << endl;
					cout << adres << endl;

				}
				else
				{
					DosyaYaz << firma_no << " " << firma_adi << " " << firma_telefon << " " << firma_sorumlusu << " " << musteri_katagorisi << " " << adres << "\n";
				}
			}
			DosyaOku.close();
			DosyaYaz.close();
			remove("cari.txt");
			rename("cari.tmp", "cari.txt");
		}

	}
	else if (secim == 3)
	{
		cout << "*********ISLEMLER*********" << endl;
		do {
			cout << "1.Siparis Olustur" << endl;
			cout << "2.Siparis Arama" << endl;
			cout << "3.Siparis Silme" << endl;
			cout << "4.Siparis Duzeltme" << endl;
			cout << "5.Siparis Raporlama" << endl;
			cout << "Lutfen yapmak istediginiz islemi giriniz."; cin >> secim2;

		} while (secim2 != 1 && secim2 != 2 && secim2 != 3 && secim2 != 4 && secim2 != 5);
		if (secim2 == 1) {
			string Firma_No;
			cout << "Firma No: "; cin >> Firma_No;//Firma No istedim cunku girenin kimligini teshis etmek icin
			ifstream DosyaOku3("cari.txt");//cari.txt dosyasini okuma modunda actim musteri katagorisini ve firma numarasi eslesmesi yapmak icin.
			while (DosyaOku3 >> firma_no >> firma_adi >> firma_telefon >> firma_sorumlusu >> musteri_katagorisi >> adres) {
				if (Firma_No == firma_no) {
					if (musteri_katagorisi == "Normal") {//musteri katagorisi normal ise genel fiyati kullanacaktir.
						ofstream DosyaYaz("siparislist.txt", ios::app);//siparislist.txt dosyasi actim urun kodunu ve adedini tutmak icin.
						cout << "Istediginiz urunun kodunu giriniz."; cin >> urun_kodu2;
						cout << "Istediginiz Urun adedini giriniz:"; cin >> urun_adedi;
						DosyaYaz << firma_no << ' ' << urun_kodu2 << " " << urun_adedi << "\n";
						DosyaYaz.close();
						ofstream DosyaYaz1("siparis.txt", ios::app);//siparis.txt dosyasini ekleme modunda actim bilgileri eklmeke icin.
						ifstream DosyaOku("urun.txt");//urun txt dosyasini  okuma modunda actim.
						cout << "siparis tarihi: "; cin >> siparis_tarihi;
						cout << "siparisi alan: "; cin >> siparis_alan;
						//urun.txt dosyasini okuttum eslesen genel fiyati almak icin dosyadan.
						while (DosyaOku >> urun_kodu >> urun_adı >> uretici >> temin_suresi >> uretim_tarihi >> fiyat_genel >> fiyat_ozel >> kdv_orani >> stok_adedi) {
							if (urun_kodu2 == urun_kodu) {//siparis tutarini tanimladim.
								siparis_tutari = urun_adedi * fiyat_genel * ((100 + kdv_orani) / 100);
							}
						}
						//siparis.txt dosyasina yazdirmalarini yaptim.
						DosyaYaz1 << Firma_No << " " << siparis_tarihi << ' ' << siparis_alan << ' ' << siparis_tutari << "\n";
						//dosyalari kapattim.
						DosyaYaz1.close();
						DosyaOku.close();
					}//burada ozel musteriler icin ozel fiyati almak icin burayi yazdim.
					else if (musteri_katagorisi == "Ozel") {//cari.txt dosyasindaki katogori Ozel ise bu kod demeti calisir.
						ofstream DosyaYaz("siparislist.txt", ios::app);//siparislit i ekleme modunda actim ve kullanicidan degerleri aldim.
						cout << "Istediginiz urunun kodunu giriniz."; cin >> urun_kodu2;
						cout << "Istediginiz Urun adedini giriniz:"; cin >> urun_adedi;
						DosyaYaz << firma_no << ' ' << urun_kodu2 << " " << urun_adedi << "\n";
						DosyaYaz.close();
						ofstream DosyaYaz1("siparis.txt", ios::app);//siparis.txt dosyasini ekleme modunda actim bilgileri eklmeke icin.
						ifstream DosyaOku("urun.txt");//urun txt dosyasini  okuma modunda actim.
						cout << "siparis tarihi: "; cin >> siparis_tarihi;
						cout << "siparisi alan: "; cin >> siparis_alan;
						//urun.txt dosyasini okuttum eslesen Ozel fiyati almak icin dosyadan.
						while (!DosyaOku.eof()) {

							DosyaOku >> urun_kodu >> urun_adı >> uretici >> temin_suresi >> uretim_tarihi >> fiyat_genel >> fiyat_ozel >> kdv_orani >> stok_adedi;
							if (urun_kodu2 == urun_kodu) {
								siparis_tutari = urun_adedi * fiyat_ozel * ((100 + kdv_orani) / 100);
							}

						}
						//siparis.txt dosyasina yazdirmalarini yaptim
						DosyaYaz1 << Firma_No << ' ' << siparis_tarihi << ' ' << siparis_alan << ' ' << siparis_tutari << "\n";
						//dosyalari kapattim.
						DosyaYaz1.close();
						DosyaOku.close();

					}


				}

			}
			DosyaOku3.close();
		}
		//siparis arama
		//arama yapmak icin firma numarasi kullandim cunku tekil ,eslesme var ise dosyadan eslesen elemanş gösterdim.Yok ise Siparis bulunamadi lUtfen farkli bir Firma numarasi girin yazdirdim.
		else if (secim2 == 2) {
			string aranan_firma_no;
			cout << "Aranacak Siparisin firma numarasi: "; cin >> aranan_firma_no;
			ifstream DosyaOku("siparis.txt");
			while (!DosyaOku.eof())
			{
				DosyaOku >> firma_no >> siparis_tarihi >> siparis_alan >> siparis_tutari;
				if (aranan_firma_no == firma_no) {
					cout << "Bulunan Urun" << endl;
					cout << firma_no << endl;
					cout << siparis_tarihi << endl;
					cout << siparis_alan << endl;
					cout << siparis_tutari << endl;

					aranan_firma_no = "bulundu";
				}

			}
			if (aranan_firma_no != "bulundu") {
				cout << "Siparis bulunamadi lUtfen farkli bir Firma numarasi girin! " << endl;
			}
		}
		//siparis silme
		else if (secim2 == 3) { 
			string silinecek_siparisin_firma_no;//silinecek siparisin firma numarasi diye degisken tanimladim ve kullanicidan deger aldim.
			cout << "Silinecek Siparisin  Firma No:"; cin >> silinecek_siparisin_firma_no;
			ifstream DosyaOku("siparis.txt");
			ofstream DosyaYaz("siparis.tmp");
			ifstream DosyaOku1("siparislist.txt");
			ofstream DosyaYaz1("siparislist.tmp");
			//ilk basta siparislist.txt sildirme yaptim cunku firma numaralari siparis.txt ile ayni ve sonra onun sildirmesini yaptim.
			//girilen deger ile eslesme varsa sildirme islemi yapilir yoksa yapilmaz.
			while (DosyaOku1 >> firma_no >> urun_kodu2 >> urun_adedi) {
				if (silinecek_siparisin_firma_no == firma_no) {
					cout << "Dosyadaki Silinecek Kayit" << endl;
					cout << firma_no << endl;
					cout << urun_kodu2 << endl;
					cout << urun_adedi << endl;

				}
				else {
					DosyaYaz1 << firma_no << ' ' << urun_kodu2 << ' ' << urun_adedi << "\n";
				}
			}

			while (DosyaOku >> firma_no >> siparis_tarihi >> siparis_alan >> siparis_tutari) {

				if (silinecek_siparisin_firma_no == firma_no) {
					cout << "Dosyadaki Kayit" << endl;
					cout << firma_no << endl;
					cout << siparis_tarihi << endl;
					cout << siparis_alan << endl;
					cout << siparis_tutari << endl;
				}
				else {
					DosyaYaz << firma_no << ' ' << siparis_tarihi << ' ' << siparis_alan << ' ' << siparis_tutari << '\n';
				}
			}
			DosyaOku1.close();
			DosyaYaz1.close();
			remove("siparislist.txt");
			rename("siparislist.tmp", "siparislist.txt");
			DosyaOku.close();
			DosyaYaz.close();
			remove("siparis.txt");
			rename("siparis.tmp", "siparis.txt");

		}
		else if (secim2 == 4) {
			string duzeltilecek_siparisin_firma_numarası;//duzeltilecek siparisin firma numarasini istedim ve eslesme olursa duzeltme islemini yapacak.
			cout << "Lutfen Duzeltilecek Siparisin Firma Numarasini Giriniz: "; cin >> duzeltilecek_siparisin_firma_numarası;
			ifstream DosyaOku("siparislist.txt");
			ofstream DosyaYaz("siparislist.tmp");
			while (DosyaOku >> firma_no >> urun_kodu2 >> urun_adedi) {
				if (duzeltilecek_siparisin_firma_numarası == firma_no) {
					cout << "Siparis Listesindeki Duzeltilecek Kayit" << endl;//duzeltilecek kayiti ekranda gösterecek ve ardından yeni degerler alacak siparislist.txt dosyasi icin
					cout << firma_no << endl;
					cout << urun_kodu2 << endl;
					cout << urun_adedi << endl;
					cout << "\n Girmek istediginiz yeni degerleri lutfen giriniz." << endl;
					cout << "\n Urun Kodu: "; cin >> urun_kodu2;
					cout << "\n Urum Adedi: "; cin >> urun_adedi;

					DosyaYaz << firma_no << ' ' << urun_kodu2 << ' ' << urun_adedi << '\n';
				}
				else {
					DosyaYaz << firma_no << ' ' << urun_kodu2 << ' ' << urun_adedi << '\n';

				}
			}
			DosyaOku.close();
			DosyaYaz.close();
			remove("siparislist.txt");
			rename("siparislist.tmp", "siparislist.txt");
			//burada siparis.txt dosyasinin siparis düzeltme islemini yaptim.
			ifstream DosyaOku1("siparis.txt");
			ofstream DosyaYaz1("siparis.tmp");

			while (DosyaOku1 >> firma_no >> siparis_tarihi >> siparis_alan >> siparis_tutari) {
				if (duzeltilecek_siparisin_firma_numarası == firma_no) {
					cout << "Sipariste Duzeltilecek Kayıt" << endl;
					cout << firma_no << endl;
					cout << siparis_tarihi << endl;
					cout << siparis_alan << endl;
					cout << siparis_tutari << endl;
					cout << "Siparis Tarihi"; cin >> siparis_tarihi;
					cout << "Siparisi Alan: "; cin >> siparis_alan;
					cout << "Siparis Tutarını Giriniz: "; cin >> siparis_tutari;
					DosyaYaz1 << firma_no << " " << siparis_tarihi << " " << siparis_alan << " " << siparis_tutari << "\n";

				}
				else {
					DosyaYaz1 << firma_no << " " << siparis_tarihi << " " << siparis_alan << " " << siparis_tutari << "\n";
				}
			}
			DosyaOku1.close();
			DosyaYaz1.close();
			remove("siparis.txt");
			rename("siparis.tmp", "siparis.txt");
		}//burada siparis raporlama yaptim yanin siparis.txt dosyasındaki bilgileri ekrana yazdirdim getline fonksiyonu yardimi ile.
		else if (secim2 == 5) {
			ifstream DosyaOku("siparis.txt");
			while (!DosyaOku.eof()) {
				getline(DosyaOku, satir);
				cout << '\n' << '\n' << satir << endl;
				i++;
			}
			DosyaOku.close();
			cout << "okumama tamamlandi" << endl;
		}


	}
	//programdan cikis yapmak icin kullandim.
	else {
		system("PAUSE");
		return EXIT_SUCCESS;
	}
}
