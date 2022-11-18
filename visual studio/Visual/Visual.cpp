#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n1, n2;
    //int* arr1 = new int[n1];
    //int* arr2 = new int[n2];
    ifstream file("in.txt");
    file >> n1;//запись количества цифр массива из файла
    int* arr1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        file >> arr1[i];//цикл, в котором идет запись в arr1 чисел массива
    }
    file >> n2;//запись количества цифр массива из файла
    int* arr2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        file >> arr2[i];//цикл, в котором идет запись в arr2 чисел массива
    }
    file.close();
    ofstream file2("out.txt");
    file2 << n2 << endl;
    file2 << arr2[n2 - 1] << " ";
    for (int i = 0; i < n2 - 1; i++)
    {
        file2 << arr2[i] << " ";
    }
    file2 << endl;
    file2 << n1 << endl;
    //file2<<result1<<" ";
    for (int i = 1; i < n1; i++)
    {
        file2 << arr1[i] << " ";
    }
    file2 << arr1[0];
    file2.close();
    
    delete[] arr1;
   
    delete[] arr2;
}