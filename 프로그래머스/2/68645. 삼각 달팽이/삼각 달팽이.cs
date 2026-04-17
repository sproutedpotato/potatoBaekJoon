using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
        List<int> answer = new List<int>();
        int[,] arr = new int[n, n];
        
        int num = 1;
        int x = -1, y = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - i; j++){
                if(i % 3 == 0){
                    x++;
                }
                else if(i % 3 == 1){
                    y++;
                }
                else{
                    x--;
                    y--;
                }
                
                arr[x, y] = num;
                num++;
            }
        }
        
        for(int i = 0; i < arr.GetLength(0); i++){
            for(int j = 0; j < arr.GetLength(1); j++){
                if(arr[i, j] != 0)
                    answer.Add(arr[i, j]);
            }
        }
        
        return answer.ToArray();
    }
}