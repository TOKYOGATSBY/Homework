/*Реализуйте шаблонные функции для поиска максимума,
минимума, сортировки массива (любым алгоритмом сортировки), двоичного поиска в массиве, замены элемента
массива на переданное значение.*/ 

//1. Шаблонная функция для поиска максимума:

using System;

public static class ArrayUtility
{
    public static T FindMax<T>(T[] array) where T : IComparable<T>
    {
        if (array.Length == 0)
            throw new InvalidOperationException("Array id empty");

        T max = array[0];
        foreach (T item in array)
        {
            if (item.CompareTo(max) > 0)
                max = item;
        }
        
        return max;
    }
    
//2. Шаблонная функция для поиска минимума:

    public static T FindMin<T>(T[] array) where T : IComparable<T>
    {
        if (array.Length == 0)
            throw new InvalidOperationException("Array id empty");

        T min = array[0];
        foreach (T item in array)
        {
            if (item.CompareTo(min) < 0)
                min = item;
        }

        return min;
    }
    
//3. Шаблонная функция для сортировки массива:

    public static void Sort<T>(T[] array) where T : IComparable<T>
    {
        Array.Sort(array);
    }
    
//4. Шаблонная функция для двоичного поиска:

    public static int BinarySearch<T>(T[] array, T value) where T : IComparable<T>
    {
        return Array.BinarySearch(array, value);
    }
    
//5. Шаблонная функция для замены элемента массива

    public static void Replace<T>(T[] array, T oldValue, T newValue)
    {
        for (int i = 0; i < array.Length; i++)
        {
            if (Equals(array[i], oldValue))
                array[i] = newValue;
        }
    }
}

public class Program
{
    public static void Main()
    { 
    int[] intArray = { 4, 2, 5, 67, 3, 6, };
    double[] doubleArray = { 3.4, 5.3, 7.8 };
    string[] stringArray = { "Apple", "Table" };
    
    Console.WriteLine(ArrayUtility.FindMax(intArray));
    Console.WriteLine(ArrayUtility.FindMin(doubleArray));
    ArrayUtility.Sort(intArray);
    Console.WriteLine(ArrayUtility.BinarySearch(stringArray, "Table"));
    ArrayUtility.Replace(stringArray, "Apple", "aplles");






    }
}
