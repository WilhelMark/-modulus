#include <iostream>
#include <cmath>

// Функция для вывода массива по возрастанию модуля чисел
void printByAbsoluteValue(int arr[], int size) {
    // Найдем первый положительный элемент
    int firstPositiveIndex = 0;
    while (firstPositiveIndex < size && arr[firstPositiveIndex] <= 0) {
        firstPositiveIndex++;
    }

    // Выводим элементы, начиная с первого положительного и двигаясь в обе стороны
    int left = firstPositiveIndex - 1;
    int right = firstPositiveIndex;

    while (left >= 0 || right < size) {
        if (right < size && (left < 0 || std::abs(arr[left]) > std::abs(arr[right]))) {
            std::cout << arr[right] << " ";
            right++;
        } else {
            std::cout << arr[left] << " ";
            left--;
        }
    }
}

int main() {
    int arr[] = {-100, -50, -5, 1, 10, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array sorted by absolute value: ";
    printByAbsoluteValue(arr, size);

    return 0;
}
