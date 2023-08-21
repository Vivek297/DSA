// // YE GALAT HAI
// #include<iostream>

// #include<string>
// using namespace std;
// string addnum(string& num1, string& num2, int carry, int e, int e1,string& str){
//         // base case
//         if(e>num1.size() && e1>num2.size()){
//             return str;
//         }
//         // process
//         if(e>=num1.size()){
//             int a = num2[e1] - '0';
//             a + carry;
//             carry = abs(carry + a/10);
//             int ans = abs(carry + a - 10); 
//             static_cast<char>(ans);
//             str.insert(0, 1, ans);
            
//         }
//         else if(e1>=num2.size()){
//             int a = num1[e] - '0';
//             a + carry;
            
//             carry = abs(carry + a/10);
//             int ans = abs(carry + a - 10);
//             static_cast<char>(ans);
//             str.insert(0, 1, ans);  
            
              
//         }
//         else{
//             int a = num1[e] - '0';
//             int b = num2[e1] - '0';
//             a + b + carry;
//             carry = abs(a + b/10);
//             int ans = abs(a + b-10);
            
//             string ch = to_string(ans);
//             str.append(ch);    
//         }
//         // recursive call
//         addnum(num1,num2,carry,e-1,e1-1,str);
//     }
// int main(){
//     string num1 = "111";
//     string num2 = "111";
//     string ans = addnum(num1,num2,0,2,2,ans);
//     cout<<ans;
    
// }