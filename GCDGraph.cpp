#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;

class GCDGraph {

    public:

    string possible(int n, int k, int x, int y) {

    }


// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 12; int Arg1 = 2; int Arg2 = 8; int Arg3 = 9; string Arg4 = "Possible"; verify_case(0, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 12; int Arg1 = 2; int Arg2 = 11; int Arg3 = 12; string Arg4 = "Impossible"; verify_case(1, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 12; int Arg1 = 2; int Arg2 = 11; int Arg3 = 11; string Arg4 = "Possible"; verify_case(2, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 10; int Arg1 = 2; int Arg2 = 8; int Arg3 = 9; string Arg4 = "Impossible"; verify_case(3, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 1000000; int Arg1 = 1000; int Arg2 = 12345; int Arg3 = 54321; string Arg4 = "Possible"; verify_case(4, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 1000000; int Arg1 = 2000; int Arg2 = 12345; int Arg3 = 54321; string Arg4 = "Impossible"; verify_case(5, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_6() { int Arg0 = 2; int Arg1 = 0; int Arg2 = 1; int Arg3 = 2; string Arg4 = "Possible"; verify_case(6, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE


};

// BEGIN CUT HERE

int main() {

    GCDGraph ___test;

    ___test.run_test(-1);

}

// END CUT HERE
