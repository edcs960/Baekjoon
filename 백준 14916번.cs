using System;
using System.Collections.Generic;
using System.Text;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int count = 0;
            if(n == 1 || n == 3)
            {
                count = -1;
            }
            else
            {
                while(n > 0)
                {
                    if (n % 5 == 0)
                    {
                        n -= 5;
                        count++;
                    }
                    else
                    {
                        n -= 2;
                        count++;
                    }
                }
            }
            Console.WriteLine(count);
        }
    }
}
