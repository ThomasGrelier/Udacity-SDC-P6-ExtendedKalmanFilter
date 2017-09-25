#ifndef TOOLS_H_
#define TOOLS_H_
#include <vector>
#include "Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;
using namespace std;

class Tools {
public:
  /**
  * Constructor.
  */
  Tools();

  /**
  * Destructor.
  */
  virtual ~Tools();

  /**
  * A helper method to calculate RMSE.
  */
  VectorXd CalculateRMSE(const vector<VectorXd> &estimations, const vector<VectorXd> &ground_truth);

  /**
   * Calculate the Jacobian for Radar measurement function
   * @param x_state State
   */
  MatrixXd CalculateJacobian(const VectorXd &x_state);

  /**
   * Calculate the measurement function value for x_state
   * @param x_state State
   */
  VectorXd CalculateHfunction(const VectorXd &x_state);

};

#endif /* TOOLS_H_ */
