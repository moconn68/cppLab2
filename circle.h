//Matthew O'Connell
class circle{ //circle class declaration
	public:
		//member function declarations
		double radius();
		double circumference();
		double area();
		double populate_classobj(double x1, double y1, double x2, double y2);
	protected:
		//member function declaration
		double distance();//doesn't need parameters b/c has access to x1 y1 x2 y2 from within class
	private:
		//data member declaration
		double x1,y1,x2,y2;

};