#include <cstdio>

struct ClockOfTheLongNow {
  ClockOfTheLongNow(int year_in) {
    if(!set_year(year_in)) {
      year = 2019;
    }
  }
  ClockOfTheLongNow() {
    year = 2019;
  }
  auto add_year() {
    year++;
  }
  bool set_year(int new_year) {
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
  ClockOfTheLongNow clock{ 2020 };
  printf("Year: %d", clock.get_year());
}
