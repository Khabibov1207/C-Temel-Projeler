#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sayacSesli(char* paragraph) {
  int i, count = 0;
  for (i = 0; i < strlen(paragraph); i++) {
    if (paragraph[i] == 'a' || paragraph[i] == 'e' || paragraph[i] == 'i' || paragraph[i] == 'o' || paragraph[i] == 'u' || paragraph[i] == 'A' || paragraph[i] == 'E' || paragraph[i] == 'I' || paragraph[i] == 'O' || paragraph[i] == 'U') {
      count++;
    }
  }
  return count;
}  
int sayacSessiz(char* paragraph) {
  int i, count = 0;
  for (i = 0; i < strlen(paragraph); i++) {
    if (paragraph[i] == 'b' || paragraph[i] == 'c' || paragraph[i] == 'd' || paragraph[i] == 'f' || paragraph[i] == 'g' || paragraph[i] == 'h' || paragraph[i] == 'j' || paragraph[i] == 'k' || paragraph[i] == 'l' || paragraph[i] == 'm' || paragraph[i] == 'n' || paragraph[i] == 'p' || paragraph[i] == 'r' || paragraph[i] == 's' || paragraph[i] == 't' || paragraph[i] == 'v' || paragraph[i] == 'y' || paragraph[i] == 'z' || paragraph[i] == 'B' || paragraph[i] == 'C' || paragraph[i] == 'D' || paragraph[i] == 'F' || paragraph[i] == 'G' || paragraph[i] == 'H' || paragraph[i] == 'J' || paragraph[i] == 'K' || paragraph[i] == 'L' || paragraph[i] == 'M' || paragraph[i] == 'N' || paragraph[i] == 'P' || paragraph[i] == 'R' || paragraph[i] == 'S' || paragraph[i] == 'T' || paragraph[i] == 'V' || paragraph[i] == 'Y' || paragraph[i] == 'Z') {
      count++;
    }
  }
  return count;
}  
int sayacKelime(char* str) {
  int i, count = 0;
  int len = strlen(str);

  for (i = 0; i < len; i++) {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
      count++;
    }
  }
  return count + 1;
}
int sayacCumle(char* text) {
    int sentenceCount = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentenceCount++;
        }
    }
    return sentenceCount;
}
int sayacEmail(char *paragraph) {
  int email_count = 0;
  int length = strlen(paragraph);

  for (int i = 0; i < length; i++) {
    if (paragraph[i] == '@') {
      email_count++;
    }
  }

  return email_count;
}
int main(){
	char cumle[1000];
	printf("cumle giriniz; ");
	scanf("%[^\n]s", &cumle);
	int a=sayacSesli(cumle);
	int b=sayacSessiz(cumle);
	int c=sayacKelime(cumle);
	int d=sayacCumle(cumle);
	int f=sayacEmail(cumle);
	printf("%dsesli harf %d sessiz harf %d kelime %d cumle %d email",a,b,c,d,f);
}
