#include "test_factorial.h"
#include<stdio.h>
#include<string.h>
#define MAX 20
int a,b,c,d;
typedef struct
{
    int V[MAX];
    int rp;
    int fp;
    int counter;
}QUE;
  QUE p1;
  QUE p2;
  QUE p3;
  QUE p4;
   int b1=0;
    int b2=0;
    int b3=0;
    int b4=0;
int check2(char t1[10],char t2[10])
{
   if(strcmp(t1,"wet")==0 && strcmp(t2,"metal")==0)
        {
            b=1;
        return(b+1);
        }
    else if(strcmp(t1,"wet")==0 && strcmp(t2,"paper")==0)
    {
        c=1;
        return(c+2);
    }
    else if(strcmp(t1,"wet")==0 && strcmp(t2,"plastic")==0)
    {
        c=1;
        return(c+2);
    }
    else if(strcmp(t1,"metal")==0 && strcmp(t2,"paper")==0)
    {
        b=1;
        return(b+1);
    }
    else if(strcmp(t1,"metal")==0 && strcmp(t2,"plastic")==0)
    {
        b=1;
        return(b+1);
    }
    else if(strcmp(t1,"paper")==0 && strcmp(t2,"platic")==0)
    {
        return(0);
    }
}
int check3(char t1[10],char t2[10],char t3[10])
{
 if(strcmp(t1,"wet")==0 && strcmp(t2,"metal")==0 && strcmp(t3,"paper")==0)
 {
     a=1;
     return(a);
 }
 if(strcmp(t1,"wet")==0 && strcmp(t2,"metal")==0 && strcmp(t3,"plastic")==0)
 {
     b=1;
     return(b+1);
 }
}
int out(QUE *arg )
{
    int element;
    element = arg->V[ arg->fp];
    arg->fp++;
    arg->fp = arg->fp % MAX;
    arg->counter--;
    return element;
}

void display( QUE arg )
{
    int i , j;
    j = arg.fp;
    for( i=1; i<=arg.counter; i++)
    {
        printf("[%d]\t", arg.V [ j ]);
        j++;
        j = j % MAX;
    }
}

void in( QUE *arg , int id )
{
    if( arg->counter == MAX )
        printf("Ur requested can't be processed now...\n");
    else
    {
        arg->V [ arg->rp] = id;
        arg->rp = arg->rp+1;
        arg->rp = arg->rp % MAX;
        arg->counter++;
}
}
int last(QUE *arg )
{
    int element;
    element = arg->V[ arg->fp];
    arg->fp++;
    arg->fp = arg->fp % MAX;
    arg->counter--;
    return element;
}
int show(QUE *arg,int id)
{
    int i=arg->V[id-1];
    return(i);
}
int emergency_text(int b1)
{
    if(b1>80)
        return(1);
    else
        return(0);
}
int emergency_call(int b1)
{
    if(b1>80)
        return(1);
    else
        return(0);
}
int emergency_alert(int b1)
{
    if(b1>80)
        return(100);
    else
        return(0);
}
int max(QUE *arg)
{
    int i=arg->V[arg->fp];
    int k=arg->rp;
    int j=arg->fp;
    while(j!=k)
    {
    if(arg->V[j]>i)
    i=arg->V[j];
    j++;
    }
    return(i);
}
int min(QUE *arg)
{
    int i=arg->V[arg->fp];
    int k=arg->rp;
    int j=arg->fp;
    while(j!=k)
    {
    if(arg->V[j]<i)
    i=arg->V[j];
    j++;
    }
    return(i);
}
int checkbin(int i)
{
    int b1=i;
    if(b1>=80)
    {
        b1=0;
        return(0);
    }
    else
    {
        return(0);
    }
}
void dis(void)
{
    printf("\n");
    display(p1);
    printf("\n");
    display(p2);
    printf("\n");
    display(p3);
    printf("\n");
    display(p4);
    printf("\n");
}
void data(void)
{
  if(a==1)
  {
      b1+=10;
      in(&p1,b1);
      a=0;
  }
 if(b==1)
  {
      b2+=10;
      in(&p2,b2);
      b=0;
  }
  if(c==1)
  {
      b3+=10;
      in(&p3,b3);
      c=0;
  }
 if(d==1)
  {
     b4+=10;
     in(&p4,b4);
     d=0;
  }
}
int main(void)
{
	test_main();
	return 0;
}
