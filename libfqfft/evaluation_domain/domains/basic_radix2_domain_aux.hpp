/** @file
 *****************************************************************************

 Declaration of interfaces for auxiliary functions for the "basic radix-2" evaluation domain.

 These functions compute the radix-2 FFT (in single- or multi-thread mode) and,
 also compute Lagrange coefficients.

 *****************************************************************************
 * @author     This file is part of libfqfft, developed by SCIPR Lab
 *             and contributors (see AUTHORS).
 * @copyright  MIT license (see LICENSE file)
 *****************************************************************************/

#ifndef BASIC_RADIX2_DOMAIN_AUX_HPP_
#define BASIC_RADIX2_DOMAIN_AUX_HPP_

#include <vector>

namespace libfqfft {

/**
 * Compute the radix-2 FFT of the vector a over the set S={omega^{0},...,omega^{m-1}}.
 */
template<typename FieldT, typename GroupT>
void _basic_radix2_FFT(std::vector<GroupT> &a, const FieldT &omega);

/**
 * A multi-thread version of _basic_radix2_FFT.
 */
template<typename FieldT, typename GroupT>
void _basic_parallel_radix2_FFT(std::vector<GroupT> &a, const FieldT &omega);

/**
 * Translate the vector a to a coset defined by g.
 */
template<typename FieldT>
void _multiply_by_coset(std::vector<FieldT> &a, const FieldT &g);

/**
 * Compute the m Lagrange coefficients, relative to the set S={omega^{0},...,omega^{m-1}}, at the field element t.
 */
template<typename FieldT>
std::vector<FieldT> _basic_radix2_evaluate_all_lagrange_polynomials(const size_t m, const FieldT &t);

} // libfqfft

#include <libfqfft/evaluation_domain/domains/basic_radix2_domain_aux.tcc>

#endif // BASIC_RADIX2_DOMAIN_AUX_HPP_
