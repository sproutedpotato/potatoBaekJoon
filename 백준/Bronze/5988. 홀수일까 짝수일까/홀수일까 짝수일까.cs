using System;

class Program
{
  static void Main(string[] args)
  {
    string input = Console.ReadLine();

    int a = int.Parse(input);

    for(int i = 0; i < a; i++){
      string str = Console.ReadLine();
      int b = int.Parse(str[str.Length - 1].ToString());

      if(b % 2 == 0)  Console.Write("even\n");
      else  Console.Write("odd\n");
    }
  }
}