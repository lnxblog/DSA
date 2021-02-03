#include<stdio.h>
#include<stdlib.h>
typedef struct nod
{

int data;
struct nod *next;
}node;

node* head=NULL;

void insert()
{
        node *new_t,*prev,*curr;
        new_t=(node*) malloc(sizeof(node));
        printf("enter data\n");
        scanf("%d",&new_t->data);
	
	curr=head;
	prev=head;
        if(head==NULL)
        {
        	new_t->next=NULL;
	        head=new_t;
        }
        else
        {
		while(curr!=NULL)
	        {
		
			if(new_t->data > curr->data)
			{
				prev=curr;
		        	curr=curr->next;
        		}
			else
				break;
		}

		if(prev==curr)
		{
			head=new_t;
			new_t->next=curr;

		}
		else
		{
			prev->next=new_t;
			new_t->next=curr;
		}
		
	}

}

void display()
{
        node *temp;
        temp=head;
        while(temp!=NULL)
        {
        	printf("\n %d",temp->data);
	        temp=temp->next;
        }

}

void del()
{
	int index;
	node *prev,*curr;

	printf("enter index\n");

	scanf("%d",&index);
	
	prev=head;
	curr=head;

	while(index)
	{
		if(index==1)
		{
			if(curr==head)
			head=curr->next;
			else	
			prev->next=curr->next;
			free(curr);
			break;
		}
	
	prev=curr;
	curr=curr->next;
	index--;
	}
}

void reverse()
{

	node *temp,*prev,*curr;
	
	curr=head;

 	while(curr!=NULL)
	{
		temp= curr->next;

		if(curr==head)
		curr->next=NULL;
		
		else if(!temp)
		{
		 curr->next =prev;
		 head=curr;
		}
		else
		curr->next =prev;

		prev=curr;
		curr=temp;
	}	 
}
int main()

{
int opt;


	while(1)
	{

		printf("\n enter operation\n 1.insert\n 2.delete\n 3.display\n 4.reverse\n");
		scanf("%d",&opt);

		switch(opt)

		{
			case 1: insert();
			break;

			case 2: del();
				break;

			case 3: display();
			break;

			case 4: reverse();
			break;
		}

	}

}



