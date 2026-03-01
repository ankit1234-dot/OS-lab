#include <stdio.h>

int main() {
    int n = 5;
    int bt[] = {5, 7, 6, 8, 5};
    int io[] = {2, 2, 3, 1, 2};
    int at[] = {0, 0, 0, 0, 0};
    
    int tat[5], wt[5], ct[5];
    int total_tat = 0, total_wt = 0;
    int time = 0;

    for(int i = 0; i < n; i++) {
        int total_time = bt[i] + io[i];
        
        time += total_time;     // completion time
        ct[i] = time;
        
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - total_time;

        total_tat += tat[i];
        total_wt += wt[i];
    }

    printf("Process\tCT\tTAT\tWT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", i, ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Turnaround Time = %.2f", (float)total_tat/n);
    printf("\nAverage Waiting Time = %.2f", (float)total_wt/n);

    return 0;
}