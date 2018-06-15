#include <iostream>
#include <queue>
using namespace std;

/* РЅР°С…РѕР¶РґРµРЅРёРµ РїСѓС‚Рё*/
void find_path(int n, int row, int col, char** lab, int** visited, int** path, queue<int>& plan){
    if(!visited[row][col]){
        /* РїСЂРѕРІРµСЂСЏРµРј РЅРµ РІС‹С€Р»Рё Р»Рё РјС‹ Р·Р° РіСЂР°РЅРёС†С‹ Р»Р°Р±РёСЂРёРЅС‚Р°, РµСЃС‚СЊ Р»Рё РєР»РµС‚РєР° 
        РІ РјР°СЃСЃРёРІРµ РїРѕСЃРµС‰РµРЅРЅС‹С… Рё РјРѕР¶РЅРѕ Р»Рё С‡РµСЂРµР· РЅРµРµ РїСЂРѕР№С‚Рё*/
        if ((row+1) < n && (row+1) >= 0 && !visited[row+1][col] &&
            (lab[row+1][col] == '.' || lab[row+1][col] == 'X')) {
                path[row+1][col] = path[row][col] + 1;
                plan.push(row+1);
                plan.push(col);
        }
        if((row-1) < n && (row-1) >= 0 && !visited[row-1][col] && 
            (lab[row-1][col] == '.' || lab[row-1][col] == 'X')) {
                path[row-1][col] = path[row][col] + 1;
                plan.push(row-1);
                plan.push(col);
        }
        if((col + 1) < n && (col + 1) >= 0 && !visited[row][col+1] && 
            (lab[row][col+1] == '.' || lab[row][col+1] == 'X')) {
                path[row][col+1] = path[row][col] + 1;
                plan.push(row);
                plan.push(col+1);
        }
        if((col - 1) < n && (col - 1) >= 0 && !visited[row][col-1] && 
            (lab[row][col-1] == '.' || lab[row][col-1] == 'X')) {
                path[row][col-1] = path[row][col] + 1;
                plan.push(row);
                plan.push(col-1);
        }
        visited[row][col] = 1; /* РѕС‚РјРµС‡Р°РµРј РєР»РµС‚РєСѓ РІ РєРѕС‚РѕСЂРѕР№ РїРѕР±С‹РІР°Р»Рё */
    }
}
 
int main() {
    int n, x_start, y_start, x_end, y_end, x, y;
    queue <int> plan; 
    cin >> n;
    char** lab = new char* [n];
    int** visited = new int * [n];
    int** path = new int * [n];
    for(int i=0; i<n; i++){
        lab[i] = new char [n];   /* РјР°СЃСЃРёРІ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ Р»Р°Р±РёСЂРёРЅС‚Р° */
        visited[i] = new int [n]; /* РјР°СЃСЃРёРІ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ РёРЅС„РѕСЂРјР°С†РёРё Рѕ РїРѕСЃРµС‰РµРЅРёРё РєР»РµС‚РѕРє*/
        path[i] = new int [n];  /* РјР°СЃСЃРёРІ РґР»СЏ С…СЂР°РЅРµРЅРёСЏ РЅР°Р№РґРµРЅРЅС‹С… РїСѓС‚РµР№ */
        for(int j=0; j<n; j++){
            visited[i][j] = 0;  
            path[i][j] = -1;   
            cin >> lab[i][j]; 
            if (lab[i][j] == '@') { /* РЅР°С…РѕРґРёРј РЅР°С‡Р°Р»Рѕ РїСѓС‚Рё*/
                x_start = i;
                y_start = j;
                plan.push(i);  /* Р·Р°РЅРѕСЃРёРј РЅР°С‡Р°Р»СЊРЅСѓСЋ РєР»РµС‚РєСѓ */
                plan.push(j);  /* РІ РїР»Р°РЅ РїРѕСЃРµС‰РµРЅРёСЏ */
                path[i][j] = 1;
            }
            else if (lab[i][j] == 'X') { /* РЅР°С…РѕРґРёРј РєРѕРЅРµС‡РЅСѓСЋ С‚РѕС‡РєСѓ */
                x_end = i;
                y_end = j;
            }
        }
    }
    while(!plan.empty()){ /* РїРѕРєР° РѕС‡РµСЂРµРґСЊ РїРѕСЃРµС‰РµРЅРёСЏ РєР»РµС‚РѕРє РЅРµРїСѓСЃС‚Р°СЏ*/
        x=plan.front();
        plan.pop();
        y=plan.front();
        plan.pop();
        find_path(n, x, y, lab, visited, path, plan); /* РїСЂРѕРґРѕР»Р¶Р°РµРј РїРѕРёСЃРє РїСѓС‚Рё*/
    }
    if(!visited[x_end][y_end]){
        cout << "N" << endl;
    }
    else {
        cout << "Y" << endl;
            x = x_end;
            y = y_end;
            lab[x][y] = '+';
            while (path[x][y] != 2) { /* РІРѕСЃСЃС‚Р°РЅРѕРІР»РµРЅРёРµ РїСѓС‚Рё*/
                if ((x-1) >= 0 && (x-1) < n && (path[x-1][y] == path[x][y] - 1)) {
                    x = x-1;
                    lab[x][y] = '+';
                }
                else if ((x+1) >= 0 && (x+1) < n && (path[x+1][y] == path[x][y] - 1)) {
                    x = x+1;
                    lab[x][y] = '+';
                }
                else if ((y-1) >= 0 && (y-1) < n && (path[x][y-1] == path[x][y] - 1)) {
                    y = y-1;
                    lab[x][y] = '+';
                }
                else if ((y+1) >= 0 && (y+1) < n && (path[x][y+1] == path[x][y] - 1)) {
                    y = y+1;
                    lab[x][y] = '+';
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << lab[i][j];
                }
                cout << endl;
            }
        }
    system("pause");
    return 0;
}