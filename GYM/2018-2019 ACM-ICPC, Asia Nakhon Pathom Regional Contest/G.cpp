#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long int
using namespace std;



const int maxn = 200 + 10;
const int maxm = maxn * maxn;
struct Edge {
	int to, next;
}e[maxm];


int head[maxn], tot;
int low[maxn], dfn[maxn], stk[maxn], bel[maxn];
int ind, top;
int scc;
bool instk[maxn];
void addedge(int u, int v) {
	e[tot].to = v;
	e[tot].next = head[u];
	head[u] = tot++;
}
void tarjan(int u) {
	int v;
	low[u] = dfn[u] = ++ind;
	stk[top++] = u;
	instk[u] = true;
	for (int i = head[u]; i != -1; i = e[i].next) {
		v = e[i].to;
		if (!dfn[v]) {
			tarjan(v);
			if (low[u] > low[v]) low[u] = low[v];
		}
		else if (instk[v] && low[u] > dfn[v])
			low[u] = dfn[v];
	}
	if (low[u] == dfn[u]) {
		scc++; // new scc
		do {
			v = stk[--top];
			instk[v] = false;
			bel[v] = scc;
		} while (u != v);
	}
}
void solve(int n) {
	memset(dfn, 0, sizeof(dfn));
	memset(instk, false, sizeof(instk));
	ind = scc = top = 0;
	for (int i = 1; i <= n; i++)
		if (!dfn[i])
			tarjan(i);
}
void init() {
	tot = 0;
	memset(head, -1, sizeof(head));
}
int main() {
	IO;
	int cas; cin >> cas;
	while (cas--) {
		init();
		int n, m; cin >> n >> m;
		for (int i = 1; i <= m; i++) {
			int u, v; cin >> u >> v; 
			u++, v++;
			addedge(u, v);
		}
		solve(n);
		cout << scc << endl;
	}
}
