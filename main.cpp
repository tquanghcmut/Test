#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <limits>

using namespace std;
const int vertex = 5;
int graph[vertex][vertex] = {
    {0, 6, 0, 0, 7}, // Edges from vertex A
    {0, 0, 5, 0, 0}, // Edges from vertex B
    {0, 0, 0, 2, 0}, // Edges from vertex C
    {0, -1, 0, 0, 0}, // Edges from vertex D
    {0, 0, 0, 3, 0} // Edges from vertex E
};
int value_array[vertex];
int previous_array[vertex];
string path;
char start_vertex;
char goal_vertex;
int start_vertex_new;
int goal_vertex_new;

//////////////////////////
void valueInitialize() {
    for (int i = 0; i < vertex; i++) {
        value_array[i] = -1;
    }
}

void prevInitialize() {
    for (int i = 0; i < vertex; i++) {
        previous_array[i] = -1;
    }
}

void startInitialize() {
    value_array[start_vertex_new] = 0;
}

//void endInitialize() {
//
//}

//////////////////////////
int main() {
    start_vertex = 'A';
    goal_vertex = 'E';
    start_vertex_new = start_vertex - 'A';
    goal_vertex_new = goal_vertex - 'A';
    valueInitialize();
    prevInitialize();
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; i++) {
            if (value_array[i] + graph[i][j] < value_array[j]) {
                value_array[j] = value_array[i] + graph[i][j];
                previous_array[j] = i;
            }
        }
    }
    return 0;
}
