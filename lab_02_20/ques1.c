#include<stdio.h>
int main()
{
    int i,j,n,bt[5],wt[5],tat[5],ct[5],at[5];
    float awt=0,atat=0;
    printf("Enter the no. of process:");
    scanf("%d",&n);
    printf("Enter the burst time of the process:");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    printf("Enter the arrival time of the process:");
    for(i=0;i<n;i++){
        scanf("%d",&at[i]);
    }
    ct[0] = 0;
    printf("process\t burst time\t compilition time\t arrival time\t waiting time\t turn around time\n");
    for(i=0;i<n;i++){
        wt[i] =0;
        tat[i] = 0;
        ct[i+1] = ct[i]+bt[i];
        wt[i] = ct[i] - at[i];
        tat[i] = wt[i]+bt[i];
        awt = awt+wt[i];
        atat = atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],ct[i],at[i],wt[i],tat[i]);
    }
    awt = awt/n;
    atat = atat/n;
    printf("average waiting time: %f\n",awt);
    printf("average turn around turn timr: %f",atat);
}