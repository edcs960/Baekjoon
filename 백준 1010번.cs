using System;
namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());
            for(int i = 0; i < T; i++)
            {
                string[] input = Console.ReadLine().Split();
                int N = int.Parse(input[0]);
                int M = int.Parse(input[1]);
                int[] Marr = new int[31];

                bool isDiv = false;
                long notdiv = 1;
                long result = 1;
                if (N == M)
                {
                    Console.WriteLine(1);
                }
                else
                {
                    for (int j = 1; j <= M - N; j++)
                    {
                        Marr[j] = N + j;
                    }
                    for (int j = M - N; j > 0; j--)
                    {
                        isDiv = false;
                        for (int k = 1; k <= M - N; k++)
                        {
                            if (Marr[k] % j == 0)
                            {
                                isDiv = true;
                                Marr[k] = Marr[k] / j;
                                break;
                            }
                            else
                            {
                                continue;
                            }
                        }
                        if (!isDiv)
                        {
                            notdiv *= j;
                        }
                    }
                    for (int j = 1; j <= M - N; j++)
                    {
                        result *= Marr[j];
                    }
                    Console.WriteLine(result/notdiv);
                }
            }
        }
    }
}