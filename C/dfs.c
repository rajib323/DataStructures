//imeplement DFS
// 1 for ready (wait for stack), 2 for running (inside stack) 3 for execute (print)
#include<stdio.h>
#define MAX 10
int top;
void push(char s[], char k)
{
    if(top==MAX-1)
     printf("\n overflow");
    else
     s[++top]=k;
}

char pop(char s[])
{
    return s[top--];
}
void main()
{
    char stack[MAX],item;
    int a[MAX][MAX];
    int n,i,j,p,e;
    int s[MAX];
    top=-1;
    
    printf("Enter no. of vertex ");
    scanf("%d",&n);
    printf("\n enter value \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<MAX;i++)
     s[i]=1; // assign ready state for each node  ///initlaise
     
    printf("A ");
    s[0]=3; // execute [initialize]
    e=1;//AS first node already execute
    p=0;// as execute first node
    while(e<n)
    {
        for(j=0;j<MAX;j++)
        {
            if(a[p][j]==1 && s[j]==1)    //a[p][j]=1 neighbour
            {
              push(stack,(char)(j+65));
              s[j]=2;// update to running 
            }
        }
        item=pop(stack);
        p=(int)item-65; 
        s[p]=3; //update to execute
        printf(" %c",item);
        e++; // execute one element
    }
    
    
}