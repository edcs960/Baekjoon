using System;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int n = int.Parse(input.Split(' ')[0]);
            int k = int.Parse(input.Split(' ')[1]);
            int[,] pascal = new int[30, 30];

            for(int i = 0; i < 30; i++)
            {
                for(int j = 0; j < 30; j++)
                {
                    if (i == j)
                    {
                        pascal[i, j] = 1;
                        break;
                    }
                    else if (j == 0)
                    {
                        pascal[i, j] = 1;
                        continue;
                    }
                    else
                    {
                        pascal[i, j] = pascal[i - 1, j - 1] + pascal[i - 1, j];
                    }
                }
            }
            Console.WriteLine(pascal[n-1, k-1]);
        }
    }
}
