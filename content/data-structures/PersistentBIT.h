/**
 * Author: Lomk (VNOI)
 * Source: IPSC 2011 - Grid Surveillance
 * Description: At each node of the BIT, store all pairs of (version, value) associated with that node.
 * instead of just value. Updates: simply add a pair (version, value) to the relevant nodes.
 * For queries at version t, binary search to find the most recent pair (version, value) before t
 * Time: O(\log N).
 * Usage: Node* tr = new Node(v, 0, sz(v));
 * Status: Fat Node
 */
#define _(x) (x & (-(x)))
vector< pair<int,int> > bit[4100][4100]; // Persistent BIT

void update(int x, int y, int val, int time) { // Add (x,y) += val @ time
    for(int u = x; u <= 4096; u += _(u))
        for(int v = y; v <= 4096; v += _(v)) {
            if (bit[u][v].empty()) {
                bit[u][v].push_back(make_pair(time, val));
            }
            else {
                int cur = bit[u][v][bit[u][v].size()-1].second;
                bit[u][v].push_back(make_pair(time, cur + val));
            }
        }
}

int get(int time, int x, int y) {
    int res = 0;
    for(int u = x; u > 0; u -= _(u))
        for(int v = y; v > 0; v -= _(v)) {
            if (bit[u][v].empty()) {
            }
            else if (bit[u][v][bit[u][v].size()-1].first <= time) {
                res += bit[u][v][bit[u][v].size()-1].second;
            }
            else {
                int pos = upper_bound(bit[u][v].begin(), bit[u][v].end(), make_pair(time, 2000111000))
                        - bit[u][v].begin() - 1;
                if (pos >= 0)
                    res += bit[u][v][pos].second;
            }
        }
    return res;
}