/*
Даны два массива неповторяющихся целых чисел, упорядоченные по возрастанию. A[0..n-1] и B[0..m-1].
n >> m. Найдите их пересечение. Требуемое время работы: O(m * log k), где k - позиция элементта B[m-1] в
массиве A.. В процессе поиска очередного элемента B[i] в массиве A пользуйтесь результатом поиска
элемента B[i-1].
n, k ≤ 10000.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m;
    int start, end, mid, k = 0, pos = 0, temp = 0;
    bool flag;
    
    cout << "Введите количество элементов в массиве А:" << endl;
    cin >> n;
    cout << "Введите количество элементов в массиве B:" << endl;
    cin >> m;
    
    int *A = new int[n], *B = new int[m], *C = new int[m];
    
    cout << "Массив А:" << endl;
    for (int i = 0; i < n; i++)
    {
        temp += (rand() % 5) + 1;
        A[i] = temp;
        cout << A[i] << " ";
    }
    
    temp = 0;
    cout << endl << "Массив B:" << endl;
    for (int i = 0; i < m; i++)
    {
        temp += (rand() % 5) + 1;
        B[i] = temp;
        cout << B[i] << " ";
    }
    
    for (int i = 0; i < m; i++)
    {
        start = pos;
        end = n;
        flag = true;
        while (flag)
        {
            mid = (start + end) / 2;
            if (B[i] > A[mid]) start = mid;
            else if (B[i] < A[mid]) end = mid;
            else 
            {
                C[k] = B[i];
                k++;
                pos = mid;
                flag = false;
            }
            if (start >= (end - 1)) flag = false; 
        }   
    }
    
    if (k == 0) cout << endl << "Пересечения нет";
    else 
    {
        cout << endl << "Пересечение массивов А и В:" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << C[i] << " ";
        }
    }
    
    delete [] A;
    delete [] B;
    delete [] C;
    
    return 0;
}
