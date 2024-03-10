// this code is written by ak  
  #include <iostream>
using namespace std;
int binarysearch (int arr[],int size,int key ){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if ( key > arr[mid]){
        start =mid +1;
        }
        else {//start < arr [mid ]
        end =mid -1 ;

        }
   mid = start + (end-start)/2;


    }
 return -1;

}

int main() {
 int even[6]={3,5,8,9,11,14};
 int odd[5]={3,65,45,89,98};
 int evenindex= binarysearch(even,6,14);
 cout << "the index of 14 is "<< evenindex <<endl;
  int oddindex= binarysearch(odd,5,98);
 cout << "the index of 98 is  "<< oddindex<<endl;



     return 0;
}
// this is from lb
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }


// int main() { 

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = binarySearch(even, 6, 18);

//     cout << " Index of 18 is " << evenIndex << endl;

//     int oddIndex = binarySearch(odd, 5, 16);

//     cout << " Index of 16 is " << oddIndex << endl;


//     return 0;
// }
