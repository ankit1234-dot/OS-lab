#include<stdio.h>
int main(){
int PID[5]={0,1,2,3,4};
int At[5]={0,0,0,0,0};
int Bt1[5]={5,7,6,8,5};

int IO[5]={2,2,3,1,2};
int Bt2[5]={3,2,4,2,5};
int PCT[5];
int Ct[5];
int TAT[5];
int n=sizeof(PID)/sizeof(int);
PCT[0]=At[0]+Bt1[0]+IO[0];
for(int i=1;i<5;i++){
PCT[i]=PCT[i-1]+Bt1[i]+IO[i];
}
Ct[0]=PCT[4]+Bt2[0];

for(int i=1;i<5;i++){
Ct[i]=Ct[i-1]+Bt2[i];
}


int SumTAT=0;
for(int i=0;i<5;i++){
TAT[i]=Ct[i]-At[i];
SumTAT=SumTAT+TAT[i];
}


int ATAT;
 printf("Average TAT:");
  ATAT=SumTAT/n;
   printf("%d",ATAT);
    

     int Wt[5];
      int AWT;
       int SumWt=0;
        for(int i=0;i<5;i++){
         Wt[i]=TAT[i]-(Bt1[i]+Bt2[i]);
          SumWt=SumWt+Wt[i];
           }
            

             printf("\nAverage waiting time:");
              AWT=SumWt/n; 
               printf("%d\n",AWT);
                
                 
                  printf("PID\tAt\tBt1\tIO\tBt2\tCt\tTAT\tWt\n");
                   for(int i=0;i<5;i++){
                    printf("p%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i,At[i],Bt1[i],IO[i],Bt2[i],Ct[i],TAT[i],Wt[i]);
                     }

                     printf("sum of all TAT %d\n",SumTAT);
                     printf("sum of all Wt %d\n",SumWt);

                     }