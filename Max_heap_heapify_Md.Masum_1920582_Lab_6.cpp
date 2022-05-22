// Max_heap_heapify_Md.Masum_1920582_Lab_6
#include <iostream>
using namespace std;

#define inf -99999999999
void heapify(int a[], int n, int i){ // heapify
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && a[left]>a[largest]){
        largest = left;
    }

    if(right<n && a[right]>a[largest]){
        largest = right;
    }

    if(largest!=i){
        swap(a[i], a[largest]);
        heapify(a,n, largest);
    }
}

void heap_increase_key(int a[], int n, int i, int key){ // heap increase key
    if(key<a[i]){
        cout<< "The key is lesser than the value."<< endl;
    }
    a[i] = key;
    while(i>1 && a[i/2]<a[i]){
        swap(a[i], a[i/2]);
        i=i/2;
    }
}

void Insert_Key(int a[], int n, int key){ // Insert key to array
    n++;
    a[n] = inf;
    heap_increase_key(a, n, n, key);
}

int maximum(int a[], int n){ // return maximum
    return a[0];
}

int extract_max(int a[], int n){ // extract maximum
    if(n<1){
        cout<< "Heap Underflow."<< endl;
    }
    int max = a[0];
    a[0] = a[n];
    n--;
    heapify(a, n, 1);
    return max;
}
void heapsort(int a[], int n){
    for(int i=n/2-1; i>=0; i--){ // build max heap
        heapify(a,n,i);
    }


    cout<< "Maximum: "<< maximum(a,n)<< endl;
    cout<<"Extracted Max: "<<extract_max(a, n)<< endl;

    //main heap sorting, starting from last
    for(int i=n-1; i>=0; i--){
        swap(a[0], a[i]);// putting the largest element in last
        //perform heap again, decrease heap size
        heapify(a,i,0);
    }

}

int main()
{
    int a[]={10, 8, 2, 2, 0, -1, 3, 7, 5, 15};

    int n = sizeof(a)/sizeof(a[0]);

    heapsort(a,n);

    heap_increase_key(a, n, 6, 25);

    Insert_Key(a, n, 20);
    cout<< "Heap Sorted: ";
    for(int i=0; i<n ; i++){
        cout<< a[i]<< " ";
    }

    return 0;
}
