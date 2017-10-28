// Quick-union solution to the connectivity problem

#include <iostream>

static const int N = 10000;

int main()
{
  int i, j, p, q, id[N];
  for (i = 0; i < N; i++) id[i] = i; // Initially each one is its own "parent"
  while (std::cin >> p >> q) { // Read pairs from stdin
    // Find the topmost parents of both p and q
    for (i = p; i != id[i]; i = id[i]); // Empty, the side effect is i is the topmost parent
    for (j = q; j != id[j]; j = id[j]); // Empty, the side effect is j is the topmost parent
    if (i == j) continue; // They have the same topmost parent, are already connected.
    id[i] = j; // Make i's parent the topmost parent of q instead of being itself
    std::cout << p << " " << q << std::endl;
  }
}
