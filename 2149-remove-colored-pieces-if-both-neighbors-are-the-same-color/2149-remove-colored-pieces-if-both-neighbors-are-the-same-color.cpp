class Solution {
public:

    bool winnerOfGame(string colors) {
        char player='A';
        int idx=0;
        int A_move=0;
        int B_move=0;
        int count=0;
        for(int i=0;i<colors.size();i++){
            if(colors[i]==player)count++;else{ 
                count=1;
                if(player=='A')player='B';else player='A';
                }
            if(count>=3){
                if(player=='A')A_move++;else B_move++;
            }}
     
        if(A_move>B_move)return true;else return false;
    }

};