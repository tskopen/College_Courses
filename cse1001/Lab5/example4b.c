struct Point 
{
  int x, y;

  void setY(int y)
  {
    this->y = y;
  }
};

struct Point A = {0,1}, B = {1,1};


int main ()
{
    A.setY(-1);
    return
     (A.x-B.x)*(A.x-B.x) +
     (A.y-B.y)*(A.y-B.y);
}


