aux_source_directory(./ FEE_SRCS)

add_library(${ABC_FEE_LIBRARY} ${FEE_SRCS})
#add_dependencies(${ABC_FEE_LIBRARY} ${ABC_ETH_TYPES_LIBRARY} ${ABC_ETH_CRYPTO_LIBRARY} ${ABC_ETH_RLP_LIBRARY} ${ABC_ETH_TRIE_LIBRARY} abc)

target_link_libraries(${ABC_FEE_LIBRARY} PRIVATE fmt::fmt-header-only)