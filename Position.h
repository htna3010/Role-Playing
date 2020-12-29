class Position{
    private:
        int x;
        int y;
    public:
    Position();
    Position(int x, int y);
    ~Position();
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

};