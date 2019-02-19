#include <iostream>
Int Index(SString S, SString T, int pos) {
    i=pos;      j=1;
    while ( i<=S[0] && j<=T[0] ) {
        if (S[i] = = T[j] ) {++i, ++j}   //继续比较后续字符
        else {i=i-j+2; j=1;}      //i指针回溯到 下一首位，重新开始匹配
    }
    if(j>T[0]) return i-T[0];  //子串结束，说明匹配成功
    else return0;
}//Index

Int Index_KMP(SString S, SString T, int pos) { //见教材P82
    i=pos;      j=1;
    while ( i<=S[0] && j<=T[0] ) {
        if (j==0|| S[i] = = T[j] ) {++i, ++j}   //不失配则继续比较后续字符
        else {j=next[j];} //特点：S的i指针不回溯，而且从T的k位置开始匹配
    }
    if(j>T[0]) return i-T[0];  //子串结束，说明匹配成功
    else return0;
}

void get_nextval(SString T, int  &nextval[ ] ){
    //next函数修正值存入数组nextval
    i=1;  nextval[1]=0; j=0;
    while(i<T[0] ){
        if(j= = 0||T[i]= =T[j] ){ ++i;++j;
            If(T[i]!=T[j] ) nextval[i]=j;
            else nextval[i]=nextval[j];  }
        else j=nextval[j];  }
}// get_nextval
