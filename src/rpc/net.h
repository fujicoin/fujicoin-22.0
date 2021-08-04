// Copyright (c) 2021 The BitcoinCore developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FUJICOIN_RPC_NET_H
#define FUJICOIN_RPC_NET_H

class CConnman;
class PeerManager;
struct NodeContext;

CConnman& EnsureConnman(const NodeContext& node);
PeerManager& EnsurePeerman(const NodeContext& node);

#endif // FUJICOIN_RPC_NET_H
