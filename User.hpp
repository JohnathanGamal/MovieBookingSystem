#ifndef USER_HPP
#define USER_HPP
#include <iostream>
#include <string>
#include <vector>

#include "Movie.hpp"
#include "validator.h"
#include "Database.hpp"

using namespace std;

class CustomerC{
	public:
		CustomerC(const string& mail, string phoneNum)
		{
			Validator valid;
			if(valid.validateEmail(mail) && valid.validatePhoneNumber(phoneNum))
			{
				unique_ptr<DatabaseC>& database = DatabaseC::GetDatabaseInst();
				m_mail = mail;
				m_phoneNum = phoneNum;
				database->Save(mail, phoneNum);
			}
			else
			{
				cout << "Invalid Phone Number or Email" << endl;
			}
		};
		void SetMail(const string& mail) { m_mail = mail; };
		const string& GetMail() const { return m_mail; }
		void SetPhoneNum(string& phoneNum) { m_phoneNum = phoneNum; }
		const string& GetPhoneNum() const { return m_phoneNum; } 
	private:
		string m_mail;
		string m_phoneNum;
};		
#endif
