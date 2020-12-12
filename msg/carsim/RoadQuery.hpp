/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __carsim_RoadQuery_hpp__
#define __carsim_RoadQuery_hpp__

#include <lcm/lcm_coretypes.h>

#include "carsim\QueryPoint.hpp"
#include "carsim\QueryPoint.hpp"
#include "carsim\QueryPoint.hpp"
#include "carsim\QueryPoint.hpp"

namespace carsim
{

class RoadQuery
{
    public:
        int8_t     valid;

        carsim::QueryPoint left_front;

        carsim::QueryPoint left_rear;

        carsim::QueryPoint right_front;

        carsim::QueryPoint right_rear;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "RoadQuery"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int RoadQuery::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int RoadQuery::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int RoadQuery::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t RoadQuery::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* RoadQuery::getTypeName()
{
    return "RoadQuery";
}

int RoadQuery::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->valid, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->left_front._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->left_rear._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->right_front._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->right_rear._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int RoadQuery::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->valid, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->left_front._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->left_rear._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->right_front._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->right_rear._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int RoadQuery::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += this->left_front._getEncodedSizeNoHash();
    enc_size += this->left_rear._getEncodedSizeNoHash();
    enc_size += this->right_front._getEncodedSizeNoHash();
    enc_size += this->right_rear._getEncodedSizeNoHash();
    return enc_size;
}

uint64_t RoadQuery::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == RoadQuery::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, RoadQuery::getHash };

    uint64_t hash = 0x936cb057fc68a6e1LL +
         carsim::QueryPoint::_computeHash(&cp) +
         carsim::QueryPoint::_computeHash(&cp) +
         carsim::QueryPoint::_computeHash(&cp) +
         carsim::QueryPoint::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
