#include <iostream>

using namespace std;

int binarySearchRec(int numbers[], int target, int si, int ei){

    if (si > ei) {
        return -1; 
    }
    
    int mid = (si + ei) / 2;

    if (numbers[mid] == target){
        return mid;
    }

    if (numbers[mid] > target){
        return binarySearchRec(numbers, target, si, mid - 1);
    } else if (numbers[mid] < target) {
        return binarySearchRec(numbers, target, mid + 1, ei);
    }

    return -1;
}

int binarySearch(int numbers[], int target, int si, int ei){

    
    while (si <= ei)
    {   
        int mid = (si + ei) / 2;

        if (numbers[mid] == target){
            return mid;
        }else if(numbers[mid] < target){
            si = mid + 1;
        } else if (numbers[mid] > target){
            ei = mid - 1;
        }
    }

    return -1;
}

int main() {

    int numbers[] = {1, 4, 8, 9, 19, 23, 45};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int result = binarySearch(numbers, 23, 0, size-1);

    int resultRec = binarySearchRec(numbers, 19, 0, size-1);

    cout << result << endl;;
    cout << resultRec;
}