using System;
namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] n = Console.ReadLine().Split(' ');
            Console.WriteLine(Math.Abs(long.Parse(n[0]) - long.Parse(n[1])));
        }
    }
}