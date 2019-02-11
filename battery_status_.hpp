// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file battery_status_.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _BATTERY_STATUS__H_
#define _BATTERY_STATUS__H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(battery_status__SOURCE)
#define battery_status__DllAPI __declspec( dllexport )
#else
#define battery_status__DllAPI __declspec( dllimport )
#endif // battery_status__SOURCE
#else
#define battery_status__DllAPI
#endif
#else
#define battery_status__DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

namespace px4_ros_com
{
    namespace msg
    {
        namespace dds_
        {
            const uint8_t BATTERY_WARNING_NONE = 0;
          const uint8_t BATTERY_WARNING_LOW = 1;
          const uint8_t BATTERY_WARNING_CRITICAL = 2;
          const uint8_t BATTERY_WARNING_EMERGENCY = 3;
          const uint8_t BATTERY_WARNING_FAILED = 4;
          /*!
           * @brief This class represents the structure battery_status_ defined by the user in the IDL file.
           * @ingroup BATTERY_STATUS_
           */
          class battery_status_
          {
          public:

              /*!
               * @brief Default constructor.
               */
              eProsima_user_DllExport battery_status_();

              /*!
               * @brief Default destructor.
               */
              eProsima_user_DllExport ~battery_status_();

              /*!
               * @brief Copy constructor.
               * @param x Reference to the object battery_status_ that will be copied.
               */
              eProsima_user_DllExport battery_status_(const battery_status_ &x);

              /*!
               * @brief Move constructor.
               * @param x Reference to the object battery_status_ that will be copied.
               */
              eProsima_user_DllExport battery_status_(battery_status_ &&x);

              /*!
               * @brief Copy assignment.
               * @param x Reference to the object battery_status_ that will be copied.
               */
              eProsima_user_DllExport battery_status_& operator=(const battery_status_ &x);

              /*!
               * @brief Move assignment.
               * @param x Reference to the object battery_status_ that will be copied.
               */
              eProsima_user_DllExport battery_status_& operator=(battery_status_ &&x);

              /*!
               * @brief This function sets a value in member timestamp
               * @param _timestamp New value for member timestamp
               */
              inline eProsima_user_DllExport void timestamp(uint64_t _timestamp)
              {
                  m_timestamp = _timestamp;
              }

              /*!
               * @brief This function returns the value of member timestamp
               * @return Value of member timestamp
               */
              inline eProsima_user_DllExport uint64_t timestamp() const
              {
                  return m_timestamp;
              }

              /*!
               * @brief This function returns a reference to member timestamp
               * @return Reference to member timestamp
               */
              inline eProsima_user_DllExport uint64_t& timestamp()
              {
                  return m_timestamp;
              }
              /*!
               * @brief This function sets a value in member voltage_v
               * @param _voltage_v New value for member voltage_v
               */
              inline eProsima_user_DllExport void voltage_v(float _voltage_v)
              {
                  m_voltage_v = _voltage_v;
              }

              /*!
               * @brief This function returns the value of member voltage_v
               * @return Value of member voltage_v
               */
              inline eProsima_user_DllExport float voltage_v() const
              {
                return m_voltage_v;
              }

              /*!
               * @brief This function returns a reference to member voltage_v
               * @return Reference to member voltage_v
               */
              inline eProsima_user_DllExport float& voltage_v()
              {
                return m_voltage_v;
              }
              /*!
               * @brief This function sets a value in member voltage_filtered_v
               * @param _voltage_filtered_v New value for member voltage_filtered_v
               */
              inline eProsima_user_DllExport void voltage_filtered_v(float _voltage_filtered_v)
              {
                m_voltage_filtered_v = _voltage_filtered_v;
              }

              /*!
               * @brief This function returns the value of member voltage_filtered_v
               * @return Value of member voltage_filtered_v
               */
              inline eProsima_user_DllExport float voltage_filtered_v() const
              {
                  return m_voltage_filtered_v;
              }

              /*!
               * @brief This function returns a reference to member voltage_filtered_v
               * @return Reference to member voltage_filtered_v
               */
              inline eProsima_user_DllExport float& voltage_filtered_v()
              {
                  return m_voltage_filtered_v;
              }
              /*!
               * @brief This function sets a value in member current_a
               * @param _current_a New value for member current_a
               */
              inline eProsima_user_DllExport void current_a(float _current_a)
              {
                  m_current_a = _current_a;
              }

    /*!
     * @brief This function returns the value of member current_a
     * @return Value of member current_a
     */
    inline eProsima_user_DllExport float current_a() const
    {
        return m_current_a;
    }

    /*!
     * @brief This function returns a reference to member current_a
     * @return Reference to member current_a
     */
    inline eProsima_user_DllExport float& current_a()
    {
        return m_current_a;
    }
    /*!
     * @brief This function sets a value in member current_filtered_a
     * @param _current_filtered_a New value for member current_filtered_a
     */
    inline eProsima_user_DllExport void current_filtered_a(float _current_filtered_a)
    {
        m_current_filtered_a = _current_filtered_a;
    }

    /*!
     * @brief This function returns the value of member current_filtered_a
     * @return Value of member current_filtered_a
     */
    inline eProsima_user_DllExport float current_filtered_a() const
    {
        return m_current_filtered_a;
    }

    /*!
     * @brief This function returns a reference to member current_filtered_a
     * @return Reference to member current_filtered_a
     */
    inline eProsima_user_DllExport float& current_filtered_a()
    {
        return m_current_filtered_a;
    }
    /*!
     * @brief This function sets a value in member average_current_a
     * @param _average_current_a New value for member average_current_a
     */
    inline eProsima_user_DllExport void average_current_a(float _average_current_a)
    {
        m_average_current_a = _average_current_a;
    }

    /*!
     * @brief This function returns the value of member average_current_a
     * @return Value of member average_current_a
     */
    inline eProsima_user_DllExport float average_current_a() const
    {
        return m_average_current_a;
    }

    /*!
     * @brief This function returns a reference to member average_current_a
     * @return Reference to member average_current_a
     */
    inline eProsima_user_DllExport float& average_current_a()
    {
        return m_average_current_a;
    }
    /*!
     * @brief This function sets a value in member discharged_mah
     * @param _discharged_mah New value for member discharged_mah
     */
    inline eProsima_user_DllExport void discharged_mah(float _discharged_mah)
    {
        m_discharged_mah = _discharged_mah;
    }

    /*!
     * @brief This function returns the value of member discharged_mah
     * @return Value of member discharged_mah
     */
    inline eProsima_user_DllExport float discharged_mah() const
    {
        return m_discharged_mah;
    }

    /*!
     * @brief This function returns a reference to member discharged_mah
     * @return Reference to member discharged_mah
     */
    inline eProsima_user_DllExport float& discharged_mah()
    {
        return m_discharged_mah;
    }
    /*!
     * @brief This function sets a value in member remaining
     * @param _remaining New value for member remaining
     */
    inline eProsima_user_DllExport void remaining(float _remaining)
    {
        m_remaining = _remaining;
    }

    /*!
     * @brief This function returns the value of member remaining
     * @return Value of member remaining
     */
    inline eProsima_user_DllExport float remaining() const
    {
        return m_remaining;
    }

    /*!
     * @brief This function returns a reference to member remaining
     * @return Reference to member remaining
     */
    inline eProsima_user_DllExport float& remaining()
    {
        return m_remaining;
    }
    /*!
     * @brief This function sets a value in member scale
     * @param _scale New value for member scale
     */
    inline eProsima_user_DllExport void scale(float _scale)
    {
        m_scale = _scale;
    }

    /*!
     * @brief This function returns the value of member scale
     * @return Value of member scale
     */
    inline eProsima_user_DllExport float scale() const
    {
        return m_scale;
    }

    /*!
     * @brief This function returns a reference to member scale
     * @return Reference to member scale
     */
    inline eProsima_user_DllExport float& scale()
    {
        return m_scale;
    }
    /*!
     * @brief This function sets a value in member temperature
     * @param _temperature New value for member temperature
     */
    inline eProsima_user_DllExport void temperature(float _temperature)
    {
        m_temperature = _temperature;
    }

    /*!
     * @brief This function returns the value of member temperature
     * @return Value of member temperature
     */
    inline eProsima_user_DllExport float temperature() const
    {
        return m_temperature;
    }

    /*!
     * @brief This function returns a reference to member temperature
     * @return Reference to member temperature
     */
    inline eProsima_user_DllExport float& temperature()
    {
        return m_temperature;
    }
    /*!
     * @brief This function sets a value in member cell_count
     * @param _cell_count New value for member cell_count
     */
    inline eProsima_user_DllExport void cell_count(int32_t _cell_count)
    {
        m_cell_count = _cell_count;
    }

    /*!
     * @brief This function returns the value of member cell_count
     * @return Value of member cell_count
     */
    inline eProsima_user_DllExport int32_t cell_count() const
    {
        return m_cell_count;
    }

    /*!
     * @brief This function returns a reference to member cell_count
     * @return Reference to member cell_count
     */
    inline eProsima_user_DllExport int32_t& cell_count()
    {
        return m_cell_count;
    }
    /*!
     * @brief This function copies the value in member voltage_cell_v
     * @param _voltage_cell_v New value to be copied in member voltage_cell_v
     */
    inline eProsima_user_DllExport void voltage_cell_v(const std::array<float, 4> &_voltage_cell_v)
    {
        m_voltage_cell_v = _voltage_cell_v;
    }

    /*!
     * @brief This function moves the value in member voltage_cell_v
     * @param _voltage_cell_v New value to be moved in member voltage_cell_v
     */
    inline eProsima_user_DllExport void voltage_cell_v(std::array<float, 4> &&_voltage_cell_v)
    {
        m_voltage_cell_v = std::move(_voltage_cell_v);
    }

    /*!
     * @brief This function returns a constant reference to member voltage_cell_v
     * @return Constant reference to member voltage_cell_v
     */
    inline eProsima_user_DllExport const std::array<float, 4>& voltage_cell_v() const
    {
        return m_voltage_cell_v;
    }

    /*!
     * @brief This function returns a reference to member voltage_cell_v
     * @return Reference to member voltage_cell_v
     */
    inline eProsima_user_DllExport std::array<float, 4>& voltage_cell_v()
    {
        return m_voltage_cell_v;
    }
    /*!
     * @brief This function sets a value in member max_cell_voltage_delta
     * @param _max_cell_voltage_delta New value for member max_cell_voltage_delta
     */
    inline eProsima_user_DllExport void max_cell_voltage_delta(float _max_cell_voltage_delta)
    {
        m_max_cell_voltage_delta = _max_cell_voltage_delta;
    }

    /*!
     * @brief This function returns the value of member max_cell_voltage_delta
     * @return Value of member max_cell_voltage_delta
     */
    inline eProsima_user_DllExport float max_cell_voltage_delta() const
    {
        return m_max_cell_voltage_delta;
    }

    /*!
     * @brief This function returns a reference to member max_cell_voltage_delta
     * @return Reference to member max_cell_voltage_delta
     */
    inline eProsima_user_DllExport float& max_cell_voltage_delta()
    {
        return m_max_cell_voltage_delta;
    }
    /*!
     * @brief This function sets a value in member capacity
     * @param _capacity New value for member capacity
     */
    inline eProsima_user_DllExport void capacity(uint16_t _capacity)
    {
        m_capacity = _capacity;
    }

    /*!
     * @brief This function returns the value of member capacity
     * @return Value of member capacity
     */
    inline eProsima_user_DllExport uint16_t capacity() const
    {
        return m_capacity;
    }

    /*!
     * @brief This function returns a reference to member capacity
     * @return Reference to member capacity
     */
    inline eProsima_user_DllExport uint16_t& capacity()
    {
        return m_capacity;
    }
    /*!
     * @brief This function sets a value in member cycle_count
     * @param _cycle_count New value for member cycle_count
     */
    inline eProsima_user_DllExport void cycle_count(uint16_t _cycle_count)
    {
        m_cycle_count = _cycle_count;
    }

    /*!
     * @brief This function returns the value of member cycle_count
     * @return Value of member cycle_count
     */
    inline eProsima_user_DllExport uint16_t cycle_count() const
    {
        return m_cycle_count;
    }

    /*!
     * @brief This function returns a reference to member cycle_count
     * @return Reference to member cycle_count
     */
    inline eProsima_user_DllExport uint16_t& cycle_count()
    {
        return m_cycle_count;
    }
    /*!
     * @brief This function sets a value in member run_time_to_empty
     * @param _run_time_to_empty New value for member run_time_to_empty
     */
    inline eProsima_user_DllExport void run_time_to_empty(uint16_t _run_time_to_empty)
    {
        m_run_time_to_empty = _run_time_to_empty;
    }

    /*!
     * @brief This function returns the value of member run_time_to_empty
     * @return Value of member run_time_to_empty
     */
    inline eProsima_user_DllExport uint16_t run_time_to_empty() const
    {
        return m_run_time_to_empty;
    }

    /*!
     * @brief This function returns a reference to member run_time_to_empty
     * @return Reference to member run_time_to_empty
     */
    inline eProsima_user_DllExport uint16_t& run_time_to_empty()
    {
        return m_run_time_to_empty;
    }
    /*!
     * @brief This function sets a value in member average_time_to_empty
     * @param _average_time_to_empty New value for member average_time_to_empty
     */
    inline eProsima_user_DllExport void average_time_to_empty(uint16_t _average_time_to_empty)
    {
        m_average_time_to_empty = _average_time_to_empty;
    }

    /*!
     * @brief This function returns the value of member average_time_to_empty
     * @return Value of member average_time_to_empty
     */
    inline eProsima_user_DllExport uint16_t average_time_to_empty() const
    {
        return m_average_time_to_empty;
    }

    /*!
     * @brief This function returns a reference to member average_time_to_empty
     * @return Reference to member average_time_to_empty
     */
    inline eProsima_user_DllExport uint16_t& average_time_to_empty()
    {
        return m_average_time_to_empty;
    }
    /*!
     * @brief This function sets a value in member serial_number
     * @param _serial_number New value for member serial_number
     */
    inline eProsima_user_DllExport void serial_number(uint16_t _serial_number)
    {
        m_serial_number = _serial_number;
    }

    /*!
     * @brief This function returns the value of member serial_number
     * @return Value of member serial_number
     */
    inline eProsima_user_DllExport uint16_t serial_number() const
    {
        return m_serial_number;
    }

    /*!
     * @brief This function returns a reference to member serial_number
     * @return Reference to member serial_number
     */
    inline eProsima_user_DllExport uint16_t& serial_number()
    {
        return m_serial_number;
    }
    /*!
     * @brief This function sets a value in member connected
     * @param _connected New value for member connected
     */
    inline eProsima_user_DllExport void connected(bool _connected)
    {
        m_connected = _connected;
    }

    /*!
     * @brief This function returns the value of member connected
     * @return Value of member connected
     */
    inline eProsima_user_DllExport bool connected() const
    {
        return m_connected;
    }

    /*!
     * @brief This function returns a reference to member connected
     * @return Reference to member connected
     */
    inline eProsima_user_DllExport bool& connected()
    {
        return m_connected;
    }
    /*!
     * @brief This function sets a value in member system_source
     * @param _system_source New value for member system_source
     */
    inline eProsima_user_DllExport void system_source(bool _system_source)
    {
        m_system_source = _system_source;
    }

    /*!
     * @brief This function returns the value of member system_source
     * @return Value of member system_source
     */
    inline eProsima_user_DllExport bool system_source() const
    {
        return m_system_source;
    }

    /*!
     * @brief This function returns a reference to member system_source
     * @return Reference to member system_source
     */
    inline eProsima_user_DllExport bool& system_source()
    {
        return m_system_source;
    }
    /*!
     * @brief This function sets a value in member priority
     * @param _priority New value for member priority
     */
    inline eProsima_user_DllExport void priority(uint8_t _priority)
    {
        m_priority = _priority;
    }

    /*!
     * @brief This function returns the value of member priority
     * @return Value of member priority
     */
    inline eProsima_user_DllExport uint8_t priority() const
    {
        return m_priority;
    }

    /*!
     * @brief This function returns a reference to member priority
     * @return Reference to member priority
     */
    inline eProsima_user_DllExport uint8_t& priority()
    {
        return m_priority;
    }
    /*!
     * @brief This function sets a value in member is_powering_off
     * @param _is_powering_off New value for member is_powering_off
     */
    inline eProsima_user_DllExport void is_powering_off(bool _is_powering_off)
    {
        m_is_powering_off = _is_powering_off;
    }

    /*!
     * @brief This function returns the value of member is_powering_off
     * @return Value of member is_powering_off
     */
    inline eProsima_user_DllExport bool is_powering_off() const
    {
        return m_is_powering_off;
    }

    /*!
     * @brief This function returns a reference to member is_powering_off
     * @return Reference to member is_powering_off
     */
    inline eProsima_user_DllExport bool& is_powering_off()
    {
        return m_is_powering_off;
    }
    /*!
     * @brief This function sets a value in member warning
     * @param _warning New value for member warning
     */
    inline eProsima_user_DllExport void warning(uint8_t _warning)
    {
        m_warning = _warning;
    }

    /*!
     * @brief This function returns the value of member warning
     * @return Value of member warning
     */
    inline eProsima_user_DllExport uint8_t warning() const
    {
        return m_warning;
    }

    /*!
     * @brief This function returns a reference to member warning
     * @return Reference to member warning
     */
    inline eProsima_user_DllExport uint8_t& warning()
    {
        return m_warning;
    }

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const battery_status_& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

private:
    uint64_t m_timestamp;
    float m_voltage_v;
    float m_voltage_filtered_v;
    float m_current_a;
    float m_current_filtered_a;
    float m_average_current_a;
    float m_discharged_mah;
    float m_remaining;
    float m_scale;
    float m_temperature;
    int32_t m_cell_count;
    std::array<float, 4> m_voltage_cell_v;
    float m_max_cell_voltage_delta;
    uint16_t m_capacity;
    uint16_t m_cycle_count;
    uint16_t m_run_time_to_empty;
    uint16_t m_average_time_to_empty;
    uint16_t m_serial_number;
    bool m_connected;
    bool m_system_source;
    uint8_t m_priority;
    bool m_is_powering_off;
    uint8_t m_warning;
            };

        }
    }
}
#endif // _BATTERY_STATUS__H_
