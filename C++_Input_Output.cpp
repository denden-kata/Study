#include<iostream>
using namespace std;

int main() {
	char c;
	
	// cin : 標準入力
	// 取り込み
	cin >> c;
	
	// cout : 標準出力
	cout << "Input Character is " << c << endl;
	
	return 0;
}

/*

cin  : istream型
cout : ostream型

iostream ヘッダを include して
using namespace std と書いておけばどこでも使える

endl (End Line) 改行を表す、これを入れたところで画面に出力される

*/