// Copyright(c) 2024 - present, Payton Wu (payton.wu@outlook.com) & the contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#ifndef CARRIER_PRICE_DATA_H
#define CARRIER_PRICE_DATA_H

#pragma once

#include <cstdint>
#include <ctime>

namespace abc::charge
{

struct carrier_call_charge_data
{
    std::time_t effective_date;
    std::uint64_t price;
    std::uint8_t price_precision;
};

} // namespace abc::charge

#endif // CARRIER_PRICE_DATA_H
