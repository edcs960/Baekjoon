using System;

namespace Basic_Cshap
{
    class Program
    {
        public long min(long a, long b)
        {
            if(a < b)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
        static void Main(string[] args)
        {
            var tmp = new Program();
            long[] dp = new long[1000001];
            int n = int.Parse(Console.ReadLine());
            dp[1] = 0;
            dp[2] = 1;
            dp[3] = 1;
            
            for(int i = 4; i<= n; i++)
            {
                dp[i] = dp[i - 1] + 1;
                if(i%3 == 0)
                {
                    dp[i] = tmp.min(dp[i / 3] + 1, dp[i]);
                }
                if(i%2 == 0)
                {
                    dp[i] = tmp.min(dp[i / 2] + 1, dp[i]);
                }
            }

            Console.WriteLine(dp[n]);
        }
    }
}
