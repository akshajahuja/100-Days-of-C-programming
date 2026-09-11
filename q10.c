//Q10: Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>

int main(){
	int inputSecond;
	int hours,minutes,seconds;
	int remainingSeconds;
	int secondsInHour = 60 * 60;
	int secondsInMinute = 60;
	printf("Enter the seconds value: ");
	scanf("%d",&inputSecond);
	hours = (inputSecond/secondsInHour);
	remainingSeconds = inputSecond - (hours * secondsInHour);
	minutes = remainingSeconds/secondsInMinute;
	remainingSeconds = remainingSeconds - (minutes*secondsInMinute);
	seconds = remainingSeconds;
	printf("%d hour, %d minutes and %d seconds",hours,minutes,seconds);
}
