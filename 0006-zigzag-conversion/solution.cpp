class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) {
            return s;
        }

        vector<string> rows(min(numRows, static_cast<int>(s.size())));
        int currentRow = 0;
        int direction = -1;

        for (char ch : s) {
            rows[currentRow] += ch;

            if (currentRow == 0 || currentRow == numRows - 1) {
                direction *= -1;
            }

            currentRow += direction;
        }

        string result;
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)
