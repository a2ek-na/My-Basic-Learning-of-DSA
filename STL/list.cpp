#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> listt={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};

    /*-----------------------------------Platying with itertors;---------------------------------------------{
        list<int> ::iterator itr;
        list<int> ::iterator itr_last;
        list<int> ::reverse_iterator ritr;
        list<int> ::reverse_iterator ritr_last;
        itr=listt.begin();
        itr_last=listt.end();
        ritr=listt.rbegin();
        ritr_last=listt.rend();
        cout<<*itr++;
        cout<<"\t"<<*itr++;
        itr_last--;
        cout<<endl<<*itr_last--;
        cout<<"\t"<<*itr_last--;
        cout<<endl<<*ritr++;
        cout<<"\t"<<*ritr++;
        ritr_last--;
        cout<<endl<<*ritr_last--;
        cout<<"\t"<<*ritr_last--;
    }*/
    
    /*----------------------------------------Iteration-------------------------------------------------------{
        cout<<"From ''for each loop'': \n";
        for(auto num:listt)
            cout<<num<<" ";
        //using iterators
        cout<<"\n\nUsing ''Iterators'' : \n";
        for(auto itr=listt.begin(); itr!=listt.end(); itr++)
            cout<<*itr<<" ";
        cout<<"\n\nUsing ''Reverse Iterators'' : \n";
        for(auto itr=listt.rbegin(); itr!=listt.rend(); itr++)
            cout<<*itr<<" ";
    }*/
    
    /*-----------------------------------------Insertion------------------------------------------------------{
        list<int> ::iterator itr=listt.end();
        itr--;
        itr--;
        itr--;
        itr--;
        // listt.insert(itr,10,100);
        listt.insert(itr,listt.begin(),itr);
        for(auto num:listt)
            cout<<num<<" ";
    }*/

    /*-----------------------------------------Deletion-------------------------------------------------------{
        list<int> ::iterator itr=listt.end();
        listt.insert(itr,listt.begin(),itr);
        for(auto num:listt)
            cout<<num<<" ";

        auto itrr=listt.begin();
        advance(itr,13);
        // listt.erase(itr);  
        listt.erase(listt.begin(),itr);

        cout<<"\nAfter Deletion :\n";
        for(auto num:listt)
            cout<<num<<" ";  
        
    }*/
    
    
    return 0;
}