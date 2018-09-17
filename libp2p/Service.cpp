/*
    This file is part of FISCO-BCOS.

    FISCO-BCOS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FISCO-BCOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FISCO-BCOS.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file Service.cpp
 *  @author chaychen
 *  @date 20180910
 */

#include "Service.h"

namespace dev
{
namespace p2p
{
Message::Ptr Service::sendMessageByNodeID(
    dev::h256 const& nodeID, uint32_t protocolID, Message::Ptr message)
{
    return Message::Ptr();
}

void Service::asyncSendMessageByNodeID(dev::h256 const& nodeID, uint32_t protocolID,
    Message::Ptr message, std::function<void(dev::Exception, Message::Ptr)> callback,
    Options options)
{}

}  // namespace p2p

}  // namespace dev