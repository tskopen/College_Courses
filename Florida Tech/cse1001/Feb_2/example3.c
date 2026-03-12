struct Point
{
  int x, y;
};

struct Point A = {0,1}, B = {1,0};

int main (int argc)
{
    int result;
    result =
	(A.x-B.x) * (A.x-B.x) + // delta x ^ 2
	(A.y-B.y) * (B.y-B.y); // delta y ^ 2
}
