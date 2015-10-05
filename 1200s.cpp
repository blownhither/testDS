/*
As an example, consider N=3, NC=4 and the text "daababac". The different substrings of size 3 that can be found in this text are: "daa"; "aab"; "aba"; "bab"; "bac". Therefore, the answer should be 5. **/
#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<math.h>
//#include<cstring>
#include<string.h>
using namespace std;
char text[16000000];//to contain target string

int kmp_next(char *pattern, int next[],int length_pattern=-1){
	if(length_pattern==-1)length_pattern=strlen(pattern);
	next[0]=-1;
	int j=-1;
	for(int i=1;i<length_pattern;i++){
		while(j>-1&&pattern[i]!=pattern[j+1])
			j=next[j];
		if(pattern[i]==pattern[j+1])next[i]=next[j];
		else next[i]=j;

	}
	return 1;
}

int kmp_search(char *text, char *pattern, int length_text=-1,int length_pattern=-1){
	if(length_pattern==-1)length_pattern=strlen(pattern);
	if(length_text==-1)length_text=strlen(text);
	//forming next[]
	if(!(length_text&&length_pattern))return -1;
	int *next=new int[length_pattern+1];
	kmp_next(pattern,next,length_pattern);
	for(int i=0,j=-1;j<length_text;i++){
		while(i>-1&&pattern[i]!=text[j+1])j=next[j];
		if(text[i]==pattern[j+1])j++;
		if(i>=length_pattern-1){
			return j-i;
		}
	}
	return -1;


}

int main(){
int n,nc;
//while(cin>>n)
//	{
	long long count=0;
	scanf("%d %d",&n,&nc);
	//cin>>n>>nc;
	scanf("%s",text);
	for(int i=0;text[i+n]!='\0';i++){
		if(-1==kmp_search(text,text+i,i,n))count++;
	}
    cout<<count<<endl;
  //  }
    return 0;
}
/////////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
////using KMP!
//!!!!!!!!!!!!!!!!!!!!!!!11111
