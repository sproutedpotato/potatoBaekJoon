using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] arr, int divisor) {
        List<int> array = new List<int>();
        
        for(int i = 0; i < arr.Length; i++){
            if(arr[i] % divisor == 0){
                array.Add(arr[i]);
            }
        }
        
        if(array.Count == 0){
            return new int[] {-1};
        }
        
        array.Sort();
        int[] answer = array.ToArray();
        
        return answer;
    }
}