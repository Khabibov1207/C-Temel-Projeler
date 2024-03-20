#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int ogrSayisi;
	printf("ogrenci sayisini giriniz\n");
	scanf("%d",&ogrSayisi);
	
	int vize;
	int proje1;
	int proje2;
	int donemOdevi;
	int final;
	char *m[120];
	
	for(int i=0;i<ogrSayisi;i++)
	{
		printf("Ogrenci vize\n");
		scanf("%d",&vize);
		
		printf("Ogrenci proje1\n");
		scanf("%d",&proje1);
		
		printf("Ogrenci proje2\n");
		scanf("%d",&proje2);
		
		printf("Ogrenci donem odevi\n");
		scanf("%d",&donemOdevi);
		
		printf("Ogrenci final\n");
		scanf("%d",&final);
		
		double donemicinotu;
		donemicinotu=(vize*45/100)+(proje1*20/100)+(proje2*20/100)+(donemOdevi*15/100);
		double donemsonu;
		donemsonu=(donemicinotu*45/100)+(final*55/100);
		if((donemsonu>=90.0) &&(donemsonu<=100)){
			m[i]="AA";
		}
		else if((donemsonu>=85.0) &&(donemsonu<=89.99)){
			m[i]="BA";
		}
		else if((donemsonu>=80.0) &&(donemsonu<=84.99)){
			m[i]="BB";
		}
		else if((donemsonu>=75.0) &&(donemsonu<=79.99)){
			m[i]="CB";
		}
		else if((donemsonu>=65.0) &&(donemsonu<=74.99)){
			m[i]="CC";
		}
		else if((donemsonu>=58.0) &&(donemsonu<=64.99)){
			m[i]="DC";
	    }
		else if((donemsonu>=50.0) &&(donemsonu<=57.99)){
			m[i]="DD";
		}	
		else if((donemsonu>=40.0) &&(donemsonu<=49.99)){
			m[i]="FD";
		}
		else if((donemsonu>=0.0) &&(donemsonu<=39.99)){
			m[i]="FF";
		}
		else{
			printf("gecerli not girmediniz");
		}
		
			
		
	}
	
	for (int i=0; i<ogrSayisi; i++) {
	  int b=i+1;
	  printf("%d. ogrenci :",b);
      printf("%s \n", m[i]);
      
 	}
 	
 	return 0;
	
}
