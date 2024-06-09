#include<stdio.h>
#include<stdlib.h>

int tree_array_size=20;
int heap_size=0;
const int INF=100000;
 
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int get_right_child(int a[],int index){
    if(((2*index+1)<tree_array_size) && (index>=1)){
        return(2*index+1);
    }
}

int get_left_child(int a[],int index){
    if(((2*index)<tree_array_size) && (index>=1)){
        return(2*index);
    }
}

int get_parent(int a[], int index){
    if((index>1) && (index<tree_array_size)){
        return(index/2);
    }
}

void min_heapify(int a[], int index){
    int smallest=index;
    int left_child_index=get_left_child(a,index);
    int right_child_index=get_right_child(a,index);
    if(left_child_index<=heap_size && left_child_index>=0){
        if(a[left_child_index]<a[smallest]){
            smallest=left_child_index;
        }
    }
    if(right_child_index<=heap_size && right_child_index>=0){
        if(a[right_child_index]<a[smallest]){
            smallest=right_child_index;
        }
    }
    if(smallest!=index){
        swap(&a[index],&a[smallest]);
        min_heapify(a,smallest);
    }
}

int minimum(int a[]){
    return a[1];
}

int extract_min(int a[]){
    int min=a[1];
    a[1]=a[heap_size];
    heap_size--;
    min_heapify(a,1);
    return min;
}

void build_min_heap(int a[],int index,int key){
    a[index]=key;
    while(index>1 && a[get_parent(a,index)]>a[index]){
        swap(&a[index],&a[get_parent(a,index)]);
        index=get_parent(a,index);
    }
}

void update_key(int a[],int index, int key){
    a[index]=key;
    min_heapify(a,index);
}

void insert(int a[],int key){
    heap_size++;
    a[heap_size]=-INF;
    build_min_heap(a,heap_size,key);
}

void print_heap(int a[]){
    int i;
    for(i=1;i<=heap_size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[tree_array_size];
    insert(a,20);
    insert(a,15);
    insert(a,8);
    insert(a,10);
    insert(a,5);
    insert(a,7);
    insert(a,6);
    insert(a,2);
    insert(a,9);
    insert(a,1);
    printf("Elements of the heap:");
    print_heap(a);
    update_key(a,5,22);
    printf("Elements of the heap after increasing the key:");
    print_heap(a);
    update_key(a,1,13);
    printf("Elements of the heap after decreasing the key:");
    print_heap(a);
    printf("\nMinimum element in heap: %d",minimum(a));
    printf("\nRemove minimum element: %d",extract_min(a));
    printf("\nHeap after removing minimum element:");
    print_heap(a);
}

//O(nlogn)