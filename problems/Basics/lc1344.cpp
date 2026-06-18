/*Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.

Answers within 10-5 of the actual value will be accepted as correct.



Example 1:


Input: hour = 12, minutes = 30
Output: 165
Example 2:


Input: hour = 3, minutes = 30
Output: 75
Example 3:


Input: hour = 3, minutes = 15
Output: 7.5


Constraints:

1 <= hour <= 12
0 <= minutes <= 59
soln:
360/12hrs=30deg
hrg hand moves extra 30deg/60min=0.5deg per min
1hrs=30deg=5min==>1min=6deg
xhrs+ymin=(x*60+y)*6deg=z
finalans=min(z,(360-z))

*/
#include <cmath>
#include <iostream>
using namespace std;

class Solution
{
public:
    double angleClock(int hour, int minutes)
    {
        // The minute hand moves 360/60 = 6 degrees per minute.
        double minAngle = minutes * 6;

        // The hour hand moves 360/12 = 30 degrees per hour, plus 0.5 degrees for every minute.
        // We use hour % 12 to handle the case where hour is 12 (which should be treated as 0).
        double hrsAngle = (hour % 12) * 30 + 0.5 * minutes;

        // Calculate the absolute difference between the two angles.
        double angleBetween = abs(hrsAngle - minAngle);

        // The smaller angle is the minimum of the calculated angle and its reflex angle (360 - angle).
        double finalAns = min(angleBetween, 360 - angleBetween);

        return finalAns;
    }
};

int main()
{
    int hour = 12;
    int minutes = 30;
    Solution sol;
    double ans = sol.angleClock(hour, minutes);
    cout << ans << endl;
}