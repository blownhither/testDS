/*The input contains several testcases. Each is specified by two strings s, t of alphanumeric ASCII characters separated by whitespace.The length of s and t will no more than 100000.*/

#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;
#include<string>
	
int main(){
	string s,t;
	while(cin>>s)
	{
		cin>>t;
		int ls=s.length();
		int lt=t.length();
		int found=0;
		for(int i=0,j=0;i<ls&&j<lt;i++){
			for(;j<lt;j++){
				if(s[i]==t[j]){
					j++;
					if(i+1==ls){found=1;break;}
				}
			}
			if(found )break;
		}
		if(found)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		string s,t;
	}
}
