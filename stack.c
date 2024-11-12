#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack{
    int item[max];
    int top;
    };
    void initStack(struct stack *s){
        s->top =-1;
    }    
    int isFull(struct stack *s){
        return s->top == max -1  ;

    }
    int isEmpty(struct stack *s){
        return s->top ==-1;
    }
    
    void push(struct stack *s, int value ){
        if(isFull(s)){
            printf("stack is full cannot push %d\n",value);
        }else{
            s->top++;
            s->item[s->top]=value;
            printf("pushed %d onto the stack\n",value);
        }
        }
int pop(struct stack *s){
    if (isEmpty(s)){
        printf("stack is empty! Cannot pop\n");
        return -1;
    }else {
        int poppedvalue =s->item[s->top];
        s->top--;
        printf("popped %d from the stack\n",poppedvalue);
    return poppedvalue;
    }
}
void displaystack(struct stack *s){
    if (isEmpty(s)){
        printf("stack is empty\n");
    }else{
        printf("stack elements\n");
        for(int i=0; i<= s->top; i++) {
            printf("%d ", s->item[i]);
        }
        printf("\n");
    }
}
int main(){
    struct stack stack;
    initStack(&stack);
   push(&stack, 10);
   push(&stack, 20);
   push(&stack, 30);
   push(&stack, 40);
   push(&stack, 50);
   push(&stack, 60);
   displaystack(&stack);
    
    pop(&stack);
     pop(&stack); 
      pop(&stack);
       pop(&stack);
        pop(&stack);
         pop(&stack);
    displaystack(&stack);

return 0;
}
    
    