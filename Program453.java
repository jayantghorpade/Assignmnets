import java.util.*;
class StringX
{
    public String Str1[];
    public int len;
    public StringX(String str[])
    {
        Str1=str;
        len=str.length;
    }
    public void Check()
    {
   
    int Arr[]=new int[len];
    for(int i=0;i<Str1.length;i++)
    {
        for(int j=0;j<Str1.length;j++)
        {
            if(Str1[i].equals(Str1[j]))
            {
                Arr[i]++;
            }
        }
    }
    int Max=0,k=0;
    for(int i=0;i<Arr.length;i++)
    {
         Max=Arr[0];
          k=0;
        if(Arr[i]>Max)
        {
            Max=Arr[i];
            k=i;
        }
    }
      System.out.println("max time occure"+Str1[k]+":"+Max);
}
}
class Program453
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of String Array");
        int len=sc.nextInt(); 
        String Str[]=new String[len];
        for(int i=0;i<Str.length;i++)
        {
            Str[i]=sc.next();
        }
        StringX obj=new StringX(Str);
        obj.Check();
    }
}