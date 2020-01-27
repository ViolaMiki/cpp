/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x){
  long y = 0;
  int z = abs(x);
  int symbel = 0;
  if (z == x) {
    symbel = 1;
  }

  while (z > 0) {
    int single = z % 10;
    int z = 10;
    y += single;
  }

  if (symbel == 0) {
    y = -y;
  }
  
  if (y > (pow(2, 31) - 1) || y < -pow(2, 31)) {
    y = 0;
  }

  int ret = (int) y;
  return ret;
}


// @lc code=end

