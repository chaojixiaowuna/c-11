//��̬��Ϊ����
//��̬��̬ �������غ�������������ھ�̬��̬�����ú�����
//��̬��̬ ��������麯��ʵ������ʱ��̬
//
//��̬��̬�Ͷ�̬��̬����
//��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
//��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ

//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "���￪��˵��" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "С������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè����˵��" << endl;
//	}
//};
////ִ��˵���ĺ���
////��ַ���Ѱ� �ڱ���׶�ȷ��������ַ
////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//void dospeak(Animal &animal)//Ҫʹ�����õķ�ʽ �����ַ 
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
//��̬��̬�������� 
//1��Ҫ�м̳� 
//2������Ҫ��д������麯�� ��������ֵ���� ������ �����б���ȫ��ͬ
//
// ��̬��̬ʹ��
//	�����ָ��������� ִ���������

//vfptr �麯������ָ�� virtual function pointer
//�麯��ָ��ָ��vftable ���ڼ�¼�麯���ĵ�ַ 
//���� &Animal::speak
//���� ��������д������麯�� �����е��麯���� �ڲ��ᱻ�滻���Ӻ������麯����ַ
//     &Cat::speak

//�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
//��̬���ŵ�
//������֯�ṹ����
//�ɶ���ǿ
//����ǰ�ںͺ��ڵ���չ�Լ�ά��
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

//���麯���ͳ�����
//�ڶ�̬�У�ͨ�������� ���麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������
//��˿��Խ��麯����Ϊ���麯��
//���麯���﷨��virtual ����ֵ���� ������ �������б�=0��
//���������˴��麯���������Ҳ��Ϊ������
//
//�������ص�
//�޷�ʵ��������
//���������д�������еĴ��麯��������Ҳ���ڳ�����

//virtual void func() = 0;
//
//Base* base = new son;
//base->func();

//������Ʒ
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
//		cout << "���Ȫˮ" << endl;
//	}
//	virtual void wartering()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	virtual void pour()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void addtrivial()
//	{
//		cout << "���Ǻ�ţ��" << endl;
//	}
//};
//class Tea:public Base
//{
//public:
//	void boiling()
//	{
//		cout << "��ɽȪˮ" << endl;
//	}
//	void wartering()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	void pour()
//	{
//		cout << "���뱭��" << endl;
//	}
//	void addtrivial()
//	{
//		cout << "������" << endl;
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

//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ �������е�����������Ϊ���������ߴ�������
//
//�������ʹ����������ԣ�
//���Խ������ָ���ͷ��������
//����Ҫ�о���ĺ���ʵ��
//
//�������ʹ�����������
//����Ǵ����������������ڳ����࣬�޷�ʵ��������

//�������﷨��
//virtual ~����() {}
//
//���������﷨��
//
//virtual ~����() = 0; //����
//
//����::~����() {}//����
//
//�ܽ� �������������������������ͨ������ָ���ͷ��������
//���������û�ж������ݣ����Բ�дΪ��������������
//ӵ�д������������������ڳ�����
//#include<iostream>
//using namespace std;
//class Animal {
//public:
//
//	Animal()
//	{
//		cout << "Animal ���캯�����ã�" << endl;
//	}
//	virtual void Speak() = 0;
//
//	//������������virtual�ؼ��֣��������������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal�������������ã�" << endl;
//	//}
//
//
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal ���������������ã�" << endl;
//}
//
////�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������
//
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯�����ã�" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "Сè��˵��!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat������������!" << endl;
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
//	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
//	//��ô���������������һ������������
//	//���������������������ͨ������ָ���ͷ��������
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

//������Ҫ��ɲ���Ϊ CPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
//
//��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
//
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���
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
		cout << "Intel���㹤��" << endl;
	}
};
class IntelGPU :public GPU
{
public:
	virtual void exhibit()
	{
		cout << "Intel��ʾ����" << endl;
	}
};
class IntelRAM :public RAM
{
public:
	virtual void save()
	{
		cout << "Intel�洢����" << endl;
	}
};
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo���㹤��" << endl;
	}
};
class LenovoGPU :public GPU
{
public:
	virtual void exhibit()
	{
		cout << "Lenovo��ʾ����" << endl;
	}
};
class LenovoRAM :public RAM
{
public:
	virtual void save()
	{
		cout << "Lenovo�洢����" << endl;
	}
};
class Computer
{
public:
	void work()
	{
		cout << "���Կ�ʼ����" << endl;
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