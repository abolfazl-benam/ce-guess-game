#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){srand(time(0));int s=rand()%100+1,g,t=0;printf("عدد 1-100 رو حدس بزن!\n");do{printf("حدست: ");scanf("%d",&g);t++;if(g<s)printf("بالاتر\n");else if(g>s)printf("پایین‌تر\n");}while(g!=s);printf("آفرین! %d حدس\n",t);return 0;}
