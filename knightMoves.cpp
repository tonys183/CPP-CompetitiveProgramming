struct Position { int x, y; };
const int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
Position parseSquare(const string &square) { return {square[0] - 'a', square[1] - '1'}; }
bool isValid(int x, int y) { return x >= 0 && x < 8 && y >= 0 && y < 8; }

int findMinKnightMoves(const Position &start, const Position &end) {
    queue<pair<Position, int>> q;
    bool visited[8][8] = {{false}};
    q.push({start, 0});
    visited[start.x][start.y] = true;

    while (!q.empty()) {
        auto [current, moves] = q.front();
        q.pop();
        if (current.x == end.x && current.y == end.y) return moves;
        for (int i = 0; i < 8; ++i) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];
            if (isValid(nx, ny) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({{nx, ny}, moves + 1});
            }
        }
    }
    return -1;
}