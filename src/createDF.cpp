#include <Rcpp.h>
using namespace Rcpp;
//[[Rcpp::export]]
DataFrame createDF() {
  List L;
  L["a"] = NumericVector::create(1.0, 2.0, 4.0, 8.0);
  L["b"] = CharacterVector::create("alpha", "beta", "gamma", "delta");
  L["c"] = rnorm(4, 0.0, 1.0);

  L.attr("class") = "data.frame";
  L.attr("row.names") = IntegerVector::create(NA_INTEGER, -4); // 4 unnamed rows
  return L;
}
