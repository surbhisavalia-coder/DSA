class Solution { 
public: 
    int strStr(string haystack, string needle) { 
        int n1 = haystack.size(); 
        int n2 = needle.size(); 
        
        // Edge case: Empty needle is always found at index 0
        if (n2 == 0) return 0;
        
        // Optimization: Stop searching when the remaining text is shorter than the needle
        for (int i = 0; i <= n1 - n2; i++) { 
            if (haystack[i] == needle[0]) { 
                int a = 0; // Tracks needle index
                int b = i; // Tracks haystack index
                
                // BUG FIXES: Corrected character indices and boundary limits
                while (b < n1 && a < n2 && haystack[b] == needle[a]) { 
                    a++; 
                    b++; 
                } 
                if (a == n2) { 
                    return i; 
                } 
            } 
        } 
        return -1; 
    } 
};
