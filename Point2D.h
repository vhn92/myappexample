using namespace std;

class Point2D{
	private:
		int x;
		int y;
	public:
		Point2D();
		Point2D(int x, int y);
		Point2D(const Point2D &p);
		~Point2D();
		int getX() const;
		void setX(int x);
		int getY() const;
		void setY(int y);
		friend ostream& operator<< (ostream &wyjscie, const Point2D &p);

	
};