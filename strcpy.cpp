#include<iostream>

using namespace std;

char* strcpy(char*, const char*);
int LoopMove(char*, int);
size_t strlen(char*);

char* strcpy(char* StrDest, const char* StrSrc){
	if(StrDest==NULL || StrSrc==NULL){
		return NULL;
	}

	while(*StrSrc!='\0'){
		*StrDest++ = *StrSrc++;
	}
	*(++StrDest)='\0';
	return StrDest;
}

size_t strlen(char* pStr){
	size_t len=0;
	while(*pStr++!='\0'){
		len++;
	}
	return len;
}

int LoopMove(char* pStr, int step){
	int n = strlen(pStr)-step;
	if(n<=0){ return -1; }
	char tmp[strlen(pStr)*2];

	strcpy(tmp,pStr+n);
	strcpy(tmp+step,pStr);
	tmp[strlen(pStr)]='\0';
	
	strcpy(pStr,tmp);	
	return 0;
}

int main(){
	char a[10] = "123456789";
	char b[4] = "123";

	cout << (int*)a << ", " << (int*)b << endl;
	strcpy(b,a);
	
	cout << a << ", " << b << endl;
	if(LoopMove(a,3) != -1){
		cout << a << endl;
	}
}
