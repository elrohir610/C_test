#include<iostream>

using namespace std;

int main(){
	int num =12345, j=0, i=0;
	char tmp[7], str[7];

	while(num>=10){
		tmp[i]=num%10+'0';
		i++;
		num/=10;
	}
	tmp[i]=num%10+'0';
	tmp[i+1]=0;

	while(i>=0){
		str[j] = tmp[i];
		i--;
		j++;
	}
	str[j+1]=0;
	
	cout << str << endl;
}
