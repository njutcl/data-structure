//建堆函数 

Status StrAssign(HString &T,char *chars)
{
	if(T.ch)free(T.ch);
	for(i=0,c=chars;c;++i,++c);
	if(!i){
		T.ch=NULL;T.length=0;
	}
	else{
		if(!(T.ch=(char*)malloc(i*sizeof(char))))
		exit overflow; 
		T.ch[0..i-1]=char[0..i-1];
		T.length=i;
		
	}
}

//串插入函数

Status StrInsert(HString &S,int pos,HString T) 
{
	if(pos<1||pos>S.length+1)return ERROR;
	if(T.length){
		if(!(S.ch=(char*)relloc(S.ch,(S.length+T.length)*sizeof(char))))
	}exit(overflow);
	for(i=s.length-1;i>=pos-1;--i)
	S.ch[i+T.length-2]=T.ch[i];
	S.length+=T.length; 
}
return ok;