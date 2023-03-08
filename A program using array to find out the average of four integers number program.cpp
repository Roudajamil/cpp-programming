#include<stdio.h>
int main(){
	int array[4]={20,30,40,50};
	int sum;
	for(int i=0;i<4;i++){
		sum+=array[i];
	}
	printf("Sum of 4 numbers is:%i\n\n",sum);
	
	float avg=sum/4;
	printf("The average of 4 numbers is:%f",avg);
	
	return 0;
}
