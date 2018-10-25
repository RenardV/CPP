#include <iostream>
#include <cstdlib>

class PassGrid {
private:
  char* arr;
  int size;

public:
  PassGrid ();

  virtual ~PassGrid() //Destructeur de PassGrid
  {
    delete arr;
  }

  PassGrid (int i)
  {
    size = i;
    arr = (char*) malloc(size * size * sizeof(char));
    int j = 0;
    int l = 0;
    while (j < size)
    {
      int k = 0;
      while (k < size)
      {
        arr[l] = (char)(rand() % 61 + 33); //On cast le code ascii en char
        k++;
        l++;
      }
      j++;
    }
  }

  void print()
  {
    int i = 0;
    int j = 0;
    while(j < size)
    {
      int k = 0;
      while(k < size)
      {
        std::cout << arr[i] << " ";
        k++;
        i++;
      }
      std::cout << std::endl;
      j++;
    }
  }

  void reset()
  {
    int j = 0;
    int i = 0;
    while (j < size)
    {
      int k = 0;
      while (k < size)
      {
        arr[i] = (char)(rand() % 61 + 33);
        k++;
        i++;
      }
      j++;
    }
  }
};



int main()
{
  int n = 0;
  srand(time(NULL));
  std::cout << "Quelle est la taille de la grille? ";
  std::cin >> n;
  PassGrid g(n);
  g.print();
  g.reset();
  std::cout << std::endl;
  g.print();^
  return 0;
}
