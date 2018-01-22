long largestRectangle(vector <int> h) {
    stack<int> s;
    int tp; int area_with_top;
    int max_area =0 ;
    int i=0; int n =h.size();
    while(i<n){
        if(s.empty() || h[s.top()]<= h[i]){
            s.push(i++);
        }
        else{
            tp = s.top();
            s.pop();
            area_with_top = h[tp]* (s.empty()?i: i-s.top()-1);
            if(max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = h[tp] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}
