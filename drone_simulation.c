#include <stdio.h>
#include <math.h>

// Represents every single point in the 10 by 10 matrix
typedef struct Point {
    int x;
    int y;
} Point;

// Finds the position of the 'ch' in the 10 by 10 array
void find_position(char arr[10][10], char ch, Point* point) {

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (arr[i][j] == ch) {
                point->x = i;
                point->y = j;
                return;
            }
        }
    }

	// If we got this far, assign -1
    point->x = -1;
    point->y = -1;
}

// Mathematical formula for manhattan distance
int manhattan_distance(const Point* p1, const Point* p2) {
    return abs(p1->x - p2->x) + abs(p1->y - p2->y);
}

// Caclulate distance between two points (i.e. 'D' and '1')
int calculate_distance(char arr[10][10], char ch1, char ch2) {
    Point p1, p2;

	find_position(arr, ch1, &p1);
	find_position(arr, ch2, &p2);

    if (p2.x == -1) {
        // If there's no target

        return -1;
    }

    return manhattan_distance(&p1, &p2);
}

// Move drone to new target
void move_drone(char arr[10][10], char target) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (arr[i][j] == 'D') arr[i][j] = '-';

            else if (arr[i][j] == target) arr[i][j] = 'D';
        }
    }
}

void simulate(char arr[10][10], int fuel) {

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

void print_simulation(char arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
            printf("%c ", arr[i][j]);
		}

        printf("\n");
	}
}

void print_two_dim_arr(const char * arr, const size_t first_size, const size_t second_size)
{
	for (size_t i = 0; i < first_size; i++)
	{
		for (size_t j = 0; j < second_size; j++)
		{
            printf("%c ", *(arr + i * second_size + j));
		}

        printf("\n");
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

    simulate(arr, 8);
	
    print_two_dim_arr((char *) arr, 10, 10);

    return 0;
}
