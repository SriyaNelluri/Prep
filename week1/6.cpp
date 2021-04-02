/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int firstMissingPositive(int* arr, int n1) {
 int ptr = 0;
 int i;

    for (i = 0; i < n1; i++) {
        if (arr[i] == 1) {
            ptr = 1;
            break;
        }
    }
 
    if (ptr == 0)
        return 1;

    for (i = 0; i < n1; i++)
        if (arr[i] <= 0 || arr[i] > n1)
            arr[i] = 1;
    for ( i = 0; i < n1; i++)
        arr[(arr[i] - 1) % n1] += n1;

    for (i = 0; i < n1; i++)
        if (arr[i] <= n1)
            return i + 1;

    return n1 + 1;
}
