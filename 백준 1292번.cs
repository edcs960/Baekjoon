using System;
using System.Collections.Generic;
using System.Text;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split(' ');
            int sum = 0;
            List<int> arr = new List<int>();

            for(int i = 1; i<= 1000; i++)
            {
                for (int j = 0; j < i; j++) 
                {
                    arr.Add(i);
                }
            }

            for(int i = int.Parse(a[0])-1;i <= int.Parse(a[1]) - 1; i++)
            {
                sum += arr[i];
            }
            Console.WriteLine(sum);
        }
    }
}
