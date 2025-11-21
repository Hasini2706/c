int digitSum(int n)  
{ 
    if (n == 0)  
    { 
        return 0;       // Base case 
    }  
   else  
    { 
        return (n % 10) + digitSum(n / 10);              // Recursive case 
    } 
} 
 
// Function to reduce the sum to a single digit using recursion 
int singleDigitSum(int n)  
{ 
    int sum = digitSum(n); 
    if (sum < 10)  
   { 
        return sum;     // Base case: if sum is already a single digit 
    } else { 
        return singleDigitSum(sum);   // Recursive case: call again with the new sum
        int main()  
{ 
    int num; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    if (num < 0)  
    { 
        num = -num;     // Handle negative numbers 
    } 
 
    printf("Single digit sum is %d\n", singleDigitSum(num)); 
 
    return 0;
