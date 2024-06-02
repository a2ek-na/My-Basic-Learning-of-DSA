#include <iostream>
using namespace std;
void sortZero(int *array, int num){
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num-1 ; j++){
            if (array[j] == 0){
                swap(array[j],array[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {0, 5, 0, 3, 2,9,0,4,0,0,8,};
    sortZero(arr, 11);
    cout << "Sorted Array --> ";
    for (int i = 0; i < 11 ; i++){ 
        cout << arr[i] << " ";
    }
    return 0;
}