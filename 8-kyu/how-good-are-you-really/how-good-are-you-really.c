#include <stdbool.h>
​
bool better_than_average(const int class_points[], int class_size, int your_points) {
  double media = your_points;
  for (int i = 0; i < class_size; i++){
    media += class_points[i];
  }
  media = media / (class_size + 1);
  return (your_points > media) ? true : false;
}