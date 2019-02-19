//快速转置算法

Status FastTransposeSMatrix（TSMatirx M, TSMatirx &T）
{           
T.mu = M.nu ;T .nu = M.mu ; T.tu = M.tu ;
 if ( T.tu ) {
for(col = 1; col <=M.nu; col++) num[col] =0;  
for( i = 1; i <=M.tu; i ++) {col =M.data[i] .j ; ++num [col] ;}
 cpos[ 1 ] =1;
 for(col = 2; col <=M.nu; col++)  cpos[col ]=cpos[col-1]+num [col-1 ] ;
 for( p =1; p <=M.tu ; p ++ )
  { col =M.data[ p ]. j ; q =cpos [ col ]; 
                    T.data[q].i = M.data[p]. j;
                    T.data[q].j = M.data[p]. i;
                    T.data[q]. value = M.data[p]. value;
                    + + cpos[col] ;
   }  //for
}  //if
return OK; 
}  //FastTranposeSMatrix;
 