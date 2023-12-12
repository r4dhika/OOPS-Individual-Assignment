#include <iostream>
using namespace std; 

// Subsystem Components
class DVDPlayer {
public:
    void on() { 
        cout << "DVD Player is ON" << endl; 
    }
    void play(const string& movie) { 
        cout << "Playing: " << movie << endl; 
    }
    void off() {
        cout << "DVD Player is OFF" << endl; 
    }
};

class Projector {
public:
    void on() { 
        cout << "Projector is ON" << endl; 
    }
    void setInput(const string& input) { 
        cout << "Setting input to: " << input << endl;
    }
    void off() { 
        cout << "Projector is OFF" << endl; 
    }
};

class Amplifier {
public:
    void on() { 
        cout << "Amplifier is ON" << endl; 
    }
    void setVolume(int volume) { 
        cout << "Setting volume to: " << volume << endl; 
    }
    void off() { 
        cout << "Amplifier is OFF" << endl; 
    }
};

class Screen {
public:
    void up() { 
        cout << "Screen is UP" << endl; 
    }
    void down() { 
        cout << "Screen is DOWN" << endl; 
    }
};

// Facade
class HomeTheaterFacade {
private:
    DVDPlayer dvdPlayer;
    Projector projector;
    Amplifier amplifier;
    Screen screen;

public:
    void watchMovie(const string& movie) {
        cout << "Get ready to watch a movie..." << endl;
        dvdPlayer.on();
        dvdPlayer.play(movie);
        projector.on();
        projector.setInput("DVD Player");
        amplifier.on();
        amplifier.setVolume(10);
        screen.down();
    }

    void endMovie() {
        cout << "Shutting down the home theater..." << endl;
        dvdPlayer.off();
        projector.off();
        amplifier.off();
        screen.up();
    }
};

int main() {
    // Using the Facade to simplify interactions
    HomeTheaterFacade homeTheater;

    // Watch a movie
    string movie;
    cin>>movie;
    homeTheater.watchMovie(movie);
    cout<<endl;
    while(true){
        //Command to end the movie
        cout<<"Press 'q' to end movie..."<<endl;
        string s; cin>>s;
        if(s=="q"){
            homeTheater.endMovie();
            break;
        }
    }
    return 0;
}
