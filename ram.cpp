// #include<bits/stdc++.h> //it imports all libraries

// int main(){
//     std::cout<<"hello"<<std::endl;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"hello"<<endl;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){

    //data types
    //int
    // int x = 10;

    //long
    // long x = 15;
    // long long x = 15000000;

    //float
    //double
    // float x = 5.6;

    // cout<<x;

    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // cout<<s1<<s2;
//     #include <iostream>
//     #include <string>
//     using namespace std;
//     int main() {
//     string str;
//     cout << "Enter something: ";
//     getline(cin, str);   // takes full line with spaces
//     cout << "You entered: " << str << endl;
// }

    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // cout<<s1<<" "<<s2;

    //char
    // char ch;
    // cin>>ch;
    // cout<<ch;



// }


//if else
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if(age<18){
//         cout<<"you are child";
//     }
//     else if(age=18){
//         cout<<"you are young";
//     }
//     else{
//         cout<<"you are adult";
//     }

// }



// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int marks;
//     cin>>marks;
//     if(marks<25){
//         cout<<"F";
//     }
//     else if(marks>=25 && marks <= 44){
//         cout<<"E";
//     }
//     else if(marks>=45 && marks<=49){
//         cout<<"D";
//     }
//     else if(marks>=50 && marks <=59){
//         cout<<"C";
//     }
//     else if(marks>=60 && marks <=79){
//         cout<<"B";
//     }
//     else if(marks>=80 && marks <=100){
//         cout<<"A";
//     }
// }
//why else if coming if works fine



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if(age<18){
//         cout<<"you are not eligible for job";
//     }
//     else if(age>=18){
//         cout<<"You are eligible for job";
//     }
//     else if(age>57){
//         cout<<"Retirement time";
//     }
// }


//study about nested if else


//switch case
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int day;
//     cin>>day;
//     switch(day){
//         case 1:
//         cout<<"Monday";
//         break;
//         case 2:
//         cout<<"Tuesday";
//         break;
//         case 3:
//         cout<<"wednesday";
//         break;
//         case 4:
//         cout<<"Thrusday";
//         break;
//         case 5:
//         cout<<"Friday";
//         break;
//         case 6:
//         cout<<"saturday";
//         break;
//         case 7:
//         cout<<"sunday";
//         break;
//         default:
//         cout<<"Invalid check";
//     }
// }



//arrays
//why arrays because in normal way we have make many variables
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x,y,z; //so i can use arrays here i declared many variables
//     cin>>x>>y>>z;

// }

//1 d array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[5];
//    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//    cout<<arr[3];

// }


//string
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Utkarsh";
//     int len = s.size();
//     cout<<len<<endl;
//     cout<<s[0];
// }



//for loop
//why loop is coming because i print a thing many times
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Utkarsh"<<endl;
//     cout<<"Utkarsh"<<endl;
//     cout<<"Utkarsh"<<endl;
//     cout<<"Utkarsh"<<endl;
//     cout<<"Utkarsh"<<endl;
//     cout<<"Utkarsh"<<endl;
//     cout<<"Utkarsh"<<endl; //i am writing many times so loop is coming
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 10; i>0; i--){
//         cout<<"Utkarsh"<<i<<endl;
//     }
// }



//while loop
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i = 0;
//     while(i<5){
//         cout<<"Utkarsh"<<endl;
//         i = i+1;
//     }
// }


//do while loop
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int i = 2;
//     do{
//         cout<<"utkarsh"<<i<<endl;
//         i = i+1;
//     }
//     while(i<=1);
//     cout<<i<<endl;
    
// }


//function
//it is a set of code which performs something for you
//functions are used to modularise code
//function are used to increase readability
//function are used to use same code multiple times
//void -> which does not returns anything
//return
//parametrised
//non parametrised


// #include<bits/stdc++.h>
// using namespace std;
// void printName(string name){
//     cout<<"hey"<<name<<endl;
// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);
// }


//take two numbers and print its sum

// #include<bits/stdc++.h>
// using namespace std;
// void sum(int num1, int num2){
//     cout<<num1+num2<<endl;
// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     sum(num1, num2);

// }



// #include<bits/stdc++.h>
// using namespace std;
// int sum(int num1, int num2){
//     int num3 = num1+num2;
//     return num3;
// }
// int main(){
//     int x, y;
//     cin>>x>>y;
//     cout<<sum(x,y)<<endl;
// }




//pass by value
// #include<bits/stdc++.h>
// using namespace std;
// void doSomething(int n){ // copy of n1
    
//     n += 5;
//     cout<<n<<endl;
//     n += 5;
//     cout<<n<<endl;

// }
// int main(){
//     int n1;
//     cin>>n1;
//     doSomething(n1);
//     cout<<n1<<endl; //this is original n
// }




//pass by reference
// #include<bits/stdc++.h>
// using namespace std;

// void doSomething(int &n){ 
//     n += 5;
//     cout<<n<<endl; //15
//     n += 5;
//     cout<<n<<endl; //20
// }
// int main(){
//     int n;
//     cin>>n; //if i take n=10
//     doSomething(n);
//     cout<<n<<endl;  //here it gets 20
// }




// #include<bits/stdc++.h>
// using namespace std;
// void doSomething(int arr[], int n){
//     arr[0] += 100;
//     cout<<arr[0]<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     doSomething(arr,n);
//     cout<<arr[0]<<endl;  //arrays always goes with reference
// }




//pattern
// #include<bits/stdc++.h>
// using namespace std;

// void print1(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i<t; i++){
//         int n;
//         cin>>n;
//         print1(n);
//     }
    
// }




// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print1(n);
// }




// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i = 1; i<n; i++){
//         for(int j = 1; j<i+1; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print1(n);
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 1; i<5; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// void print1(){
//     int n;
//     cin>>n;
//     for(int i = n; i>=1; i--){
//         for(int j = 1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//    print1();
// }



//pairs
// #include<bits/stdc++.h>
// using namespace std;
// void explainPair(){
//     pair<int, int> p = {1,3};
//     cout<<p.first<<" "<<p.second;
//     pair<int, pair<int, int>> p1 = {1, {3,4}};
//     cout<<p.first<< " "<< p1.second.second<< " " << p1.second.first;
//     pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
//     cout<<arr[1].second;
// }
// int main(){

// }



//vector
// #include<bits/stdc++.h>
// using namespace std;
// void explainVector(){
//     vector<int> v; //it create an empty container
//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair<int, int>>vec;

//     v.push_back({1, 2});
//     v.emplace_back(1, 2);

//     vector<int> v(5, 100); //it contains 5 instances of 100

//     vector<int> v(5); //it contains 5 instances of 0 or any garbage value

//     vector<int> v1(5, 20); //it contains 5 instances of 20
//     vector<int> v2(v1); //it create copy of v1

//     vector<int>::iterator it = v.begin();
//     it++;
//     cout<<*(it) << " ";

//     it = it+2;
//     cout << *(it) << " ";

//     vector<int>::iterator it = v.end(); //right after the last element

//     vector<int>::iterator it = v.rend(); //reverse end

//     vector<int>::iterator it = v.rbegin();

//     cout << v[0] << " " << v.at(0);

//     cout << v.back() << " "; //last element of array

//     for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
//         cout<<*(it)<<" ";
//     }

//     for(auto it = v.begin(); it != v.end(); it++){
//         cout<<*(it)<<" ";
//     }

//     for(auto it : v){
//         cout<<it<<" ";
//     }

//     v.erase(v.begin() + 1);

//     v.erase(v.begin() + 2, v.begin() + 4);


//     //insert function
//     vector<int>v(2,100);
//     v.insert(v.begin(), 300);
//     v.insert(v.begin()+1, 2, 10);

//     vector<int> copy(2, 50);
//     v.insert(v.begin(), copy.begin(), copy.end());

//     cout<<v.size();

//     v.pop_back();

//     v1.swap(v2);

//     v.clear();

//     cout<<v.empty();
// }
// int main(){

// }




//list
// void explainList(){
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(4);
//     ls.push_front(5);
//     ls.emplace_front();
// }



//Deque
// deque<int>dq;
// dq.push_back(1);
// dq.emplace_back(2);
// dq.push_front(4);
// dq.emplace_front(3);

// dq.pop_back();
// dq.pop_front();

// dq.back();

// dq.front();



//stack
//lifo
// void explainStack(){  //big of 1
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(3);
//     st.emplace(5);

//     cout<<st.top();
//     st.pop();

//     cout<<st.top();

//     cout<<st.size();

//     cout<<st.empty();

//     stack<int>st1, st2;
//     st1.swap(st2);

// }



//queue
//fifo
// void explainQueuue(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.emplace(4);

//     q.back() += 5;

//     cout<<q.back();

//     cout<<q.front();

//     q.pop();

//     cout<<q.front();
// }



//priority queue
// void explainPQ(){
//     priority_queue<int>pq;

//     pq.push(5);
//     pq.push(2);
//     pq.push(8);
//     pq.emplace(10);

//     cout<<pq.top();

//     pq.pop();

//     cout<<pq.top();

//     priority_queue<int, vector<int>, greater<int>>pq;
//     pq.push(5);
//     pq.push(2);
//     pq.push(8);
//     pq.emplace(10);

//     cout<<pq.top();
// }



//set:- stores in sorted fashion
// void explainSet(){
//     set<int>st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);
//     st.insert(4);
//     st.insert(3);


//     auto it = st.find(3);

//     auto it = st.find(6);

//     st.erase(5);

//     int cnt = st.count(1); //if 1 has occur then print 1 if not then print 0

//     auto it = st.find(3);
//     st.erase(it);

//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1, it2);

//     auto it = st.lower_bound(2);

//     auto it = st.upper_bound(3);
// }



// void explainMultiSet(){
//     multiset<int>ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);

//     ms.erase(1);

//     int cnt = ms.count(1);  //no of occurences of 1

//     ms.erase(ms.find(1));  //find 1st occurrences of 1

//     ms.erase(ms.find(1), ms.find(1)+2);
// }



//unordered set-not sorted but unique time complexity is big of 1 of all operations
// void explainUSet(){
//     unordered_set<int> st;

// }



//map-it stores unique and sorted order key
// void explainMap(){
//     map<int, int> map;  //key,val

//     map<int, pair<int,int>> mpp;

//     map< pair<int,int>, int> mpp;

//     mpp[1] = 2;
//     mpp.emplace({3, 1});
    
//     mpp.insert({2, 4});

//     mpp[{2,3}] = 10;

//     {
//         {1, 2}
//         {2, 4}
//         {3, 1}
//     }

//     for(auto it : map){
//         cout<<it.first<<" "<<it.second<<endl;
//     }

//     cout<<mpp[1];
//     cout<<mpp[5];

//     auto it = mpp.find(3);
//     cout<<*(it).second;

//     auto it = mpp.find(5);

//     auto it = mpp.lower_bound(2);
//     auto it = mpp.upper_bound(3);

// }



//multimap
//it stores duplicate keys
//sorted

//unordered map
//unique keys
//but not sorted


//if i want to sort

// #include<bits/stdc++.h>
// using namespace std;

// bool comp(pair<int,int> p1, pair<int,int> p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;

//     if(p1.first > p2.first) return true;
//     return false;
// }

// void explainExtra(){
//     sort(a, a+n);
//     sort(v.begin(), v.end());
//     sort(a+2, a+4);
//     sort(a, a+n, greater<int>); //sort into descending order
//     pair<int, int> a[] = {{1,2}, {2,1}, {4,1}}; //sort in decending order according to second element
//     sort(a, a+n, comp);
//     int num = 7;
//     int cnt = __builtin_popcount(); //bits will come
    
//     long long num = 1654789512;
//     int cnt = __builtin_popcountll();

//     string s = "123";
//     sort(s.begin(), s.end());

//     do{
//         cout<<s<<endl;
//     }
//     while(next_permutation(s.begin(), s.end()));
//     int maxi = *max_element(a, a+n);
// }
// int main(){

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     string s = to_string(abs(n));
//     reverse(s.begin(), s.end());
//     int rev = stoi(s);
//     cout<<"Rversed number: "<<rev<<endl;

//     if(rev == n){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int original = n;
//     int x = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         int cube = lastdigit * lastdigit * lastdigit;
//         x = x+cube;
//         n = n/10;
        
//     }
//     if(x == original){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
    

// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> factors;
//     int i = 1;
//     while(i<=n){
//         if(n%i == 0){
//             factors.push_back(i);
//         }
//         i++;
//     }
//     for(int f:factors){
//         cout<<f<<" ";
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// vector<int> getDivisors(int n){
//     vector<int> v;
//     for(int i = 1; i<=sqrt(n); i++){
//         if(n%i == 0){
//             v.push_back(i);
//             if(n/i != i)
//             v.push_back(n/i);
//         }
//     }
//     sort(v.begin(), v.end());
//     return v;
// }
// int main(){
//     int n1 = 4;
//     int n2 = 6;

//     int g = __gcd(n1,n2);
//     vector<int> common = getDivisors(g);
//     for(auto x:common){
//         cout<<x<<" ";
//     }
//     // vector<int> v1 = getDivisors(n1);
//     // vector<int> v2 = getDivisors(n2);

//     // cout<<"Div of "<<n1<<" ";
//     // for(auto x:v1)
//     //     cout<<x<<" ";
//     //     cout<<"\n";
    
//     // cout<<"Div of "<<n2<<" ";
//     // for(auto y:v2)
//     //     cout<<y<<" ";
//     //     cout<<"\n";
    
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1 = 6;
//     int n2 = 12;
//     int gcd = 1;
//     for(int i = 1; i<=min(n1,n2); i++){
//         if(n1%i == 0 && n2%i == 0){
//             gcd = i;
//         }
//     }
//     cout<<gcd;
// }


//recursion
// #include<bits/stdc++.h>
// using namespace std;
// int cnt = 0;
// void print(){
//     if(cnt == 3)
//         return;
//         cout<<cnt<<endl;
//         cnt++;
//         print();   
// }

// int main(){
//     print();
// }



//print name 5 times using recursion
// #include<bits/stdc++.h>
// using namespace std;
// void print(int i, int n){
//     if(i>n){
//         return; //base case
//     }
//     else{
//         cout<<"utkarsh"<<endl;
//         print(i+1, n);
//     }
// }
// int main(){
//     print(1,5);
// }


//print 1 to n using recursion
// #include<bits/stdc++.h>
// using namespace std;
// void print(int i, int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<i<<endl;
//         print(i+1,n);
//     }
// }
// int main(){
//     print(1,5);
// }



//print from n to 1
// #include<bits/stdc++.h>
// using namespace std;
// void print(int n, int i){
//     if(n<1){
//         return;
//     }
//     else{
//         cout<<n<<endl;
//         print(n-1,i);
//     }
// }
// int main(){
//     print(5, 1);

// }



// #include<bits/stdc++.h>
// using namespace std;
// void summation(int i, int n, int sum){
//     if(i>n){
//         cout<<sum;
//         return;
//     }
//     else{
        
//         summation(i+1,n,sum+i);
//     }
// }
// int main(){
//     summation(1,5,0);
// }



// #include<bits/stdc++.h>
// using namespace std;
// int summation(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return n + summation(n-1);
//     }
// }
// int main(){
//     int sum = summation(6);
//     cout<<sum;

// }



// #include<bits/stdc++.h>
// using namespace std;
// int fact(int n){
//     if(n == 0 || n==1){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }
// int main(){
//     int ans = fact(5);
//     cout<<ans;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int reverseArray(int arr[], int n){
//     for(int i = 0; i<n/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//      for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
    
   
//     reverseArray(arr,n);

//     cout<<"Reversed array: ";
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int i, int arr[], int n){
//     if(i>=n/2)
//     return;
//     swap(arr[i],arr[n-i-1]);
//     reverse(i+1, arr, n);

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];

//     }
//     reverse(0, arr, n);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i];
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     else{
//         return fib(n-1) + fib(n-2);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int x = fib(n);
//     cout<<x;
// }


//hashing
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     int hash[13] = {0};
//     for(int i = 0; i<n; i++){
//         hash[arr[i]] += 1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<hash[number]<<endl;
//     }
// }



//string hashing

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;

//     int hash[256] = {0};
//     for(int i = 0; i<s.size(); i++){
//         hash[s[i]]++;
        
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         cout<<hash[c]<<endl;
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     map<int,int> mpp;
//     for(int i = 0; i<n; i++){
//         mpp[arr[i]]++;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         cout<<mpp[number]<<endl;
//     }
// }



//using hash and map


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     map<int, int> mpp;
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//         mpp[arr[i]]++;
//     }

//     int x;
//     cin>>x;
//     for(int i = 0; i<x; i++){
//         int number;
//         cin>>number;
//         cout<<mpp[number];
//     }
// }




//seclection sort
// #include<bits/stdc++.h>
// using namespace std;
// void selection_sort(int n, int arr[]){
//     for(int i = 0; i<=n-2; i++){
//         int mini = i;
//         for(int j = i; j<=n-1; j++){
//             if(arr[j]<arr[mini]){
//                 mini = j;
//             }
//             swap(arr[mini], arr[i]);
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     selection_sort(n,arr);
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


//bubble sort
// #include<bits/stdc++.h>
// using namespace std;
// void bubble_sort(int arr[], int n){
//     for(int i = n-1; i>=0; i--){
//         for(int j = 0; j<=i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     bubble_sort(arr,n);

//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }




//insertion sort
// #include<bits/stdc++.h>
// using namespace std;
// void insertion_sort(int n, int arr[]){
//     for(int i = 0; i<=n; i++){
//         int j = i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
// }
// int main(){

// }


//merge sort
// #include<bits/stdc++.h>
// using namespace std;
// void merge(vector<int> &arr, int low, int mid, int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid+1;
//     while(left<=mid && right<=high){
//         if(arr[left] <= arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }
// }
// void ms(vector<int> &arr, int low, int high){
//     if(low==high)
//     return;
//     int mid = (low + high) / 2;
//     ms(arr, low, mid);
//     ms(arr, mid+1, high);
//     merge(arr, low, mid, high);
// }

// void mergeSort(vector<int>&arr, int n){
//     ms(arr, 0, n-1);
// }
// int main(){

// }




//largest element in an array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     int largest = arr[0];
//     for(int i = 1; i<n; i++){
//         cin>>arr[i];
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }

//     cout<<largest<<endl;
    
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int largest = arr[0];
    for(int i = 1; i<n; i++){
        largest = max(largest, arr[i]);
    }

    cout<<largest<<endl;

}