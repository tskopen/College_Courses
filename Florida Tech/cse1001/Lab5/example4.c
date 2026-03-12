struct Point 
{
  int x, y;
};

struct Point A = {0,-1}, B = {1,1};

int main ()
{
    return
     (A.x-B.x)*(A.x-B.x) +
     (A.y-B.y)*(A.y-B.y);
}


