// File: statics1.cpp

class Point 
{
  public:
    static int default_radius;
    int x, y;
    int square_distance_from_orgin()
      {
      return x*x + y*y;
      }
  static int radius()
  {
    return default_radius;
  }

};

class Point A = {1,1};

int Point::default_radius = 1;

int main()
{
  Point::default_radius = 2;
  return Point::radius();
}
