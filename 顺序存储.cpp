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
	
	//建表
char v[30];
int n=26;
build(n);
display(n);
//线性表
//顺序存储结构 
//修改
V[i]=x; 

//插入 
//在线性表的第i个位置前插入一个元素 
for(j=n;j>=i;j--) 
a[j+1]=a[j];
a[i]=x;
n++;
//删除 
//将第i+1至第n位的元素前移一位 
for(j=i+1;j<=n;j++) 
a[j-1]=a[j]; 
n--;





//动态数组
#define LIST_INIT_SIZE       100 //存储空间的初始分配量
#define LISTINCREMENT    10//存储空间的分配增量
typedef struct{
                ElemType *elem;     //表基址(用指针*elem表示）
                int             length;    //表长度（表中有多少个元素）
                int            listsize;   //当前分配的表尺寸（字节单位）
}SqList;
//建表 
Status InitList_Sq( SqList  &L )     //创建一个空线性表
{   L.elem=(ElemType*)malloc(LIST_INIT_SIZE * 
       sizeof(ElemType));
       if(!L.elem)  exit(OVERFLOW); //分配失败，结束程序
        L.length=0;                               //暂无元素放入，空表
        L.listsize=LIST_INIT_SIZE;      //表尺寸=初始分配量
        Return OK;
} //InitList_Sq
//插入


Status ListInsert_Sq(SqList &L, int i, ElemType e)
{  //在顺序线性表中第i个位置之前插入新的元素e
if( i < 1 or i > L.length+1) return ERROR;  // 检验i 值的合法性
if ( L.length ≥ L.listsize )  //若表长超过表尺寸则要增加尺寸 
  {  newbase = ( ElemType* ) realloc ( L.elem , (L.listsize + LISTINCREMENT )* sizeof ( ElemType ) );

if (newbase=NULL )exit( OVERFLOW ) ; //分配失败则退出并报错
      L.elem = newbase ;                         //重置新基址
      L.listsize = L.listsize + LISTINCREMENT ; } //增加表尺寸
 q = &L.elem[i-1] ;        // q为插入位置。这是没有头结点的情况
 for ( p = L.elem[L.length-1] ;  p>=q ; --p ) *(p+1) = *p ;
                          //插入位置及之后的元素统统后移, p为元素位置
 *q= e ;                         //插入e
++L.length ;               //增加1个数据元素，则表长+1
  return OK ; 
} //ListInsert_Sq
}
