#include<iostream>
using namespace std;

class Graph {
public:
    int mat[20][20], n;

    Graph() {
        for(int i=0;i<20;i++)
            for(int j=0;j<20;j++)
                mat[i][j]=0;
    }

    void accept() {
        cout<<"Enter number of nodes: ";
        cin>>n;

        int e;
        cout<<"Enter number of edges: ";
        cin>>e;

        int src, des, cost;
        for(int i=0;i<e;i++) {
            cout<<"Enter source: ";
            cin>>src;
            cout<<"Enter destination: ";
            cin>>des;
            cout<<"Enter cost: ";
            cin>>cost;
            mat[src][des] = cost;
            mat[des][src] = cost; // undirected
        }
    }

    void display() {
        cout<<"\nAdjacency Matrix:\n";
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                cout<<mat[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

    void prims() {
        int visited[20] = {0};
        int total = 0;

        cout<<"Enter starting vertex: ";
        int src;
        cin>>src;
        visited[src] = 1;

        int count = 0;
        while(count < n-1) {
            int u=-1, v=-1, min=999;

            for(int i=0;i<n;i++) {
                if(visited[i] == 1) {
                    for(int j=0;j<n;j++) {
                        if(visited[j] == 0 && mat[i][j] != 0) {
                            if(mat[i][j] < min) {
                                min = mat[i][j];
                                u = i;
                                v = j;
                            }
                        }
                    }
                }
            }

            if(u == -1 || v == -1) {
                cout<<"Graph is not connected!\n";
                return;
            }

            cout<<u<<" -> "<<v<<" cost: "<<min<<"\n";
            visited[v] = 1;
            total += min;
            count++;
        }

        cout<<"Total cost of Minimum Spanning Tree: "<<total<<"\n";
    }
};

int main() {
    Graph g;
    g.accept();
    g.display();
    g.prims();
    return 0;
}
