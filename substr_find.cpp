#include<iostream>
#include<string>
#include<map>
#include<utility>

using namespace std;

int main(){
	string str = "yyabcdabjcabceg";
	string tmp_str,ans;
	int max_len=0;
	map<string, int> unique;

	typedef pair<string, int> substr_key;

	for(int i=0;i<str.length();i++){
		for(int j=1;j<=str.length()-i;j++){
			tmp_str = str.substr(i,j);	

			if(unique.find(tmp_str)==unique.end()){
				unique.insert(substr_key(tmp_str,1));
			}
			else{
				if(tmp_str.length()>max_len){
					ans = tmp_str;
					max_len = tmp_str.length();		
				}
			}
		}
	}
	int index = str.find(ans);
	cout << ans << ": " << index+1 << ", " << max_len << endl;
	
}
