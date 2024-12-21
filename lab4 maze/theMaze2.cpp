#include <iostream>

using namespace std;

typedef enum
{
    wood,
    stone
} material;

struct position
{
    int x, y;
};

struct tile
{
    int x, y;
    bool isWall;
    material type;
};

void draw(tile **playground, int NROWS, int NCOLS, position playerPos)
{
    // Draw the playground
    for (int i = 0; i < NROWS; i++)
    {
        for (int j = 0; j < NCOLS; j++)
        {
            if (playerPos.x == j && playerPos.y == i)
            {
                cout << "O";
                continue;
            }
            if (playground[i][j].isWall)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int NROWS, NCOLS;
    cin >> NROWS >> NCOLS;

    position playerPos = {NCOLS / 2, NROWS / 2};
    tile **playground = new tile *[NROWS];
    for (int i = 0; i < NROWS; ++i)
    {
        playground[i] = new tile[NCOLS];
    }

    for (int i = 0; i < NROWS; i++)
    {
        for (int j = 0; j < NCOLS; j++)
        {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j == 0 || i == (NROWS - 1) || (i == 0 && j != 3) || j == (NCOLS - 1));
            if (playground[i][j].isWall)
            {
                playground[i][j].type = stone;
            }
            else
            {
                playground[i][j].type = wood;
            }
        }
    }

    draw(playground, NROWS, NCOLS, playerPos);

    while (true)
    {
        char c;
        cin >> c;
        if (c == 'q')
        {
            break;
        }
        if (c == 'l')
        {
            if (playground[playerPos.y][playerPos.x - 1].isWall)
            {
                draw(playground, NROWS, NCOLS, playerPos);
                continue;
            }
            playerPos.x--;
            draw(playground, NROWS, NCOLS, playerPos);
        }
        if (c == 'r')
        {
            if (playground[playerPos.y][playerPos.x + 1].isWall)
            {
                draw(playground, NROWS, NCOLS, playerPos);
                continue;
            }
            playerPos.x++;
            draw(playground, NROWS, NCOLS, playerPos);
        }
        if (c == 'u')
        {
            if (playground[playerPos.y - 1][playerPos.x].isWall)
            {
                draw(playground, NROWS, NCOLS, playerPos);
                continue;
            }
            playerPos.y--;
            draw(playground, NROWS, NCOLS, playerPos);
        }
        if (c == 'd')
        {
            if (playground[playerPos.y + 1][playerPos.x].isWall)
            {
                draw(playground, NROWS, NCOLS, playerPos);
                continue;
            }
        }
    }
    for (int i = 0; i < NROWS; ++i)
    {
        delete[] playground[i];
    }
    delete[] playground;

    return 0;
}
