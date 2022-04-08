class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs)==0:
            return("")
        if len(strs)==1:
            return(strs[0])
        
        pref=strs[0]
        plen=len(pref)
        
        for i in strs[1:]:
            while pref != i[0:plen]:
                pref = pref[0:plen-1]
                plen -= 1
                
        return(pref)