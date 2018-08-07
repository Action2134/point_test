/*************************************************************************
	> File Name: test.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2018年08月03日 星期五 19时21分22秒
 ************************************************************************/

#include<stdio.h>
//#include <>
#include <iostream>
using namespace std;

void test(int *p){
  int a = 1;
  p = &a;
  *p = 1;  
  cout << p << " " << *p << endl;
}

int main(){
  int *p = NULL;
  test(p);
  if(p == NULL){
    printf("p is nULL\n");
  }
  int k = 0;
  test(&k);
  printf("k = %d\n",k);
}
