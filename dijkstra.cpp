#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    // Build graph: for each city, store pairs (destination, cost)
    vector<vector<pair<int, ll>>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    
    // Initialize distances: all cities get INF, except city 1 which starts at 0.
    vector<ll> dist(n + 1, INF);
    dist[1] = 0;
    
    // Priority queue holds (current distance, city number)
    // We use greater<> so that the smallest distance is at the top.
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, 1});
    
    // Dijkstra's algorithm
    while (!pq.empty()) {
        pair<ll, int> current = pq.top();
        pq.pop();
        
        ll d = current.first;
        int city = current.second;
        
        // If this distance is not up-to-date, skip it.
        if (d > dist[city])
            continue;
        
        // Check all outgoing flights from this city.
        for (auto edge : graph[city]) {
            int nextCity = edge.first;
            ll cost = edge.second;
            // If we found a shorter path to nextCity, update and push it.
            if (dist[city] + cost < dist[nextCity]) {
                dist[nextCity] = dist[city] + cost;
                pq.push({dist[nextCity], nextCity});
            }
        }
    }
    
    // Output the shortest distances from city 1.
    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";
    
    return 0;
}

