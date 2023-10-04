vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
    	if(root==NULL)return ans;
    	stack<Node*>st1,st2;
    	st1.push(root);
    	while(!st1.empty() || !st2.empty()){
    	    while(!st1.empty()){
    	        Node* cur=st1.top();
    	        st1.pop();
    	        ans.push_back(cur->data);
    	        if(cur->left)st2.push(cur->left);
    	        if(cur->right)st2.push(cur->right);
    	    }
    	    while(!st2.empty()){
    	        Node* cur=st2.top();
    	        st2.pop();
    	        ans.push_back(cur->data);
    	        if(cur->right)st1.push(cur->right);
    	        if(cur->left)st1.push(cur->left);
    	    }
    	}
    	return ans;
    }
