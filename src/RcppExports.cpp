// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// distvec
double distvec(NumericVector x, NumericVector y);
RcppExport SEXP _scGPS_distvec(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(distvec(x, y));
    return rcpp_result_gen;
END_RCPP
}
// calcDist
NumericMatrix calcDist(NumericMatrix x);
RcppExport SEXP _scGPS_calcDist(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calcDist(x));
    return rcpp_result_gen;
END_RCPP
}
// calcDistArma
arma::mat calcDistArma(const arma::mat& x);
RcppExport SEXP _scGPS_calcDistArma(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calcDistArma(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parallel_distance
NumericMatrix rcpp_parallel_distance(NumericMatrix mat);
RcppExport SEXP _scGPS_rcpp_parallel_distance(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parallel_distance(mat));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_Eucl_distance_NotPar
NumericMatrix rcpp_Eucl_distance_NotPar(NumericMatrix mat);
RcppExport SEXP _scGPS_rcpp_Eucl_distance_NotPar(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_Eucl_distance_NotPar(mat));
    return rcpp_result_gen;
END_RCPP
}
// timesTwo
NumericVector timesTwo(NumericVector x);
RcppExport SEXP _scGPS_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(timesTwo(x));
    return rcpp_result_gen;
END_RCPP
}
// mean_cpp
double mean_cpp(NumericVector x);
RcppExport SEXP _scGPS_mean_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(mean_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// var_cpp
double var_cpp(NumericVector x, bool bias);
RcppExport SEXP _scGPS_var_cpp(SEXP xSEXP, SEXP biasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type bias(biasSEXP);
    rcpp_result_gen = Rcpp::wrap(var_cpp(x, bias));
    return rcpp_result_gen;
END_RCPP
}
// tp_cpp
arma::mat tp_cpp(const arma::mat X);
RcppExport SEXP _scGPS_tp_cpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(tp_cpp(X));
    return rcpp_result_gen;
END_RCPP
}
// subset_cpp
arma::mat subset_cpp(NumericMatrix m1in, NumericVector rowidx_in, NumericVector colidx_in);
RcppExport SEXP _scGPS_subset_cpp(SEXP m1inSEXP, SEXP rowidx_inSEXP, SEXP colidx_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m1in(m1inSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rowidx_in(rowidx_inSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type colidx_in(colidx_inSEXP);
    rcpp_result_gen = Rcpp::wrap(subset_cpp(m1in, rowidx_in, colidx_in));
    return rcpp_result_gen;
END_RCPP
}
// PrinComp_cpp
List PrinComp_cpp(const arma::mat X);
RcppExport SEXP _scGPS_PrinComp_cpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(PrinComp_cpp(X));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scGPS_distvec", (DL_FUNC) &_scGPS_distvec, 2},
    {"_scGPS_calcDist", (DL_FUNC) &_scGPS_calcDist, 1},
    {"_scGPS_calcDistArma", (DL_FUNC) &_scGPS_calcDistArma, 1},
    {"_scGPS_rcpp_parallel_distance", (DL_FUNC) &_scGPS_rcpp_parallel_distance, 1},
    {"_scGPS_rcpp_Eucl_distance_NotPar", (DL_FUNC) &_scGPS_rcpp_Eucl_distance_NotPar, 1},
    {"_scGPS_timesTwo", (DL_FUNC) &_scGPS_timesTwo, 1},
    {"_scGPS_mean_cpp", (DL_FUNC) &_scGPS_mean_cpp, 1},
    {"_scGPS_var_cpp", (DL_FUNC) &_scGPS_var_cpp, 2},
    {"_scGPS_tp_cpp", (DL_FUNC) &_scGPS_tp_cpp, 1},
    {"_scGPS_subset_cpp", (DL_FUNC) &_scGPS_subset_cpp, 3},
    {"_scGPS_PrinComp_cpp", (DL_FUNC) &_scGPS_PrinComp_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_scGPS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
