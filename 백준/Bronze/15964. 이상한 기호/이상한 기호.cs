using System;

class Program
{
  static void Main(string[] args)
  {
    string input = Console.ReadLine();

    string[] inputs = input.Split(' ');

    long a = long.Parse(inputs[0]);
    long b = long.Parse(inputs[1]);

    long sum = (a + b) * (a - b);

    Console.WriteLine($"{sum}");
  }
}