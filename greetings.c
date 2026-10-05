#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
	time_t now;
	struct tm *clock;
	int hour;

	time(&now);
	clock = localtime(&now);
	hour = clock -> tm_hour;

	puts("Time details:");
	printf(" Day of the year: %d\n", clock->tm_yday);
	printf(" Day of the week: %d\n", clock->tm_wday);
	printf("            Year: %d\n", clock->tm_year+1900);
	printf("           Month: %d\n", clock->tm_mon+1);
	printf("Day of the month: %d\n", clock->tm_mday);
	printf("The computer thinks it's %ld\n", now);
	printf("%s", ctime(&now));
	printf("Good ");
	if (hour < 12)
		printf("morning");
	else if (hour < 17)
		printf("afternoon");
	else
		printf("evening");

	if(argc<2)
		puts(", User!");
	else
		printf(", %s!",argv[1]);

	putchar('\n');
	
	return 0;

}
