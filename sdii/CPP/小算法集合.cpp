小算法集合

- 闰年(hw03)
      int leap[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
      bool isLeap(int year)
      {
          if (year%400==0)
          {
              return true;
          }
          if (year%100==0)
          {
              return false;
          }
          if (year%4==0)
          {
              return true;
          }
          return false;
      }
- 约瑟夫环(hw03)
  模拟,lazy delete	
      void Student::count()
      {
          int cnt=0;
          while (true)
          {
              if (Out[pos]==false)
              {
                  //make count
                  cnt++;
                  if (cnt==countNumber)
                  {
                      //that is the person
                      Out[pos]=true;//laze delete
                      countPerson++;
                      cout<<pos<<endl;
                      return;
                  }
              }
              addPos();
          }
      }								

- 判别(单个)素数(hw04)
      //素数判断函数单独写出,判断 2~sqrt(n)能否被 n 整除. 
      //there are many function needs the judgement of prime
      bool isprime(int testNum){
          int SqrtNum=sqrt(testNum)+1;
          if (testNum<2) {
              return false;
          }
          for (int div=2; div<SqrtNum; div++) {
              if (testNum%div==0) {
                  return false;
              }
          }
          return true;
      }
      //判别多个素数用筛法
- stoi(字符串转数字)
      //判断首位是否需要正负运算
      //a function used as 'string to i',caution '-'
      int MyInteger::parseInt(const string& original)
      {
          int num=0;
          if (original[0]=='-') {
              for (int i=1; i<original.length(); i++)
              {
                  num=num*10+original[i]-'0';
              }
              return -1*num;
          }else if(original[0]=='+'){
              for (int i=1; i<original.length(); i++)
              {
                  num=num*10+original[i]-'0';
              }
              return num;
          }else{
              for (int i=0; i<original.length(); i++)
              {
                  num=num*10+original[i]-'0';
              }
              return num;
          }
      }
- 点积叉积(lab05)
      //dot and cross two vector
      int dot(MyVector &v1, MyVector &v2)
      {
          return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
      }
      MyVector cross(MyVector &v1, MyVector &v2)
      {
          MyVector ans(v1.y * v2.z - v1.z * v2.y , v1.z * v2.x - v1.x * v2.z,v1.x * v2.y - v1.y * v2.x);//三维
          return ans;
      }
  


