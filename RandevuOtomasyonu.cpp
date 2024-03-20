#include <stdio.h>
#include <stdlib.h>

int main (){
	char isimler[155][20];
	int tarih[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int saat[155];
	int randevuSayisi[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	for (int i=0;i<6;){
		printf("isim soyisim giriniz: ");
		scanf("%s",isimler[i]);
		printf("tarih giriniz: ");
		scanf("%d",&tarih[i]);
		printf("saat giriniz: ");
		scanf("%d",&saat[i]);
		int x;
		x = tarih[i];
		x=randevuSayisi[x-1];
		if(x<=2){
			randevuSayisi[x-1]++;
			i++;
		}
		else{
			printf("lutfen baska gun seciniz\n");
		}
	}
	for (int i=0;i<30;i++){
		printf(" isim; %s tarih; %d saat; %d randevusayisi; %d \n",isimler[i],tarih[i],saat[i],randevuSayisi[i]);
	}
	
	return 0;
}
