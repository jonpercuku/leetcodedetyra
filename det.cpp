#include <iostream>
#include <math>
#include <vector>
using namespace std;

//Concatenation of Array
class arrey1 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2*n;
        vector<int> ans(m);

        
        for(int i=0; i<n; i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }

        return ans;
    }
};
//Build Array from Permutation
class arrey2 {
public:
    vector<int> buildArray(vector<int>& nums) {
     vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
//  Final Value of Variable After Performing Operations

class arrey3 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int x = 0;
        for (int i = 0; i < operations.size(); i++ ){
            if (operations[i] == "X++" || operations[i] == "++X"){
                x++;
                }
            else if (operations[i] == "--X" || operations[i] == "X--"){
                x--;
                }
        }
        return x; 
    }
};
// Shuffle the Arrey
class arrey4 {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>x;
        for(int i=0;i<n;i++){
            x.push_back(nums[i]);
            x.push_back(nums[i+n]);
        }
        return x;
    }
};
// Kids With the Greatest Number of Candies

class arrey5 {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>answer;
        int max_value = 0;
        for (int i = 0; i < candies.size(); i++){
            
            if (max_value <= candies.at(i)){
                max_value = candies.at(i);
                }
        }

        for (int i = 0; i < candies.size(); i++){
            if (candies.at(i) + extraCandies >= max_value){
                answer.push_back(true);
                }
            else {
                answer.push_back(false);
                }
        }
        return answer; 
    }
};
// Defanging an IP Address
class string1 {
public:
    string defangIPaddr(string address) {
          string res;
        for (int i = 0; i < address.length(); i++)
        {
            if (address[i] == '.') {
                res += "[.]";
            }
            else res += address[i];
        }
        return res;
    }
};
// Jewels and Stones
class string2 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < jewels.length(); i++)
        {
            for (int j = 0; j < stones.length(); j++)
            {
                if (jewels[i] == stones[j]) count++;
            }
        }
        return count;
    }
};
// Final Value of Variable After Performing Operations
class string3 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int x = 0;
        for (int i = 0; i < operations.size(); i++ ){
            if (operations[i] == "X++" || operations[i] == "++X"){
                x++;
                }
            else if (operations[i] == "--X" || operations[i] == "X--"){
                x--;
                }
        }
        return x; 
    }
};
// Goal Parser Interpretation
class string4 {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G')
                ans.push_back('G');
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    ans.push_back('o');
                }
                else{
                    ans.push_back('a');
                    ans.push_back('l');
                }
            }
        }
        return ans; 
    }
};
// Shuffle String
class string5 {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = s;
        for(int i=0; i<s.size(); i++) 
            str[indices[i]] = s[i];
        return str;
    }
};
//  Convert the Temperature
class math1 {
public:
    vector<double> convertTemperature(double celsius) {
           vector<double> ans;
        ans.push_back(celsius+273.15);
        ans.push_back((celsius*1.80)+32);
     return ans; 
    }
};
// Divisible and Non-divisible Sums Difference
class math2 {
public:
    int differenceOfSums(int n, int m) {
        int sum=0,sum2=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                sum=sum+i;
                
            }else{
                sum2=sum2+i;
            }
        }
        return sum2-sum;  
    }
};
// Smallest Even Multiple
class math3{
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
            }else{
        return 2 * n;
        }
    }
};
// Add Two Integers
class math4 {
public:
    int sum(int num1, int num2) {
      return num1+num2;  
    }
};
// Count of Matches in Tournament
class math5 {
public:
    int numberOfMatches(int n) {
        return n-1;
    }
};
// Richest costumer wealth
class matrix1 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int max = 0;
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++ ){
            for (int j = 0; j < accounts.at(i).size(); j++){
                sum += accounts.at(i).at(j); 
            }
            if (max < sum){max = sum;}
            sum = 0;
        }

        return max;   
    }
};
//Matrix Diagonal Sum
class matrix2 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
              int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
          
                 sum+=mat[i][i];
                 sum+=mat[i][n-1-i];
            
        }
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }

        return sum;
  
    }
};
// Count Negative Numbers in a Sorted Matrix
class matrix3{
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};
//Row With Maximum Ones
class matrix4 {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxcount=0;
        int index=0;
        for(int i=0;i<mat.size();i++){
            int countone=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    countone++;
                }
        }
             if(countone>maxcount){
                 maxcount=countone;
                index=i;
             }
        }
        return{index,maxcount};
    }
};
//Transpose Matrix
class matrix5 {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> result(col, vector<int>(row, 0));
        
        for (int i = 0; i < col; ++i) {
            for (int j = 0; j < row; ++j) {
                result[i][j] = matrix[j][i];
            }
        }
        
        return result;
    }
};







int main() {
    int choice;
    cout << "Choose a function (1-20): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            // Case 1: Concatenation of Array
            int size;
            cout << "Enter size of array: ";
            cin >> size;

            vector<int> nums(size);
            cout << "Enter array elements: ";
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }

            arrey1 obj;
            vector<int> result = obj.getConcatenation(nums);
            // Output or use the result as needed
            for (int num : result) {
                cout << num << " ";
            }
            break;
        }
        case 2: {
            // Case 2: Build Array from Permutation
            int size;
            cout << "Enter size of permutation array: ";
            cin >> size;

            vector<int> nums(size);
            cout << "Enter permutation array elements: ";
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }

            arrey2 obj;
            vector<int> result = obj.buildArray(nums);
            // Output or use the result as needed
            for (int num : result) {
                cout << num << " ";
            }
            break;
        }
        case 3: {
            // Case 3: Final Value of Variable After Performing Operations
            int count;
            cout << "Enter the number of operations: ";
            cin >> count;

            vector<string> operations(count);
            cout << "Enter operations (e.g., X++, ++X, --X, X--): ";
            for (int i = 0; i < count; ++i) {
                cin >> operations[i];
            }

            arrey3 obj;
            int result = obj.finalValueAfterOperations(operations);
            // Output or use the result as needed
            cout << "Final value: " << result;
            break;
        }
        case 4: {
            // Case 4: Shuffle the Array
            int size;
            cout << "Enter size of array (even): ";
            cin >> size;

            vector<int> nums(size);
            cout << "Enter array elements: ";
            for (int i = 0; i < size; ++i) {
                cin >> nums[i];
            }
            
            arrey4 obj;
            int n = size / 2;
            vector<int> result = obj.shuffle(nums, n);
            // Output or use the result as needed
            for (int num : result) {
                cout << num << " ";
            }
            break;
        }
        case 5: {
            // Case 5: Kids With the Greatest Number of Candies
            int count;
            cout << "Enter the number of kids: ";
            cin >> count;

            vector<int> candies(count);
            cout << "Enter candies for each kid: ";
            for (int i = 0; i < count; ++i) {
                cin >> candies[i];
            }

            int extraCandies;
            cout << "Enter extra candies: ";
            cin >> extraCandies;

            arrey5 obj;
            vector<bool> result = obj.kidsWithCandies(candies, extraCandies);
            // Output or use the result as needed
            for (bool value : result) {
                cout << (value ? "true" : "false") << " ";
            }
            break;
        }
        case 6: {
    // Case 6: Defanging an IP Address
    string address;
    cout << "Enter IP Address: ";
    cin >> address;

    string1 obj;
    string result = obj.defangIPaddr(address);
    // Output or use the result as needed
    cout << "Defanged IP Address: " << result;
    break;
}
case 7: {
    // Case 7: Jewels and Stones
    string jewels, stones;
    cout << "Enter Jewels: ";
    cin >> jewels;

    cout << "Enter Stones: ";
    cin >> stones;

    string2 obj;
    int result = obj.numJewelsInStones(jewels, stones);
    // Output or use the result as needed
    cout << "Number of Jewels: " << result;
    break;
}
case 8: {
    // Case 8: Final Value of Variable After Performing Operations (String version)
    int count;
    cout << "Enter the number of operations: ";
    cin >> count;

    vector<string> operations(count);
    cout << "Enter operations (e.g., X++, ++X, --X, X--): ";
    for (int i = 0; i < count; ++i) {
        cin >> operations[i];
    }

    string3 obj;
    int result = obj.finalValueAfterOperations(operations);
    // Output or use the result as needed
    cout << "Final value: " << result;
    break;
}
case 9: {
    // Case 9: Goal Parser Interpretation
    string command;
    cout << "Enter command: ";
    cin >> command;

    string4 obj;
    string result = obj.interpret(command);
    // Output or use the result as needed
    cout << "Interpreted command: " << result;
    break;
}
case 10: {
    // Case 10: Shuffle String
    string s;
    cout << "Enter string to shuffle: ";
    cin >> s;

    int size;
    cout << "Enter number of indices: ";
    cin >> size;

    vector<int> indices(size);
    cout << "Enter indices: ";
    for (int i = 0; i < size; ++i) {
        cin >> indices[i];
    }

    string5 obj;
    string result = obj.restoreString(s, indices);
    // Output or use the result as needed
    cout << "Restored string: " << result;
    break;
}
case 11: {
    // Case 11: Convert the Temperature
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    math1 obj;
    vector<double> result = obj.convertTemperature(celsius);
    // Output or use the result as needed
    cout << "Temperature in Kelvin: " << result[0] << endl;
    cout << "Temperature in Fahrenheit: " << result[1];
    break;
}
case 12: {
    // Case 12: Divisible and Non-divisible Sums Difference
    int n, m;
    cout << "Enter two integers (n and m): ";
    cin >> n >> m;

    math2 obj;
    int result = obj.differenceOfSums(n, m);
    // Output or use the result as needed
    cout << "Difference of sums: " << result;
    break;
}
case 13: {
    // Case 13: Smallest Even Multiple
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    math3 obj;
    int result = obj.smallestEvenMultiple(n);
    // Output or use the result as needed
    cout << "Smallest even multiple: " << result;
    break;
}
case 14: {
    // Case 14: Add Two Integers
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    math4 obj;
    int result = obj.sum(num1, num2);
    // Output or use the result as needed
    cout << "Sum: " << result;
    break;
}
case 15: {
    // Case 15: Count of Matches in Tournament
    int n;
    cout << "Enter the number of teams: ";
    cin >> n;

    math5 obj;
    int result = obj.numberOfMatches(n);
    // Output or use the result as needed
    cout << "Number of matches: " << result;
    break;
}
case 16: {
    // Case 16: Richest customer wealth
    int rows, cols;
    cout << "Enter number of customers and accounts: ";
    cin >> rows >> cols;

    vector<vector<int>> accounts(rows, vector<int>(cols));
    cout << "Enter the wealth for each customer's accounts: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> accounts[i][j];
        }
    }

    matrix1 obj;
    int result = obj.maximumWealth(accounts);
    // Output or use the result as needed
    cout << "Maximum wealth: " << result;
    break;
}
case 17: {
    // Case 17: Matrix Diagonal Sum
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter matrix elements: ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    matrix2 obj;
    int result = obj.diagonalSum(mat);
    // Output or use the result as needed
    cout << "Diagonal sum: " << result;
    break;
}
case 18: {
    // Case 18: Count Negative Numbers in a Sorted Matrix
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));
    cout << "Enter matrix elements: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
        }
    }

    matrix3 obj;
    int result = obj.countNegatives(grid);
    // Output or use the result as needed
    cout << "Number of negative numbers: " << result;
    break;
}
case 19: {
    // Case 19: Row With Maximum Ones
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));
    cout << "Enter matrix elements (0s and 1s): ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }

    matrix4 obj;
    vector<int> result = obj.rowAndMaximumOnes(mat);
    // Output or use the result as needed
    cout << "Row with maximum ones: " << result[0] << ", Count: " << result[1];
    break;
}
case 20: {
    // Case 20: Transpose Matrix
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    matrix5 obj;
    vector<vector<int>> result = obj.transpose(matrix);
    // Output or use the result as needed
    cout << "Transposed matrix: " << endl;
    for (auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    break;
}
default:
    cout << "Invalid choice!";
    break;
}

return 0;
}