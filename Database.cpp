#include "Database.hpp"

std::unique_ptr<DatabaseC> DatabaseC::m_databaseInst = nullptr;

std::unique_ptr<DatabaseC>& DatabaseC::GetDatabaseInst() {
    if (!m_databaseInst) {
        m_databaseInst = std::make_unique<DatabaseC>();
    }
    return m_databaseInst;
}

void DatabaseC::Save(const std::string& phoneNumber, const std::string& email) {
    if (m_phoneToEmailMap.find(phoneNumber) == m_phoneToEmailMap.end()) {
        m_phoneToEmailMap[phoneNumber] = email;
    }
}

std::optional<std::string> DatabaseC::RetrieveData(const std::string& phoneNumber) const {
    auto it = m_phoneToEmailMap.find(phoneNumber);
    if (it != m_phoneToEmailMap.end()) {
        return it->second;
    }
    return std::nullopt;
}
