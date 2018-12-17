typedef struct {
	int id;
	double gpa;
}stu_t;


typedef stu_t LType;

typedef struct node_s
{
	LType data;
	struct node_s *next;

}node_t;



node_t *Getnode(void) {
	node_t *node;
	node = (node_t *)malloc(sizeof(node_t));
	node->next = NULL;
	return (node);
}
void addAfter(node_t *p, LType item)
{
	node_t *newp;
	newp = Getnode();
	newp->data = item;
	newp->next = p->next;
	p->next = newp;
}
node_t *add_beginning(node_t *headp,LType item)
{
	node_t *newp;

	newp = Getnode();

	newp->data = item;

	newp->next = headp;

	return (newp);
}
node_t *deletefirst(node_t *headp, LType *item)
{

	node_t *del;
	del = headp;
	*item = headp->data;
	headp = del->next;
	free(del);

	return (headp);
	


}
void deleteAfter(node_t *p, LType *item)
{
	node_t *del;
	del = p->next;
	*item = p->data;
	p->next = del->next;
	free(del);
	   
}



void display_list(node_t *headp)
{
	node_t *p;
	if (headp==NULL)
	{
		printf("The list is empty");
	}
	else
	{
		p = headp;
		while (p!=NULL)
		{
			printf("%d %0.5->", p->data.id,p->data.gpa);
			p = p->next;
		}
		printf("NULL\n\n");
	}
}

//This library designed for the structure type of variable.

