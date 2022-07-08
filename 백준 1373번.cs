using System;
using System.Text;

namespace Basic_Cshap
{
    class Program
    {
        static void Main(string[] args)
        {
            string X = Console.ReadLine();
            StringBuilder sb = new StringBuilder();

            if (X.Length % 3 == 2)
            {
                X = "0" + X;
            }
            else if(X.Length % 3 == 1)
            {
                X = "00" + X;
            }

            for (int i = 0; i < X.Length; i += 3)
            {
                switch (X.Substring(i, 3))
                {
                    case "000":
                        sb.Append("0");
                        break;
                    case "001":
                        sb.Append("1");
                        break;
                    case "010":
                        sb.Append("2");
                        break;
                    case "011":
                        sb.Append("3");
                        break;
                    case "100":
                        sb.Append("4");
                        break;
                    case "101":
                        sb.Append("5");
                        break;
                    case "110":
                        sb.Append("6");
                        break;
                    case "111":
                        sb.Append("7");
                        break;
                }
            }

            Console.WriteLine(sb.ToString());
        }
    }
}
