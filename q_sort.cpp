#include <iostream>

template<typename T>
void printArray(T* arr, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ", ";
    
    	std::cout << "\b\b    \n";
}


template<typename T>
void quickSort(T* arr, int left, int right) {

      int i = left, j = right;
      T pivot = arr[(left + right) / 2];

      while (i <= j) {

            while (arr[i] < pivot) 
            	i++;

            while (arr[j] > pivot)
	            j--;

            if (i <= j) 
            {
	   	   		std::swap(arr[i],arr[j]);
                 i++;
                 j--;

            }

      };

      if (left < j)
            quickSort(arr, left, j);

      if (i < right)
            quickSort(arr, i, right);

}


int main()
{	
	const int n = 10;
	int array[n] = {95, 45, 48, 98, 1, 485, 65, 478, 1, 2325};

    std::cout << "Before Quick Sort :" << std::endl;
    printArray(array, n);

    quickSort(array, 0, n-1);

    std::cout << "\nAfter Quick Sort :" << std::endl;
    printArray(array, n);


	return 0;
}