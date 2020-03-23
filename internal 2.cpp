                                               PART-A

1A.
    1. sizeof (object size information)
    2.typeid (object type information)
    3.static_cast 
    4.dot operator(.)
    
2A. 
   Error in compiling 

3A.
    If virtual keyword is not used then the child class will get two copies of data members from parent class.
    This type of inheritance is very ambiguous.
    The problem that arises when using multipath inheritance refers to a derived class having more than one
    parent class that  defines property or methods with the same name. 
    
  4A.    A pure virtual function is a function that must be overridden in a derived class and need not be defined.
          A virtual function is declared to be “pure” using the curious =0 syntax.
      Class Test
      {
       public:
       virtual void show()=0;
       };
5A. 
    b.catch(…) is used to catch all types of exceptions arising in the program.

                                             PART-B
 6A).
     Overloading binary arthematic operator
     #include<iostream.h>
     #include<conio.h>
    class complex {
    int a, b;
public:
    void getvalue() {
        cout << "Enter the value of Complex Numbers a,b:";
        cin >> a>>b;
    }
    complex operator+(complex ob) {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }
    complex operator-(complex ob) {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }
    void display() {
        cout << a << "+" << b << "i" << "\n";
    }
};
    void main() {
    clrscr();
    complex obj1, obj2, result, result1;
    obj1.getvalue();
    obj2.getvalue();
    result = obj1 + obj2;
    result1 = obj1 - obj2;
    cout << "Input Values:\n";
    obj1.display();
    obj2.display();
    cout << "Result:";
    result.display();
    result1.display();
    getch();
}

7A.
    Function overloading is a feature in C++ where two or more functions can have the same name
    but different parameters.Function overloading can be considered as an example of
    polymorphism feature in C++.
    Example for function overloading:
    #include <iostream> 
    using namespace std; 
  
  void print(int i) { 
  cout << " Here is int " << i << endl; 
} 
  void print(double  f) { 
  cout << " Here is float " << f << endl; 
} 
  void print(char const *c) { 
  cout << " Here is char* " << c << endl; 
} 
  
  int main() { 
  print(10); 
  print(10.10); 
  print("ten"); 
  return 0; 
}       
 
  Overriding resolved :
 
   By specifying final keyword to the method you can avoid overriding
   in a subcalss. Similarlly one can use final at class level to
   prevent creating subclasses.
   
 8A).
     Base class constructors are always called in the derived class constructors. Whenever you create derived class object, 
      first the base class default constructor is executed and then the derived class's constructor finishes execution.
   1. Whether derived class's default constructor is called or parameterised is called, base class's default constructor is always
      called inside them.
   2. To call base class's parameterised constructor inside derived class's parameterised constructor, we must mention it explicitly
      while declaring derived class's parameterized constructor.

Program:
  class Base
  {
    int x;
    public:
    Base(int i)
     {
        x = i;
        cout << "Base Parameterized Constructor\n";
      }
  };
  class Derived : public Base 
  {
    int y;
    public:
    Derived(int j):Base(j)
    {
       y = j;
       cout << "Derived Parameterized Constructor\n";
    }
  };
  int main()
  {
    Derived d(10);
  }
  
9A.
     Runtime polymorphism is also known as dynamic polymorphism or late binding.
    In runtime polymorphism, the function call is resolved at run time. In contrast, to compile time or static polymorphism,
    the compiler deduces the object at run time and then decides which function call to bind to the object.
    In C++, runtime polymorphism is implemented using method overriding.
    
    Example:
    #include <iostream>
    using namespace std;
    class Base
{
   public:
   void show_val()
   {
      cout << "Class::Base"<<endl;
   }
};
   class Derived:public Base
{
   public:
   void show_val() //function overridden from base
   {
      cout << "Class::Derived"<<endl;
   }
};
   int main()
{
   Base b;
   Derived d;
   b.show_val();
   d.show_val();
}

10A.
     #include<iostream.h>
     #include<conio.h>
     void main()
 {
     int a,b,c;
     flo at d;
     clrscr();
     cout<<"Enter the value of a:";
     cin>>a;
     cout<<"Enter the value of b:";
     cin>>b;
     cout<<"Enter the value of c:";
     cin>>c;
     try
{
     if((a-b)!=0)
{
     d=c/(a-b);
     cout<<"Result is:"<<d;
}
     else
{
     throw(a-b);
}
}
     catch(int i)
{
     cout<<"Answer is infinite because a-b is:"<<i;
}
     getch();
     }
     
                                             PART-C
     
11A.  #include <iostream>
      using namespace std;
      class base 
{
 	public:
 	int x;
 	void getdata()
 	{
    	cout << "Enter value of x= "; cin >> x;
 	}
};
        class derive1 : public base 
{
 	public:
 	int y;
 	void readdata()
 	{
 	    cout << "\nEnter value of y= "; cin >> y;
 	}
};
        class derive2 : public derive1  
{
 	private:
 	int z;
 	public:
 	void indata()
 	{
    	cout << "\nEnter value of z= "; cin >> z;
 	}
 	void product()
 	{
 	    cout << "\nProduct= " << x * y * z;
 	}
};
       int main()
{
     derive2 a;      
     a.getdata();
     a.readdata();
     a.indata();
     a.product();
     return 0;
}   


     input:

     Enter value of x=10

     Enter value of y= 9

     Enter value of z= 6
     
     output:

     Product= 540
