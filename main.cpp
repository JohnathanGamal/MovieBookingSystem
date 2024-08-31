#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MovieC {
    public:
        string name;
        string genre;
}

class CustomerC{
	public:
		string m_mail;
		int m_phoneNum;
};

class CinemaC {
    public:
        vector<MovieC> movies;
};

int main()
{
    return 0;
}