#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>

/*!
 * IP Address Conversion and CIDR calculator
 */
class IPTools {
public:

	/*!
	 * Convert a subnet mask to CIDR notation
	 * @param subnet_mask A subnet mask eg. 255.255.0.0
	 * @return {object} object containing information about subnet including CIDR prefix
	*/
	std::map<std::string,::maglev::CppAny> SubnetMaskToCIDR(std::string subnet_mask) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(subnet_mask);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.SubnetMaskToCIDR", myargs);
		return ret;
	}

	/*!
	 * Given an IP address or IP address with CIDR notation, provides information about an IP address range
	 * @param ip_addr An IP address with or without CIDR notation
	 * @return {array} a list of objects containing information about the IP address range
	*/
	std::vector<::maglev::CppAny> CalcCIDR(std::string ip_addr) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip_addr);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.CalcCIDR", myargs);
		return ret;
	}

	/*!
	 * Convert an IP address to a Decimal representation
	 * @param ip_addr An IP address
	 * @return {string} Decimal representation of the provided IP address
	*/
	std::string IPToDecimal(std::string ip_addr) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip_addr);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.IPToDecimal", myargs);
		return ret;
	}

	/*!
	 * Convert from a Decimal representationan of an IP address
	 * @param ip4_number Decimal representation of an IP address
	 * @return {string} The IP address
	*/
	std::string IP4FromDecimal(std::string ip4_number) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip4_number);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.IP4FromDecimal", myargs);
		return ret;
	}

	/*!
	 * Convert from a Decimal representationan of an IP address
	 * @param ip6_number Decimal representation of an IP address
	 * @return {string} The IP address
	*/
	std::string IP6FromDecimal(std::string ip6_number) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip6_number);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.IP6FromDecimal", myargs);
		return ret;
	}

	/*!
	 * Convert an IPv4 address to an IPv6 address
	 * @param ip_addr An IPv4 address
	 * @return {object} An object containing IPv6 representations of the provided IPv4 address
	*/
	std::map<std::string,::maglev::CppAny> IPv4ToIPv6(std::string ip_addr) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip_addr);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.IPv4ToIPv6", myargs);
		return ret;
	}

	/*!
	 * Expand the zeros in an IPv6 address
	 * @param ip6_addr An IPv6 address
	 * @return {object} The same IPv6 address with zeros expanded
	*/
	std::map<std::string,::maglev::CppAny> ExpandIPv6(std::string ip6_addr) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip6_addr);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.ExpandIPv6", myargs);
		return ret;
	}

	/*!
	 * Compress the zeros in an IPv6 address
	 * @param ip6_addr An IPv6 address
	 * @return {object} The same IPv6 address with zeros compressed
	*/
	std::map<std::string,::maglev::CppAny> CompressIPv6(std::string ip6_addr) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		::maglev::CppAny param0;
		param0.setStdString(ip6_addr);
		myargs.push_back(param0);
		::maglev::CppAny ret = bus->call("IPTools.CompressIPv6", myargs);
		return ret;
	}

};

