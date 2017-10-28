// Quick-find solution to connectivity problem

#include <iostream>

static const int N = 10000;
int main()
{
  int i, p, q, id[N];
  for (i = 0; i < N; i++) id[i] = i; // Initially each one is in its own set
  while (std::cin >> p >> q) { // Take pairs from stdin
    { int t = id[p];
      if (t == id[q]) continue; // If they already in the same set, do nothing
      // Note how the use of blocks (brackets) make it possible to set
      // i to other values without accepting the "outside" i
      for (i = 0; i < N; i++)
        if (id[i] == t) id[i] = id[q];
      std::cout << p << " " << q << std::endl;
    }
  }
}
