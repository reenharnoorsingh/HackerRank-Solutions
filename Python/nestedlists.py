marksheet=[]
scorelist=[]

if __name__ == '__main__':

        for _ in range(int(input())):
                name = input()
                score = float(input())
                marksheet+=[[name,score]]
                scorelist+=[score]
        # extration of second most greated marks
        score_max = sorted(list(set(scorelist)))[1] 
        
        #sorting the marksheet by the order n(name) and s(score).
        for n,s in sorted(marksheet):
             # if the 
             if s == score_max:
                    print(n)