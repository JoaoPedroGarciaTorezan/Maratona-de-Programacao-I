#include <bits/stdc++.h>

using namespace std;

int main () {

    int R, C;
    cin >> R >> C;
    vector<vector<int>> grid(R, vector<int> (C));

    int px[] = {1, -1, 0, 0}, py[]= {0, 0, 1, -1}; // escolhe direções

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++)
            cin >> grid[i][j];
    }

    int ox, oy;
    int dx, dy; //posições de origem e destino
    for(int i = 0;i < R; i++) {
        for(int j = 0; j<C; j++) {
            if(grid[i][j] == 3) {
                ox = i; 
                oy = j;
            }
            if(grid[i][j] == 0){
                dx = i;
                dy = j;
            }

        }
    }

    vector<vector<int>> dist(R, vector<int> (C, -1));
    queue<pair<int, int>> q;
    dist[ox][oy] = 0;
    q.push({ox, oy});
    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        if(grid[x][y] == 0){          // primeira saída alcançada = a mais próxima
            cout << dist[x][y] << "\n";
            return 0;
        }


        for(int k = 0; k<4; k++){ //vizinhos nas 4 direções
            int nx = x + px[k], ny = y + py[k];//célula vizinha
            if(nx < 0 || ny < 0 || nx>= R || ny >= C) continue;
            if(grid[nx][ny] == 2) continue;
            if(dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    return 0;
}