 class Solution {
public:
    using int2 = pair<int, int>;
    int n, distanceThreshold;
    vector<vector<int2>> adj;
    inline void build_graph(vector<vector<int>>& edges) {
        adj.resize(n);
        for (auto& e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].emplace_back(w, v);
            adj[v].emplace_back(w, u);
        }
    }

    // Dijkstra finds nums of shortest path with dist<= distanceThreshold
    inline int Dijkstra(int x) { 
        int dist[100];
        fill(dist, dist+n, INT_MAX);
        priority_queue<int2, vector<int2>, greater<int2>> pq; // minHeap
        dist[x] = 0; // start from x
        pq.emplace(0, x);
        while (!pq.empty()) {
            auto [d, i] = pq.top();
            pq.pop();
            if (d > dist[i])
                continue;
            int d2;
            for (auto& [w, j] : adj[i]) {
                // Skip if d>=distanceThreshold, code much faster
                if (d>=distanceThreshold) 
                    continue;
                d2 = d + w;
                if (d2 < dist[j]) {
                    dist[j] = d2;
                    pq.emplace(d2, j);
                }
            }
        }
        return count_if(dist, dist+n, [&](int x) 
                    { return  x <= distanceThreshold; })-1;
    }

    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        this->n=n;
        this->distanceThreshold=distanceThreshold;
        build_graph(edges);
        int min_cnt = n, city = -1;
        for (int x=0; x<n; x++){
            int cnt=Dijkstra(x);
            if (cnt <=min_cnt ){
                min_cnt=cnt;
                city=x;
            }
        }
        return city;
    }
};





auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();  