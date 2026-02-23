#include <stdio.h>

int main() {
    int n = 5;

        int AT[5] = {0, 0, 0, 0, 0};
            int BT[5] = {5, 7, 6, 8, 5};
                int IO[5] = {2, 2, 3, 1, 2};

                    int CT[5], TAT[5], WT[5];
                        int totalTAT = 0, totalWT = 0;

                            int currentTime = 0;

                                printf("Process\tAT\tBT\tIO\tCT\tTAT\tWT\n");

                                    for(int i = 0; i < n; i++) {

                                            // Completion Time
                                                    currentTime += BT[i] + IO[i];
                                                            CT[i] = currentTime;

                                                                    // Turnaround Time
                                                                            TAT[i] = CT[i] - AT[i];

                                                                                    // Waiting Time
                                                                                            WT[i] = TAT[i] - (BT[i] + IO[i]);

                                                                                                    totalTAT += TAT[i];
                                                                                                            totalWT += WT[i];

                                                                                                                    printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
                                                                                                                                   i, AT[i], BT[i], IO[i], CT[i], TAT[i], WT[i]);
                                                                                                                                       }

                                                                                                                                           printf("\nAverage Turnaround Time = %.2f", (float)totalTAT / n);
                                                                                                                                               printf("\nAverage Waiting Time = %.2f\n", (float)totalWT / n);

                                                                                                                                                   return 0;
                                                                                                                                                   }