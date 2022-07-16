void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    stack<int> amit;
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
    }
    while(!extra.empty()){
        amit.push(extra.top());
        extra.pop();
    }
    while(!amit.empty()){
        input.push(amit.top());
        amit.pop();
    }
}
