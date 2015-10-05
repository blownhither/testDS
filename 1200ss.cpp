#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxL 10000000
#include<iostream>
using namespace std;

char S1[MaxL], S2[MaxL];
int next[MaxL];

int kmp(char *S1,char *S2,int N,int M){
	cin>>S1>>S2;

	int N = strlen(S1), M = strlen(S2);
	int i, j;
	next[0] = -1;
	for (i = 1, j = -1; i < M; i ++) {
		while (j != -1 && S2[i] != S2[j+1])
			j = next[j];
		if (S2[i] == S2[j+1])
			j ++;
		next[i] = j;
	}
	//cout<<"next:";
	//for(int k=0;k<M;k++)cout<<next[k]<<" ";
	//cout<<endl;
	int count = 0;
	for (i = 0, j = -1; i < N; i ++) {//text只检查一遍
		while (j != -1 && S1[i] != S2[j+1])
			j = next[j];///下位不匹配使用跳转表
		if (S1[i] == S2[j+1])
			j ++;///下位匹配则继续检查
		if (j == M -1) {///delete M(-1)
			//flag = 1;
			count++;
			//printf("%d ", i - M + 1);
			j = next[j];
		}
	}


}
