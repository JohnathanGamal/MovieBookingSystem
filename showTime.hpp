#ifndef SHOWTIME_HPP
#define SHOWTIME_HPP

#include <string>
#include <vector>
#include "Common.hpp"  // Assuming you have enums for DayE, TimeE, etc.

class ShowTimeC {
public:
    ShowTimeC(DayE day, TimeE time, const std::string& screenNumber, const std::vector<bool>& seats);

    void SetMovieDay(DayE day);
    DayE GetMovieDay() const;

    void SetTime(TimeE time);
    TimeE GetTime() const;

    void SetScreenNumber(const std::string& screenNumber);
    const std::string& GetScreenNumber() const;

    void ReserveSeat(size_t seatIndex);
    const std::vector<bool>& GetSeats() const;
    bool IsSeatReserved(size_t seatIndex) const;
    void DisplaySeats() const;
    bool BookSeat(char row, int col);  


private:
    DayE m_movieDay;
    TimeE m_time;
    std::string m_screenNumber;
    std::vector<bool> m_seats;  // true = reserved, false = available
};

#endif
