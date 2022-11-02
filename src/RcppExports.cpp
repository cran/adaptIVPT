// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// msabe
arma::vec msabe(const arma::mat& Test, const arma::mat& Reference, const double& m, const double& sigma_W0, const double& sig_level);
RcppExport SEXP _adaptIVPT_msabe(SEXP TestSEXP, SEXP ReferenceSEXP, SEXP mSEXP, SEXP sigma_W0SEXP, SEXP sig_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Test(TestSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Reference(ReferenceSEXP);
    Rcpp::traits::input_parameter< const double& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_W0(sigma_W0SEXP);
    Rcpp::traits::input_parameter< const double& >::type sig_level(sig_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(msabe(Test, Reference, m, sigma_W0, sig_level));
    return rcpp_result_gen;
END_RCPP
}
// prms
double prms(const int& n, const int& r, const double& sigma2_WT, const double& sigma2_WR, const double& logGMR, const double& m, const double& sigma_W0, const double& sig_level, const int& nsim, const int& ncores);
RcppExport SEXP _adaptIVPT_prms(SEXP nSEXP, SEXP rSEXP, SEXP sigma2_WTSEXP, SEXP sigma2_WRSEXP, SEXP logGMRSEXP, SEXP mSEXP, SEXP sigma_W0SEXP, SEXP sig_levelSEXP, SEXP nsimSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma2_WT(sigma2_WTSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma2_WR(sigma2_WRSEXP);
    Rcpp::traits::input_parameter< const double& >::type logGMR(logGMRSEXP);
    Rcpp::traits::input_parameter< const double& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_W0(sigma_W0SEXP);
    Rcpp::traits::input_parameter< const double& >::type sig_level(sig_levelSEXP);
    Rcpp::traits::input_parameter< const int& >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< const int& >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(prms(n, r, sigma2_WT, sigma2_WR, logGMR, m, sigma_W0, sig_level, nsim, ncores));
    return rcpp_result_gen;
END_RCPP
}
// reestimate_samplesize
int reestimate_samplesize(const int& n_init, const int& r, const double& lGMR, const double& S2_WR, const double& alpha_level, const double& m, const double& sigma_W0, const double& target_power, const int& nmax, const int& nsim, const int& ncores);
RcppExport SEXP _adaptIVPT_reestimate_samplesize(SEXP n_initSEXP, SEXP rSEXP, SEXP lGMRSEXP, SEXP S2_WRSEXP, SEXP alpha_levelSEXP, SEXP mSEXP, SEXP sigma_W0SEXP, SEXP target_powerSEXP, SEXP nmaxSEXP, SEXP nsimSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n_init(n_initSEXP);
    Rcpp::traits::input_parameter< const int& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double& >::type lGMR(lGMRSEXP);
    Rcpp::traits::input_parameter< const double& >::type S2_WR(S2_WRSEXP);
    Rcpp::traits::input_parameter< const double& >::type alpha_level(alpha_levelSEXP);
    Rcpp::traits::input_parameter< const double& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma_W0(sigma_W0SEXP);
    Rcpp::traits::input_parameter< const double& >::type target_power(target_powerSEXP);
    Rcpp::traits::input_parameter< const int& >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< const int& >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< const int& >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(reestimate_samplesize(n_init, r, lGMR, S2_WR, alpha_level, m, sigma_W0, target_power, nmax, nsim, ncores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_adaptIVPT_msabe", (DL_FUNC) &_adaptIVPT_msabe, 5},
    {"_adaptIVPT_prms", (DL_FUNC) &_adaptIVPT_prms, 10},
    {"_adaptIVPT_reestimate_samplesize", (DL_FUNC) &_adaptIVPT_reestimate_samplesize, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_adaptIVPT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}