#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void func(vector<int>& ans, int num, vector<int> answers, vector<int> std)
{
    for (int i = 0; i < answers.size(); i++)
    {
        if (std[i % std.size()] == answers[i]) ans[num]++;
    }
}
vector<int> solution(vector<int> answers) {
    vector<int> answer = { 0,0,0 };

    vector<vector<int>> students;
    students.push_back({ 1,2,3,4,5 });
    students.push_back({ 2,1,2,3,2,4,2,5 });
    students.push_back({ 3,3,1,1,2,2,4,4,5,5 });

    for (int i = 0; i < 3; i++)
    {
        func(answer, i, answers, students[i]);
    }

    int maxScore = *max_element(answer.begin(), answer.end());

    vector<int> bestStudents;
    for (int i = 0; i < 3; i++) {
        if (answer[i] == maxScore) {
            bestStudents.push_back(i + 1);
        }
    }

    sort(bestStudents.begin(), bestStudents.end());
    return bestStudents;
}
