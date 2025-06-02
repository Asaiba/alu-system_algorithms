#ifndef PATHFINDING_H
#define PATHFINDING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "queues.h"
#include "pathfinding.h"

/**
 * struct point_s - Point structure for grid coordinates
 * @x: x-coordinate
 * @y: y-coordinate
 */
typedef struct point_s
{
	int x;
	int y;
} point_t;

#define RIGHT {1, 0}
#define BOTTOM {0, 1}
#define LEFT {-1, 0}
#define TOP {0, -1}

/* Function prototypes */
int point_push(queue_t **queue, int x, int y);
int backtracker(queue_t **queue, int *saw, char **map,
		int rows, int cols, int x, int y,
		point_t const *target);
queue_t *backtracking_array(char **map, int rows, int cols,
			    point_t const *start,
			    point_t const *target);

#endif /* PATHFINDING_H */
