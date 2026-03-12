// example2b.c
int half(int x){
  return x/2;
}
int decreased(int x) {
 return half(x) + 1;
}

int main (int argc) {
   return decreased(argc);
}

