#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned long computeTotalSeconds(const char* timeStr) {
    char* token;
    char* delimiter = ":";
    unsigned long totalSeconds = 0;
    unsigned long hours, minutes, seconds;
    token = strtok((char*)timeStr, delimiter);
    hours = strtoul(token, NULL, 10);
    token = strtok(NULL, delimiter);
    minutes = strtoul(token, NULL, 10);
    token = strtok(NULL, delimiter);
    seconds = strtoul(token, NULL, 10);
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}
int main() {
    char timeStr[10];
    unsigned long totalSeconds;
    printf("Enter time in the format \"hh:mm:ss\": ");
    scanf("%s", timeStr);
    totalSeconds = computeTotalSeconds(timeStr);
    printf("Total seconds: %lu\n", totalSeconds);
    return 0;
}
