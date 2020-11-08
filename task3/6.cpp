#include<stdio.h>
#include<stdlib.h>

int main(){
	char str[30];
	double result[30];
	int i,j=0,k;
	double sum=0;
	double buffer1=10,buffer2=1;
	for(i=0;i<30;i++){
		str[i]=-1;
	}
	scanf("%s",str);
	for(i=0;str[i]!=-1;i++){
		if(str[i]<='9'&&str[i]>='0'||str[i]=='.'){
			if(str[i]!='.'){				
				sum+=(str[i]-48)*buffer2;
				if(sum>(int)sum){
					buffer2/=10;
				}
				sum*=buffer1;
			}
			else{
				sum/=10;
				buffer1=1;
				buffer2=0.1;
			}
		}
		else{
			if(sum!=0){
				if(sum>(int)sum)
				{
				result[j]=sum;
				}
				else
				{
					result[j]=sum/10;	
				}
				j++;
				sum=0;
				buffer1=10;
				buffer2=1;
			}
		}
	}
	for(k=0;k<j;k++){
		printf("%f\n",result[k]);
	}
	return 0;
}