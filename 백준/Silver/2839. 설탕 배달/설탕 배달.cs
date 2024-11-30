using System;

class Program
{
  static void Main(string[] args)
  {
    string input = Console.ReadLine();

    int sugar = int.Parse(input);
    int bag = 0;

    while(true){
      if (sugar == 0){
        break;
      }

      else if(sugar < 0){
        bag = -1;
        break;
      }

      else if(sugar % 5 == 0){
        bag += sugar / 5;
        break;
      }

      sugar -= 3;
      bag += 1;
    }

    Console.WriteLine(bag);
  }
}