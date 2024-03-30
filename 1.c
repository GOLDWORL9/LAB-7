#include <stdio.h>
#include <assert.h>
//������������ ������� �����
void test_heap_sort() {
    int i;
    int test_arr[] = {12, 11, 13, 5, 6, 7};
    int sorted_arr[] = {5, 6, 7, 11, 12, 13};
    int n = sizeof(test_arr) / sizeof(test_arr[0]);

    heap_sort(test_arr, n);

    for (i = 0; i < n; i++) {
        assert(test_arr[i] == sorted_arr[i]);
    }

    printf("Unit test for normal sorting passed.\n");
}

// ������������ ���������� ������� � ������ ������
void test_different_length() {
    int test_arr[] = {29, 15, 3, 10, 45};
    int sorted_arr[] = {3, 10, 15, 29, 45};
    int n = sizeof(test_arr) / sizeof(test_arr[0]);

    heap_sort(test_arr, n);

    for (int i = 0; i < n; i++) {
        assert(test_arr[i] == sorted_arr[i]);
    }
    printf("Unit test for sorting with different length passed.\n");
}
// ������������ �� ��������������� � �������� ������� �������
void test_reverse_sorted() {
    int test_arr[] = {5, 4, 3, 2, 1};
    int sorted_arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(test_arr) / sizeof(test_arr[0]);

    heap_sort(test_arr, n);

    for (int i = 0; i < n; i++) {
        assert(test_arr[i] == sorted_arr[i]);
    }
    printf("Unit test for reverse sorted array passed.\n");
}
// ������������ �� ������ � �������������� ����������
void test_repeating_elements() {
    int test_arr[] = {3, 2, 5, 3, 2, 1};
    int sorted_arr[] = {1, 2, 2, 3, 3, 5};
    int n = sizeof(test_arr) / sizeof(test_arr[0]);

    heap_sort(test_arr, n);

    for (int i = 0; i < n; i++) {
        assert(test_arr[i] == sorted_arr[i]);
    }
    printf("Unit test for sorting with repeating elements passed.\n");
}

int main() {
    test_heap_sort();
    test_different_length();
    test_reverse_sorted();
    test_repeating_elements();

    return 0;
}


