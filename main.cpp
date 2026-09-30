#include <iostream>
#include <cmath>
#include <format>

using namespace std;

float final_time(float dist1, float dist2) {
    constexpr float s1 = 5.0f;
    constexpr float s2 = 2.0f;

    const float t1 = dist1 / s1;
    const float t2 = dist2 / s2;

    return t1 + t2;
}

int main() {
    // Calculate l3
    constexpr float dy = 10.0f;
    constexpr float l1 = 6.0f;
    constexpr float l3 = dy - l1;

    // Calculate L2
    constexpr float dx = 3.0f;
    const float l2 = sqrtf((dx*dx)+(l3*l3));

    // Get final time (ft)
    const float ft = final_time(l1, l2);

    const int time_mins = roundf(ft * 60.0f);
    int hours = time_mins / 60;
    int mins = time_mins % 60;

    cout << format("It tooks {}h{} to the robot to reachs the cube", hours, mins) << endl;
}