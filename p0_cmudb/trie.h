#include <iostream>
#include <memory>
#include <unordered_map>
class TrieNode;
template <class T> using SPT = std::shared_ptr<T>;
using Children = std::unordered_map<char, SPT<TrieNode>>;
class TrieNode {
public:
  TrieNode() = default;
  Children child;
};
template <class T> class TrieValueNode : TrieNode {
public:
  TrieValueNode() = delete;
};
