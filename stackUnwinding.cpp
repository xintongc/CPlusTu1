#include <iostream>  
using namespace std;  
  
// 函数f1会抛出一个异常  
void f1() throw (int) {  
  cout<<"\n f1() Start ";  
  throw 100;  
  cout<<"\n f1() End ";  
}  
   
// 调用函数f1  
void f2() throw (int) {  
  cout<<"\n f2() Start ";  
  f1();  
  cout<<"\n f2() End ";  
}  
    
// 调用函数f2,并处理f1()抛上来的异常  
void f3() {  
  cout<<"\n f3() Start ";  
  try {  
    f2();  
  }  
  catch(int i) {  
   cout<<"\n Caught Exception: "<<i;  
  }  
  cout<<"\n f3() End";  
}  
   
// 演示栈展开过程的程序  
int main() {  
  f3();  
  return 0;  
}  


output:
f3() Start
f2() Start
f1() Start
Caught Exception: 100
f3() End
上述程序中, 当函数f1抛出异常后，它的实体会从函数调用栈中删除掉(因为f1中没有包含异常处理代码)，然后下一个调用栈的实体用来查找异常处理者。此例子中，下一个实体是f2()。因为f2中也没有包含异常处理代码，则它的实体也会从函数调用栈中移除。下一个实体是f3(). 因为f3包含了异常处理，则f3中的catch代码块会被执行，最后catch代码块后面的代码也会执行。
注意：f1()与f2()中的如下面所示的代码完全没有执行。 
//f1()中没有被执行的代码
cout<<"\n f1() End ";
//f2()中没有被执行的代码 
cout<<"\n f2() End ";
另外需要注意的是：如果f1()和f2()中定于了一些局部对象，则在栈展开的过程中，这些局部对象的析构函数会被调用到。这条规则只使用于栈上分配的对象，对于new出来的对象，那还是需要手动delete的。
