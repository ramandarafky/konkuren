include <xinu.h>
void sndA(void);
void sndB(void);
process main(void)
{
 resume(create(sndA, 1024, 20, "process A", 0));
 resume(create(sndB, 1024, 20, "process B", 0));
 return OK;
}
void sndA(void)
{
 while(1) {
 printf("A\n");
 sleepms(1000);
 }
}
void sndB(void)
{
 while(1) {
 printf("B\n");
 sleepms(1000);
 }
}
 
 
 
#include <xinu.h>
void sndA(void);
void sndB(void);
process main(void)
{
 resume(create(sndA, 1024, 20, "process A", 0));
 resume(create(sndB, 1024, 20, "process B", 0));
 return OK;
}
void sndA(void)
{
 while(1) {
 printf("A\n");
 sleepms(1000);
 }
}
void sndB(void)
{
 while(1) {
 printf("B\n");
 sleepms(1000);
 }
}
