 #define     STACK-INIT-SIZE      100  //�洢�ռ��ʼ������
  #define     STACKINCREMENT    10   //�洢�ռ��������
            typedef    struct{
                            SElemType     *base;    //ջ�Ļ�ַ��ջ��ָ��
                            SElemType     *top;     //ջ��ָ��
                            int               stacksize;  //��ǰ����Ŀռ�
                           }SqStack;
  //˳��ջ��ջ����Push()
status Push(ElemType e) 
{ if(top>M){����}
  else s[top++]=e;
}
//˳��ջ��ջ����Pop()
status Pop( )
{ if(top=L) { ���� }
else { e=s[--top];     return(e);} 
 }


//���������Ͷ��� 
 typedef struct{
 	Queue front;
 	Queue rear;
 } listQueue;
//������Ͷ���
typedef struct Qnode{
	QElemType data;
	struct Qnode *next;
} Qnode,*QueuePtr;
��ӣ�β�����룩��rear->next=S; rear=S;
���ӣ�ͷ��ɾ������front->next=p->next;

//˳��� 

#define QUEUE-MAXSIZE 100
typedef struct{
	QElemType *base;
	int front;
	int rear;
} SqQueue;
q.base=(QElemType*)malloc(sizeof(QElemType)*QUEUE-MAXSIZE);
���(β������)�� Q[rear]=e; rear++ ; 
����(ͷ��ɾ��)�� e=Q[front]; front++;
   q.front =q.rear=0; //�ÿն���
   
   
//���   
   Status   EnQueue(SqQueue  &q,    QElemType e)
{//��ѭ������ q �Ķ�β����һ��Ԫ�� e

   if (   (q.rear+1) %  QUEUE_MAXSIZE = =  q.front  ) 
                    return  ERROR ; //���������磬�޷������ 
      q.base [ q.rear ] = e;    //��Ԫ��e���
  q.rear = ( q . rear + 1 ) %  QUEUE_MAXSIZE; //ָ�����
      return  OK;
 }// EnQueue;

//���� 
Status     DeQueue ( SqQueue  &q,    QElemType &e)
 {//�����в��գ�ɾ��ѭ������q�Ķ�ͷԪ�أ�
        //�� e ������ֵ��������OK
      if ( q.front = = q.rear )   return ERROR;//���п�
      e = q.base [ q.front ] ;
     q.front=(q.front+1) % QUEUE_MAXSIZE ;   
     return OK;
    }// DeQueue
 