// example5b.cpp
class Point {
public:
 int x, y;
 int square_distance_from_origin() {
   // the next redeclaration of variable x as a local 
   // variable hides the visibility of the abscisae x of the point
   int x = 0;  // Another x can be declared here;
   // We can still access the x abscisae of the point as this->x
   return this->y*y; // So this is the Euclidian distance from default origin (0,0)
 }
};

class Point A = {5,5};

int main () {
  // Calling the method square_distance_from_origin() where the default parameter this is given as &A
  return A.square_distance_from_origin(); 
}
