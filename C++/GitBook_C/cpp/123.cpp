
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#define maxState 10000
#define N 3
using namespace std;

bool isEqual(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j][n] != b[i][j])
                return false;
        }
    }
    return true;
}

bool isEqual(int a[N][N], int b[N][N]) //�ˬd��x�}�O�_�����@�P
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] != b[i][j])
                return false;
        }
    }
    return true;
}

int evalute(int state[N][N], int target[N][N]) //�������h-�p�⤣�b�쪺�N�P�Ӽ�
{
    int num = 0; //num��ܷ�e�x�}state�����b�ؼЦ�m�W���N�P�Ӽ�
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            if (state[i][j] != target[i][j])
                num++; //�έpnum
    }
    return num; //��^����
}

void findBrack(int a[N][N], int x, int y)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == 0)
            {
                x = i;
                y = j;
                return;
            }
        }
    }
}

bool move(int a[N][N], int b[N][N], int dir)
{
    //1 up 2 down 3 left 4 right
    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            b[i][j] = a[i][j]; //�N��x�}�ƻs�H�i�沾�ʾާ@
            if (a[i][j] == 0)
            {
                x = i;
                y = j; //�аO�Ů��m
            }
        }
    }
    if (x == 0 && dir == 1)
        return false; //�|��if�y�y�ư��|�ؤ��i�઺���ʤ�V
    if (x == N - 1 && dir == 2)
        return false; //��^false�N�����ز��ʤ覡���i��A�^��եΨ�ƭ��s��ܲ��ʤ�V
    if (y == 0 && dir == 3)
        return false;
    if (y == N - 1 && dir == 4)
        return false;
    if (dir == 1) //���ӶǤJ��dir�N�Ů橹��������V����
    {
        b[x - 1][y] = 0;
        b[x][y] = a[x - 1][y];
    }
    else if (dir == 2)
    {
        b[x + 1][y] = 0;
        b[x][y] = a[x + 1][y];
    }
    else if (dir == 3)
    {
        b[x][y - 1] = 0;
        b[x][y] = a[x][y - 1];
    }
    else if (dir == 4)
    {
        b[x][y + 1] = 0;
        b[x][y] = a[x][y + 1];
    }
    else
        return false;
    return true; //���ʪŮ榨�\��^true
}

void statecpy(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j][n] = b[i][j]; //�N���ʧ����s�x�}�ƻs��close���An�i�H��ܲ�n�B�j�����G
        }
    }
}

void getState(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            b[i][j] = a[i][j][n];
        }
    }
}

void statecpy(int a[N][N], int b[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            a[i][j] = b[i][j]; //�ƻs��e�x�}start
    }
}
int checkAdd(int a[N][N][maxState], int b[N][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isEqual(a, b, i))
            return i; //�Y��x�}�ۦP�h��^�����x�}���s��
    }
    return -1;
}

int Astar(int a[N][N][maxState], int start[N][N], int target[N][N], int path[maxState])
{
    bool visited[maxState] = {false}; //true��ܯx�}�w�Q�M��
    int fitness[maxState] = {0};
    int passLen[maxState] = {0};
    int curpos[N][N];
    statecpy(curpos, start);
    int id = 0, Curid = 0;
    fitness[id] = evalute(curpos, target);
    statecpy(a, start, id++);
    while (!isEqual(curpos, target)) //�u�n��e�x�}�ǦCcurpos�P�ؼЯx�}target���ۦP�Y����while�`��
    {
        for (int i = 1; i < 5; i++) //�V�|�P���V
        {
            int tmp[N][N] = {0};
            if (move(curpos, tmp, i)) //�̦����ӤW�U���k���ǹ��ղ��ʪŮ�
            {
                int state = checkAdd(a, tmp, id);
                if (state == -1) //���K�[��close��
                {
                    path[id] = Curid; //�����e��id�Ӹ`�I��ڤw�g���L�����|����O
                    passLen[id] = passLen[Curid] + 1;
                    fitness[id] = evalute(tmp, target) + passLen[id]; //�`��O����
                    statecpy(a, tmp, id++);                           //�N�B�z�o�쪺�s�x�}�s����id�ƻs��open��a���O�s
                }
                else //�K�[��close��
                {
                    int len = passLen[Curid] + 1, fit = evalute(tmp, target) + len; //�ק�������
                    if (fit < fitness[state])
                    {
                        path[state] = Curid;
                        passLen[state] = len;
                        fitness[state] = fit;
                        visited[state] = false;
                    } //�Y�ұo���G�p��w����O�h�ק�h�l�����������ȡA�ñN���M���L���x�}�аO��false
                }
            }
        }
        visited[Curid] = true; //��curid�ӯx�}�w�Q�M���L

        int minCur = -1;
        for (int i = 0; i < id; i++) //�qopen��(visited�Ȭ�false)�M���`�������fitness�ȳ̤p���x�}�@���U�@�ӱa�j���`�I
            if (!visited[i] && (minCur == -1 || fitness[i] < fitness[minCur]))
                minCur = i;
        Curid = minCur;             //Curid�{�b��ܳQ��@�U�@���X�i�`�I���x�}���s��
        getState(a, curpos, Curid); //�N�Q�襤���x�}�ƻs��curpos
        if (id == maxState)
            return -1; //�p�G�w�g�j���`�I�ƹF��]�w��maxState�A�h�{���ؼЯx�}���i�F�A��^-1
    }
    return Curid; //�w�D�o�ؼЯx�}�A��^�̲ׯx�}���s��
}

int BFS(int a[N][N][maxState], int start[N][N], int target[N][N], int path[maxState])
{
    bool visited[maxState] = {false}; //true��ܯx�}�w�Q�M��
    int fitness[maxState] = {0};
    int passLen[maxState] = {0};
    int curpos[N][N];
    statecpy(curpos, start);
    int id = 0, Curid = 0;
    //fitness[id] = evalute(curpos, target);
    statecpy(a, start, id++);
    while (!isEqual(curpos, target)) //�u�n��e�x�}�ǦCcurpos�P�ؼЯx�}target���ۦP�Y����while�`��
    {
        for (int i = 1; i < 5; i++) //�V�|�P���V
        {
            int tmp[N][N] = {0};
            if (move(curpos, tmp, i)) //�̦����ӤW�U���k���ǹ��ղ��ʪŮ�
            {
                int state = checkAdd(a, tmp, id);
                if (state == -1) //���K�[��close��
                {
                    path[id] = Curid; //�����e��id�Ӹ`�I��ڤw�g���L�����|����O
                    passLen[id] = passLen[Curid] + 1;
                    fitness[id] = passLen[id]; //�`��O����
                    statecpy(a, tmp, id++);    //�N�B�z�o�쪺�s�x�}�s����id�ƻs��open��a���O�s
                }
                else //�K�[��close��
                {
                    int len = passLen[Curid] + 1, fit = len; //�ק�������
                    if (fit < fitness[state])
                    {
                        path[state] = Curid;
                        passLen[state] = len;
                        fitness[state] = fit;
                        visited[state] = false;
                    } //�Y�ұo���G�p��w����O�h�ק�h�l�����������ȡA�ñN���M���L���x�}�аO��false
                }
            }
        }
        visited[Curid] = true; //��curid�ӯx�}�w�Q�M���L
        int minCur = -1;
        for (int i = 0; i < id; i++) //�qopen��(visited�Ȭ�false)�M���`�������fitness�ȳ̤p���x�}�@���U�@�ӱa�j���`�I
            if (!visited[i] && (minCur == -1 || fitness[i] < fitness[minCur]))
                minCur = i;
        Curid = minCur;             //Curid�{�b��ܳQ��@�U�@���X�i�`�I���x�}���s��
        getState(a, curpos, Curid); //�N�Q�襤���x�}�ƻs��curpos
        if (id == maxState)
            return -1; //�p�G�w�g�j���`�I�ƹF��]�w��maxState�A�h�{���ؼЯx�}���i�F�A��^-1
    }
    return Curid; //�w�D�o�ؼЯx�}�A��^�̲ׯx�}���s��
}

void show(int a[N][N][maxState], int n)
{
    cout << "-------------------------------\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j][n] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------\n";
}

int calDe(int a[N][N])
{
    int sum = 0;
    for (int i = 0; i < N * N; i++)
    {
        for (int j = i + 1; j < N * N; j++)
        {
            int m, n, c, d;
            m = i / N;
            n = i % N;
            c = j / N;
            d = j % N;
            if (a[c][d] == 0)
                continue;
            if (a[m][n] > a[c][d])
                sum++;
        }
    }
    return sum;
}

void autoGenerate(int a[N][N])
{
    int maxMove = 50;            //�]�m�B�ƤW��
    srand((unsigned)time(NULL)); //�ͦ��H���ƺؤl
    int tmp[N][N];
    while (maxMove--)
    {                             //�H�����ʪŮ椭�Q�B�i�H�O�Ҫ�l���A���x�}�ǦC���ۦP
        int dir = rand() % 4 + 1; //dir���Ƚd��1~4�A�N��Ů沾�ʪ��|�Ӥ�V
        if (move(a, tmp, dir))
            statecpy(a, tmp); //���í�ؼЯx�}�����ǥH�c�y��l�x�}
    }
}

void results_op(int res, int path[maxState], int a[N][N][maxState])
{

    int shortest[maxState] = {0}, j = 0;
    while (res != 0)
    {
        shortest[j++] = res;
        res = path[res];
    }
    cout << "�� 0 �B" << endl;
    show(a, 0);
    for (int i = j - 1; i >= 0; i--)
    {
        cout << "�� " << j - i << " �B\n";
        show(a, shortest[i]);
    }
}

int main()
{
    int a[N][N][maxState] = {0}; //�s�x�C�Ӹ`�I�x�}�A�̦h�i�s�xmaxState��
    //int start[N][N] = {1, 2, 3, 8, 0, 4, 7, 6, 5};  //�����K�ӼƽX�������ȤΥؼЪ��A�]�N�Ů�Ȼ{��0�A�h��ڤW�O�E�ӼƽX�^
    //autoGenerate(start);                            //�եΦ�����H�����í�x�}���ǥͦ����T�w���x�}�ǦC
    int target[N][N] = {1, 2, 3, 8, 0, 4, 7, 6, 5}; //�ؼЯx�}�ǦC
    int start[N][N] = {1, 6, 3, 0, 8, 2, 4, 5, 7};
    int start_demo[N][N] = {0}, target_demo[N][N] = {0};
    statecpy(start_demo, start);
    statecpy(target_demo, target);

    //if (!(calDe(start) % 2 == calDe(target) % 2))
    //{
    //   cout << "�b����l���A�ΥؼЧǦC���p�U�A�L��\n";

    //  system("pause");
    //  return 0;
    // }

    int path[maxState] = {0};

    cout << "�ϥΥH���b�ؼЦ�m���N�P�Ӽƪ�A*��k�B�z�p�U�G" << endl;
    int res = Astar(a, start, target, path);
    // if (res == -1)
    //  { //�{���ؼЯx�}���i�F
    //  cout << "�����j���w�g�j���W�L" << maxState << "�Ӹ`�I�A�{���ؼЯx�}���i�F\n";

    // system("pause");
    //  return 0;
    //}
    results_op(res, path, a);

    //�U���i��BFS�j���A�]���ݭn�ǥ�path�ƲաA�ҥH�N���l�Ƭ����s�Ʋ�
    //for (int i = 0; i < maxState; i++)
    // {
    // path[0] = 0;
    //}
    //cout << "\n�Ȩϥθ��|��O�@���ҵo��ƪ�A*��k(BFS)�B�z���G�p�U�G" << endl;
    //res = BFS(a, start_demo, target_demo, path);
    /*if (res == -1)
    { //�{���ؼЯx�}���i�F
        cout << "�����j���w�g�j���W�L" << maxState << "�Ӹ`�I�A�{���ؼЯx�}���i�F\n";

        system("pause");
        exit(0);
    }
  */
    //results_op(res, path, a);

    cout << endl;
    system("pause");
    return 0;
}