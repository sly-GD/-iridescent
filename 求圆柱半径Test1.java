class Circle{
	double radius;
	final double PI=3.14;
	Circle(double r){
		radius = r;
	}
	double findArea(){
	return PI*this.radius*this.radius;
	}
	double getRadius(){
	return this.radius;
	}
}

class Cylinder extends Circle{
	double length;
	Cylinder(double r ,double l){
		super(r);
		length =l;
	}
	double findVolume(){
	return super.findArea()*length;
	}
	public String toString(){
	return "�뾶��"+super.getRadius()+"�ߣ�"+length+"�����"+findVolume();
	}
}
public class ��Բ���뾶Test1{
	public static void main (String[ ] args){
	Cylinder c=new Cylinder(4,6);
	System.out.print(c.toString());
	}
}
	