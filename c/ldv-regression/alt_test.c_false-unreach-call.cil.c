extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
void __blast_assert(void) 
{ 

  {
  ERROR: __VERIFIER_error();
}
}
int globalState  =    0;
void *l_malloc(int size ) ;
void l_free(void *ptr ) ;
int main(int argc , char **argv ) 
{ int *a ;
  void *tmp ;
  int __cil_tmp5 ;
  void *__cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  __cil_tmp5 = (int )4U;
  tmp = l_malloc(__cil_tmp5);
  a = (int *)tmp;
  __cil_tmp6 = (void *)a;
  l_free(__cil_tmp6);
  __cil_tmp7 = (void *)a;
  l_free(__cil_tmp7);
  }
  return (0);
}
}
void *l_malloc(int size ) 
{ void *retVal ;
  void *tmp ;
  size_t __cil_tmp4 ;
  void *__cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  unsigned int __cil_tmp7 ;

  {
  {
  __cil_tmp4 = (size_t )size;
  tmp = malloc(__cil_tmp4);
  retVal = tmp;
  }
  {
  __cil_tmp5 = (void *)0;
  __cil_tmp6 = (unsigned int )__cil_tmp5;
  __cil_tmp7 = (unsigned int )retVal;
  if (__cil_tmp7 != __cil_tmp6) {
    globalState = 1;
  } else {

  }
  }
  return (retVal);
}
}
void l_free(void *ptr ) 
{ void *__cil_tmp2 ;
  unsigned int __cil_tmp3 ;
  unsigned int __cil_tmp4 ;

  {
  {
  __cil_tmp2 = (void *)0;
  __cil_tmp3 = (unsigned int )__cil_tmp2;
  __cil_tmp4 = (unsigned int )ptr;
  if (__cil_tmp4 != __cil_tmp3) {
    if (globalState == 1) {

    } else {
      {
      __blast_assert();
      }
    }
  } else {

  }
  }
  {
  globalState = 0;
  free(ptr);
  }
  return;
}
}
