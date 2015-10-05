/*A single positive integer m (2 <= m <= 10) indicating the number of base sequences in this dataset.
 * m lines each containing a single base sequence consisting of 60 bases)*/
#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
char base[10][100];
char ans[100],ans_a[100];
int main(){
	int set;
	cin>>set;

	for(int count=0;count<set;count++){
		//m is num of lines of each set
		ans[0]=ans_a[0]='\0';
		int m;cin>>m;
		if(m==1)cout<<"no significant commonalities"<<endl;
		for(int i=0;i<m;i++)
			scanf("%s",base[i]);
		int len1=strlen(base[0]);
		int found=0;
		for(int len=len1;len>2;len--){
			for(int h=0;h<=len1-len;h++){
				strncpy(ans,&base[0][h],len);
				ans[h+len]='\0';
				int count=0;
				for(int i=1;i<m;i++){
					if(strstr(base[i],ans)!=NULL)count++;
				}
				if(count==m-1){
					found=1;
                    if(ans_a[0]=='\0')strcpy(ans_a,ans);
                    if(strcmp(ans,ans_a)<0)strcpy(ans_a,ans);
				}
			}
			if(found)break;
		}
		if(found)cout<<ans_a<<endl;
		else cout<<"no significant commonalities"<<endl;
	}
	return 0;

}
//strstr(str,sub)
//strncpy() and set '\0'
