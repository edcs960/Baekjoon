using System;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            long[] dp = new long[36];

            dp[0] = 1;
            for(int i = 1; i <= 35; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    dp[i] += dp[j] * dp[i - j - 1];
                }
            }
            Console.WriteLine(dp[n]);
        }
    }
}
