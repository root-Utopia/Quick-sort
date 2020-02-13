void quick_sort(int* arr, int left, int right)
{
    if (left < right)
    {
        int pivot = partition(arr, left, right);

        quick_sort(arr, left, pivot - 1);

        quick_sort(arr, pivot + 1, right);
    }
}

int partition(int* arr, int left, int right)
{
    int i = left - 1;

    for (int j = left, pivot = arr[right]; j <= right - 1; ++j)
        if (arr[j] < pivot)
            swap(arr[j], arr[++i]);

    swap(arr[i + 1], arr[right]);

    return (i + 1);
}