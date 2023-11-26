#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recmerge(vector<int>& prices, int l, int mid, int r){
        int i, j, k;
        int n1 = mid-l+1;
        int n2 = r-mid;

        int arrleft[n1];
        int arrright[n2];

        for(int i=0; i<n1; i++){
            arrleft[i] =  prices[l+i];
        }
        for(int j = 0; j<n2; j++){
            arrright[j] = prices[mid+1+j];
        }

        i = 0;
        j = 0;
        k = l;

        while(i<n1 && j<n2){
            if(arrleft[i]<=arrright[j]){
                prices[k] = arrleft[i];
                k++, i++;
            }else{
                prices[k] = arrright[j];
                k++, j++;
            }
        }

        while(i<n1){
            prices[k] = arrleft[i];
            k++, i++;
        }

        while(j<n2){
            prices[k] = arrright[j];
            k++, j++;
        }
    }

    void mergesort(vector<int>& prices, int l, int r){
        int mid;
        if(l<r){
            mid = (l+r)/2;
            mergesort(prices, l, mid);
            mergesort(prices, mid+1, r);

            recmerge(prices, l, mid, r);
        }
    }

    int buyChoco(vector<int>& prices, int money) {
        mergesort(prices, 0, prices.size()-1);
        int price = prices[0]+prices[1];
        if(price<=money){
            return money-price;
        }else{
            return money;
        }
    }
};