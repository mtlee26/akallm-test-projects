/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__LAB_TEST_CPP_LEETCODE_PRJ_DATA_HAOEL_LEETCODE_ALGORITHMS_CPP_ACCOUNTSMERGE_ACCOUNTSMERGE_CPP
#define AKA_SRC_D__LAB_TEST_CPP_LEETCODE_PRJ_DATA_HAOEL_LEETCODE_ALGORITHMS_CPP_ACCOUNTSMERGE_ACCOUNTSMERGE_CPP
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
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Source : https://leetcode.com/problems/accounts-merge/
// Author : Hao Chen
// Date   : 2019-03-29

/***************************************************************************************************** 
 *
 * Given a list accounts, each element accounts[i] is a list of strings, where the first element 
 * accounts[i][0] is a name, and the rest of the elements are emails representing emails of the 
 * account.
 * 
 * Now, we would like to merge these accounts.  Two accounts definitely belong to the same person if 
 * there is some email that is common to both accounts.  Note that even if two accounts have the same 
 * name, they may belong to different people as people could have the same name.  A person can have 
 * any number of accounts initially, but all of their accounts definitely have the same name.
 * 
 * After merging the accounts, return the accounts in the following format: the first element of each 
 * account is the name, and the rest of the elements are emails in sorted order.  The accounts 
 * themselves can be returned in any order.
 * 
 * Example 1:
 * 
 * Input: 
 * accounts = [["John", "johnsmith@mail.com", "john00@mail.com"], ["John", "johnnybravo@mail.com"], 
 * ["John", "johnsmith@mail.com", "john_newyork@mail.com"], ["Mary", "mary@mail.com"]]
 * Output: [["John", 'john00@mail.com', 'john_newyork@mail.com', 'johnsmith@mail.com'],  ["John", 
 * "johnnybravo@mail.com"], ["Mary", "mary@mail.com"]]
 * 
 * Explanation: 
 * The first and third John's are the same person as they have the common email "johnsmith@mail.com".
 * The second John and Mary are different people as none of their email addresses are used by other 
 * accounts.
 *
 * We could return these lists in any order, for example the answer [['Mary', 'mary@mail.com'], 
 * ['John', 'johnnybravo@mail.com'], 
 * ['John', 'john00@mail.com', 'john_newyork@mail.com', 'johnsmith@mail.com']] would still be accepted.
 * 
 * Note:
 * The length of accounts will be in the range [1, 1000].
 * The length of accounts[i] will be in the range [1, 10].
 * The length of accounts[i][j] will be in the range [1, 30].
 ******************************************************************************************************/


//Bad Performance Solution
class Solution_Time_Limit_Exceeded {
public:
public:
    // We can orginze all relevant emails to a chain,
    // then we can use Union Find algorithm
    // Besides, we also need to map the relationship between name and email.
    /** Instrumented function accountsMerge(vector<vector<string>>&) */
vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) /* << Aka begin of function vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) >> */
{AKA_mark("Calling: .\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");AKA_fCall++;AKA_mark("lis===60###sois===2781###eois===3997###lif===0###soif===71###eoif===1287###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
        AKA_mark("lis===61###sois===2792###eois===2836###lif===1###soif===82###eoif===126###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");unordered_map<string, string> emails_chains; // email chains
        AKA_mark("lis===62###sois===2862###eois===2898###lif===2###soif===152###eoif===188###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");unordered_map<string, string> names; // names to email chains' head

        //initialization
        int AKA_BLOCK_LOOP_2967 = 0;
    AKA_mark("lis===65###sois===2971###eois===2982###lif===5###soif===261###eoif===272###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
for(int i = 0 ; AKA_mark("lis===65###sois===2983###eois===3000###lif===5###soif===273###eoif===290###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===65###sois===2983###eois===3000###lif===5###soif===273###eoif===290###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)") && (i<accounts.size()));({AKA_mark("lis===65###sois===3001###eois===3004###lif===5###soif===291###eoif===294###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");i++;})) {
        AKA_BLOCK_LOOP_2967++;
        if (AKA_BLOCK_LOOP_2967 > 1000) {
            //break;
        }AKA_mark("lis===65###sois===3006###eois===3436###lif===5###soif===296###eoif===726###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
            AKA_mark("lis===66###sois===3021###eois===3049###lif===6###soif===311###eoif===339###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");auto& account = accounts[i];
            AKA_mark("lis===67###sois===3063###eois===3087###lif===7###soif===353###eoif===377###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");auto& name = account[0];
            int AKA_BLOCK_LOOP_3101 = 0;
    AKA_mark("lis===68###sois===3106###eois===3114###lif===8###soif===396###eoif===404###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
for (int j=1; AKA_mark("lis===68###sois===3115###eois===3131###lif===8###soif===405###eoif===421###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===68###sois===3115###eois===3131###lif===8###soif===405###eoif===421###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)") && (j<account.size())); ({AKA_mark("lis===68###sois===3133###eois===3136###lif===8###soif===423###eoif===426###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");j++;})) {
        AKA_BLOCK_LOOP_3101++;
        if (AKA_BLOCK_LOOP_3101 > 1000) {
            //break;
        }AKA_mark("lis===68###sois===3138###eois===3425###lif===8###soif===428###eoif===715###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
                AKA_mark("lis===69###sois===3157###eois===3182###lif===9###soif===447###eoif===472###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");auto& email = account[j];
                if ( AKA_mark("lis===70###sois===3205###eois===3237###lif===10###soif===495###eoif===527###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===70###sois===3205###eois===3237###lif===10###soif===495###eoif===527###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)") && (names.find(email) == names.end())) ) {AKA_mark("lis===70###sois===3240###eois===3353###lif===10###soif===530###eoif===643###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
                    AKA_mark("lis===71###sois===3263###eois===3292###lif===11###soif===553###eoif===582###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");emails_chains[email] = email;
                    AKA_mark("lis===72###sois===3314###eois===3334###lif===12###soif===604###eoif===624###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");names[email] = name;
                }
else {
AKA_mark("lis===-70-###sois===-3205-###eois===-320532-###lif===-10-###soif===-###eoif===-527-###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
}
                AKA_mark("lis===74###sois===3371###eois===3410###lif===14###soif===661###eoif===700###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");join(emails_chains, account[1], email);
            }
        }

        //reform the emails
        AKA_mark("lis===79###sois===3477###eois===3516###lif===19###soif===767###eoif===806###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");unordered_map<string, set<string>> res;
        for( auto& acc : accounts ) {
AKA_mark("lis===80###sois===3531###eois===3540###lif===20###soif===821###eoif===830###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
{AKA_mark("lis===80###sois===3554###eois===3673###lif===20###soif===844###eoif===963###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
            AKA_mark("lis===81###sois===3569###eois===3608###lif===21###soif===859###eoif===898###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");string e = find(emails_chains, acc[1]);
            AKA_mark("lis===82###sois===3622###eois===3662###lif===22###soif===912###eoif===952###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");res[e].insert(acc.begin()+1, acc.end());
        }}
AKA_mark("lis===80###sois===3531###eois===3540###lif===20###soif===821###eoif===830###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");


        //output the result
        AKA_mark("lis===86###sois===3714###eois===3744###lif===26###soif===1004###eoif===1034###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");vector<vector<string>> result;
        for (auto pair : res) {
AKA_mark("lis===87###sois===3759###eois===3768###lif===27###soif===1049###eoif===1058###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
{AKA_mark("lis===87###sois===3776###eois===3966###lif===27###soif===1066###eoif===1256###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");
            AKA_mark("lis===88###sois===3791###eois===3853###lif===28###soif===1081###eoif===1143###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");vector<string> emails(pair.second.begin(), pair.second.end());
            AKA_mark("lis===89###sois===3867###eois===3916###lif===29###soif===1157###eoif===1206###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");emails.insert(emails.begin(), names[pair.first]);
            AKA_mark("lis===90###sois===3930###eois===3955###lif===30###soif===1220###eoif===1245###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");result.push_back(emails);
        }}
AKA_mark("lis===87###sois===3759###eois===3768###lif===27###soif===1049###eoif===1058###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");

        AKA_mark("lis===92###sois===3976###eois===3990###lif===32###soif===1266###eoif===1280###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\accountsMerge(vector<vector<string>>&)");return result;
    }

    /** Instrumented function find(unordered_map<string,string>&,string) */
string find(unordered_map<string, string>& emails_chains,
                string email) /* << Aka begin of function string find(unordered_map<string, string>& emails_chains,
                string email) >> */
{AKA_mark("Calling: .\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)");AKA_fCall++;AKA_mark("lis===96###sois===4094###eois===4228###lif===1###soif===89###eoif===223###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)");
        int AKA_BLOCK_LOOP_4105 = 0;
    while( AKA_mark("lis===97###sois===4112###eois===4141###lif===2###soif===107###eoif===136###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)") && (AKA_mark("lis===97###sois===4112###eois===4141###lif===2###soif===107###eoif===136###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)") && (email != emails_chains[email])) ){
        AKA_BLOCK_LOOP_4105++;
        if (AKA_BLOCK_LOOP_4105 > 1000) {
            //break;
        }AKA_mark("lis===97###sois===4143###eois===4198###lif===2###soif===138###eoif===193###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)");
            AKA_mark("lis===98###sois===4158###eois===4187###lif===3###soif===153###eoif===182###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)");email = emails_chains[email];
        }
        AKA_mark("lis===100###sois===4208###eois===4221###lif===5###soif===203###eoif===216###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\find(unordered_map<string,string>&,string)");return email;
    }

    /** Instrumented function join(unordered_map<string,string>&,string&,string&) */
bool join(unordered_map<string, string>& emails_chains,
              string& email1, string& email2) /* << Aka begin of function bool join(unordered_map<string, string>& emails_chains,
              string& email1, string& email2) >> */
{AKA_mark("Calling: .\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");AKA_fCall++;AKA_mark("lis===104###sois===4339###eois===4527###lif===1###soif===103###eoif===291###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");
        AKA_mark("lis===105###sois===4350###eois===4390###lif===2###soif===114###eoif===154###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");string e1 = find(emails_chains, email1);
        AKA_mark("lis===106###sois===4400###eois===4440###lif===3###soif===164###eoif===204###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");string e2 = find(emails_chains, email2);
        if ( AKA_mark("lis===107###sois===4455###eois===4463###lif===4###soif===219###eoif===227###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)") && (AKA_mark("lis===107###sois===4455###eois===4463###lif===4###soif===219###eoif===227###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)") && (e1 != e2)) )  {
AKA_mark("lis===107###sois===4467###eois===4494###lif===4###soif===231###eoif===258###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");emails_chains[e1] = email2;
}

else {
AKA_mark("lis===-107-###sois===-4455-###eois===-44558-###lif===-4-###soif===-###eoif===-227-###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");
}
        AKA_mark("lis===108###sois===4504###eois===4520###lif===5###soif===268###eoif===284###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution_Time_Limit_Exceeded\\join(unordered_map<string,string>&,string&,string&)");return e1 == e2;
    }
};

//
// Performance Tunning
// -----------------
//
// The above algorithm need to do string comparison, it causes lots of efforts
// So, we allocated the ID for each email, and compare the ID would save the time.
//
// Furthermore, we can use the Group-Email-ID instead of email ID,
// this would save more time.
//
class Solution {
public:
public:
    // We can orginze all relevant emails to a chain,
    // then we can use Union Find algorithm
    // Besides, we also need to map the relationship between name and email.
    /** Instrumented function accountsMerge(vector<vector<string>>&) */
vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) /* << Aka begin of function vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) >> */
{AKA_mark("Calling: .\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");AKA_fCall++;AKA_mark("lis===127###sois===5140###eois===6631###lif===0###soif===71###eoif===1562###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
        AKA_mark("lis===128###sois===5151###eois===5188###lif===1###soif===82###eoif===119###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");unordered_map<string, int> emails_id; //using email ID for union find
        AKA_mark("lis===129###sois===5230###eois===5268###lif===2###soif===161###eoif===199###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");unordered_map<int, int> emails_chains; // email chains
        AKA_mark("lis===130###sois===5294###eois===5327###lif===3###soif===225###eoif===258###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");unordered_map<int, string> names; // email id & name

        //initialization & join
        int AKA_BLOCK_LOOP_5391 = 0;
    AKA_mark("lis===133###sois===5395###eois===5406###lif===6###soif===326###eoif===337###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
for(int i = 0 ; AKA_mark("lis===133###sois===5407###eois===5424###lif===6###soif===338###eoif===355###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===133###sois===5407###eois===5424###lif===6###soif===338###eoif===355###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (i<accounts.size()));({AKA_mark("lis===133###sois===5425###eois===5428###lif===6###soif===356###eoif===359###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");i++;})) {
        AKA_BLOCK_LOOP_5391++;
        if (AKA_BLOCK_LOOP_5391 > 1000) {
            //break;
        }AKA_mark("lis===133###sois===5430###eois===6048###lif===6###soif===361###eoif===979###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");

            // using the account index as the emails group ID,
            // this could simplify the emails chain.
            AKA_mark("lis===137###sois===5565###eois===5586###lif===10###soif===496###eoif===517###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");emails_chains[i] = i;

            AKA_mark("lis===139###sois===5602###eois===5630###lif===12###soif===533###eoif===561###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");auto& account = accounts[i];
            AKA_mark("lis===140###sois===5644###eois===5668###lif===13###soif===575###eoif===599###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");auto& name = account[0];
            int AKA_BLOCK_LOOP_5682 = 0;
    AKA_mark("lis===141###sois===5687###eois===5695###lif===14###soif===618###eoif===626###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
for (int j=1; AKA_mark("lis===141###sois===5696###eois===5712###lif===14###soif===627###eoif===643###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===141###sois===5696###eois===5712###lif===14###soif===627###eoif===643###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (j<account.size())); ({AKA_mark("lis===141###sois===5714###eois===5717###lif===14###soif===645###eoif===648###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");j++;})) {
        AKA_BLOCK_LOOP_5682++;
        if (AKA_BLOCK_LOOP_5682 > 1000) {
            //break;
        }AKA_mark("lis===141###sois===5719###eois===6037###lif===14###soif===650###eoif===968###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
                AKA_mark("lis===142###sois===5738###eois===5763###lif===15###soif===669###eoif===694###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");auto& email = account[j];
                if ( AKA_mark("lis===143###sois===5786###eois===5826###lif===16###soif===717###eoif===757###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===143###sois===5786###eois===5826###lif===16###soif===717###eoif===757###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (emails_id.find(email) == emails_id.end())) ) {AKA_mark("lis===143###sois===5829###eois===5930###lif===16###soif===760###eoif===861###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
                    AKA_mark("lis===144###sois===5852###eois===5873###lif===17###soif===783###eoif===804###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");emails_id[email] = i;
                    AKA_mark("lis===145###sois===5895###eois===5911###lif===18###soif===826###eoif===842###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");names[i] = name;
                }else {AKA_mark("lis===146###sois===5935###eois===6020###lif===19###soif===866###eoif===951###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
                    AKA_mark("lis===147###sois===5958###eois===6001###lif===20###soif===889###eoif===932###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");join( emails_chains, i, emails_id[email] );
                }

            }
        }

        //reform the emails
        AKA_mark("lis===154###sois===6089###eois===6125###lif===27###soif===1020###eoif===1056###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");unordered_map<int, set<string>> res;
        int AKA_BLOCK_LOOP_6135 = 0;
    AKA_mark("lis===155###sois===6139###eois===6147###lif===28###soif===1070###eoif===1078###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
for(int i=0; AKA_mark("lis===155###sois===6148###eois===6165###lif===28###soif===1079###eoif===1096###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (AKA_mark("lis===155###sois===6148###eois===6165###lif===28###soif===1079###eoif===1096###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)") && (i<accounts.size())); ({AKA_mark("lis===155###sois===6167###eois===6170###lif===28###soif===1098###eoif===1101###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");i++;})) {
        AKA_BLOCK_LOOP_6135++;
        if (AKA_BLOCK_LOOP_6135 > 1000) {
            //break;
        }AKA_mark("lis===155###sois===6172###eois===6303###lif===28###soif===1103###eoif===1234###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
            AKA_mark("lis===156###sois===6187###eois===6220###lif===29###soif===1118###eoif===1151###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");int idx = find(emails_chains, i);
            AKA_mark("lis===157###sois===6234###eois===6292###lif===30###soif===1165###eoif===1223###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");res[idx].insert(accounts[i].begin()+1, accounts[i].end());
        }


        //output the result
        AKA_mark("lis===162###sois===6346###eois===6376###lif===35###soif===1277###eoif===1307###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");vector<vector<string>> result;
        for (auto pair : res) {
AKA_mark("lis===163###sois===6391###eois===6400###lif===36###soif===1322###eoif===1331###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
{AKA_mark("lis===163###sois===6408###eois===6600###lif===36###soif===1339###eoif===1531###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");
            AKA_mark("lis===164###sois===6423###eois===6487###lif===37###soif===1354###eoif===1418###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");vector<string> emails( pair.second.begin(), pair.second.end() );
            AKA_mark("lis===165###sois===6501###eois===6550###lif===38###soif===1432###eoif===1481###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");emails.insert(emails.begin(), names[pair.first]);
            AKA_mark("lis===166###sois===6564###eois===6589###lif===39###soif===1495###eoif===1520###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");result.push_back(emails);
        }}
AKA_mark("lis===163###sois===6391###eois===6400###lif===36###soif===1322###eoif===1331###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");

        AKA_mark("lis===168###sois===6610###eois===6624###lif===41###soif===1541###eoif===1555###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\accountsMerge(vector<vector<string>>&)");return result;
    }

    /** Instrumented function find(unordered_map<int,int>&,int) */
int find(unordered_map<int, int>& emails_chains, int id) /* << Aka begin of function int find(unordered_map<int, int>& emails_chains, int id) >> */
{AKA_mark("Calling: .\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)");AKA_fCall++;AKA_mark("lis===171###sois===6696###eois===6815###lif===0###soif===57###eoif===176###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)");
        int AKA_BLOCK_LOOP_6707 = 0;
    while( AKA_mark("lis===172###sois===6714###eois===6737###lif===1###soif===75###eoif===98###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)") && (AKA_mark("lis===172###sois===6714###eois===6737###lif===1###soif===75###eoif===98###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)") && (id != emails_chains[id])) ){
        AKA_BLOCK_LOOP_6707++;
        if (AKA_BLOCK_LOOP_6707 > 1000) {
            //break;
        }AKA_mark("lis===172###sois===6739###eois===6788###lif===1###soif===100###eoif===149###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)");
            AKA_mark("lis===173###sois===6754###eois===6777###lif===2###soif===115###eoif===138###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)");id = emails_chains[id];
        }
        AKA_mark("lis===175###sois===6798###eois===6808###lif===4###soif===159###eoif===169###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\find(unordered_map<int,int>&,int)");return id;
    }

    /** Instrumented function join(unordered_map<int,int>&,int,int) */
bool join(unordered_map<int, int>& emails_chains, int id1, int id2) /* << Aka begin of function bool join(unordered_map<int, int>& emails_chains, int id1, int id2) >> */
{AKA_mark("Calling: .\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");AKA_fCall++;AKA_mark("lis===178###sois===6891###eois===7063###lif===0###soif===68###eoif===240###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");
        AKA_mark("lis===179###sois===6902###eois===6936###lif===1###soif===79###eoif===113###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");int e1 = find(emails_chains, id1);
        AKA_mark("lis===180###sois===6946###eois===6980###lif===2###soif===123###eoif===157###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");int e2 = find(emails_chains, id2);
        if ( AKA_mark("lis===181###sois===6995###eois===7003###lif===3###soif===172###eoif===180###ifc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)") && (AKA_mark("lis===181###sois===6995###eois===7003###lif===3###soif===172###eoif===180###isc===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)") && (e1 != e2)) )  {
AKA_mark("lis===181###sois===7007###eois===7030###lif===3###soif===184###eoif===207###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");emails_chains[e1] = e2;
}

else {
AKA_mark("lis===-181-###sois===-6995-###eois===-69958-###lif===-3-###soif===-###eoif===-180-###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");
}
        AKA_mark("lis===182###sois===7040###eois===7056###lif===4###soif===217###eoif===233###ins===true###function===.\\cpp\\accountsMerge\\AccountsMerge.cpp\\Solution\\join(unordered_map<int,int>&,int,int)");return e1 == e2;
    }
};

#endif

