// File: statics1.cpp

int DeltaX = 0;

class Point 
{
  static int default_radius;

  public:
    int x, y;
    int square_distance_from_origin_cnt()
      {
      DeltaX = DeltaX + 1;
      return x*x + y*y + DeltaX;
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
  A.square_distance_from_origin_cnt();
  A.square_distance_from_origin_cnt();
  DeltaX = 5; 
  return 
    A.square_distance_from_origin_cnt();
}
