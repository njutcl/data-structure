//��ʽ�洢
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
char data; 
struct node *next;
}node; 
node *p,*q,*head;         //һ����Ҫ3��ָ�����
int n ;                           // ����Ԫ�صĸ���
int m=sizeof(node);   /*�ṹ���Ͷ����֮��ÿ��node���͵ĳ��Ⱦ͹̶��ˣ�m��һ�μ���*/
//���� 
 void build()
 {
 	int i;
 	head=(node*)malloc(m);
 	p=head;
 	for(i=1;i<26;i++)
 	{
	 	p->data=i+'a'-1;
	 	p->next=(node*)malloc(m);
	 	p=p->next;
 	}
p->data=i+'a'-1;
p->next=NULL; 	
	 }
	 
//���	 
 void display()
 {
 p=head;
 while(p)	
 {
 	printf("%c",p->data)data;
 	p=p->next;
 }
 }
 
//�޸� 
Status GetElem_L(LinkList L, int i, ElemType &e)
{p=L->next; j=1;     //��ͷ��������
while(p&&j<i){p=p->next; ++j;}
if( !p || j>i ) return ERROR;
 p->data =e;   //���Ƕ�ȡ��Ϊ��e=p->data; 
return OK;}// GetElem_L

//���� 
s=(node*)malloc(m);
s->data=X ;
s->next=p->next;
p->next=s;


//ɾ�� 
q = p->next;           //���ȱ���b��ָ�룬���������ҵ�c��
p->next=q->next;  //��a��c�������������̭b��㣻
free(q) ��               //�����ͷ�b���ռ�



//˫������ 
typedef    struct  DuLNode{
       ElemType           data;          //������
     struct DuLNode  *prior;       //ǰ��ָ����
     struct DuLNode  *next;        //���ָ����
} DuLNode , *DuLinkList ;  

//����
//��p��ָ��� i Ԫ�أ����ڵ� i Ԫ��ǰ����Ԫ�� x
   s->next=p;p->prior->next=s;
   s->prior=p->prior;p->prior=s;

//ɾ�� 
   p ->prior->next =  p->next  ; 
   p->next->prior = p ->prior ;           
