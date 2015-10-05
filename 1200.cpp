/*
As an example, consider N=3, NC=4 and the text "daababac". The different substrings of size 3 that can be found in this text are: "daa"; "aab"; "aba"; "bab"; "bac". Therefore, the answer should be 5. **/
#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<math.h>
//#include<cstring>
#include<string.h>
using namespace std;
char p[10000000];//to contain target string
int main(){
	int n,nc;
	cin>>n>>nc;
	scanf("%s",p);
	char *dict=new char[nc];
	//abandoned:form diction
	/*for(int i=0,all=-1;p[i]!='\0'&&all<nc-1;i++){
		char temp=p[i];
		int found=1;//found new
		for(int j=0;;j++){
			if(dict(j)==temp){
				found =0;
				break;
			}
		}
		if(found)dict[++all]=temp;
	}*/
	//form dictionary while scanning string p
	int dictMax=-1;
	for(int i=0;p[i+n]!='\0';i++){//p[i+n]!=ending
		char *tar=new char[n+1];
		strcpy(tar,p+i);
		//forming substring serial number
		for(int j=0;j<n;j++){
			char ch=tar[j];

		}
		//
	}
}

/////////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
////using KMP!
//!!!!!!!!!!!!!!!!!!!!!!!11111
