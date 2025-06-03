#include <iostream>

using namespace std;

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

    int result = binarySearch(numbers, 9, 0, size-1);

    cout << result;
}