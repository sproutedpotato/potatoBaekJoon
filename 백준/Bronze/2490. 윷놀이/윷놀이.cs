using System;

class Program
{
  static void Main(string[] args)
  {
    for(int i = 0; i < 3; i++){
      string[] input = Console.ReadLine().Split();

      int[] yut = Array.ConvertAll(input, int.Parse);

      int count = 0;
      foreach (int x in yut)
      {
          if (x == 0) 
          {
              count++;
          }
      }
      if(count == 0)  Console.WriteLine("E");
      else if(count == 1) Console.WriteLine("A");
      else if(count == 2) Console.WriteLine("B");
      else if(count == 3) Console.WriteLine("C");
      else Console.WriteLine("D");
    }
  }
}