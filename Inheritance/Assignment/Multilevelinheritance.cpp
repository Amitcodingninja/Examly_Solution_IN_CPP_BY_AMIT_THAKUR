#include <iostream>
using namespace std;
class SilverStall
{
protected:
    string name;
    string detail;
    string owner;
    int cost;

public:
    SilverStall(){};
    SilverStall(string name1, string detail1, string owner1, int cost1)
    {
        name = name1;
        detail = detail1;
        owner = owner1;
        cost = cost1;
    }
    string getName() { return name; }
    void setName(string na) { name = na; }
    string getDetail() { return detail; }
    void setDetail(string de) { detail = de; }
    string getOwner() { return owner; }
    void setOwner(string ow) { owner = ow; }
    int getCost() { return cost; }
    void setCost(int co) { cost = co; }
};
class GoldStall : public SilverStall
{
private:
    int tvSet;

public:
    GoldStall(string name2, string detail2, string owner2, int cost2, int tvSet2)
    {
        name = name2;
        detail = detail2;
        owner = owner2;
        cost = cost2;
        tvSet = tvSet2;
    }
    GoldStall(){};
    int getTvSet() { return tvSet; }
    void setTvSet(int tS) { tvSet = tS; }
};
class PlatinumStall : public GoldStall
{
private:
    int projector;

public:
    PlatinumStall(string name3, string detail3, string owner3, int cost3, int tvSet3, int projector3)
    {
        name = name3;
        detail = detail3;
        owner = owner3;
        cost = cost3;
        projector = projector3;
    }
    PlatinumStall(){};
    int getProjector() { return projector; }
    void setProjector(int pr) { projector = pr; }
};
int main()
{
    int n, projector, tvSet, cost;
    string name, detail, owner;
    cin >> n;
    SilverStall s;
    GoldStall g;
    PlatinumStall p;
    if (n == 1)
    {
        cin >> name >> detail >> owner >> cost;
        s.setName(name);
        s.setDetail(detail);
        s.setOwner(owner);
        s.setCost(cost);
        SilverStall s1 = SilverStall(s.getName(), s.getDetail(), s.getOwner(), s.getCost());
        cout << s.getCost();
    }
    if (n == 2)
    {
        cin >> name >> detail >> owner >> cost >> tvSet;
        g.setName(name);
        g.setDetail(detail);
        g.setOwner(owner);
        g.setCost(cost);
        g.setTvSet(tvSet);
        GoldStall g1 = GoldStall(g.getName(), g.getDetail(), g.getOwner(), g.getCost(), g.getTvSet());
        cout << g.getCost() + (g.getTvSet() * 100);
    }
    if (n == 3)
    {
        cin >> name >> detail >> owner >> cost >> tvSet >> projector;
        p.setName(name);
        p.setDetail(detail);
        p.setOwner(owner);
        p.setCost(cost);
        p.setTvSet(tvSet);
        p.setProjector(projector);
        PlatinumStall p1 = PlatinumStall(p.getName(), p.getDetail(), p.getOwner(), p.getCost(), p.getTvSet(), p.getProjector());
        cout << p.getCost() + (p.getTvSet() * 100) + (p.getProjector() * 500);
    }
    if (n > 3)
    {
        cout << "Invalid Input";
    }
}