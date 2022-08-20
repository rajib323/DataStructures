#include <stdio.h>
#include <limits.h>
int **m,**kt;
int n;
int mat(int pt[],int i,int j){
	if(i==j)
		return 0;
	else{
		int k=i,min=INT_MAX,sum=0,p=0;
		
		for (;k<=j-1;k++){
			if(m[i][k]==-1)
				mat(pt,i,k);
			if(m[k+1][j]==-1)
				mat(pt,k+1,j);
			sum=m[i][k]+m[k+1][j]+pt[i-1]*pt[k]*pt[j];
			if(sum<=min){
				min=sum;
				p=k;
			}
		}
		
		m[i][j]=min;
		kt[i][j]=p;
		
		return min;
	}
}

void mcn_parenthesize(int i,int j){
    if(i==j)
        printf("A%d",i);
    else{
        printf(" ( ");
        mcn_parenthesize(i,kt[i][j]);
        printf(" X ");
        mcn_parenthesize(kt[i][j]+1,j);
        printf(" ) ");
    }
}

void print_matrix(){
    int i,j;

    printf("\n\nM - Matrix : \n\n");

    for (i=1;i<n;i++){
        for (j=1;j<n;j++){
            printf("%d\t",m[i][j]);
        }	
        printf("\n");
    }
    printf("\n\nK - Matrix : \n\n");
    for (i=1;i<n;i++){
        for (j=1;j<n;j++){
            printf("%d\t",kt[i][j]);
        }	
        printf("\n");
    }
}

int main(){
    int i,j;
    int *p;
    printf("Enter no. of matrices : ");
    scanf("%d",&n);
    n=n+1;
    m = (int**)malloc(n * sizeof(int*));
    kt = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
        m[i] = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        kt[i] = (int*)malloc(n * sizeof(int));
	p=malloc(n * sizeof(int));
	
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			m[i][j]=-1;
			if(i>=j){
				m[i][j]=0;
				
			}
		}	
	}
    for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			kt[i][j]=0;
		}	
	}

    
    for (i=0;i<n;i++){
		printf("Enter p[%d] : ",i);
        scanf("%d",&p[i]);
	}

    
    mat(p,1,n-1);

    print_matrix();

    printf("\n\nParenthisization : ");
    mcn_parenthesize(1,n-1);
}