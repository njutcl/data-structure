 #define     STACK-INIT-SIZE      100  //存储空间初始分配量
  #define     STACKINCREMENT    10   //存储空间分配增量
            typedef    struct{
                            SElemType     *base;    //栈的基址即栈底指针
                            SElemType     *top;     //栈顶指针
                            int               stacksize;  //当前分配的空间
                           }SqStack;
  //顺序栈入栈函数Push()
status Push(ElemType e) 
{ if(top>M){上溢}
  else s[top++]=e;
}
//顺序栈出栈函数Pop()
status Pop( )
{ if(top=L) { 下溢 }
else { e=s[--top];     return(e);} 
 }


//链队列类型定义 
 typedef struct{
 	Queue front;
 	Queue rear;
 } listQueue;
//结点类型定义
typedef struct Qnode{
	QElemType data;
	struct Qnode *next;
} Qnode,*QueuePtr;
入队（尾部插入）：rear->next=S; rear=S;
出队（头部删除）：front->next=p->next;

//顺序队 

#define QUEUE-MAXSIZE 100
typedef struct{
	QElemType *base;
	int front;
	int rear;
} SqQueue;
q.base=(QElemType*)malloc(sizeof(QElemType)*QUEUE-MAXSIZE);
入队(尾部插入)： Q[rear]=e; rear++ ; 
出队(头部删除)： e=Q[front]; front++;
   q.front =q.rear=0; //置空队列
   
   
//入队   
   Status   EnQueue(SqQueue  &q,    QElemType e)
{//向循环队列 q 的队尾加入一个元素 e

   if (   (q.rear+1) %  QUEUE_MAXSIZE = =  q.front  ) 
                    return  ERROR ; //队满则上溢，无法再入队 
      q.base [ q.rear ] = e;    //新元素e入队
  q.rear = ( q . rear + 1 ) %  QUEUE_MAXSIZE; //指针后移
      return  OK;
 }// EnQueue;

//出队 
Status     DeQueue ( SqQueue  &q,    QElemType &e)
 {//若队列不空，删除循环队列q的队头元素，
        //由 e 返回其值，并返回OK
      if ( q.front = = q.rear )   return ERROR;//队列空
      e = q.base [ q.front ] ;
     q.front=(q.front+1) % QUEUE_MAXSIZE ;   
     return OK;
    }// DeQueue
 