typedef struct node{
	int data;
	struct node *lchild,*rchild;
}node;
node *root;

//������� 
 
DLR(node *root)
{
	if(root!=NULL)
{
	printf("%d",root->data);
DLR(root->lchild);
DLR	(root->rchild);
}return 0;
}
//�������
LDR(node *root)
{
	if(root!=NULL)
	{
		LDR(root->lchild)
		{
			printf("%d",root->data);
			LDR(root->rchild);
		}return 0;
	}
} 

//������� 
LRD(node *root)
{
	if(root!=NULL)
{
	LDR(root->lchild)
	LDR(root->rchild)
printf("%d",root->data)
}
return 0;
}