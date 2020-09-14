#include <cstdio>

struct ClockOfTheLongNow {
  ClockOfTheLongNow() {
    year = 2019;
  }
  auto add_year() {
    year++;
  }
  auto set_year(int new_year) {
    if(new_year < 2019)
      return false;
    year = new_year;
    return true;
  }
  auto get_year() {
    return year;
  }

  private:
  int year;
};

int main() {
  ClockOfTheLongNow clock;
  printf("Default year: %d", clock.get_year());
}
