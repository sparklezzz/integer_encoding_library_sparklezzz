/*-----------------------------------------------------------------------------
 *  KVSEncodingDP.hpp - To scan optimal partitions in a list, used by KVSEncoding
 *
 *  Modified by Xudong Zhang
 *  Date: 2013/12/09
 *
 *-----------------------------------------------------------------------------
 */

#ifndef __KVSENCODINGDP_HPP__
#define __KVSENCODINGDP_HPP__

#include "encoding_internals.hpp"

/*
 * If a list is larger that this value, then
 * it is split into subblocks that are
 * compressed separatelly. Compression is
 * slightly worse, but the decompression is
 * more cache-friendly.
 */

namespace paradise {
namespace index {

class KVSEncodingDP {
 public:
  explicit KVSEncodingDP(const uint32_t *lens,
                        const uint32_t *zlens,
                        uint32_t size,
                        bool aligned);

  ~KVSEncodingDP() throw();

  /*
   * computePartition
   *   Compute optimal sub-lists from input a list
   *     seq    : input list
   *     parts  : calculated optimal sub-lists
   *     cost   : fix cost in bits that we pay for each block
   */
  void computePartition(const std::vector<uint32_t>& seq,
                        std::vector<uint32_t> *parts,
                        uint32_t cost) const;

 private:
  bool            aligned_;
  uint32_t        size_;
  uint32_t        mxblk_;
  const uint32_t  *lens_;
  const uint32_t  *zlens_;

  DISALLOW_COPY_AND_ASSIGN(KVSEncodingDP);
}; /* KVSEncodingDP */

} /* namespace: internals */
} /* namespace: integer_encoding */

#endif /* __KVSENCODINGDP_HPP__ */
