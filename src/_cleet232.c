#include "string.h"  
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define C_MAX_SIZE 100

typedef struct {
    int m_count;
    int m_front;
    int m_rear;
    int m_stack[C_MAX_SIZE];
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    if (obj == NULL) return NULL;

    obj->m_rear = 0;
    obj->m_front = 0;
    obj->m_count = 0;

    memset(obj,0,sizeof(obj));
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->m_stack[obj->m_front] = x;
    obj->m_front = (obj->m_front+1)%C_MAX_SIZE;
    obj->m_count++;
}

int myQueuePop(MyQueue* obj) {
    int l_ret;
    l_ret = obj->m_stack[obj->m_rear];
    obj->m_rear = (obj->m_rear+1)%C_MAX_SIZE;
    obj->m_count--;
    return l_ret;
}

int myQueuePeek(MyQueue* obj) {
    int l_ret=obj->m_stack[obj->m_rear];
    return l_ret;
}

bool myQueueEmpty(MyQueue* obj) {
    return (obj->m_count==0) ? true : false;
}

void myQueueFree(MyQueue* obj) {
    if (obj != NULL) {
        free(obj); // <--- Đây mới thực sự là Free bộ nhớ
    }
}

void _cleet232(int exe) {
    if(exe == 1)
    {
        MyQueue* obj = myQueueCreate();

        myQueuePush(obj, 1);
        int param_2 = myQueuePop(obj);
        int param_3 = myQueuePeek(obj);
        bool param_4 = myQueueEmpty(obj);
        printf("param_2 %d\n", param_2);
        printf("param_3 %d\n", param_3);
        printf("param_4 %s\n", param_4 ? "true" : "false");
    }   
}
/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/