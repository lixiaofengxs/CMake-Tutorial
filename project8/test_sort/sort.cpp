#include <iostream>

#include "sort.h"

int main(int argc, char *argv[]) {

    std::vector<int> arr{ 9, 3, 4, 2, 1, 8 };

    quickSort(arr);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}