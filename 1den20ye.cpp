#include<stdio.h>
int main(){
	int i;
	int entered;
	printf("please enter value\n");
	scanf("%d",&entered);
	printf("the numbers betwwen 2 and %d",entered);
    for(i=2;i<=entered;i=i+1){
		printf("\n%d\n",i);
	}
	printf("the even numbers betwwen 2 and %d\n",entered);
	for(i=2;i<=entered;i=i+2){
		printf("\n%d\n",i);
	}
	printf("the odd numbers betwwen 2 and %d\n",entered);
	for(i=3;i<=entered;i=i+2){
		printf("\n%d\n",i);
	}
}

