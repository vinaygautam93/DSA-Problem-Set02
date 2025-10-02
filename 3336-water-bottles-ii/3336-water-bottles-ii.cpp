class Solution {
public:
    int maxBottlesDrunk(long long numBottles, long long numExchange) {
        
        
        int vx=0;
        int mx=INT_MIN;
        int vin1=2;
        int vin=1;
        int mx2=0;
        int vinay1 = numBottles;
        int tushar1 = numBottles;
        int mx3=0;
        while (tushar1 >= numExchange) 
        { 
            break;
            int exchanged = tushar1 / numExchange;
            mx2=0;
            vinay1 += exchanged;
            
            tushar1 = exchanged + tushar1 % numExchange;
            mx3++;
        }
        
           
        
        
        int vinay = 0;
            int tushar = 0;

        while ( vinay != 0||numBottles != 0)
        {
            mx2++;
            if (vinay== 0 && numBottles!= 0) 
            {
                
                tushar = tushar + numBottles;
                vinay = vinay + numBottles;
                mx2++;
                numBottles = 0;
                 mx = max (mx2 ,mx);
            } 
            
            if (vinay >= numExchange)
            
            {
                
                numBottles++;
                vinay = vinay - numExchange;
                mx2++;
                numExchange++;
                 mx = max (mx2 ,mx);
            }
            
            /*
             while (tushar1 >= numExchange) 
        { 
            break;
            int exchanged = tushar1 / numExchange;
            mx2=0;
            vinay1 += exchanged;
            
            tushar1 = exchanged + tushar1 % numExchange;
            mx3++;
        }
            */
            
            
            if (vinay < numExchange&&numBottles == 0)
            {
                break;
            }
            if ((numBottles!= 0 && vinay != 0) && (vinay< numExchange)) 
            {
                vinay = vinay + numBottles;
                mx2++;
                tushar = tushar + numBottles;
                numBottles = 0;
                mx = max (mx2 ,mx);
            }
        }
         
        
   
     if(vin1) {
    return tushar;
     }
        return vin%10;
    }
};