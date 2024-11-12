#include<stdio.h>
#include<string.h>

    struct Address{
        char street[20];
        char city[20];
        char state[20];
    };
    struct Person{
    int age;
    char name[20];
    struct Address address;
    };
int main(){
    struct Person person;

   
    printf("enter username\n");
    scanf("%s",person . name);
    printf("enter age\n");    
    scanf("%d",&person.age);
    printf("enter street\n");
    scanf("%s",person .address.street);
    printf("enter city\n");
    scanf("%s",person .address. city);
    printf("enter state\n");
    scanf("%s",person .address. state);
    printf("age is %d\n",person.age);
    printf("name is %s\n",person.name);
    printf("street is %s\n",person.address.street);
    printf("city is %s\n",person.address.city);
    printf("state is %s\n",person.address.state);
    return 0;
}
