//to find the points that would make the larget array og ll
/*Input: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
Output: 2.00000
Explanation: The five points are shown in the above figure. The red triangle is the largest.*/


class Solution {
public:
    
    
    double length(vector <int> a, vector <int> b){
        double x = ((a[0] - b[0]) * (a[0] - b[0])) + ((a[1] - b[1]) * (a[1] - b[1])); 
        return sqrt(x);
    }
    
    
    double area(double a, double b, double c){
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    };
    
    
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = 0;
        for(int i = 0; i < points.size(); i++){
            for(int j = i + 1; j < points.size(); j++){
                for(int k = j + 1; k < points.size(); k++){
                    double a = length(points[i], points[j]);
                    double b = length(points[i], points[k]);
                    double c = length(points[j], points[k]);
                    ans = max(ans, area(a, b, c));
                }
            }
        }      
        return ans;
    }
};
