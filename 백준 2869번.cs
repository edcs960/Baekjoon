using System;
namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);
            int V = int.Parse(input[2]);
            int result = 1;
            if (V == A)
            {
                Console.WriteLine(result);
            }
            else
            {
                if((V-A) % (A-B) == 0)
                {
                    result += (V - A) / (A - B);
                }
                else
                {
                    result += (V - A) / (A - B) + 1;
                }
                Console.WriteLine(result);
            }
        }
    }
}