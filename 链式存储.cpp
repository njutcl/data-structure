//链式存储
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
char data; 
struct node *next;
}node; 
node *p,*q,*head;         //一般需要3个指针变量
int n ;                           // 数据元素的个数
int m=sizeof(node);   /*结构类型定义好之后，每个node类型的长度就固定了，m求一次即可*/
//输入 
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
	 
//输出	 
 void display()
 {
 p=head;
 while(p)	
 {
 	printf("%c",p->data)data;
 	p=p->next;
 }
 }
 
//修改 
Status GetElem_L(LinkList L, int i, ElemType &e)
{p=L->next; j=1;     //带头结点的链表
while(p&&j<i){p=p->next; ++j;}
if( !p || j>i ) return ERROR;
 p->data =e;   //若是读取则为：e=p->data; 
return OK;}// GetElem_L

//插入 
s=(node*)malloc(m);
s->data=X ;
s->next=p->next;
p->next=s;


//删除 
q = p->next;           //首先保存b的指针，靠它才能找到c；
p->next=q->next;  //将a、c两结点相连，淘汰b结点；
free(q) ；               //彻底释放b结点空间



//双向链表 
typedef    struct  DuLNode{
       ElemType           data;          //数据域
     struct DuLNode  *prior;       //前驱指针域
     struct DuLNode  *next;        //后继指针域
} DuLNode , *DuLinkList ;  

//插入
//设p已指向第 i 元素，请在第 i 元素前插入元素 x
   s->next=p;p->prior->next=s;
   s->prior=p->prior;p->prior=s;

//删除 
   p ->prior->next =  p->next  ; 
   p->next->prior = p ->prior ;           
