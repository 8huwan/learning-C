#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_size;
    int * ptr;
};
void createArray(struct myArray * a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof (int));
}
void setvelue(struct myArray * a){
    int n;
    for(int i=0;i<a->used_size;i++){
       
        printf("enter element",i);
        scanf("%d",&n);
         (a->ptr)[i]=n;

    }
}
void show(struct myArray * a){
    for (int i=0;i<a->used_size;i++)
    printf("%d\n",a->ptr [i]);

}
int main(){
    struct myArray marks;
    createArray(&marks,10,4);
    setvelue(&marks);
    show(&marks);
    return 0;
}