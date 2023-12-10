#include <stdio.h>

int main() {
    // Sabit bir kayd�rma miktar�
    int shift = -3;

    // �ifreli metin
    char sifre[100];//burda �ifreyi ��zmek i�in �ncelikle metin gircez.
    
    printf("Sifreli metni girin: ");
    fgets(sifre, sizeof(sifre), stdin);//fgets=okuma i�lemini yaparr.sizeof=uzunlu�unu �l�er.stdin=genel sabit i�aret�ileri giri�, ��k�� ve hata ��k��� i�in standart ak��lard�r.

    // �ifre ��zme i�lemi
    int i;
    for (i = 0; sifre[i] != '\0'; i++) {      //'\0' stringin bitti�ini belirtir.
        // Sadece b�y�k harfleri ��z
        if (sifre[i] >= 'A' && sifre[i] <= 'Z') {  //�ifrenin hangi aral�ktaki harflerden olu�tu�unu belirtiyor.
            sifre[i] = (sifre[i] - 'A' - shift + 26) % 26 + 'A';// rastgele atama i�lemi i�in diyebilirm.
        }
        else if(sifre[i] >= '0' && sifre[i] <= '9'){   //say�lar�n girmrsini engelliyor.
        	printf("Girdiginiz deger kullanilamiyor.Tekrar deneyiniz.");
        	return 1;
		}
		else if(sifre[i] >= 'a' && sifre[i] <='z'){   //k���k harflerin girmesini engelliyor.
			printf("Girdiginiz deger kullanilamiyor.Tekrar deneyiniz.");
        	return 2;
		}
		
		
		
		}

    // ��z�lm�� metni ekrana yazd�rma
    printf("Cozulmus Metin: %s\n", sifre); // girilen metin sonucu a���a ��kan �ifreyi belirtiyor.

    return 0;
}

