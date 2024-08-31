#include "showTime.hpp"

// Constructor
ShowTimeC::ShowTimeC(DayE day, TimeE time, const std::string& screenNumber, const std::vector<bool>& seats)
    : m_movieDay(day), m_time(time), m_screenNumber(screenNumber), m_seats(seats) {}

// Setters and Getters
void ShowTimeC::SetMovieDay(DayE day) {
    m_movieDay = day;
}

DayE ShowTimeC::GetMovieDay() const {
    return m_movieDay;
}

void ShowTimeC::SetTime(TimeE time) {
    m_time = time;
}

TimeE ShowTimeC::GetTime() const {
    return m_time;
}

void ShowTimeC::SetScreenNumber(const std::string& screenNumber) {
    m_screenNumber = screenNumber;
}

const std::string& ShowTimeC::GetScreenNumber() const {
    return m_screenNumber;
}

// Seat Management
void ShowTimeC::ReserveSeat(size_t seatIndex) {
    if(seatIndex < m_seats.size()) {
        m_seats[seatIndex] = true;
    }
}

const std::vector<bool>& ShowTimeC::GetSeats() const {
    return m_seats;
}

bool ShowTimeC::IsSeatReserved(size_t seatIndex) const {
    return (seatIndex < m_seats.size()) ? m_seats[seatIndex] : false;
}
