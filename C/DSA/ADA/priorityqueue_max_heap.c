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

void max_heapify(int a[], int index){
    int largest=index;
    int left_child_index=get_left_child(a,index);
    int right_child_index=get_right_child(a,index);
    if(left_child_index<=heap_size && left_child_index>=0){
        if(a[left_child_index]>a[largest]){
            largest=left_child_index;
        }
    }
    if(right_child_index<=heap_size && right_child_index>=0){
        if(a[right_child_index]>a[largest]){
            largest=right_child_index;
        }
    }
    if(largest!=index){
        swap(&a[index],&a[largest]);
        max_heapify(a,largest);
    }
}

void build_max_heap(int a[]){
    int i;
    for(i=heap_size/2;i>=1;i--){
        max_heapify(a,i);
    }
}

int maximum(int a[]){
    return a[1];
}

int extract_max(int a[]){
    int max=a[1];
    a[1]=a[heap_size];
    heap_size--;
    max_heapify(a,1);
    return max;
}

void increase_key(int a[],int index,int key){
    a[index]=key;
    while(index>1 && a[get_parent(a,index)]<a[index]){
        swap(&a[index],&a[get_parent(a,index)]);
        index=get_parent(a,index);
        increase_key(a,5,22);
    }
}

void decrease_key(int a[],int index,int key){
    a[index]=key;
    max_heapify(a,index);
}

void insert(int a[],int key){
    heap_size++;
    a[heap_size]=-INF;
    increase_key(a,heap_size,key);
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
    increase_key(a,5,22);
    printf("Elements of the heap after increasing the key:");
    print_heap(a);
    decrease_key(a,1,13);
    printf("Elements of the heap after decreasing the key:");
    print_heap(a);
    printf("\nMaximum element in heap: %d",maximum(a));
    printf("\nRemove maximum element: %d",extract_max(a));
    printf("\nHeap after removing maximum element:");
    print_heap(a);
}

//O(nlogn)