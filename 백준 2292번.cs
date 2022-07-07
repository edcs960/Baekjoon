using System;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string num = Console.ReadLine();
            int i = 0;
            int sum = 1;

            if (int.Parse(num) == 1)
            {
                i = 1;
            }
            else
            {
                while (int.Parse(num) > sum)
                {

                    sum += (6 * i);
                    i++;
                }
            }

            Console.WriteLine(i);
        }
    }
}
