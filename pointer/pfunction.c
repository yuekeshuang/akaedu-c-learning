#include <stdio.h>

void say_hello(char *str)
{
  printf("hello,%s\n", str);

  return ;
}

typedef void FF(char *);
typedef void (*FP)(char *);
int main(void)
{

  void (*f1)(char *);

  int a;
  FF *f2;
  FP f4;

  f1 = say_hello;// 赋值
  f2 = say_hello;
  f4 = say_hello;

  // void (*)(char *)   f;
  printf("f1 = %p\n",f1);
  printf("say_hello =  %p\n", say_hello);
  f("akaedu");
  //say_hello("akaedu"); 
  a = 0x80483e4;
( (void(*)(char*))a)("3akaedu");
  f1("f5akaedu");//调用
  f2("f2akaedu");
  f4("f4akaedu");

  return 0;
}
