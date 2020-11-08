#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[30];
	int result[30];
	int i,j=0,k,sum=0;
	for(i=0;i<30;i++){
		str[i]=-1;
	}
	scanf("%s",str);
	for(i=0;str[i]!=-1;i++){
		if(str[i]>='0'&&str[i]<='9'){
			sum+=(str[i]-48);
			sum*=10;
		}
		else{
			if(sum!=0){
				result[j]=sum/10;
				j++;
				sum=0;
			}
		}
	}
	for(k=0;k<j;k++){
		printf("%d\n",result[k]);
	}
	return 0;
}