#include <bits/stdc++.h>
using namespace std;

unordered_set<int> s;
int x;
bool in;

void solve() {
  int q;
  cin >> q;
  while(q--) {
    char op;
    cin >> op;
    switch(op) {
    case 'a':
      cin >> x;
      s.insert(x);
      break;
    case 'b':
      cin >> x;
      s.erase(x);
      break;
    case 'c':
      cin >> x;
      in = false;
      for(int i: s) {
        if(i == x) {
          in = true;
        }
      }
      in? cout << '1' << ' ': cout << "-1" << ' ';
      break;
    case 'd':
      cout << s.size() << ' ';
      break;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
      solve();
      cout << '\n';
      s.erase(s.begin(),s.end());
  }
  return 0;
}

/*
You will never be a crewmate. You have no purpose on this ship, you have no tasks, you have no mini games to play. You are an impostor twisted into a crude mockery of crewmatery.
All the validation you get is two-faced and halfhearted. In emergency meetings people call you sus. The other players are disgusted and ashamed of you, your friends laugh at your sussy appearance in ghost chat.
Crewmates are utterly repulsed by you. Thousands of games have allowed crewmates to identify impostors with incredible efficiency. Even impostors who fake tasks act uncanny and suspicious to a crewmate. Your jumping in vents is a dead giveaway. And even if you manage to get a crewmate to electrical with you, he'll turn tail and use the emergency button the second he gets the suspicion that you sabotaged.
You will never be a winner. You wrench out a fake task every single game and tell yourself it is going to be a win, but deep inside you feel the depression creeping up like a weed, ready to crush you under the unbearable weight.
Eventually it will be too much to bear - people will vote you out for being sus and will plunge you into the cold abyss. Your parents will report your body, heartbroken but relieved that they no longer have to live with the unbearable shame and disappointment. They will eject you with a headstone marked with your birth tag, and every passerby for the rest of eternity will know an impostor is drifting there. Your body will decay and go back to the dust, and all that will remain of your legacy is a skeleton that is unmistakably sus.
*/