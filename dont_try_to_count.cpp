// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,s;
//         cin>>n>>s;
//         string str1,str9;
//         cin>>str1>>str9;

//         string x0=str1;
//         string str2=x0+x0;
//         string str3=str2+str2;
//         string str4=str3+str3;
//         string str5=str4+str4;

//         if(x0==str9){
//             cout<<"1";
//         }else if(str9==str2) cout<<"2"<<endl;
//         else if(str3==str9) cout<<"3"<<endl;
//         else if(str4==str9) cout<<"4"<<endl;
//         else if(str5==str9) cout<<"5"<<endl;
//         else cout<<"-1"<<endl;



//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string str1, str9;
        cin >> str1 >> str9;

        string str2 = str1 + str1;
        string str3 = str2 + str2;
        string str4 = str3 + str3;
        string str5 = str4 + str4;
        string str6 = str5 + str5;

        if (str1.find(str9) != string::npos) cout << 0 << endl;
        else if (str2.find(str9) != string::npos) cout << 1 << endl;
        else if (str3.find(str9) != string::npos) cout << 2 << endl;
        else if (str4.find(str9) != string::npos) cout << 3 << endl;
        else if (str5.find(str9) != string::npos) cout << 4 << endl;
        else if (str6.find(str9) != string::npos) cout << 5 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
