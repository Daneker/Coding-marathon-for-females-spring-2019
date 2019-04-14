void colorIt(vector<vector<int>> &matrix, int color, int i, int j){
    matrix[i][j] = color;
    if(i - 1 >= 0){
        if(matrix[i - 1][j] == 1)
            colorIt(matrix, color, i - 1, j);
    }
    if(i - 1 >= 0 && j - 1 >= 0){
        if(matrix[i - 1][j - 1] == 1)
        colorIt(matrix, color, i - 1, j - 1);
    }
    if(j - 1 >= 0){
        if(matrix[i][j - 1] == 1)
        colorIt(matrix, color, i, j - 1);
    }
    if(i + 1 < matrix.size() && j - 1 >= 0){
        if(matrix[i + 1][j - 1] == 1)
        colorIt(matrix, color, i + 1, j - 1);
    }
    if(i + 1 < matrix.size()){
        if(matrix[i + 1][j] == 1)
        colorIt(matrix, color, i + 1, j);
    }
    if(i + 1 < matrix.size() && j + 1 < matrix[0].size()){
        if(matrix[i + 1][j + 1] == 1)
        colorIt(matrix, color, i + 1, j + 1);
    }
    if(j + 1 < matrix[0].size()){
        if(matrix[i][j + 1] == 1)
        colorIt(matrix, color, i, j + 1);
    }
    if(j + 1, matrix[0].size() && i - 1 >= 0){
        if(matrix[i - 1][j + 1] == 1)
        colorIt(matrix, color, i - 1, j + 1);
    }
}


// Complete the connectedCell function below.
int connectedCell(vector<vector<int>> matrix) {
    int currentColor = 3;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == 1){
                colorIt(matrix, currentColor, i, j);
                currentColor++;
            }
        }
    }
    map<int, int> freq;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j])
                freq[matrix[i][j]]++;
        }
    }
    int ans = 0;
    for(auto& element : freq){
        if(element.second > ans) ans = element.second;
    }
    return ans;

}
