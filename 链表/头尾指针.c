//链表中头和尾节点/指针的常规用法
#include<stdlib.h>

typedef struct node *link;
struct node{int item;link next;};
struct node a;
link head=&a;
link t,x,z;
int main()
{
    //循环，永远非空
        //头插入
    head->next=head;
        //在节点x后插入t节点
    t->next=x->next;x->next=t;
        //删除x后的节点
    x->next=x->next->next;
        // 遍历循环
    t=head;
    do
    {
        t=t->next;
    }while(t!=head);
        //测试是否只有一个元素
    if(head->next=head){}

    //头指针，尾节点为空
        //初始化
    head=NULL;
        //在节点x后插入t节点
    if(x==NULL)
    {
        head=t;
        head->next=NULL;
    }
    else
    {
        t->next=x->next;
        x->next=t;
    }
        //删除x后的节点
    t=x->next;
    x->next=t->next;
        //遍历循环
    for(t=head;t!=NULL;t=t->next){}
        //测试表是否为空
    if(head=NULL){}

    //有哑元头节点，尾节点为空
        //初始化
    head=malloc(sizeof *head);
    head->next=NULL;
        //在x节点后插入t节点
    t->next=x->next;
    x->next=t;
        //删除x后的节点
    t=x->next;
    x->next=t->next;
        //遍历循环
    for(t=head->next;t!=NULL;t=t->next){}
        //测试表是否为空
    if(head->next==NULL){}

    //有哑元头，尾节点
        //初始化
    head=malloc(sizeof *head);
    z=malloc(sizeof *z);
    head->next=z;
    z->next=z;
        //在x节点后插入t节点
    t->next=x->next;
    x->next=t;
        //删除x后的节点
    x->next=x->next->next;
        //遍历循环
    for(t=head->next;t!=NULL;t=t->next){}
        //测试表是否为空
    if(head->next==z){}
}