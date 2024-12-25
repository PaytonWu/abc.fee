// Copyright(c) 2024 - present, Payton Wu (payton.wu@outlook.com) & the contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#ifndef TRIE_ELEMENT_DECL_H
#define TRIE_ELEMENT_DECL_H

#pragma once

#include "trie_node_fwd_decl.h"
#include "carrier_call_charge_data.h"

#include <tl/optional.hpp>

#include <array>
#include <memory>

namespace abc::charge
{

class trie_node
{
private:
    std::array<std::unique_ptr<trie_node>, 10> children_;
    tl::optional<carrier_call_charge_data> call_charge_data_;
};

} // namespace abc::trie

#endif // TRIE_ELEMENT_DECL_H
