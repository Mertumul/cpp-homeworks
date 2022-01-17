/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI:1
**				ÖĞRENCİ ADI:MERT UMUL
**				ÖĞRENCİ NUMARASI.:B201210049
**				DERS GRUBU:C
****************************************************************************/
#include <iostream>
using namespace std;
#include <locale.h>
#include<string>

//oluşturulan il stringi dizinin içindemi diye sorgulayan fonksiyon yazdım.Eğer içindeyse true değise false veriyor.
bool arama(string türkiye_iilleri[], int len, string seek)
{
	for (int i = 0; i < len; i++)
	{
		if (türkiye_iilleri[i] == seek)
			return true;
	}

	return false;
}
//burada bu fonksiyonu oluşturmamım genel amacı bir a sayısı verdiğimde o a sayısına eşdeğer karakterli ili rastgele oluşturmak : Örnğin 3 verirsem 3 karakterli il oluşturur ve kontrol eder eğer bulunamazsa bulunamadı bulunursa bulundu ve il adını yazdırır genel mantığı budur.
void il_oluşrma(int a, string türkiye_iileri[]) {
	srand(time(NULL));
	int srastgelesayilar[14];//burada bir dizi oluşturdum değerlerini sonradan atadım 14 yazmamım sebebi en büyük il Afyonkarahisar olduğundan en fazla bu kadar yer kaplayacağı için
	string oluşturulanil;
	bool bulundu = false;//bunu oluşturmamın genel amacı programı sonlandırmak ve il bulunamaz ise bulunamadı yazdırmak.
	//100000 kere deneme yapar.
	for (int j = 0; j < 100000; j++) {

		//dizinin içindeki elemanlara rastgele sayı tanımlar.
		for (int i = 0; i < a; i++) {
			srastgelesayilar[i] = rand() % 80;// 80 yazmamın sebebi indisle 0 dan başlayıp 80 kadar gitmesi.
		}
		
		int ekrastgele_sayı = türkiye_iileri[srastgelesayilar[0]].size();
		//bir ekrastgele_sayı tanmladım bunun genel amacı rastgele illerden en küçük indisli elemanı bulmak ve ona göre döngüyü kontrol etmektir.Bu döngüde en küçük indisli ilin indis sayısını bulmak.
		for (int i = 1; i < a; i++) {
			if (ekrastgele_sayı > türkiye_iileri[srastgelesayilar[i]].size())
				ekrastgele_sayı = türkiye_iileri[srastgelesayilar[i]].size();
			else
				continue;
		}//yukarıda fonksiyona 3 sayısı girerse 3 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		if (a == 3) {
			for (int k = 0; k < ekrastgele_sayı; k++) {//ekrastgele_sayı kullandım çünkü en küçük indisliye göre diğer elemanların indisine bakılacak.Öreneğin Muğla,Sakarya,Afyonkarahisar bunlardan en küçük indisli muğla ve 5 tir 5 ten sonra mupladan eleman gelmez bu yüzden bakmaya gerek yoktur.
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1);//il oluşturma
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {//arama fonksiyonunu kullanır oluşturulan il türkiye_iller dizisinin içinde mi diye bakılır.
					cout << " bulundu=" << "  " << oluşturulanil << endl;//bulunan ili yazdırır.
					bulundu = true;//eğer bool true gelirse işlemi durdurur.
				}
			}
		}//yukarıda fonksiyona 4 sayısı girerse 4 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 4) {
			for (int k = 0; k < ekrastgele_sayı; k++) {

				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}

		}//yukarıda fonksiyona 5 sayısı girerse 5 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 5) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) + türkiye_iileri[srastgelesayilar[4]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}//yukarıda fonksiyona 6 sayısı girerse 6 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 6) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) + türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}//yukarıda fonksiyona 7 sayısı girerse 7 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 7) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) +
					türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1) + türkiye_iileri[srastgelesayilar[6]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}//yukarıda fonksiyona 8 sayısı girerse 8 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 8) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) +
					türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1) + türkiye_iileri[srastgelesayilar[6]].substr(k, 1) + türkiye_iileri[srastgelesayilar[7]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}//yukarıda fonksiyona 9 sayısı girerse 9 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 9) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) +
					türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1) + türkiye_iileri[srastgelesayilar[6]].substr(k, 1) + türkiye_iileri[srastgelesayilar[7]].substr(k, 1) + türkiye_iileri[srastgelesayilar[8]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}//yukarıda fonksiyona 10 sayısı girerse 10 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 10) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) +
					türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1) + türkiye_iileri[srastgelesayilar[6]].substr(k, 1) + türkiye_iileri[srastgelesayilar[7]].substr(k, 1) + türkiye_iileri[srastgelesayilar[8]].substr(k, 1)
					+ türkiye_iileri[srastgelesayilar[9]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}//yukarıda fonksiyona 13 sayısı girerse 13 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else if (a == 13) {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) +
					türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1) + türkiye_iileri[srastgelesayilar[6]].substr(k, 1) + türkiye_iileri[srastgelesayilar[7]].substr(k, 1) + türkiye_iileri[srastgelesayilar[8]].substr(k, 1)
					+ türkiye_iileri[srastgelesayilar[9]].substr(k, 1) + türkiye_iileri[srastgelesayilar[10]].substr(k, 1) + türkiye_iileri[srastgelesayilar[11]].substr(k, 1) + türkiye_iileri[srastgelesayilar[12]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}

		}//yukarıda fonksiyona 14 sayısı girerse 14 haneli iller rastgele oluşturulur ve türkiye_iiller dizisinin içinde mi kontrol edilir içindeyse bulundu deyip hangi ilin olduğu yazdırılır.
		else {
			for (int k = 0; k < ekrastgele_sayı; k++) {
				oluşturulanil = türkiye_iileri[srastgelesayilar[0]].substr(k, 1) + türkiye_iileri[srastgelesayilar[1]].substr(k, 1) + türkiye_iileri[srastgelesayilar[2]].substr(k, 1) + türkiye_iileri[srastgelesayilar[3]].substr(k, 1) +
					türkiye_iileri[srastgelesayilar[4]].substr(k, 1) + türkiye_iileri[srastgelesayilar[5]].substr(k, 1) + türkiye_iileri[srastgelesayilar[6]].substr(k, 1) + türkiye_iileri[srastgelesayilar[7]].substr(k, 1) + türkiye_iileri[srastgelesayilar[8]].substr(k, 1)
					+ türkiye_iileri[srastgelesayilar[9]].substr(k, 1) + türkiye_iileri[srastgelesayilar[10]].substr(k, 1) + türkiye_iileri[srastgelesayilar[11]].substr(k, 1) + türkiye_iileri[srastgelesayilar[12]].substr(k, 1) + türkiye_iileri[srastgelesayilar[13]].substr(k, 1);
				if (arama(türkiye_iileri, 81, oluşturulanil) && !bulundu) {
					cout << " bulundu=" << "  " << oluşturulanil << endl;
					bulundu = true;
				}
			}
		}

	}
	if (!bulundu)//il bulunamaz ise bulunamadı yazdırır
		cout << " bulunamadı" << endl;

}


int main()
{
	setlocale(LC_ALL, "Turkish");
	//illeri diziye tanımlıyorum.
	string türkiye_iileri[81] = { {"adana"},{"adiyaman"},{"afyonkarahisar"},{"agri"},{"amasya"},{"ankara"},{"antalya"},{"artvin"},{"aydin"},{"balikesir"},{"bilecik"},{"bingol"},{"bitlis"},
		{"bolu"},{"burdur"},{"bursa"},{"canakkale"},{"cankırı"},{"corum"},{"denizli"},{"diyarbakir"},{"edirne"},{"elazıg"},{"erzincan"},{"erzurum"},{"eskisehir"},{"gaziantep"},{"giresun"},{"gümüshane"},
		{"hakkari"},{"hatay"},{"isparta"},{"mersin"},{"istanbul"},{"izmir"},{"kars"},{"kastomonu"},{"kayseri"},{"kırklareli"},{"kırsehir"},{"kocaeli"},{"konya"},{"kutahya"},
		{"malatya"},{"manisa"},{"kahramanmaras"},{"mardin"},{"mugla"},{"mus"},{"nevsehir"},{"nigde"},{"ordu"},{"rize"},{"sakarya"},{"samsun"},{"siirt"},{"sinop"},{"sivas"},{"tekirdag"},
		{"tokat"},{"trabzon"},{"tunceli"},{"sanlıurfa"},{"usak"},{"van"},{"yozgat"},{"zonguldak"},{"aksaray"},{"bayburt"},{"karaman"},{"kırıkkale"},{"batman"},{"sırnak"},{"bartın"},{"ardahan"},{"igdır"},
		{"yalova"},{"karabük"},{"kilis"},{"osmaniye"},{"duzce"} };

	// en küçük karakterli ilin indis sayısını hesaplamaya yarıyor.
	string en_küçük_indisli_il;
	int en_küçük_indis_sayısı = 0;
	en_küçük_indis_sayısı = türkiye_iileri[0].size();
	//burada en küçük indisli  sayısını bulmak için size fonksiyonu yardımıyla bir for döngüsü kurdum. Bu for döngüsü türkiye_iller[] dizisinin içinde gezerek en küçük indisli elemanı bulmamıza yardım edecek daha sonrada hangi il olduğunu bulacak.
	for (int i = 0; i < 81; i++) {
		if (en_küçük_indis_sayısı > türkiye_iileri[i].size()) {
			en_küçük_indis_sayısı = türkiye_iileri[i].size();
			en_küçük_indisli_il = türkiye_iileri[i];
		}
		else
			continue;
	}//burada yukarıda bulduğum sonuçları yazdırdım.
	cout << "en az karakterli il:" << en_küçük_indisli_il << "   ";
	cout << "en az karekterli ilin karekter sayısı:" << en_küçük_indis_sayısı << endl;


	//en büyük karakterli ilin indis sayısını hesaplama.
	int en_büyük_indis_sayısı = 0;
	string en_büyük_indisli_il;
	en_büyük_indis_sayısı = türkiye_iileri[0].size();
	//burada en büyük indisli  sayısını bulmak için size fonksiyonu yardımıyla bir for döngüsü kurdum. Bu for döngüsü türkiye_iller[] dizisinin içinde gezerek en büyük indisli elemanı bulmamıza yardım edecek daha sonrada hangi il olduğunu bulacak.
	for (int i = 0; i < 81; i++) {

		if (en_büyük_indis_sayısı < türkiye_iileri[i].size()) {
			en_büyük_indis_sayısı = türkiye_iileri[i].size();
			en_büyük_indisli_il = türkiye_iileri[i];
		}
		else
			continue;
	}//burada yukarıda bulduğum sonuçları bastırdım
	cout << "en büyük indisli il:" << en_büyük_indisli_il << "   ";
	cout << "en büyük karekterli ilin karekter sayısı:" << en_büyük_indis_sayısı << endl;


	//burada void il_oluşrma fonksiyonu çağırdım ve yazdırma işlemlerini yaptım.
	cout << "3 harfli il:" << endl;
	il_oluşrma(3, türkiye_iileri);
	cout << "4 harfli il:" << endl;
	il_oluşrma(4, türkiye_iileri);
	cout << "5 harfli il:" << endl;
	il_oluşrma(5, türkiye_iileri);
	cout << "6 harfli il:" << endl;
	il_oluşrma(6, türkiye_iileri);
	cout << "7 harfli il:" << endl;
	il_oluşrma(7, türkiye_iileri);
	cout << "8 harfli il:" << endl;
	il_oluşrma(8, türkiye_iileri);
	cout << "9 harfli il:" << endl;
	il_oluşrma(9, türkiye_iileri);
	cout << "10 harfli il:" << endl;
	il_oluşrma(10, türkiye_iileri);
	cout << "13 harfli il:" << endl;
	il_oluşrma(13, türkiye_iileri);
	cout << "14 harfli il:" << endl;
	il_oluşrma(14, türkiye_iileri);
}
