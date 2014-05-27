/*
 * mainComponent.hpp
 *
 *  Created on: 18 mars 2014
 *      Author: SESA188919
 */

#ifndef MAINCOMPONENT_HPP_
#define MAINCOMPONENT_HPP_

#include "Main.itf.hpp"
#include "zigBeeItf.itf.hpp"
#include "cluster.itf.hpp"

class mainComponent: mindcpp_boot_Main {
public:
  zigBeeItf *zigbeeitf;
  clusterItf *clusteritf;
public:
  mainComponent() { zigbeeitf = 0x00; clusteritf = 0x00; };
  ~mainComponent() { };

  virtual int main(  int argc, char (* (* argv)) );
};


#endif /* MAINCOMPONENT_HPP_ */
