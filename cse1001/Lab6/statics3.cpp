// File: statics1.cpp

class Point 
{
  public:
    static int default_radius;
    int x, y;
    int square_distance_from_orgin()
      {
      static int x =0;
      x = x + 1;
      return this->x*this->x + y*y;
      }
  static int radius()
  {
    return default_radius;
  }

};

class Point A = {1,1}, B = {2,3};

int Point::default_radius = 1;

int main()
{
  Point::default_radius = 5;
  return Point::radius();
}
