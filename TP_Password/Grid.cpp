#include <iostream>
#include <cstdlib>

class PassGrid {
private:
  char** arr;
  int line, col;

public:
  PassGrid ()
  {
    arr = (char**) malloc(0);
    line = 0;
    col = line;
  };

  PassGrid (int i)
  {
    line = i;
    col = line;
    arr = (char**) malloc(line * col * sizeof(char));
    int j = 0, k;
    while (j < line)
    {
      k = 0;
      while (k < col)
      {
        arr[j][k] = (char)(rand() % 61 + 33); //On cast le code ascii en char
        k++;
      }
      j++;
    }
  }

  PassGrid (int a, int b)
  {
    line = a;
    col = b;
    arr = (char**) malloc(line * col * sizeof(char));
    int j = 0, k;
    while (j < line)
    {
      k = 0;
      while (k < col)
      {
        arr[j][k] = (char)(rand() % 61 + 33);
        k++;
      }
      j++;
    }
  }

  void print()
  {
    int j = 0, k;
    while(j < line)
    {
      k = 0;
      while(k < col)
      {
        std::cout << arr[j][k] << " ";
        k++;
      }
      std::cout << std::endl;
      j++;
    }
  }

  void reset()
  {
    int j = 0, k;
    while (j < line)
    {
      k = 0;
      while (k < col)
      {
        arr[j][k] = (char)(rand() % 61 + 33);
        k++;
      }
      j++;
    }
  }
};

int main()
{
  double m, n;
  std::cout << "Combien de lignes possede la grille? ";
  std::cin >> n;
  std::cout << "Combien de colonnes possede la grille? ";
  std::cin >> m;
  PassGrid g(n, m);
  g.print();
  g.reset();
  std::cout << std::endl;
  g.print();
  return 0;
}
