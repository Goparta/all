#include <iostream>

/*using namespace std;

int main ()
{
    int a, b, v, g, d = 3;
    cout << "Enter 4 figure: ";
    cin >> a, b, v, g;
    for ( int i; i < d;  )
    
    return 0;
}*/



/* Я хочу, щоб програма відсортувала масив чисел */


using namespace std;

int main()
{
    setlocale(LC_ALL, "russian"); 
    const int size = 5;
    int mas[size];
    int tmp;
    // Введення даних у масив користувачем
    for (int i = 0; i < size; i++){
        cout << "Введіть " << i << " елемент масиву ";
        cin >> mas[i];
    }
    // Виведення масиву на екран
    for (int i = 0; i < size; i++){
        cout << "Елемент з індексом " << i << " має значення " << mas[i] << endl;
    }
    // Сортування масиву бульбашкою (За зростанням)
    int x = 0;
    for (int i = size;  i >= x; i--)
    {
        for (int j = size; j >= x; j--)    {
            if (mas[j] < mas[j-1])    {
                tmp = mas[j];     //обмін
                mas[j] = mas[j-1];   //зміними
                mas[j- 1] = tmp;     //легко
                cout << "елемент " << j << " помінявся з елементом " << j - 1 << " << " << endl; // наводка
                                    }

                                            }
        //x++;
    }
    // виведення відсортованого масиву
    cout << "Виведення відсортованого масиву" << endl;
    for (int i = 0; i < size; i++){
        cout << "Елемент з індексом " << i << " має значення " << mas[i] << endl;
    }
    return 0;
} 