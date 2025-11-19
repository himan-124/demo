// number is pallindrome
int main(){
    int i,n,res=0;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=n;i!=0;i/=10){
        int dig=i%10;
        res=10*res+dig;



        
   }
   if(n==res){
    printf("number is a palindrome");
   
   }
   else{
    printf("number is not a palindrome");
   }
}