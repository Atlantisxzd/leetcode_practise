#include <stdlib.h>
#include <stdio.h>


int main(){
	int x=0,n=6,i=0,j=0;
	char st[]="IVXLCDM";
	int num[]={1,5,10,50,100,500,1000};
	char s[]="MCMXCIV";

	while(n>0){
		for(i=0;i<7;i++)
			if(st[i]==s[n]){
				j=i;
				break;
			}
		n--;
		for(i=0;i<7;i++)
			if(st[i]==s[n])
				break;
		if(j>i){
			x=x+num[j]-num[i];
			n--;
		}
		else
			x=x+num[j];
	}
	if(j>i){
		for(i=0;i<7;i++)
			if(st[i]==s[0]){
				break;
			}
		x=x+num[i];
	}



	printf("%d,hello world!\n",x);
	system("pause");
	return 0;
}


//	scanf("%d",&x);
	/*while(s[n]==st[j]){
	i++;
	n--;}
	j++;
	while(n>=0){

		while(s[n]==st[j-1]||s[n]==st[j]){
			if(s[n]==st[j])
				i=i+num[j];
			if(s[n]==st[j-1])
				i=i-num[j-1];
			n--;
		}
		j++;
	}*/