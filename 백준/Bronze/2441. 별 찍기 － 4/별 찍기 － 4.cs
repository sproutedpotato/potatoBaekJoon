using System;

class Program
{
  static void Main(string[] args)
  {
    string input = Console.ReadLine();

    int a = int.Parse(input);

    for(int i = 0; i < a; i++){
      for(int j = 0; j < i; j++){
        Console.Write(" ");
      }

      for(int k = 0; k < a - i; k++){
        Console.Write("*");
      }

      Console.WriteLine();
    }
  }
}