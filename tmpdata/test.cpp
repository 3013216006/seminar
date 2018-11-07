#include <bits/stdc++.h>
using namespace std;
char s[10100];
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%s",s);
		int l=strlen(s);
		for(int i=1;i<l;i+=2){
			swap(s[i],s[i-1]);
		}
		printf("%s\n",s);
	}
}