//表接口处理，可以放到list.h
typedef struct node *link;
struct node{int item;link next;};
typedef link Node;
void initNodes(int);
link newNode(int);
void freeNode(link);
void insertNext(link,link);
link deleteNext(link);
link Next(link);
int Item(link);
//
