void reverseString(char* s, int sSize) {
    int st=0;
    int end=sSize-1;
    while(st<end){
        //swap
        char temp=s[st];
        s[st]=s[end];
        s[end]=temp;
        st++;
        end--;
    }
}