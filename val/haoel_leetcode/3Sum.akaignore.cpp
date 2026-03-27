/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__LAB_TEST_CPP_LEETCODE_PRJ_DATA_HAOEL_LEETCODE_ALGORITHMS_CPP_3SUM_3SUM_CPP
#define AKA_SRC_D__LAB_TEST_CPP_LEETCODE_PRJ_DATA_HAOEL_LEETCODE_ALGORITHMS_CPP_3SUM_3SUM_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;




#include <bits/stdc++.h>
#include <string>
#include <map>
#include <unordered_map>
// Source : https://oj.leetcode.com/problems/3sum/
// Author : Hao Chen
// Date   : 2014-07-22

/********************************************************************************** 
* 
// * Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? 
// * Find all unique triplets in the array which gives the sum of zero.
* 
// * Note:
* 
// * Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
// * The solution set must not contain duplicate triplets.
* 
// *     For example, given array S = {-1 0 1 2 -1 -4},
* 
// *     A solution set is:
// *     (-1, 0, 1)
// *     (-1, -1, 2)
* 
*               
**********************************************************************************/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


/*
//  *   Similar like "Two Number" problem, we can have the simlar solution.
 *
//  *   Suppose the input array is S[0..n-1], 3SUM can be solved in O(n^2) time on average by 
//  *   inserting each number S[i] into a hash table, and then for each index i and j,  
//  *   checking whether the hash table contains the integer - (s[i]+s[j])
 *
//  *   Alternatively, the algorithm below first sorts the input array and then tests all 
//  *   possible pairs in a careful order that avoids the need to binary search for the pairs 
//  *   in the sorted list, achieving worst-case O(n^n)
 *
//  *   Solution:  Quadratic algorithm
//  *   http://en.wikipedia.org/wiki/3SUM
 *
 */
/** Instrumented function threeSum(vector<int>&) */
vector<vector<int> > threeSum(vector<int> &num) /* << Aka begin of function vector<vector<int>> threeSum(vector<int> &num) >> */
{AKA_mark("Calling: .\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");AKA_fCall++;AKA_mark("lis===52###sois===1669###eois===3122###lif===0###soif===48###eoif===1501###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");

    AKA_mark("lis===54###sois===1678###eois===1707###lif===2###soif===57###eoif===86###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");vector< vector<int> > result;
    if(AKA_mark("lis===55###sois===1716###eois===1769###lif===3###soif===95###eoif===148###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (((AKA_mark("lis===55###sois===1716###eois===1731###lif===3###soif===95###eoif===110###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num.size() == 0)) || (AKA_mark("lis===55###sois===1735###eois===1750###lif===3###soif===114###eoif===129###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num.size() == 1))) || (AKA_mark("lis===55###sois===1754###eois===1769###lif===3###soif===133###eoif===148###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num.size() == 2)))) {
AKA_mark("lis===55###sois===1771###eois===1785###lif===3###soif===150###eoif===164###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");return result;
}

else {
AKA_mark("lis===-55-###sois===-1716-###eois===-171653-###lif===-3-###soif===-###eoif===-148-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
}

    //sort the array, this is the key
    AKA_mark("lis===58###sois===1832###eois===1861###lif===6###soif===211###eoif===240###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");sort(num.begin(), num.end());

    AKA_mark("lis===60###sois===1869###eois===1888###lif===8###soif===248###eoif===267###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");int n = num.size();

    int AKA_BLOCK_LOOP_1896 = 0;
    AKA_mark("lis===62###sois===1901###eois===1909###lif===10###soif===280###eoif===288###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
for (int i=0; AKA_mark("lis===62###sois===1910###eois===1915###lif===10###soif===289###eoif===294###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (AKA_mark("lis===62###sois===1910###eois===1915###lif===10###soif===289###eoif===294###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (i<n-2)); ({AKA_mark("lis===62###sois===1917###eois===1920###lif===10###soif===296###eoif===299###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_1896++;
        if (AKA_BLOCK_LOOP_1896 > 1000) {
            //break;
        }AKA_mark("lis===62###sois===1922###eois===3099###lif===10###soif===301###eoif===1478###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
        //skip the duplication
        if (AKA_mark("lis===64###sois===1969###eois===1998###lif===12###soif===348###eoif===377###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && ((AKA_mark("lis===64###sois===1969###eois===1974###lif===12###soif===348###eoif===353###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (i > 0)) && (AKA_mark("lis===64###sois===1978###eois===1998###lif===12###soif===357###eoif===377###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num[i - 1] == num[i])))) {
AKA_mark("lis===64###sois===2000###eois===2009###lif===12###soif===379###eoif===388###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");continue;
}

else {
AKA_mark("lis===-64-###sois===-1969-###eois===-196929-###lif===-12-###soif===-###eoif===-377-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
}
        AKA_mark("lis===65###sois===2019###eois===2034###lif===13###soif===398###eoif===413###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");int a = num[i];
        AKA_mark("lis===66###sois===2044###eois===2060###lif===14###soif===423###eoif===439###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");int low = i + 1;
        AKA_mark("lis===67###sois===2070###eois===2087###lif===15###soif===449###eoif===466###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");int high = n - 1;
        int AKA_BLOCK_LOOP_2097 = 0;
    while (AKA_mark("lis===68###sois===2104###eois===2114###lif===16###soif===483###eoif===493###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (AKA_mark("lis===68###sois===2104###eois===2114###lif===16###soif===483###eoif===493###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (low < high))) {
        AKA_BLOCK_LOOP_2097++;
        if (AKA_BLOCK_LOOP_2097 > 1000) {
            //break;
        }AKA_mark("lis===68###sois===2116###eois===3092###lif===16###soif===495###eoif===1471###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
            AKA_mark("lis===69###sois===2131###eois===2148###lif===17###soif===510###eoif===527###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");int b = num[low];
            AKA_mark("lis===70###sois===2162###eois===2180###lif===18###soif===541###eoif===559###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");int c = num[high];
            if (AKA_mark("lis===71###sois===2198###eois===2212###lif===19###soif===577###eoif===591###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (AKA_mark("lis===71###sois===2198###eois===2212###lif===19###soif===577###eoif===591###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (a + b + c == 0))) {AKA_mark("lis===71###sois===2214###eois===2750###lif===19###soif===593###eoif===1129###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
                //got the soultion
                AKA_mark("lis===73###sois===2269###eois===2283###lif===21###soif===648###eoif===662###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");vector<int> v;
                AKA_mark("lis===74###sois===2301###eois===2316###lif===22###soif===680###eoif===695###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");v.push_back(a);
                AKA_mark("lis===75###sois===2334###eois===2349###lif===23###soif===713###eoif===728###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");v.push_back(b);
                AKA_mark("lis===76###sois===2367###eois===2382###lif===24###soif===746###eoif===761###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");v.push_back(c);
                AKA_mark("lis===77###sois===2400###eois===2420###lif===25###soif===779###eoif===799###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");result.push_back(v);
                // Continue search for all triplet combinations summing to zero.
                //skip the duplication
                int AKA_BLOCK_LOOP_2560 = 0;
    while(AKA_mark("lis===80###sois===2566###eois===2605###lif===28###soif===945###eoif===984###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && ((AKA_mark("lis===80###sois===2566###eois===2577###lif===28###soif===945###eoif===956###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (low < n - 1)) && (AKA_mark("lis===80###sois===2581###eois===2605###lif===28###soif===960###eoif===984###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num[low] == num[low + 1])))) {
AKA_mark("lis===80###sois===2607###eois===2613###lif===28###soif===986###eoif===992###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");low++;
}
 
                int AKA_BLOCK_LOOP_2632 = 0;
    while(AKA_mark("lis===81###sois===2638###eois===2676###lif===29###soif===1017###eoif===1055###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && ((AKA_mark("lis===81###sois===2638###eois===2646###lif===29###soif===1017###eoif===1025###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (high > 0)) && (AKA_mark("lis===81###sois===2650###eois===2676###lif===29###soif===1029###eoif===1055###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num[high] == num[high - 1])))) {
AKA_mark("lis===81###sois===2678###eois===2685###lif===29###soif===1057###eoif===1064###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");high--;
}
 
                AKA_mark("lis===82###sois===2704###eois===2710###lif===30###soif===1083###eoif===1089###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");low++;
                AKA_mark("lis===83###sois===2728###eois===2735###lif===31###soif===1107###eoif===1114###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");high--;
            } else {
if (AKA_mark("lis===84###sois===2760###eois===2769###lif===32###soif===1139###eoif===1148###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (AKA_mark("lis===84###sois===2760###eois===2769###lif===32###soif===1139###eoif===1148###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (a+b+c > 0))) {AKA_mark("lis===84###sois===2771###eois===2923###lif===32###soif===1150###eoif===1302###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
                //skip the duplication
                int AKA_BLOCK_LOOP_2830 = 0;
    while(AKA_mark("lis===86###sois===2836###eois===2874###lif===34###soif===1215###eoif===1253###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && ((AKA_mark("lis===86###sois===2836###eois===2844###lif===34###soif===1215###eoif===1223###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (high > 0)) && (AKA_mark("lis===86###sois===2848###eois===2874###lif===34###soif===1227###eoif===1253###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num[high] == num[high - 1])))) {
AKA_mark("lis===86###sois===2876###eois===2883###lif===34###soif===1255###eoif===1262###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");high--;
}

                AKA_mark("lis===87###sois===2901###eois===2908###lif===35###soif===1280###eoif===1287###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");high--;
            } else {AKA_mark("lis===88###sois===2929###eois===3080###lif===36###soif===1308###eoif===1459###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");
                //skip the duplication
                int AKA_BLOCK_LOOP_2988 = 0;
    while(AKA_mark("lis===90###sois===2994###eois===3033###lif===38###soif===1373###eoif===1412###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && ((AKA_mark("lis===90###sois===2994###eois===3005###lif===38###soif===1373###eoif===1384###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (low < n - 1)) && (AKA_mark("lis===90###sois===3009###eois===3033###lif===38###soif===1388###eoif===1412###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)") && (num[low] == num[low + 1])))) {
AKA_mark("lis===90###sois===3035###eois===3041###lif===38###soif===1414###eoif===1420###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");low++;
}

                AKA_mark("lis===91###sois===3059###eois===3065###lif===39###soif===1438###eoif===1444###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");low++;
            }
}
 
        }
    }
    AKA_mark("lis===95###sois===3105###eois===3119###lif===43###soif===1484###eoif===1498###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum(vector<int>&)");return result;
}

//using combination method could meet <<Time Limit Exceeded>> error
vector<vector<int> > combination(vector<int> &v, int k);
bool isSumZero(vector<int>& v);
int sum(vector<int>& v);

/** Instrumented function threeSum2(vector<int>&) */
vector<vector<int> > threeSum2(vector<int> &num) /* << Aka begin of function vector<vector<int>> threeSum2(vector<int> &num) >> */
{AKA_mark("Calling: .\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");AKA_fCall++;AKA_mark("lis===103###sois===3363###eois===3603###lif===0###soif===49###eoif===289###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");
    AKA_mark("lis===104###sois===3370###eois===3399###lif===1###soif===56###eoif===85###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");vector< vector<int> > result;
    AKA_mark("lis===105###sois===3405###eois===3451###lif===2###soif===91###eoif===137###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");vector< vector<int> > r = combination(num, 3);
    int AKA_BLOCK_LOOP_3457 = 0;
    AKA_mark("lis===106###sois===3462###eois===3472###lif===3###soif===148###eoif===158###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");
for (int i = 0; AKA_mark("lis===106###sois===3473###eois===3485###lif===3###soif===159###eoif===171###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)") && (AKA_mark("lis===106###sois===3473###eois===3485###lif===3###soif===159###eoif===171###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)") && (i < r.size())); ({AKA_mark("lis===106###sois===3487###eois===3490###lif===3###soif===173###eoif===176###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_3457++;
        if (AKA_BLOCK_LOOP_3457 > 1000) {
            //break;
        }AKA_mark("lis===106###sois===3492###eois===3580###lif===3###soif===178###eoif===266###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");
        if (AKA_mark("lis===107###sois===3507###eois===3522###lif===4###soif===193###eoif===208###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)") && (AKA_mark("lis===107###sois===3507###eois===3522###lif===4###soif===193###eoif===208###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)") && (isSumZero(r[i])))) {AKA_mark("lis===107###sois===3524###eois===3573###lif===4###soif===210###eoif===259###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");
            AKA_mark("lis===108###sois===3539###eois===3562###lif===5###soif===225###eoif===248###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");result.push_back(r[i]);
        }
else {
AKA_mark("lis===-107-###sois===-3507-###eois===-350715-###lif===-4-###soif===-###eoif===-208-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");
}
    }
    AKA_mark("lis===111###sois===3586###eois===3600###lif===8###soif===272###eoif===286###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\threeSum2(vector<int>&)");return result;
}

/** Instrumented function isSumZero(vector<int>&) */
bool isSumZero(vector < int>& v) /* << Aka begin of function bool isSumZero(vector < int>& v) >> */
{AKA_mark("Calling: .\\cpp\\3Sum\\3Sum.cpp\\isSumZero(vector<int>&)");AKA_fCall++;AKA_mark("lis===114###sois===3640###eois===3669###lif===0###soif===33###eoif===62###function===.\\cpp\\3Sum\\3Sum.cpp\\isSumZero(vector<int>&)");
    AKA_mark("lis===115###sois===3647###eois===3666###lif===1###soif===40###eoif===59###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\isSumZero(vector<int>&)");return sum(v) == 0;
}

/** Instrumented function sum(vector<int>&) */
int sum(vector<int>& v) /* << Aka begin of function int sum(vector<int>& v) >> */
{AKA_mark("Calling: .\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");AKA_fCall++;AKA_mark("lis===118###sois===3697###eois===3800###lif===0###soif===24###eoif===127###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");
    AKA_mark("lis===119###sois===3704###eois===3714###lif===1###soif===31###eoif===41###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");int s = 0;
    int AKA_BLOCK_LOOP_3720 = 0;
    AKA_mark("lis===120###sois===3724###eois===3734###lif===2###soif===51###eoif===61###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");
for(int i = 0; AKA_mark("lis===120###sois===3735###eois===3747###lif===2###soif===62###eoif===74###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)") && (AKA_mark("lis===120###sois===3735###eois===3747###lif===2###soif===62###eoif===74###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)") && (i < v.size())); ({AKA_mark("lis===120###sois===3749###eois===3752###lif===2###soif===76###eoif===79###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_3720++;
        if (AKA_BLOCK_LOOP_3720 > 1000) {
            //break;
        }AKA_mark("lis===120###sois===3754###eois===3782###lif===2###soif===81###eoif===109###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");
        AKA_mark("lis===121###sois===3765###eois===3775###lif===3###soif===92###eoif===102###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");s += v[i];
    }
    AKA_mark("lis===123###sois===3788###eois===3797###lif===5###soif===115###eoif===124###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\sum(vector<int>&)");return s;
}

/** Instrumented function combination(vector<int>&,int) */
vector<vector<int> > combination(vector<int> &v, int k) /* << Aka begin of function vector<vector<int>> combination(vector<int> &v, int k) >> */
{AKA_mark("Calling: .\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");AKA_fCall++;AKA_mark("lis===126###sois===3860###eois===5063###lif===0###soif===56###eoif===1259###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");

    AKA_mark("lis===128###sois===3869###eois===3897###lif===2###soif===65###eoif===93###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");vector<vector<int> > result;
    AKA_mark("lis===129###sois===3903###eois===3917###lif===3###soif===99###eoif===113###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");vector<int> d;
    AKA_mark("lis===130###sois===3923###eois===3940###lif===4###soif===119###eoif===136###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");int n = v.size();
    int AKA_BLOCK_LOOP_3946 = 0;
    AKA_mark("lis===131###sois===3951###eois===3961###lif===5###soif===147###eoif===157###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===131###sois===3962###eois===3967###lif===5###soif===158###eoif===163###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===131###sois===3962###eois===3967###lif===5###soif===158###eoif===163###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (i < n)); ({AKA_mark("lis===131###sois===3969###eois===3972###lif===5###soif===165###eoif===168###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_3946++;
        if (AKA_BLOCK_LOOP_3946 > 1000) {
            //break;
        }AKA_mark("lis===131###sois===3974###eois===4023###lif===5###soif===170###eoif===219###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
        AKA_mark("lis===132###sois===3985###eois===4016###lif===6###soif===181###eoif===212###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");d.push_back( (i < k) ? 1 : 0 );
    }

    //1) from the left, find the [1,0] pattern, change it to [0,1]
    //2) move all of the 1 before the pattern to the most left side
    //3) check all of 1 move to the right
    int AKA_BLOCK_LOOP_4211 = 0;
    while(AKA_mark("lis===138###sois===4217###eois===4218###lif===12###soif===413###eoif===414###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===138###sois===4217###eois===4218###lif===12###soif===413###eoif===414###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (1))) {
        AKA_BLOCK_LOOP_4211++;
        if (AKA_BLOCK_LOOP_4211 > 1000) {
            //break;
        }AKA_mark("lis===138###sois===4220###eois===5040###lif===12###soif===416###eoif===1236###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
        AKA_mark("lis===139###sois===4231###eois===4247###lif===13###soif===427###eoif===443###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");vector<int> tmp;
        int AKA_BLOCK_LOOP_4257 = 0;
    AKA_mark("lis===140###sois===4261###eois===4271###lif===14###soif===457###eoif===467###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
for(int x = 0; AKA_mark("lis===140###sois===4272###eois===4277###lif===14###soif===468###eoif===473###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===140###sois===4272###eois===4277###lif===14###soif===468###eoif===473###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (x < n)); ({AKA_mark("lis===140###sois===4279###eois===4282###lif===14###soif===475###eoif===478###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");x++;})) {
        AKA_BLOCK_LOOP_4257++;
        if (AKA_BLOCK_LOOP_4257 > 1000) {
            //break;
        }AKA_mark("lis===140###sois===4284###eois===4340###lif===14###soif===480###eoif===536###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
            if (AKA_mark("lis===141###sois===4303###eois===4307###lif===15###soif===499###eoif===503###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===141###sois===4303###eois===4307###lif===15###soif===499###eoif===503###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (d[x]))) {
AKA_mark("lis===141###sois===4309###eois===4329###lif===15###soif===505###eoif===525###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");tmp.push_back(v[x]);
}

else {
AKA_mark("lis===-141-###sois===-4303-###eois===-43034-###lif===-15-###soif===-###eoif===-503-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
}
        }
        AKA_mark("lis===143###sois===4350###eois===4379###lif===17###soif===546###eoif===575###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");sort(tmp.begin(), tmp.end());
        AKA_mark("lis===144###sois===4389###eois===4411###lif===18###soif===585###eoif===607###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");result.push_back(tmp);
        //step 1), find [1,0] pattern
        AKA_mark("lis===146###sois===4460###eois===4466###lif===20###soif===656###eoif===662###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");int i;
        AKA_mark("lis===147###sois===4476###eois===4495###lif===21###soif===672###eoif===691###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");bool found = false;
        AKA_mark("lis===148###sois===4505###eois===4518###lif===22###soif===701###eoif===714###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");int ones = 0;
        int AKA_BLOCK_LOOP_4528 = 0;
    AKA_mark("lis===149###sois===4532###eois===4538###lif===23###soif===728###eoif===734###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
for(i = 0; AKA_mark("lis===149###sois===4539###eois===4548###lif===23###soif===735###eoif===744###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===149###sois===4539###eois===4548###lif===23###soif===735###eoif===744###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (i < n - 1)); ({AKA_mark("lis===149###sois===4550###eois===4553###lif===23###soif===746###eoif===749###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_4528++;
        if (AKA_BLOCK_LOOP_4528 > 1000) {
            //break;
        }AKA_mark("lis===149###sois===4555###eois===4977###lif===23###soif===751###eoif===1173###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");

            if (AKA_mark("lis===151###sois===4576###eois===4602###lif===25###soif===772###eoif===798###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && ((AKA_mark("lis===151###sois===4576###eois===4585###lif===25###soif===772###eoif===781###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (d[i] == 1)) && (AKA_mark("lis===151###sois===4589###eois===4602###lif===25###soif===785###eoif===798###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (d[i + 1] == 0)))) {AKA_mark("lis===151###sois===4604###eois===4930###lif===25###soif===800###eoif===1126###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
                AKA_mark("lis===152###sois===4623###eois===4632###lif===26###soif===819###eoif===828###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");d[i] = 0; AKA_mark("lis===152###sois===4633###eois===4646###lif===26###soif===829###eoif===842###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");d[i + 1] = 1;
                AKA_mark("lis===153###sois===4664###eois===4677###lif===27###soif===860###eoif===873###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");found = true;
                //step 2) move all of right 1 to the most left side
                int AKA_BLOCK_LOOP_4764 = 0;
    AKA_mark("lis===155###sois===4769###eois===4779###lif===29###soif===965###eoif===975###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
for (int j = 0; AKA_mark("lis===155###sois===4780###eois===4785###lif===29###soif===976###eoif===981###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===155###sois===4780###eois===4785###lif===29###soif===976###eoif===981###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (j < i)); ({AKA_mark("lis===155###sois===4787###eois===4790###lif===29###soif===983###eoif===986###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");j++;})) {
        AKA_BLOCK_LOOP_4764++;
        if (AKA_BLOCK_LOOP_4764 > 1000) {
            //break;
        }AKA_mark("lis===155###sois===4792###eois===4891###lif===29###soif===988###eoif===1087###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
                    AKA_mark("lis===156###sois===4815###eois===4843###lif===30###soif===1011###eoif===1039###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");d[j] = ( ones > 0 ) ? 1 : 0;
                    AKA_mark("lis===157###sois===4865###eois===4872###lif===31###soif===1061###eoif===1068###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");ones--;
                }
                AKA_mark("lis===159###sois===4909###eois===4915###lif===33###soif===1105###eoif===1111###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");break;
            }
else {
AKA_mark("lis===-151-###sois===-4576-###eois===-457626-###lif===-25-###soif===-###eoif===-798-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
}
            if (AKA_mark("lis===161###sois===4948###eois===4957###lif===35###soif===1144###eoif===1153###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===161###sois===4948###eois===4957###lif===35###soif===1144###eoif===1153###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (d[i] == 1))) {
AKA_mark("lis===161###sois===4959###eois===4966###lif===35###soif===1155###eoif===1162###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");ones++;
}

else {
AKA_mark("lis===-161-###sois===-4948-###eois===-49489-###lif===-35-###soif===-###eoif===-1153-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
}
        }
        if (AKA_mark("lis===163###sois===4991###eois===4997###lif===37###soif===1187###eoif===1193###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (AKA_mark("lis===163###sois===4991###eois===4997###lif===37###soif===1187###eoif===1193###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)") && (!found))) {AKA_mark("lis===163###sois===4999###eois===5031###lif===37###soif===1195###eoif===1227###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
            AKA_mark("lis===164###sois===5014###eois===5020###lif===38###soif===1210###eoif===1216###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");break;
        }
else {
AKA_mark("lis===-163-###sois===-4991-###eois===-49916-###lif===-37-###soif===-###eoif===-1193-###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");
}

    }
    AKA_mark("lis===168###sois===5046###eois===5060###lif===42###soif===1242###eoif===1256###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\combination(vector<int>&,int)");return result;
}


/** Instrumented function printMatrix(vector<vector<int>>&) */
void printMatrix(vector<vector<int> > &matrix)
/* << Aka begin of function void printMatrix(vector<vector<int> > &matrix) >> */
{AKA_mark("Calling: .\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");AKA_fCall++;AKA_mark("lis===173###sois===5117###eois===5347###lif===1###soif===48###eoif===278###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");
    int AKA_BLOCK_LOOP_5124 = 0;
    AKA_mark("lis===174###sois===5128###eois===5138###lif===2###soif===59###eoif===69###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");
for(int i = 0; AKA_mark("lis===174###sois===5139###eois===5156###lif===2###soif===70###eoif===87###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)") && (AKA_mark("lis===174###sois===5139###eois===5156###lif===2###soif===70###eoif===87###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)") && (i < matrix.size())); ({AKA_mark("lis===174###sois===5158###eois===5161###lif===2###soif===89###eoif===92###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");i++;})) {
        AKA_BLOCK_LOOP_5124++;
        if (AKA_BLOCK_LOOP_5124 > 1000) {
            //break;
        }AKA_mark("lis===174###sois===5163###eois===5325###lif===2###soif===94###eoif===256###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");
        AKA_mark("lis===175###sois===5174###eois===5186###lif===3###soif===105###eoif===117###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");printf("{");
        int AKA_BLOCK_LOOP_5196 = 0;
    AKA_mark("lis===176###sois===5200###eois===5210###lif===4###soif===131###eoif===141###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");
for(int j = 0; AKA_mark("lis===176###sois===5211###eois===5231###lif===4###soif===142###eoif===162###ifc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)") && (AKA_mark("lis===176###sois===5211###eois===5231###lif===4###soif===142###eoif===162###isc===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)") && (j < matrix[i].size())); ({AKA_mark("lis===176###sois===5233###eois===5236###lif===4###soif===164###eoif===167###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");j++;})) {
        AKA_BLOCK_LOOP_5196++;
        if (AKA_BLOCK_LOOP_5196 > 1000) {
            //break;
        }AKA_mark("lis===176###sois===5238###eois===5294###lif===4###soif===169###eoif===225###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");
            AKA_mark("lis===177###sois===5253###eois===5283###lif===5###soif===184###eoif===214###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");printf("%3d ", matrix[i][j]) ;
        }
        AKA_mark("lis===179###sois===5304###eois===5318###lif===7###soif===235###eoif===249###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");printf("}\n");
    }
    AKA_mark("lis===181###sois===5331###eois===5344###lif===9###soif===262###eoif===275###ins===true###function===.\\cpp\\3Sum\\3Sum.cpp\\printMatrix(vector<vector<int>>&)");cout << endl;
}


// int main()
// {
//     //int a[] = { -1, 0, 1, 2, -1, 1, -4 };
//     int a[] = { -1, 1, 1, 1, -1, -1, 0,0,0 };
//     vector<int> n(a, a + sizeof(a)/sizeof(int));
//     vector< vector<int> > result = threeSum(n);
//     printMatrix(result);    
//     return 0;
// }

#endif

