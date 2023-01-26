import java.util.*;
class CheckVowel
{
    public String s;
    public CheckVowel(String str)
    {
    s=str;
    }
    public void Vowel()
    {
        int flag=0;
        char Arr[]=s.toCharArray();
        char Arr1[]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr1.length;j++)
        {
            if(Arr[i]==Arr1[j])
            {
                flag=1;
                break;
            }
        }
        
        }
        if(flag==1)
        {
            System.out.println("True");
        }      
        else
    {
        System.out.println("False");
    }
    }

}
class Program314
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter String :");
        String str=sc.nextLine();
        
        CheckVowel obj=new CheckVowel(str);
        obj.Vowel();
        
    }
}