#ifndef STRING_H_
#define STRING_H_

#include <stdio.h>
#include <stdlib.h>

#define OK 0
#define ERROR 1
#define OVERFLOW -2
#define TRUE 1
#define FALSE 0
#define INFEASIBLE -1
typedef int Status;

typedef struct {
    char* ch;
    int length;
} HString;

//生成一个其值等于串常量的串T
extern Status strAssign(HString*, char*);
//返回S的元素个数
extern int strLength(HString);
//比较S与T, S > T 返回 > 0; S = T 返回 = 0； S < T 返回 < 0
extern int compare(HString, HString);
//将串清空,并且释放串所占空间
extern Status clearString(HString*);
//联接两个串，并用新串返回
extern Status concat(HString*, HString, HString);
//获取指定位置开始指定长度的子串
extern Status subString(HString*, HString, int, int);

#endif /*STRING_H_*/