//多态分为两类
//静态多态 函数重载和运算符重载属于静态多态，复用函数名
//动态多态 派生类和虚函数实现运行时多态
//
//静态多态和动态多态区别
//静态多态的函数地址早绑定-编译阶段确定函数地址
//动态多态的函数地址晚绑定-运行阶段确定函数地址

//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物开口说话" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "小狗开口说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫开口说话" << endl;
//	}
//};
////执行说话的函数
////地址早已绑定 在编译阶段确定函数地址
////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//void dospeak(Animal &animal)//要使用引用的方式 传入地址 
//{
//	animal.speak();
//}
//void test01()
//{
//	Dog dog;
//	dospeak(dog);//Animal &animal=cat;
//	Cat cat;
//	dospeak(cat);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//动态多态满足条件 
//1、要有继承 
//2、子类要重写父类的虚函数 函数返回值类型 函数名 参数列表完全相同
//
// 动态多态使用
//	父类的指针或者引用 执行子类对象

//vfptr 虚函数（表）指针 virtual function pointer
//虚函数指针指向vftable 表内记录虚函数的地址 
//父类 &Animal::speak
//子类 当子类重写父类的虚函数 子类中的虚函数表 内部会被替换成子函数的虚函数地址
//     &Cat::speak

//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//多态的优点
//代码组织结构清晰
//可读性强
//利于前期和后期的拓展以及维护
//#include<iostream>
//using namespace std;
//class calculator
//{
//public:
//	virtual int getresult()
//	{
//		return numA;
//	}
//	int numA;
//	int numB;
//};
//class add :public calculator
//{
//	int getresult()
//	{
//		return numA + numB;
//	}
//};
//class subadd :public calculator
//{
//	int getresult()
//	{
//		return numA - numB;
//	}
//};
//class muladd :public calculator
//{
//	int getresult()
//	{
//		return numA * numB;
//	}
//};
//class divadd :public calculator
//{
//	int getresult()
//	{
//		return numA / numB;
//	}
//};
//void docalculate(calculator &a)
//{
//	cout<<a.getresult()<<endl;
//}
//void test01()
//{
//	char symbol;
//	calculator c;
//	cin >> c.numA;
//	cin >> c.numB;
//	cin >> symbol;
//	if (symbol == '+')
//	{
//		add a;
//		a.numA = c.numA;
//		a.numB = c.numB;
//
//		docalculate(a);
//		
//	}
//	else if (symbol == '-')
//	{
//		subadd a;
//		a.numA = c.numA;
//		a.numB = c.numB;
//
//		docalculate(a);
//
//	}
//	else if (symbol == '*')
//	{
//		muladd a;
//		a.numA = c.numA;
//		a.numB = c.numB;
//
//		docalculate(a);
//
//	}
//	else if (symbol == '/')
//	{
//		divadd a;
//		a.numA = c.numA;
//		a.numB = c.numB;
//
//		docalculate(a);
//
//	}
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//纯虚函数和抽象类
//在多态中，通常父类中 的虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数
//纯虚函数语法：virtual 返回值类型 函数名 （参数列表）=0；
//当类中有了纯虚函数，这个类也称为抽象类
//
//抽象类特点
//无法实例化对象
//子类必须重写抽象类中的纯虚函数，否则也属于抽象类

//virtual void func() = 0;
//
//Base* base = new son;
//base->func();

//制作饮品
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void boiling() = 0;
//	virtual void wartering() = 0;
//	virtual void pour() = 0;
//	virtual void addtrivial() = 0;
//	void func()
//	{
//		boiling();
//		wartering();
//		pour();
//		addtrivial();
//	}
//};
//class Coffee:public Base
//{
//public:
//	virtual void boiling()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	virtual void wartering()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void pour()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void addtrivial()
//	{
//		cout << "加糖和牛奶" << endl;
//	}
//};
//class Tea:public Base
//{
//public:
//	void boiling()
//	{
//		cout << "煮山泉水" << endl;
//	}
//	void wartering()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	void pour()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	void addtrivial()
//	{
//		cout << "加柠檬" << endl;
//	}
//};
//void dowork(Base* base)
//{
//	base->func();
//	delete base;
//}
//int main()
//{
//	 dowork(new Coffee);
//	 dowork(new Tea);
//	 Base* base = new Tea;
//	 base->func();
//	system("pause");
//	return 0;
//}

//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式 将父类中的析构函数改为需析构或者纯需析构
//
//虚析构和纯虚析构共性：
//可以解决父类指针释放子类对象
//都需要有具体的函数实现
//
//虚析构和纯虚析构区别
//如果是纯虚析构，该类属于抽象类，无法实例化对象

//虚析构语法：
//virtual ~类名() {}
//
//纯虚析构语法：
//
//virtual ~类名() = 0; //声明
//
//类名::~类名() {}//定义
//
//总结 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//拥有纯虚析构函数的类属于抽象类
//#include<iostream>
//using namespace std;
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal 构造函数调用！" << endl;
//	}
//	virtual void Speak() = 0;
//
//	//析构函数加上virtual关键字，变成虚析构函数
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用！" << endl;
//	//}
//
//
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
//}
//
////和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "小猫在说话!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数调用!" << endl;
//		if (this->m_Name != NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//public:
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
//	delete animal;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）
//
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//
//测试时组装三台不同的电脑进行工作
#include<iostream>
using namespace std;
class CPU
{
public:
	virtual void calculate() = 0;
};
class GPU
{
public:
	virtual void exhibit() = 0;
};
class RAM
{
public:
	virtual void save() = 0;
};
class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel计算工作" << endl;
	}
};
class IntelGPU :public GPU
{
public:
	virtual void exhibit()
	{
		cout << "Intel显示工作" << endl;
	}
};
class IntelRAM :public RAM
{
public:
	virtual void save()
	{
		cout << "Intel存储工作" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo计算工作" << endl;
	}
};
class LenovoGPU :public GPU
{
public:
	virtual void exhibit()
	{
		cout << "Lenovo显示工作" << endl;
	}
};
class LenovoRAM :public RAM
{
public:
	virtual void save()
	{
		cout << "Lenovo存储工作" << endl;
	}
};
class Computer
{
public:
	void work()
	{
		cout << "电脑开始工作" << endl;
	}
	void calcu(CPU &cpu)
	{
		cpu.calculate();
	}
	void exh(GPU &gpu)
	{
		gpu.exhibit();
	}
	void sav(RAM &ram)
	{
		ram.save();
	}

};
void comp1()
{
	Computer c1;
	c1.work();
	c1.calcu(*(new IntelCPU));
	c1.exh(*(new IntelGPU));
	c1.sav(*(new IntelRAM));

}
void comp2()
{
	Computer c1;
	c1.work();
	c1.calcu(*(new LenovoCPU));
	c1.exh(*(new LenovoGPU));
	c1.sav(*(new LenovoRAM));
	

}
void comp3()
{
	Computer c1;
	c1.work();
	c1.calcu(*(new IntelCPU));
	c1.exh(*(new LenovoGPU));
	c1.sav(*(new IntelRAM));

}
int main()
{
	comp1(); 
	comp2();
	comp3();
	system("pause");
	return 0;
}