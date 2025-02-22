//
//  measurement_package.h
//  lesson5-13
//
//  Created by Seonman Kim on 12/11/17.
//  Copyright © 2017 Seonman Kim. All rights reserved.
//

#ifndef MEASUREMENT_PACKAGE_H_
#define MEASUREMENT_PACKAGE_H_

#include "Dense"

class MeasurementPackage {
public:
    int64_t timestamp_;
    
    enum SensorType {
        LASER, RADAR
    } sensor_type_;
    
    Eigen::VectorXd raw_measurements_;
    
};

#endif /* MEASUREMENT_PACKAGE_H_ */
