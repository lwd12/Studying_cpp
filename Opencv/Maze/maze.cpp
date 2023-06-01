#include <opencv2/opencv.hpp>
#include <iostream>
#include <queue>
#include <cmath>

using namespace cv;
using namespace std;

const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, 1, 0, -1 };

void BFS(Mat& maze, Point start, Point end) {
    queue<Point> q;
    q.push(start);

    while (!q.empty()) {
        Point p = q.front();
        q.pop();

        if (p == end) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = p.x + dx[i];
            int ny = p.y + dy[i];
            if (nx >= 0 && nx < maze.rows && ny >= 0 && ny < maze.cols && maze.at<uchar>(nx, ny) == 0) {
                maze.at<uchar>(nx, ny) = 255;
                q.push(Point(nx, ny));
            }
        }
    }
}

int main(int argc, char** argv) {
    int rows = 500;
    int cols = 500;
    Mat maze = Mat::zeros(rows, cols, CV_8UC1);

    // Generate a maze using a random walk algorithm
    Point current(0, 0);
    for (int i = 0; i < 100000; i++) {
        int dir = rand() % 4;
        int nx = current.x + dx[dir];
        int ny = current.y + dy[dir];
        if (nx >= 0 && nx < maze.rows && ny >= 0 && ny < maze.cols && maze.at<uchar>(nx, ny) == 0) {
            current = Point(nx, ny);
            maze.at<uchar>(current.x, current.y) = 255;
        }
    }

    // Find the shortest path using BFS
    Point start(0, 0);
    Point end(rows - 1, cols - 1);
    BFS(maze, start, end);

    imshow("Maze", maze);
    waitKey(0);
    return 0;
}