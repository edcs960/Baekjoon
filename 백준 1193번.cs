using System;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string X = Console.ReadLine();
            int x = int.Parse(X);
            int sum = 0;
            int i = 1;
            
            int a, b;

            if(int.Parse(X) == 1)
            {
                a = 1;
                b = 1;
            }
            else
            {
                int tmp = x;
                while (x > sum)
                {
                    sum += i;
                    if (tmp > i)
                    {
                        tmp = tmp - i;
                        i++;
                    }
                }

                if (i % 2 == 0)
                {
                    a = 1;
                    b = i;
                }
                else
                {
                    a = i;
                    b = 1;
                }

                for (int j = 1; j < tmp; j++)
                {
                    if (i % 2 == 0)
                    {
                        a += 1;
                        b -= 1;
                    }
                    else
                    {
                        a -= 1;
                        b += 1;
                    }
                }
            }

            Console.WriteLine(string.Format("{0}/{1}",a,b));
        }
    }
}
