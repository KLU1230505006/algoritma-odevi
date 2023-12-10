#include <stdio.h>

int main() {
    // Sabit bir kaydýrma miktarý
    int shift = -3;

    // Þifreli metin
    char sifre[100];//burda þifreyi çözmek için öncelikle metin gircez.
    
    printf("Sifreli metni girin: ");
    fgets(sifre, sizeof(sifre), stdin);//fgets=okuma iþlemini yaparr.sizeof=uzunluðunu ölçer.stdin=genel sabit iþaretçileri giriþ, çýkýþ ve hata çýkýþý için standart akýþlardýr.

    // Þifre çözme iþlemi
    int i;
    for (i = 0; sifre[i] != '\0'; i++) {      //'\0' stringin bittiðini belirtir.
        // Sadece büyük harfleri çöz
        if (sifre[i] >= 'A' && sifre[i] <= 'Z') {  //þifrenin hangi aralýktaki harflerden oluþtuðunu belirtiyor.
            sifre[i] = (sifre[i] - 'A' - shift + 26) % 26 + 'A';// rastgele atama iþlemi için diyebilirm.
        }
        else if(sifre[i] >= '0' && sifre[i] <= '9'){   //sayýlarýn girmrsini engelliyor.
        	printf("Girdiginiz deger kullanilamiyor.Tekrar deneyiniz.");
        	return 1;
		}
		else if(sifre[i] >= 'a' && sifre[i] <='z'){   //küçük harflerin girmesini engelliyor.
			printf("Girdiginiz deger kullanilamiyor.Tekrar deneyiniz.");
        	return 2;
		}
		
		
		
		}

    // Çözülmüþ metni ekrana yazdýrma
    printf("Cozulmus Metin: %s\n", sifre); // girilen metin sonucu açýða çýkan þifreyi belirtiyor.

    return 0;
}

