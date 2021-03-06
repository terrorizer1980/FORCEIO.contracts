#include <eosio/eosio.hpp>
#include <eosio/asset.hpp>

#pragma once

namespace chainspec {
struct transfer_args {
   eosio::name from;
   eosio::name to;
   eosio::asset quantity;
   std::string memo;
};

void send_token( const eosio::name& contract,
                 const eosio::name& action_name,
                 const eosio::name& from,
                 const eosio::name& to,
                 const eosio::asset& quantity,
                 const std::string& memo );
}; // namespace chainspec