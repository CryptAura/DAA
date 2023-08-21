#include <stdio.h>
#include <time.h>
int main(){
    clock_t Start,end;
double CPU_time_used;
Start=clock();
int i,Sum=0;
for (i=0;i<10;i++)
{
  Sum+=i;          //Program's complexity is Constant.

}
end=clock();
CPU_time_used=((double)(end-Start))/CLOCKS_PER_SEC;
 printf("CPU time used: %f seconds\n", CPU_time_used);
}
