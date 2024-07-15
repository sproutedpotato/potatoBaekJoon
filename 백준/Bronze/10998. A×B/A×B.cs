using System;

class Program
{
  static void Main(string[] args)
  {
    string input = Console.ReadLine();

    string[] inputs = input.Split(' ');

    int a = int.Parse(inputs[0]);
    int b = int.Parse(inputs[1]);

    int sum = a * b;
          
    Console.WriteLine($"{sum}");
  }
}