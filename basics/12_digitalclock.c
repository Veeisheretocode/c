#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
  time_t rawtime = 0;      // unix epoch- 1 jan 1970 -> use it to hold seconds
  struct tm *pTime = NULL; // tm-time
  bool isRunning = true;

  printf("DIGITAL CLOCK!\n");

  while (isRunning) {
    time(&rawtime);
    // printf("%ld\n", rawtime); //long decimal
    pTime = localtime(&rawtime);
    printf("%02d:%02d:%02d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
    sleep(1); // sleep for 1 second
  }
  return 0;
}