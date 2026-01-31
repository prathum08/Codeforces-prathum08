class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        char res = CHAR_MAX;
        for(int i = 0 ; i < n ;i++){
            if(letters[i] > target){
                // if(res > letter[i]){
                //     res = letters[i];
                // }
                res = min(res , letters[i]);
            }
        }

        if(res == CHAR_MAX){
            return letters[0];
        }
        return res;
    }
};

// 31-1-26
