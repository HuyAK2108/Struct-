#include "Function.h"

int main(){
    struct Time Ti[5];
    struct Program Pg[5];
    struct Parameter Param[5];
    struct tm *timeinfo;
    time_t rawtime;
    FILE *fp;
    int x = 20;
    int ret = 0;
    
    for (int i = 0; i < 5; i++)
    {
        Testing.test.array[i] = i;
        printf("%d",Testing.test.array[i] = i);
    }
    

    printf("%d\t%d\t%d\n",OK,FAIL,NG_SYSTEM);
    printf("Data: %d\nTime: %d",__DATE__,__TIME__);
    if ((fp = fopen("D:/Microsoft VS Code/Projects/test/log.txt","r")) == NULL)
    {
        ret = 1;
    }

    if (ret == 0)
    {
        fp = fopen("D:/Microsoft VS Code/Projects/test/log.txt","a");

        time(&rawtime);
        timeinfo = localtime(&rawtime);
        fprintf(fp,"\nDate and time : %s",asctime(timeinfo));
        for (int i = 0; i < 200; i++)
        {
            rxbuff[i] = i;
        }
        fprintf(fp,"------------------------------------------------------\n");
        for(int i = 0; i <= 4; i++)
        {
            Param[i].Amount   = rxbuff[6 + x * i];
            Pg[i].before      = rxbuff[7 + x * i];
            Pg[i].water       = rxbuff[8 + x * i];
            Pg[i].after       = rxbuff[9 + x * i];
            Pg[i].Program     = rxbuff[11 + x * i];
            Pg[i].Cycle       = rxbuff[12 + x * i];
            Pg[i].WaterNo     = rxbuff[13 + x * i];
            Pg[i].mintime_m   = rxbuff[14 + x * i];
            Pg[i].mintime_h   = rxbuff[15 + x * i];
            Pg[i].Valve1      = rxbuff[19 + x * i];
            Pg[i].Valve2      = rxbuff[20 + x * i];

            fprintf(fp,"| Program[%d]  | Before : %d\tWater : %d\tAfter : %d |\n",i,Pg[i].before,Pg[i].water,Pg[i].after);
            fprintf(fp,"|             | Amount : %d\tValve1: %d\tValve2: %d |\n",i,Param[i].Amount,Pg[i].Valve1,Pg[i].Valve2);
            fprintf(fp,"|             | WaterNo: %d\tCycle : %d             |\n", Pg[i].WaterNo,Pg[i].Cycle);
            fprintf(fp,"------------------------------------------------------\n");
        }
    }
    fclose(fp);
    
}