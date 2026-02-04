//profit,loss calculating 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    protected: 
        float cp,sp,mp,D,profit,loss,profitPer,lossPer;

    public:
        Solution(){
            cout<<"Enter the Cost price of item and selling price of item respactivly : ";
            cin>>cp>>sp;
        }

        void profitPercent(void){
            if(sp>cp){
                profitPer = ((sp-cp)/cp)*100;
                cout<<"Your profit = "<<sp-cp<<endl;
                cout<<"Your profit percentage = "<<profitPer<<"%"<<endl;
            }else{
                lossPer = ((cp-sp)/cp)*100;
                cout<<"Your loss = "<<cp-sp<<endl;
                cout<<"Your loss percentage = "<<lossPer<<"%"<<endl;
            }
        }

        void setMp(void){
            cout<<"\nMarket price : ";
            cin>>mp;
        }

        void Discount(void){
            D = (mp - sp)/mp*100;
            cout<<"Your Discount Percentage = -"<<D<<"%"<<endl;     
        }


        void display(void){
            cout<<"Your cost price = "<<cp<<endl;
            cout<<"Your selling price = "<<sp<<endl;
        }

};


int main(){ 
    Solution T;
    T.profitPercent();
    T.setMp();
    T.Discount();
    return 0;
}