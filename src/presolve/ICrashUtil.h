/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                       */
/*    This file is part of the HiGHS linear optimization suite           */
/*                                                                       */
/*    Written and engineered 2008-2019 at the University of Edinburgh    */
/*                                                                       */
/*    Available as open-source under the MIT License                     */
/*                                                                       */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**@file presolve/ICrashUtil.h
 * @brief
 * @author Julian Hall, Ivet Galabova, Qi Huangfu and Michael Feldmeier
 */
#ifndef PRESOLVE_ICRASH_UTIL_H_
#define PRESOLVE_ICRASH_UTIL_H_
#include "lp_data/HighsLp.h"

struct IterationDetails {
  int num;
  double lp_objective;
  double quadratic_objective;
  double residual_norm_1;
  double residual_norm_2;
};

// Calculates value of A^t*v in result.
void MuptiplyByTranspose(const HighsLp& lp, const std::vector<double>& v,
                         std::vector<double>& result);

void printMinorIterationDetails(const double iteration, const double col,
                                const double old_value, const double update,
                                const double ctx, const std::vector<double>& r,
                                const double quadratic_objective) {
}

#endif