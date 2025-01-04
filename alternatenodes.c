//create c pro which will take an no notes of users print all alternetive notes 
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
};
void main()
{
	int n,i;
	
		struct Node*head=NULL;
		struct Node*p;
		printf("\n how many nodes :");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			p=(struct Node *)malloc(sizeof(struct Node));
			printf("\n enter data");
			scanf("%d",&p->data);
			p->next = head;
			head=p;
			printf("\n Node inserted\n");

		}
		p=head;
		
		while(p!=NULL)
		{
			printf("%d\n",p->data);
			p=p->next;
			p=p->next;
		}

}