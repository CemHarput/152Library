

#define SIZE 100

typedef int stack_type;
typedef struct {
    stack_type data[SIZE];
    int top;
}stack;
int is_empty(stack *s)
{
    if(s->top==0)
        return 1;
return 0;
}
int is_full(stack *s)
{
    if(s->top==SIZE)
        return 1;
        
return 0;
}
void init(stack *s)
{
    s->top=0;
}
void push(stack *s,stack_type item)
{
    if(is_full(s))
        printf("The stack is Full\n");
    else
    {
    s->data[(s->top)++]=item;
    }
}
stack_type pop(stack *s)
{
    stack_type;
    if(is_empty(s))
    {
        printf("The stack is empty\n");    
    }
    else
        return s->data[--(s->top)];
}
stack_type peek(stack *s,stack)
{
    return s->data[s->top-1];
}
