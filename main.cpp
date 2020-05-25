#include <iostream>
#include <vector>
#include <unordered_map>

class Solution;
void printVector(std::vector<unsigned int> &a);

class Solution
{
  public:
  std::vector<unsigned int> 
    anagramMappings(std::vector<unsigned int> &a, 
                    std::vector<unsigned int> &b)
  {
    std::vector<unsigned int> ans;
    std::unordered_map<unsigned int, unsigned int> m;
    for (int i = 0; i < b.size(); i++)
       m[b[i]] = i;
    for(int j = 0; j < a.size(); j++)
    {
      int num = a[j];
      ans.push_back(m[num]);
    }
    return ans;
  }
};

void printVector(std::vector<unsigned int> &vec)
{
    std::cout << "Vector is " << std::endl;

    for(int i =0; i < vec.size(); i++)
    {
      std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
  std::vector<unsigned int> aa;
  aa.push_back(12);
  aa.push_back(28);
  aa.push_back(46);
  aa.push_back(32);
  aa.push_back(50);

  
  std::vector<unsigned int> bb;;
  bb.push_back(50);
  bb.push_back(12);
  bb.push_back(32);
  bb.push_back(46);
  bb.push_back(28);

  Solution sol;
  std::vector<unsigned int> res = sol.anagramMappings(aa, bb);

   printVector(res);
}

