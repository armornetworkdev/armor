#ifndef CURRENCYFORK_H
#define CURRENCYFORK_H

#include "CryptoNoteConfig.hpp"
#include "common/Base58.hpp"
#include "common/StringTools.hpp"
#include "common/Varint.hpp"
#include "common/string.hpp"
#include "crypto/crypto.hpp"
#include "crypto/int-util.h"
#include "seria/BinaryInputStream.hpp"
#include "seria/BinaryOutputStream.hpp"

using namespace cn;

class CurrencyFork
{

public:
    explicit CurrencyFork();

    AccountAddress get_miner_address(AccountAddress miner_address, Height height) const;
    Amount get_block_reward(Amount block_reward, Height height) const;
    static Amount get_alredy_generated_coins(Amount a, Height height);
    static Amount get_base_reward_normalized(Amount reward, Amount already_generated_coins, Height height);
    static Amount get_reward_normalized(Amount reward, Amount already_generated_coins, Height height);

    bool parse_account_address_string(const std::string &str, AccountAddress *addr) const;

private:


};

#endif // CURRENCYFORK_H
