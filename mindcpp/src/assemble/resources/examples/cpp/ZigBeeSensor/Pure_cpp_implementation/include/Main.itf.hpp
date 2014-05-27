#ifndef _MINDCPP_BOOT_MAIN_HPP_
#define _MINDCPP_BOOT_MAIN_HPP_


class mindcpp_boot_Main {
public:
  inline mindcpp_boot_Main(){};
  virtual inline ~mindcpp_boot_Main(){};

  virtual int main(  int argc, char (* (* argv)) ) = 0;
};

#endif /* _MINDCPP_BOOT_MAIN_HPP_ */
