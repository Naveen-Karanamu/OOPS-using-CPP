// Abstract base class: This is a type of class which is specificallu made to be as a base class from which other classes will be derived and whic contains atleast one pure virtual function. This cannot be used to create the objects

// Pure virtual function: This function is made to be rewritted by it's derived classes. If not rewritted then it will give an error

#include <iostream>
#include <cstring>
using namespace std;

class lecture
{
protected:
    string name;
    float rating;

public:
    lecture(string s, float f)
    {
        name = s;
        rating = f;
    }
   
    virtual void display()=0; //Do nothing function -->Pure virtual function
};

class vidLecture : public lecture
{
    float duration;

public:
    vidLecture(string s, float r, float d) : lecture(s, r)
    {
        duration = d;
    }
    void display()
    {
        cout << "The name of the video is :" << name << endl
             << "Duration :" << duration << "minutes" << endl
             << "Rating :" << rating << endl;
    }
};

class textLecture : public lecture
{
    int words;

public:
    textLecture(string s, float r, int w) : lecture(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The name of the video is :" << name << endl
             << "No. of words :" << words << endl
             << "Rating :" << rating << endl;
    }
};
int main()
{
    string s;
    int words;
    float duration, rating;

    // video tutorial
    s = "CPP introduction video";
    duration = 120;
    rating = 4.5;
    vidLecture video(s, rating, duration);

    // text tutorial
    s = "CPP introduction notes";
    words = 1000;
    rating = 4.7;
    textLecture text(s, rating, words);

    lecture *lec[2];
    lec[0] = &video;
    lec[1] = &text;

    lec[0]->display();
    lec[1]->display();

    return 0;
}

