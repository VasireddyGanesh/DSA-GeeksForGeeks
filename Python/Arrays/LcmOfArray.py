
#Version-1

# def lcm(num1,num2):
#     return (num1*num2)/gcd(num1,num2)

# def gcd(num1,num2):
#     if(num2==0):
#         return num1
#     else:
#         return gcd(num2,num1%num2)


# num=int(input("Enter an Integer :"))
# ans=1
# for i in range(1,num+1):
#     ans=lcm(ans,i)


# print("LCM is ",ans)


#Version - 2


def lcm(num1,num2):
    return (num1*num2)/gcd(num1,num2)

def gcd(num1,num2):
    if(num2==0):
        return num1
    else:
        return gcd(num2,num1%num2)


l=list(map(int , input("Enter Space Seperated integers : ").split(" ")))
ans=1
for i in range(0,len(l)):
    ans=lcm(ans,l[i])


print("LCM is ",ans)