/** 串 堆分配存储表示 **/
#include "string.h"

Status strAssign(HString* T, char* chars) {
    if (T->ch)
        free(T->ch);  //释放T原有空间
    int length = 0;
    for (char* c = chars; c; c++) {
        length++;
    }
    if (!length) {
        T->ch = NULL;
        T->length = 0;
    } else {
        T->ch = (char*)malloc(sizeof(char) * length);
        if (!T->ch)
            exit(OVERFLOW);
        for (int i = 0; i < length; i++) {
            T->ch[i] = chars[i];
        }
        T->length = length;
    }
    return OK;
}

int strLength(HString S) {
    return S.length;
}

/**
 * 使用字典序进行比较
 */
int compare(HString S, HString T) {
    for (int i = 0; i < S.length && i < T.length; i++) {
        if (S.ch[i] != T.ch[i])
            return S.ch[i] - T.ch[i];
    }
    return S.length - T.length;
}

Status clearString(HString* S) {
    if (S->ch) {
        free(S->ch);
        S->ch = NULL;
    }
    S->length = 0;
    return OK;
}

Status concat(HString* T, HString S1, HString S2) {
    if (T->ch)
        free(T->ch);
    T->ch = (char*)malloc(sizeof(char) * (S1.length + S2.length));
    if (!T->ch)
        exit(OVERFLOW);
    for (int i = 0; i < S1.length; i++) {
        T->ch[i] = S1.ch[i];
    }
    for (int i = 0; i < S2.length; i++) {
        T->ch[S1.length + i] = S2.ch[i];
    }
    T->length = S1.length + S2.length;
    return OK;
}

Status subString(HString* sub, HString S, int pos, int len) {
    if (pos < 1 || pos > S.length || len < 0 || len > S.length - pos + 1)
        return ERROR;
    if (sub->ch)
        free(sub->ch);
    if (!len) {
        sub->ch = NULL;
        sub->length = 0;
    } else {
        sub->ch = (char*)malloc(len * sizeof(char));
        if (!sub->ch)
            exit(OVERFLOW);
        int index = 0;
        for (int i = pos - 1; i < len; i++) {
            sub->ch[index++] = S.ch[i];
        }
        sub->length = len;
    }
    return OK;
}