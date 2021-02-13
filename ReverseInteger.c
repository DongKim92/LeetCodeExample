using namespace std;

class Solution {
public:
    int reverse(int num) {
        bool negativeFlag = false; 
        if (num < 0) 
        { 
            negativeFlag = true; 
            num = -num ; 
        } 

        long prev_rev_num = 0, rev_num = 0; 
        while (num != 0) 
        { 
            int curr_digit = num % 10; 

            rev_num = (rev_num * 10) + curr_digit; 

            if ((rev_num - curr_digit) /  
                   10 != prev_rev_num) 
            { 
                cout << "WARNING OVERFLOWED!!!"
                     << endl; 
                return 0; 
            } 

            prev_rev_num = rev_num; 
            num = num / 10; 
        } 

        return (negativeFlag == true) ? 
                             -rev_num : rev_num; 
        
    }
};