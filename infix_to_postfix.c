#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack
{
    char data;
    struct Stack *next;
} *top = NULL;

void push(char);
char pop();
void display();
char peek();
int pre(char);
int isOperand(char);
char* InfToPost(char *);
void displayEXP(char *);
char * StrRevSpecial(char *);
int isEmpty();

int isOperand(char ch) 
{ 
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        return 1;
    } 
    return 0;
} 
char peek(){
    return top->data;
}
int pre(char x){
    if(x=='+'||x=='-'){
        return 1;
    }
    else if(x=='/'||x=='*'){
        return 2;
    }
    else if(x=='^'){
        return 3;
    }
    return 0;
}

char* InfToPost(char *infix){
    int i=0,j=0;
    int len=strlen(infix);
    char postfix=(char)malloc((len+2)*sizeof(char));
    while(infix[i]!='\0'){
        if(isOperand(infix[i]) == 1){
            postfix[j++]=infix[i++];
        }else if(infix[i]=='('){
            push(infix[i++]);
        }
        else if(infix[i]==')'){
            while(isEmpty()==0 && peek()!='(')
                postfix[j++]=pop();
            if(isEmpty()==0 && peek()!='('){
                printf("invalid expression");
            }else{
                pop();
                i++;
            }
        }
        else{
            while(isEmpty()==0 && pre(infix[i])<=pre(peek()))
                postfix[j++]=pop();
            push(infix[i++]);    
        }
    }
    while(isEmpty()==0){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}

void push(char x)
{
    struct Stack *t;
    t = (struct Stack *)malloc(sizeof(struct Stack));
    if (t == NULL)
    {
        printf("stack is  full \n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
char pop()
{
    struct Stack *t;
    char x;
    if (top == NULL)
    {
        printf("stack is empty");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
void display()
{
    struct Stack *p;
    p = top;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

void displayEXP(char *exp){
    int len=strlen(exp);
    for (int i = 0 ; i<len ; i++)
    {
        printf("%c",exp[i]);
    }
}
char* StrRevSpecial(char *infix){
    int len=strlen(infix);
    char temp=(char)malloc((len)*sizeof(char));
    int k=0;
    for (int i = len-1;i>=0; i--)
    {
        if(infix[i]=='('){
            temp[k++]=')';
        }else if(infix[i]==')'){
            temp[k++]='(';
        }
        else{
        temp[k++]=infix[i];
        }
    }
    temp[k]='\0';
    return temp;
}
int main(){
    char infix= "((A-(B/C))((A/K)-L))";
    push(' '); 
    char *postfix=InfToPost(infix);       //uncomment for postfix
    displayEXP(postfix);                  //uncomment for postfix
    // char *prefix=InfToPost(StrRevSpecial(infix));   //comment for prefix
    // displayEXP(StrRevSpecial(prefix));              //comment for prefix
    return 0;
}
