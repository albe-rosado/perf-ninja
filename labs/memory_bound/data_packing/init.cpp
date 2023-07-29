
#include "solution.h"
#include <random>

S create_entry(short first_value, short second_value) {
  S entry{};

  entry.i = first_value;
  entry.s = second_value;
  entry.l = first_value * second_value;
  entry.d = static_cast<double>(first_value) / maxRandom;
  entry.b = first_value < second_value;

  return entry;
}

void init(std::array<S, N> &arr) {
  std::default_random_engine generator;
  std::uniform_int_distribution<short> distribution(minRandom, maxRandom - 1);

  for (u_int16_t i = 0; i < N; i++) {
    short random_int1 = distribution(generator);
    short random_int2 = distribution(generator);

    arr[i] = create_entry(random_int1, random_int2);
  }
}
