#include<iostream>
#include<string.h> 

using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];

        bool isTerminal;
    
    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26;i++){
            children[i] = NULL;
        }
           isTerminal = false;
    }

};

class Trie{
    public:
        TrieNode* root;

        Trie(){
            root =  new TrieNode('\0');
        }

    void insertUtil(TrieNode*  root, string word){
    // BASE CASE
    if(word.length() == 0){
        root->isTerminal = true;
        return;   
    }

    // ASSUME THAT THE WORD WILL BE IN CAPITAL
    int index = word[0] - 'A';
    TrieNode* child;

    // IF THE REQUIRED WORD IS PRESENT
    if(root->children[index] != NULL)
    {   
        child = root->children[index];
    }
    // IF THE REQUIRED WORD IS NOT PRESENT
    else{
        // CREATE A CHILD NODE
        child = new TrieNode(word[0]);
        root->children[index] = child;
    }
    // RECURSIVELY CALL
     insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    // SEARCH OPERATION
    bool searchUtil(TrieNode* root, string word){
        // BASE CASE
        if(word.length() == 0){
            return root->isTerminal;
        } 

        // WORD WILL BE IN CAPITAL
        int index = word[0] - 'A';
        TrieNode* child;
        
        // IF SEARCHED ELEMENT IS FOUND
        if(root->children[index] != NULL)
        {
            child = root->children[index];
        } 
        else{
            // ABSENT 
            return false;
        }
        // RECURSIVELY CALL
       return  searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
       return searchUtil(root,word);
    }
};

int main(){

    cout<<"Good Morning";
   // string word = "abcd";
    
    Trie *t = new Trie();

    t->insertWord("abcd");
    t->insertWord("abcd");
    t->insertWord("abcd");

    cout<<"word is present or not"<<t->searchWord("abcd")<<endl;

    return 0;
}