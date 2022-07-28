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
                string[] input = Console.ReadLine().Split(' ');
                int a = int.Parse(input[0]);
                int b = int.Parse(input[1]);
                if (b < a)
                {
                    int tmp = a;
                    a = b;
                    b = tmp;
                }
                if (a == b)
                {
                    Console.WriteLine(a);
                }
                else if(a == 1)
                {
                    Console.WriteLine(b);
                }
                else if(b == 1)
                {
                    Console.WriteLine(a);
                }
                else if (b % a == 0)
                {
                    Console.WriteLine(b);
                }
                else
                {
                    
                    int div = a;
                    int mod = b % a;
                    if(mod != 0)
                    {
                        while (div%mod != 0)
                        {
                            int divtmp = div;
                            div = mod;
                            mod = divtmp % mod;
                        }
                    }
                    Console.WriteLine(a*b/mod);
                }
            }
        }
    }
}