#include <iostream>

template <typename Type>
void uniqueArray(Type array[], int size) {
    Type uniquearray[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        bool flag = true;
        for (int k = 0; k < size; k++) {
            if (array[i] == uniquearray[k]) {flag = false;}
        }
        if (flag) {
            uniquearray[count] = array[i];
            count++;
        }
    }
    std::cout << "Unique array like this: {";
    for (int i = 0; i < count-1; i++) {
        std::cout << uniquearray[i] << ", ";
    }
    std::cout << uniquearray[count-1] << "}" << std::endl;
}

int main() {
    int array_int[] = {1, 2, 3, 4, 5, 1, 1, 2};
    int size_int = sizeof(array_int)/sizeof(array_int[0]);
    uniqueArray(array_int, size_int);

    char array_char[] = {'k','i','r','i','l','l','k','i','l','l'};
    int size_char = sizeof(array_char)/sizeof(array_char[0]);
    uniqueArray(array_char, size_char);
    return 0;
}