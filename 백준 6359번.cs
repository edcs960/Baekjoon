using System;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[101];
            int T = int.Parse(Console.ReadLine());
            for(int i = 0; i< T; i++)
            {
                for(int j = 0; j <= 100; j++)
                {
                    if (arr[j] == 0) continue;
                    else arr[j] = 0;
                }
                int count = 0;
                int n = int.Parse(Console.ReadLine());
                for(int j = 1; j <= n; j++)
                {
                    for(int k = 1; j*k <= n; k++)
                    {
                        if (arr[j * k] == 0) arr[j * k] = 1;
                        else arr[j * k] = 0;
                    }
                }
                for(int j = 1; j <= n; j++)
                {
                    if (arr[j] == 1) count++;
                }
                Console.WriteLine(count);
            }
        }
    }
}