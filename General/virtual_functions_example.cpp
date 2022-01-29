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
    // if this is not vitual func, then this func will only be called on every display func call
    virtual void display()
    {
        cout << "Lecture base class" << endl;
    }
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

/*
Rules for the virtual function:
1. They cannot be static
2. They are accessed by object pointers.
3. Virtual functions can be a friend of anather closs
4. A virtual function in base class might not be used
5. A virtual functin defined in the base class , there is no neccessity of defining it in the derived class
*/