//interface 
class I{
  public:
  virtual void operation()=0;
};


class A{
  I *_obj;
  public :
  A(I *obj):_obj(obj){}
  void fun(){
   this->_obj->operation();
  }
};


class B:I{
  public :
  void foo(){}
  void operation(){
    this->foo();
  }
};

class C:I{
  public :
  void bar(){}
  void operation(){
    this->bar();
  }
};

void main(){
 A obj(new B());
 A obj_new(new C()); 
  
}
    
