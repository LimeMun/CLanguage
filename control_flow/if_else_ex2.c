#include <stdio.h>
int main(void){
	int parking_time, parking_fee = 0;
	printf("Enter Parking Time: ");
	scanf("%d", &parking_time);

	if(parking_time < 2){
		parking_fee = 0;
	}
	else{
		if(parking_time < 6){
			parking_fee = parking_time * 500;
		}
		else{
			parking_fee = parking_time * 1000;
		}
	}
	printf("%d\n", parking_fee);
}
