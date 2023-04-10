class Solution
{
    public:
        bool reachingPoints(int sx, int sy, int tx, int ty)
        {
           	// if(sx%sy==0){
           	//      sx=sx;
           	//      sy=sy;
           	// } 
           	// else{if(sx < sy){
           	//          sy=sy%sx;
           	//  }       
           	//  else sx=sx%sy;}
            // int mini = min(sx, sy);
            // int maxi = max(sx, sy);
            while (tx >= sx && ty >= sy)
            {
              if (tx < ty)
                {
                    if(sx==tx)
                    {
                            if((ty-sy)%tx==0)
                            {
                                    return true;
                            }
                            else return false;
                    }
                    ty = ty % tx;
                }
                else
                {
                  if(sy==ty){
                            if((tx-sx)%ty==0)
                            {
                                    return true;
                            }
                           else return false;
                    }
                    tx = tx % ty;
                }
             
            }
            return false;
        }
};