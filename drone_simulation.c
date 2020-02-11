#include <stdio.h>
#include <math.h>

// Represents every single point in the 10 by 10 matrix
struct Point {
  int x;
  int y;
};

// Finds the position of the 'ch' in the 10 by 10 array
struct Point find_position(char arr[10][10], char ch) {

  struct Point pos;
  
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if (arr[i][j] == ch) {
        pos.x = i;
        pos.y = j;
        return pos;
      }
    }
  }

  // If we got this far, then there's no target
  // So return -1
  pos.x = pos.y = -1;

  return pos;
}

// Mathematical formula for manhattan distance
int manhattan_distance(struct Point p1, struct Point p2) {
  return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

// Caclulate distance between two points (i.e. 'D' and '1')
int calculate_distance(char arr[10][10], char ch1, char ch2) {
  struct Point p1 = find_position(arr, ch1);
  struct Point p2 = find_position(arr, ch2);

  if (p2.x == -1) {
    // If there's no target

    return -1;
  }
  
  return manhattan_distance(p1, p2);
}

// Move drone to new target
void move_drone(char arr[10][10], char target) {
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; i < 10; ++j) {
      if (arr[i][j] == 'D') arr[i][j] = '-';

      else if (arr[i][j] == target) arr[i][j] = 'D';
    }
  }
}

void simulate(char arr [10][10], int fuel) {
  int distance;

  for (char target = '1'; ; target++) {
    // Infinite loop starting from target = 1
    // Increment target in every iteration

    distance = calculate_distance(arr, 'D', target);
    // Calculate distance btw Drone and Target

    if (fuel < distance || distance == -1) {
      // Our fuel is finished
      // Or there's no target

      break;
    }
    
    move_drone(arr, target);
    // Move drone to target if we have sufficient amount of fuel

    fuel -= distance;
    // Decrease our fuel by distance
    // (because of moving the drone)
  }
}

int main(void) {
  char arr[10][10] = {
    {'D', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '1', '-', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '2', '-', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '3', '-', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '4', '-', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '5', '-', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '6', '-', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '7', '-', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '8', '-'},
    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '9'},
    };
    
    simulate(arr, 50);

  return 0;
}
