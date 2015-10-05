/*    One line with the word W, a string over {'A', 'B', 'C', …, 'Z'}, with 1 ≤ |W| ≤ 10,000 (here |W| denotes the length of the string W).
 *        One line with the text T, a string over {'A', 'B', 'C', …, 'Z'}, with |W| ≤ |T| ≤ 1,000,000.})}*/

#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;
#include<string.h>

char text[1000010],word[10010];
int main(){
	int num_case;cin>>num_case;
	for(int cases=0;cases<num_case;cases++){
		scanf("%s",word);
		scanf("%s",text);
		char *h=text;
		int count=0;
		while((h=strstr(h,word))!=NULL){
			count++;
			h++;
			//if(*h=='\0')break;
		}
		cout<<count<<endl;
	}


	return 0;
}
