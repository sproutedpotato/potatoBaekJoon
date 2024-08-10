using System;

class Program
{
  static void Main(string[] args)
  {
    var input = Console.ReadLine().Split(' ');

    int a = int.Parse(input[0]);
    int b = int.Parse(input[1]);
          
    Console.WriteLine("{0}\n{1}\n{2}\n{3}\n{4}", a + b, a - b, a * b, a / b, a % b);
  }
}