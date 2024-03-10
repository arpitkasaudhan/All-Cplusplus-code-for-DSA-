#include<iostream>
using namespace std ;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        int index= ++size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }
    void deletenodefromheap(){
         if(size == 0) {
                cout << "Heap is empty!" << endl;
                return;
            }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
             int leftindex=2*i;
             int rightindex=2*i+1;
             int largest=i;
             if(leftindex<=size&& arr[largest]<arr[leftindex]){
                swap(arr[largest],arr[leftindex]);
                largest=leftindex;
             }
                    else if(rightindex<=size&& arr[largest]<arr[rightindex]){
                swap(arr[largest],arr[rightindex]);
                largest=rightindex;
             }
             else{
                return;
             }
        }
 
    }



    void print() {
            cout << "Max Heap : ";
            for(int i=1; i<=size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};
    void heapify(int arr[],int n,int i){
             int largest=i; 
             int leftindex=2*i;
             int rightindex=2*i+1;

            if(leftindex<=n&& arr[largest]<arr[leftindex]){
                largest=leftindex;
             }
            if(rightindex<=n&& arr[largest]<arr[rightindex]){
                largest=rightindex;
             }
             if(largest !=i){
                swap(arr[largest],arr[i]);
                heapify(arr,n,largest);
             }
     }
     void heapSort(int arr[], int n) {
        int size=n;
    while(size > 1) {
        swap(arr[1], arr[size]);

        size--;
        
        heapify(arr, size, 1);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(40);
    h.insert(60);
    h.insert(30);
    h.insert(55);
    h.insert(70);
    h.insert(20);
    h.print();
    h.deletenodefromheap();
    h.print();
  int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i = n/2; i>0; i--) {
        heapify(arr, n, i);
    }

    cout << "Heapified array : ";
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 // Calling heap sort
    heapSort(arr, n);

    cout << "Sorted array (Heap Sort) : ";
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}