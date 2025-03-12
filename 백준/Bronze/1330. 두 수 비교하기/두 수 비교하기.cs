using System;

namespace Baekjoon {
    class Program {
        static void Main() {
            string s = Console.ReadLine();
            string[] ss = s.Split();
            int a = int.Parse(ss[0]);
            int b = int.Parse(ss[1]);
            if(a > b){
                Console.WriteLine(">");
            }
            else if(a < b){
                Console.WriteLine("<");
            }
            else{
                Console.WriteLine("==");
            }
        }
    }
  }