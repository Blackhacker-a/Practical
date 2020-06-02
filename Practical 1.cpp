#include<stdio.h>
#include<string.h>
void NhapChuoi(char str[120]){
	printf("Nhap chuoi ");
	scanf("%s",str);
	}

void concat(char str1[120],char str2[120]){
	strcat(str1," ");
	strcat(str1,str2);
	}

int main(){
	char str1[120],str2[120];
	NhapChuoi(str1);
	NhapChuoi(str2);
	concat(str1,str2);
	printf("Chuoi sau khi noi la %s",str1);
	}
	
	
	
