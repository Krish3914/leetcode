
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int garbageCollection(vector<string> &garbage, vector<int> &travel) {
    int i, j;
    int ng = garbage.size();
    int nt = travel.size();
    int tt;
    int cg = 0;
    int cp = 0;
    int cm = 0;
    string t;
    int lg = -1, lp = -1, lm = -1;
    for (i = ng - 1; i >= 0; i--) {
      t = garbage[i];
      for (j = 0; j < t.size(); j++) {
        if (t[j] == 'G') {
          lg = i;
          break;
        }
      }
      if (lg > 0) {
        break;
      }
    }
    for (i = ng - 1; i >= 0; i--) {
      t = garbage[i];
      for (j = 0; j < t.size(); j++) {
        if (t[j] == 'P') {
          lp = i;
          break;
        }
      }
      if (lp > 0) {
        break;
      }
    }
    for (i = ng - 1; i >= 0; i--) {
      t = garbage[i];
      for (j = 0; j < t.size(); j++) {
        if (t[j] == 'M') {
          lm = i;
          break;
        }
      }
      if (lm > 0) {
        break;
      }
    }
    cout << lg << "\t";
    cout << lp << "\t";
    cout << lm << endl;
    i = 0;
    while (i <= lg) {
      t = garbage[i];
      cout << "lg"
           << "."
           << "\t";
      if (i == 0) {
        for (j = 0; j < t.size(); j++) {
          if (t[j] == 'G') {
            cg = cg + 1;
          } else {
            continue;
          }
        }
      } else {
        cg = cg + travel[i - 1];
        for (j = 0; j < t.size(); j++) {
          if (t[j] == 'G') {
            cg = cg + 1;
          } else {
            continue;
          }
        }
      }
      cout << cg << "\t";
      i++;
    }
    cout << endl;
    i = 0;
    while (i <= lp) {
      t = garbage[i];
      cout << "lp"
           << "."
           << "\t";
      if (i == 0) {
        for (j = 0; j < t.size(); j++) {
          if (t[j] == 'P') {
            cp = cp + 1;
          } else {
            continue;
          }
        }
      } else {
        cp = cp + travel[i - 1];
        for (j = 0; j < t.size(); j++) {
          if (t[j] == 'P') {
            cp = cp + 1;
          } else {
            continue;
          }
        }
      }
      cout << cp << "\t";
      i++;
    }
    cout << endl;
    i = 0;
    while (i <= lm) {
      t = garbage[i];
      cout << "lm"
           << "."
           << "\t";
      if (i == 0) {
        for (j = 0; j < t.size(); j++) {
          if (t[j] == 'M') {
            cm = cm + 1;
          } else {
            continue;
          }
        }
      } else {
        cm = cm + travel[i - 1];
        for (j = 0; j < t.size(); j++) {
          if (t[j] == 'M') {
            cm = cm + 1;
          } else {
            continue;
          }
        }
      }
      cout << cm << "\t";
      i++;
    }
    cout << endl;
    cout << cg << endl;
    cout << cp << endl;
    cout << cm << endl;
    tt = cg + cp + cm;
    return tt;
  }
};

// for(i=0; i<ng; i++){
//     t = garbage[i];
//     while(i<=lg){
//         t = garbage[i];
//         cout<<"lg"<<"."<<"\t";
//         if(i==0){
//             for(j=0; j<t.size(); j++){
//                 if(t[j] == 'G'){
//                     cg = cg + 1;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         else{
//             cg = cg + travel[i-1];
//             for(j=0; j<t.size(); j++){
//                 if(t[j] == 'G'){
//                     cg = cg + 1;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         cout<<cg<<endl;
//         i++;
//     }
//     // while(i<=lp){if(i==0){for(j=0; j<t.size(); j++){
//     //     if(t[j] == 'P'){
//     //         cp = cp + 1;
//     //     }
//     //     else{
//     //         continue;
//     //     }
//     // }}
//     // else{
//     //     cp = cp + travel[i-1];
//     //     for(j=0; j<t.size(); j++){
//     //         if(t[j] == 'P'){
//     //             cp = cp + 1;
//     //         }
//     //         else{
//     //             continue;
//     //         }
//     //     }
//     // }}
//     // while(i<=lm){if(i==0){for(j=0; j<t.size(); j++){
//     //     if(t[j] == 'M'){
//     //         cm = cm + 1;
//     //     }
//     //     else{
//     //         continue;
//     //     }
//     // }}
//     // else{
//     //     cm = cm + travel[i-1];
//     //     for(j=0; j<t.size(); j++){
//     //         if(t[j] == 'M'){
//     //             cm = cm + 1;
//     //         }
//     //         else{
//     //             continue;
//     //         }
//     //     }
//     // }}
// }......
// for(i=0; i<ng; i++){
//     t = garbage[i];
//     while(i<=lp){if(i==0){for(j=0; j<t.size(); j++){
//         if(t[j] == 'P'){
//             cp = cp + 1;
//         }
//         else{
//             continue;
//         }
//     }}
//     else{
//         cp = cp + travel[i-1];
//         for(j=0; j<t.size(); j++){
//             if(t[j] == 'P'){
//                 cp = cp + 1;
//             }
//             else{
//                 continue;
//             }
//         }
//     }}
// }
// for(i=0; i<ng; i++){
//     t = garbage[i];
//     while(i<=lm){if(i==0){for(j=0; j<t.size(); j++){
//         if(t[j] == 'M'){
//             cm = cm + 1;
//         }
//         else{
//             continue;
//         }
//     }}
//     else{
//         cm = cm + travel[i-1];
//         for(j=0; j<t.size(); j++){
//             if(t[j] == 'M'){
//                 cm = cm + 1;
//             }
//             else{
//                 continue;
//             }
//         }
//     }}
// }