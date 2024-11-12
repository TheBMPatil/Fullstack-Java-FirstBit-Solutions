namespace usa
{

    class Time
    {
    private:
        int HH, MM, SS;

    public:
        Time();
        Time(int HH, int MM, int SS);

        // getters
        int getHH();
        int getMM();
        int getSS();

        // Setters
        void setHH(int HH);
        void setMM(int MM);
        void setSS(int SS);

        void display();
    };

}