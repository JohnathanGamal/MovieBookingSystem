#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

enum class MovieGenreE {
    ACTION,
    COMEDY,
    DRAMA,
    THRILLER,
    HORROR,
    SCIENCE_FICTION,
    ROMANCE
};

enum class DayE {
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

enum class TimeE {
    NINE_AM,
    TWELVE_PM,
    THREE_PM,
    SIX_PM,
    NINE_PM,
    TWELEVE_AM
};

struct ShowTimeS {
    DayE m_movieDay;
    TimeE m_time;
};

class MovieC {
public:
    MovieC(const string& title, const vector<MovieGenreE>& genre, float rating, const ShowTimeS& showTime) : 
        m_title(title), m_genre(genre), m_rating(rating) {
        m_showTimes.push_back(showTime);
    }
    
    void SetTitle(const string& title) { m_title = title; }
    const string& GetTitle() const { return m_title; }
    void SetGenre(const vector<MovieGenreE>& genre) { m_genre = genre; }
    void AddGenre(MovieGenreE genre) { m_genre.emplace_back(genre); }
    const vector<MovieGenreE>& GetGenreVec() const { return m_genre; }
    void SetRating(float rating) { m_rating = rating; }
    const float& GetRating() const { return m_rating; }
    void AddShowTime(const ShowTimeS& showTime) { m_showTimes.push_back(showTime); }
    const vector<ShowTimeS>& GetShowTime() const { return m_showTimes; }
    string GetGenreStr();
    
private:
    string m_title;
    vector<MovieGenreE> m_genre;
    float m_rating;
    vector<ShowTimeS> m_showTimes;
    const unordered_map<MovieGenreE, string> m_genreStr = {
        { MovieGenreE::ACTION,              "Action"           },
        { MovieGenreE::COMEDY,              "Comedy"           },
        { MovieGenreE::DRAMA,               "Drama"            },
        { MovieGenreE::THRILLER,            "Thriller"         },
        { MovieGenreE::HORROR,              "Horror"           },
        { MovieGenreE::SCIENCE_FICTION,     "Science fiction"  },
        { MovieGenreE::ROMANCE,             "Romance"          }
    };
};

#endif
