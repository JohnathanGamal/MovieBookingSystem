#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <unordered_map>
#include <string>
#include <memory>
#include <optional>

class DatabaseC {
public:
    static std::unique_ptr<DatabaseC>& GetDatabaseInst();
    
    void Save(const std::string& phoneNumber, const std::string& email);
    std::optional<std::string> RetrieveData(const std::string& phoneNumber) const;

private:
    DatabaseC() = default;

    static std::unique_ptr<DatabaseC> m_databaseInst;
    std::unordered_map<std::string, std::string> m_phoneToEmailMap;
};

#endif // DATABASE_HPP
