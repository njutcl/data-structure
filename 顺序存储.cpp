#include <stdio.h>


	void build(int n) 
 { 
 
  	int i;	
 	v[0]='a';
 	for(i=1;i<=n-1;i++)
 	v[i]=v[i-1]+1;
 	}
 	void display(int n)
 	{
	 	int i;
	 	for(i=0;i<=n-1;i++)
	 	printf("%c",v[i]);
	 	printf("\n");
	 }
main(){
	
	//����
char v[30];
int n=26;
build(n);
display(n);
//���Ա�
//˳��洢�ṹ 
//�޸�
V[i]=x; 

//���� 
//�����Ա�ĵ�i��λ��ǰ����һ��Ԫ�� 
for(j=n;j>=i;j--) 
a[j+1]=a[j];
a[i]=x;
n++;
//ɾ�� 
//����i+1����nλ��Ԫ��ǰ��һλ 
for(j=i+1;j<=n;j++) 
a[j-1]=a[j]; 
n--;





//��̬����
#define LIST_INIT_SIZE       100 //�洢�ռ�ĳ�ʼ������
#define LISTINCREMENT    10//�洢�ռ�ķ�������
typedef struct{
                ElemType *elem;     //���ַ(��ָ��*elem��ʾ��
                int             length;    //���ȣ������ж��ٸ�Ԫ�أ�
                int            listsize;   //��ǰ����ı�ߴ磨�ֽڵ�λ��
}SqList;
//���� 
Status InitList_Sq( SqList  &L )     //����һ�������Ա�
{   L.elem=(ElemType*)malloc(LIST_INIT_SIZE * 
       sizeof(ElemType));
       if(!L.elem)  exit(OVERFLOW); //����ʧ�ܣ���������
        L.length=0;                               //����Ԫ�ط��룬�ձ�
        L.listsize=LIST_INIT_SIZE;      //��ߴ�=��ʼ������
        Return OK;
} //InitList_Sq
//����


Status ListInsert_Sq(SqList &L, int i, ElemType e)
{  //��˳�����Ա��е�i��λ��֮ǰ�����µ�Ԫ��e
if( i < 1 or i > L.length+1) return ERROR;  // ����i ֵ�ĺϷ���
if ( L.length �� L.listsize )  //����������ߴ���Ҫ���ӳߴ� 
  {  newbase = ( ElemType* ) realloc ( L.elem , (L.listsize + LISTINCREMENT )* sizeof ( ElemType ) );

if (newbase=NULL )exit( OVERFLOW ) ; //����ʧ�����˳�������
      L.elem = newbase ;                         //�����»�ַ
      L.listsize = L.listsize + LISTINCREMENT ; } //���ӱ�ߴ�
 q = &L.elem[i-1] ;        // qΪ����λ�á�����û��ͷ�������
 for ( p = L.elem[L.length-1] ;  p>=q ; --p ) *(p+1) = *p ;
                          //����λ�ü�֮���Ԫ��ͳͳ����, pΪԪ��λ��
 *q= e ;                         //����e
++L.length ;               //����1������Ԫ�أ����+1
  return OK ; 
} //ListInsert_Sq
}
