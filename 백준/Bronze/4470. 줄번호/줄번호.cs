using System;

class Program
{
  static void Main(string[] args)
  {
    var a = Console.ReadLine();
    int count = int.Parse(a);
    
    for(int i = 0; i < count; i++){
      var input = Console.ReadLine();

      Console.WriteLine("{0}. {1}", i + 1, input);
    }
    
  }
}