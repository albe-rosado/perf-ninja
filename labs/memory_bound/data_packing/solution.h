
#include <array>

// Assume those constants never change
constexpr short N = 10000;
constexpr short minRandom = 0;
constexpr short maxRandom = 100;

// FIXME: this data structure can be reduced in size
struct S {
    double d;
    int l;
    short i;
    short s;
    bool b;
    bool operator<(const S &s) const { return this->i < s.i; }
};

void init(std::array<S, N> &arr);
S create_entry(short first_value, short second_value);
void solution(std::array<S, N> &arr);
