#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
} nd;
nd *start;
void insert_front(){
    nd *temp;
    temp=(nd*)malloc(sizeof(nd));
    printf(" Enter the data : ");
    scanf("%d",&temp->data);
    temp->link=start;
    start=temp;
}

void insert_last(){
    nd *ptr;
    ptr=start;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    nd *temp;
    temp=(nd*)malloc(sizeof(nd));
    printf(" Enter the data : ");
    scanf("%d",&temp->data);
    ptr->link=temp;
    temp->link=NULL;
}
void delete_first(){
    if(start==NULL)
	 printf("\n U N D E R F L O W");
	else
	{
		printf("\n Delete Element : %d",start->data);
		start=start->link;
	}
}

void display(){
    nd *ptr;
    ptr=start;
    int c=1;
    while(ptr!=NULL){

        printf("\n Element %d : %d",c++,ptr->data);
        ptr=ptr->link;
    }
}

void delete_end(){
    nd *ptr;
    ptr=start;
    while(ptr->link->link!=NULL){
        ptr=ptr->link;
    }
    printf("\n Delete Element : %d",ptr->link->data);
    ptr->link=NULL;

}
int main()
{
	int ch;
	start=NULL;
	while(1)
	{
		printf("\n\n 1 for Insert Front");
		printf("\n 2 for Insert Last");
		printf("\n 3 for Delete First ");
        printf("\n 4 for Delete Last ");
        printf("\n 5 for Display ");
		printf("\n 6 for Exit ");
		printf("\n Enter the choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			insert_front();
			break;
			
			case 2:
			insert_last();
			break;
			
			case 3:
			delete_first();
			break;

            case 4:delete_end();
            break;

            case 5:display();
            break;

			case 6:
			exit(1);
		}
	}
    return 0;
}