#include<stdio.h>
struct Time{
    int hours;
    int minutes;
    int seconds;
};
typedef struct Time Time;
Time DiffTime(Time time1,Time time2){
    int total1,total2,difftotal;
    Time difference;
    total1 = time1.hours*3600 +time1.minutes*60+time1.seconds;
    total2 = time2.hours*3600 +time2.minutes*60+time2.seconds;
    difftotal = total1-total2;
    difference.hours=difftotal/3600;
    difftotal%=3600;
    difference.minutes=difftotal/60;
    difference.seconds=difftotal%60;
    return difference;
}
int main() {
    Time time1, time2, difference;
    printf("Enter the first time period:\n");
    printf("Hours: ");
    scanf("%d", &time1.hours);
    printf("Minutes: ");
    scanf("%d", &time1.minutes);
    printf("Seconds: ");
    scanf("%d", &time1.seconds);
    printf("Enter the second time period:\n");
    printf("Hours: ");
    scanf("%d", &time2.hours);
    printf("Minutes: ");
    scanf("%d", &time2.minutes);
    printf("Seconds: ");
    scanf("%d", &time2.seconds);
    difference = DiffTime(time1, time2);
    printf("\nDifference between the two time periods:\n");
    printf("Hours: %d\n", difference.hours);
    printf("Minutes: %d\n", difference.minutes);
    printf("Seconds: %d\n", difference.seconds);
    return 0;
}