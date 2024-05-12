class Solution {
public:
  int robotSim(vector<int> &commands, vector<vector<int>> &obstacles) {
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};
    int x = 0, y = 0, idx = 0;
    set<pair<int, int>> st;
    for (auto obstacle : obstacles) {
      st.insert({obstacle[0], obstacle[1]});
    }
    int res = 0;
    for (auto command : commands) {
      if (command == -2) {
        idx = (idx + 3) % 4;
      } else if (command == -1) {
        idx = (idx + 1) % 4;
      } else {
        for (int i = 0; i < command; i++) {
          int newX = x + dx[idx];
          int newY = y + dy[idx];
          if (st.find({newX, newY}) == st.end()) {
            x = newX;
            y = newY;
            res = max(res, x * x + y * y);
          }
        }
      }
    }
    return res;
  }
};
// class Solution {
// public:
//     int robotSim(vector<int>& c, vector<vector<int>>& o) {
//         int i,j;
//         int n = c.size();
//         int ma = 0;
//         unordered_map<string,bool>mp;
//         string s;
//         for(i=0; i<o.size(); i++){
//             s.clear();
//             s+=(to_string(o[i][0]));
//             s+=(to_string(o[i][1]));
//             mp[s] = true;
//         }
//         vector<int>pos,origin;
//         pos.push_back(0);
//         pos.push_back(0);
//         origin = pos;
//         cout<<pos[0]<<" "<<pos[1]<<endl;
//         // for(auto k:mp){
//         //     cout<<k.first<<" "<<k.second<<" ";
//         // }
//         cout<<endl;
//         int dir = 0;
//         for(i=0; i<c.size(); i++){
//             if(c[i]==-1){
//                 dir += 1;
//                 dir%=4;
//             }
//             else if(c[i]==-2){
//                 dir += 3;
//                 dir%=4;
//             }
//             else{
//                 if(dir==0){
//                     for(j=0; j<c[i]; j++){
//                         s.clear();
//                         s+=(to_string(pos[0]));
//                         s+=(to_string(pos[1]));
//                         if(mp[s]==true && pos!=origin){
//                             // cout<<"hi";
//                             pos[1]-=1;
//                             break;
//                         }
//                         pos[1]+=1;
//                         // cout<<":"<<pos[0]<<" "<<pos[1]<<":";
//                     }
//                 }
//                 else if(dir==1){
//                     for(j=0; j<c[i]; j++){
//                         s.clear();
//                         s+=(to_string(pos[0]));
//                         s+=(to_string(pos[1]));
//                         if(mp[s]==true && pos!=origin){
//                             pos[0]-=1;
//                             break;
//                         }
//                         pos[0]+=1;
//                     }
//                 }
//                 else if(dir==2){
//                     for(j=0; j<c[i]; j++){
//                         s.clear();
//                         s+=(to_string(pos[0]));
//                         s+=(to_string(pos[1]));
//                         if(mp[s]==true && pos!=origin){
//                             pos[1]+=1;
//                             break;
//                         }
//                         pos[1]-=1;
//                     }
//                 }
//                 else{
//                     for(j=0; j<c[i]; j++){
//                         s.clear();
//                         s+=(to_string(pos[0]));
//                         s+=(to_string(pos[1]));
//                         if(mp[s]==true && pos!=origin){
//                             pos[0]+=1;
//                             break;
//                         }
//                         pos[0]-=1;
//                     }
//                 }
//             }
//             int num = pow(pos[0],2)+pow(pos[1],2);
//             ma = max(ma,num);
//             cout<<dir<<" "<<pos[0]<<" "<<pos[1]<<" "<<ma<<";";
//         }
//         return ma;
//     }
// };