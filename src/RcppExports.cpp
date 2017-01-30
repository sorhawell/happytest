// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// recTree
void recTree(int vars, int obs, int ntree, bool calculate_node_pred, NumericMatrix X, NumericVector Y, bool majorityTerminal, IntegerMatrix leftDaughter, IntegerMatrix rightDaughter, IntegerMatrix nodestatus, NumericMatrix xbestsplit, NumericMatrix nodepred, IntegerMatrix bestvar, IntegerMatrix inbag, IntegerVector varLevels, IntegerVector OOBtimes, NumericMatrix localIncrements);
RcppExport SEXP forestFloor_recTree(SEXP varsSEXP, SEXP obsSEXP, SEXP ntreeSEXP, SEXP calculate_node_predSEXP, SEXP XSEXP, SEXP YSEXP, SEXP majorityTerminalSEXP, SEXP leftDaughterSEXP, SEXP rightDaughterSEXP, SEXP nodestatusSEXP, SEXP xbestsplitSEXP, SEXP nodepredSEXP, SEXP bestvarSEXP, SEXP inbagSEXP, SEXP varLevelsSEXP, SEXP OOBtimesSEXP, SEXP localIncrementsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< int >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< int >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< bool >::type calculate_node_pred(calculate_node_predSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< bool >::type majorityTerminal(majorityTerminalSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type leftDaughter(leftDaughterSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type rightDaughter(rightDaughterSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type nodestatus(nodestatusSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xbestsplit(xbestsplitSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type nodepred(nodepredSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type bestvar(bestvarSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type inbag(inbagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type varLevels(varLevelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type OOBtimes(OOBtimesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type localIncrements(localIncrementsSEXP);
    recTree(vars, obs, ntree, calculate_node_pred, X, Y, majorityTerminal, leftDaughter, rightDaughter, nodestatus, xbestsplit, nodepred, bestvar, inbag, varLevels, OOBtimes, localIncrements);
    return R_NilValue;
END_RCPP
}
// multiTree
void multiTree(int vars, int obs, int ntree, int nClasses, NumericMatrix X, IntegerVector Y, bool majorityTerminal, IntegerMatrix leftDaughter, IntegerMatrix rightDaughter, IntegerMatrix nodestatus, NumericMatrix xbestsplit, NumericMatrix nodepred, IntegerMatrix bestvar, IntegerMatrix inbag, IntegerVector varLevels, IntegerVector OOBtimes, NumericVector localIncrements);
RcppExport SEXP forestFloor_multiTree(SEXP varsSEXP, SEXP obsSEXP, SEXP ntreeSEXP, SEXP nClassesSEXP, SEXP XSEXP, SEXP YSEXP, SEXP majorityTerminalSEXP, SEXP leftDaughterSEXP, SEXP rightDaughterSEXP, SEXP nodestatusSEXP, SEXP xbestsplitSEXP, SEXP nodepredSEXP, SEXP bestvarSEXP, SEXP inbagSEXP, SEXP varLevelsSEXP, SEXP OOBtimesSEXP, SEXP localIncrementsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< int >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< int >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< int >::type nClasses(nClassesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< bool >::type majorityTerminal(majorityTerminalSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type leftDaughter(leftDaughterSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type rightDaughter(rightDaughterSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type nodestatus(nodestatusSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type xbestsplit(xbestsplitSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type nodepred(nodepredSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type bestvar(bestvarSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type inbag(inbagSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type varLevels(varLevelsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type OOBtimes(OOBtimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type localIncrements(localIncrementsSEXP);
    multiTree(vars, obs, ntree, nClasses, X, Y, majorityTerminal, leftDaughter, rightDaughter, nodestatus, xbestsplit, nodepred, bestvar, inbag, varLevels, OOBtimes, localIncrements);
    return R_NilValue;
END_RCPP
}