//Numpy array shape [32]
//Min -0.312500000000
//Max 0.562500000000
//Number of zeros 5

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
bias16_t b16[32];
#else
bias16_t b16[32] = {0.1875, -0.1875, 0.1875, 0.0625, 0.5625, 0.3125, 0.0625, 0.0000, 0.1250, -0.3125, 0.1875, 0.1875, 0.0000, 0.0000, 0.1875, -0.1250, 0.0000, 0.1250, -0.1875, 0.0000, 0.0625, -0.0625, 0.1875, 0.1875, 0.1875, 0.1250, 0.1875, -0.1875, -0.1250, 0.2500, 0.3125, -0.1250};
#endif

#endif
