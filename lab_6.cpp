#include <iostream>
using namespace std;

void randomArr(int* a, int size){
    for(int k=0;k<size;k++)
        a[k]=rand();
}

void printArray(int* arr, int size) 
{ 
    for (int k=0; k < size; k++) 
        cout<<arr[k]<<' ';
    cout<<endl;
} 
  
void inversion(int* arr, int size){
    for(int k = 0; k < size; k++)
        arr[k] *= -1;
}

void sortBubble(int* arr, int size, int countP, int countC ) {
    cout<<"Методом пузырька, количество элементов = "<<size<<endl;
    int i, j;
    bool swapped;
    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
                countP++;
            }
            countC++;
        }
        if (swapped == false)
        break;
    }
    printArray(arr,size);
    cout<<"Количество перестановок = "<< countP <<endl;
    cout<<"Количество сравнений = "<< countC <<endl;
}

void sortInsertion(int* arr, int size, int countP, int countC)  
{  
    cout<<"Методом вставки, количество элементов = "<<size<<endl;
    int i, key, j;  
    for (i = 1; i < size; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1; 
            countP++; 
        }  
        arr[j + 1] = key;  
        countC++;
    }  
    printArray(arr,size);
    cout<<"Количество перестановок = "<< countP <<endl;
    cout<<"Количество сравнений = "<< countC <<endl;
}  
 


int main() {
  int a[40];
  int countP = 0, countC = 0;
  randomArr(a,40);
  for(int k=0;k<3;k++){
    sortBubble(a, 40, countP, countC);
    if(k==1)
        inversion(a, 40);
    cout<<endl;
  }
  randomArr(a,20);
  for(int k=0;k<3;k++){
    sortBubble(a, 20, countP, countC);
    if(k==1)
        inversion(a, 20);
    cout<<endl;
  }
  randomArr(a,10);
  for(int k=0;k<3;k++){
    sortBubble(a, 10, countP, countC);
    if(k==1)
        inversion(a, 10);
    cout<<endl;
  }
  randomArr(a,40);
  for(int k=0;k<3;k++){
    sortInsertion(a, 40, countP, countC);
    if(k==1)
        inversion(a, 40);
    cout<<endl;
  }
  randomArr(a,20);
  for(int k=0;k<3;k++){
    sortInsertion(a, 20, countP, countC);
    if(k==1)
        inversion(a, 20);
    cout<<endl;
  }
  randomArr(a,10);
  for(int k=0;k<3;k++){
    sortInsertion(a, 10, countP, countC);
    if(k==1)
        inversion(a, 10);
    cout<<endl;
  }
  
  return 0;
}
