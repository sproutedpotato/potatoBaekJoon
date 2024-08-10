using System;

class Program
{
  static void Main(string[] args)
  {
    var input = Console.ReadLine().Split(' ');

    int a = int.Parse(input[0]);
    int b = int.Parse(input[1]);
          
    Console.WriteLine("{0:F9}", (double)a / b);
  }
}