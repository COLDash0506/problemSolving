def solution(s):
    answer = []
    initString = {}
    for i in range(len(s)):
        if s[i] not in initString:
            initString[s[i]] = i
            answer.append(-1)
        else:
            answer.append(i - initString[s[i]])
            initString[s[i]] = i  
    return answer
