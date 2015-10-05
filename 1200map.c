
#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;
#include<string.h>

#define maxLen 16000010
char text[maxLen];
int hashMap[maxLen]={0};
int main(){
	int n,nc;//n=len_word,nc=cap_dict
	cin>>n>>nc;
	scanf("%s",text);
	int len=strlen(text);

//forming dict
	int dict[256]={0};//size of common ascii
		//instead of for(int i=0;i<128;i++)dict[i]=0;
	for(int i=0,j=1;j<=nc;i++){//0 not permitted as dict entry
		if(dict[text[i]]==0)
			dict[text[i]]=j++;
	}	
	
//insert into map
	for(int i=0;i+n<=len;i++){
		long long hash=0;
		for(int j=0;j<n;j++){
			hash=hash*nc+dict[text[i+j]]-1;
		}
		hashMap[hash]=1;
	}

//count
	int count=0;
	for(int i=0;i<maxLen;i++)
		if(hashMap[i])count++;
	cout<<count;
	return 0;
}
