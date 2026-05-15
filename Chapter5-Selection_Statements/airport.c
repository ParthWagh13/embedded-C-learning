#include <stdio.h>

int main(void)

{
	int hours,minutes,time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&hours ,&minutes);

	time = (hours * 60) + minutes;

	if (time <= 531) {
		printf("departure = 8:00 a.m., arrival = 10:16 a.m.") ;
	}else if (time <= 631) {
		printf("departure = 9:43 a.m.,arrival = 11:52 a.m.");
	}else if (time <= 720) {
		printf("departure = 11:19 a.m., arrival = 1:31 p.m.");
	}else if (time <= 811) {
		printf("departure = 12:47 p.m., arrival = 3:00 p.m.");
	}else if (time <= 902) {
		printf("departure = 2:00 p.m. ,arrival = 4:08 p.m.");
	}else if (time <= 1042){
		printf("departure = 3:45 p.m., arrival = 5:55 p.m.");
	}else if (time <= 1222){
		printf("departure = 7:00 p.m., arrival = 9:20 p.m.");
	}else if (time <= 1305){
		printf("departure = 9:45 p.m., arrival = 11:58 p.m.");
	}else printf("departure = 8:00 a.m., arrival = 10:16 a.m.");


	return 0;
}

