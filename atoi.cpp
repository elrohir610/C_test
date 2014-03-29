#include<iostream>

using namespace std;

int main(){
	int sum =0, i=0;
	char str[7] = {'1','2','3','4','5','\0'};
	while(str[i]){
		sum *=10;
		sum += (str[i]-'0');
		i++;
	}
	cout << sum << endl;
}
