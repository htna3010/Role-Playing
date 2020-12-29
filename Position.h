#ifndef A1B42E2B_CDF6_4C85_B411_0362F10E03C2
#define A1B42E2B_CDF6_4C85_B411_0362F10E03C2
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
#endif /* A1B42E2B_CDF6_4C85_B411_0362F10E03C2 */
