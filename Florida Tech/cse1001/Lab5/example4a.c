struct Point 
{
  int x, y;
};

struct Point A = {0,1}, B = {1,1};

void setY(struct Point* this, int y){
	this->y = y;
}

int main ()
{
    setY(&A, -1);
    return
     (A.x-B.x)*(A.x-B.x) +
     (A.y-B.y)*(A.y-B.y);
}


