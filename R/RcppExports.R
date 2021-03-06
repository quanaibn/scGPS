# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

distvec <- function(x, y) {
    .Call('_scGPS_distvec', PACKAGE = 'scGPS', x, y)
}

calcDist <- function(x) {
    .Call('_scGPS_calcDist', PACKAGE = 'scGPS', x)
}

#' Compute Euclidean distance matrix by rows
#'
#' @param x A numeric matrix
calcDistArma <- function(x) {
    .Call('_scGPS_calcDistArma', PACKAGE = 'scGPS', x)
}

#' Function to calculate Eucledean distance matrix with paralleled C++
#'
#' @param X an R matrix (expression matrix), with cells in rows and genes in columns
#' @export
#'
rcpp_parallel_distance <- function(mat) {
    .Call('_scGPS_rcpp_parallel_distance', PACKAGE = 'scGPS', mat)
}

#' Function to calculate Eucledean distance matrix without parallelisation
#'
#' @param X an R matrix (expression matrix), with cells in rows and genes in columns
#' @export
#'
rcpp_Eucl_distance_NotPar <- function(mat) {
    .Call('_scGPS_rcpp_Eucl_distance_NotPar', PACKAGE = 'scGPS', mat)
}

timesTwo <- function(x) {
    .Call('_scGPS_timesTwo', PACKAGE = 'scGPS', x)
}

#' Calculate mean
#'
#' @param N  integer.
#' @param thin integer
#' @export
#'
mean_cpp <- function(x) {
    .Call('_scGPS_mean_cpp', PACKAGE = 'scGPS', x)
}

#' Calculate variance
#'
#' @param x a vector of gene expression.
#' @param bias degree of freedom
#' @export
#'
var_cpp <- function(x, bias = TRUE) {
    .Call('_scGPS_var_cpp', PACKAGE = 'scGPS', x, bias)
}

#' Transpose a matrix
#'
#' @param X  an R matrix (expression matrix)
#' @export
#'
tp_cpp <- function(X) {
    .Call('_scGPS_tp_cpp', PACKAGE = 'scGPS', X)
}

#' Subset a matrix
#'
#' @param X an R matrix (expression matrix)
#' @export
#'
subset_cpp <- function(m1in, rowidx_in, colidx_in) {
    .Call('_scGPS_subset_cpp', PACKAGE = 'scGPS', m1in, rowidx_in, colidx_in)
}

#' Principal component analysis
#'
#' @description This function provides significant speed gain if the input matrix
#' is big
#' @param X  an R matrix (expression matrix), rows are genes, columns are cells
#' @export
#'
PrinComp_cpp <- function(X) {
    .Call('_scGPS_PrinComp_cpp', PACKAGE = 'scGPS', X)
}

