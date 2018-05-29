#include<bits/stdc++.h>
using namespace std;
void encrypt(char en[100],int k,int x);
void decrypt(char de[100],int k,int x);
int main(){
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	char e[n][100],d[n][100];
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(e[i]);
	}
	for(i=0;i<n;i++){
		fflush(stdin);
		gets(d[i]);
	}
	for(i=0;i<n;i++)
	    encrypt(e[i],k,i);
	for(i=0;i<n;i++)
	    decrypt(d[i],k,i);
}
void encrypt(char en[100],int k,int x){
	int w,i;
	for(i=0;i<100;i++){
		if(en[i]=='\0') break;
		if(en[i]>='a'&&en[i]<='z'){
		   w=96+(((int)en[i]+k)-96)%26;
		   en[i]=(char) w;
	    }
	    if(en[i]>='A'&&en[i]<='Z'){
	    	w=64+(((int)en[i]+k)-64)%26;
		   en[i]=(char) w;
		}
	}
	printf("ciphertext# %d: %s \n",x,en);
}
void decrypt(char de[100],int k,int x){
	int w,i;
	for(i=0;i<100;i++){
		if(de[i]=='\0') break;
		if(de[i]>='a'&&de[i]<='z'){
			w=122-(122-((int)de[i]-k))%26;
			de[i]=(char) w;
		}
		if(de[i]>='A'&&de[i]<='Z'){
			w=90-(90-((int)de[i]-k))%26;
			de[i]=(char) w;
		}
	}
	printf("plaintext# %d: %s \n",x,de);
}
