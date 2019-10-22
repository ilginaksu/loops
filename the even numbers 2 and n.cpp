#include<stdio.h>
int main(){
	int i;
	int n;
	printf("please enter value\n");
	scanf("%d",&n);
	printf("the numbers  2 and %d\n",n);
    for(i=2;i<=n;i+=2){
		printf("%d \n",i);
	}
	printf("after loop the value of i is %d",i);
}
