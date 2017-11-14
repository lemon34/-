/*************************/
//
//
//
/**********************/
class CPrefixSorting{
public: 
  CPrefixSorting(){
    m_nCakeCnt = 0;
    m_nMaxSwap = 0;
  }
  ~CPerfixSorting(){
    if( m_CakeArray != NULL){
      delete m_CakeArray;
    }
    if( m_SwapArray != NULL){
      delete m_SwapArray;
    }
    if( m_ReverseArray != NULL){
     delete m_ReverseArray;
   }
    if( m_ReverseCakeArraySwap != NULL){
      delete m_ReverseCakeArraySwap;
    }
  }
  //
  //
  //
  //
  
  void Run(int* pCakeArray, int nCakeCnt){
    Init(pCakeArray, nCakeCnt);
    m_nSearch = 0;
    Search(0);
  }
  void Output(){
  for(itn i =- 0; i < m_nMaxSwap; i ++){
    printf("%d", m_SwapArray[i]);
  }
  printf("\n |Search Times| : %d\n", m_nSearch);
  printf("Total Swap times = %d\n", m_nMaxSwap);
  
  
  
  }
  

}
