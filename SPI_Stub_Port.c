// #############################################################################
// #### Copyright ##############################################################
// #############################################################################

/*
 * Copyright 2024 BaSSeM
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// #############################################################################
// #### Description ############################################################
// #############################################################################

// #############################################################################
// #### Control Include(s) #####################################################
// #############################################################################

#include "Platform.h"

// #############################################################################
// #### Control Macro(s) #######################################################
// #############################################################################

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

#ifdef SPI_STUB

// #############################################################################
// #### Include(s) #############################################################
// #############################################################################

    #include "../../SPI_Internal.h"
    #include "SPI_Stub_Port.h"

// #############################################################################
// #### Private Macro(s) #######################################################
// #############################################################################

// #############################################################################
// #### Private Type(s) ########################################################
// #############################################################################

// #############################################################################
// #### Private Method(s) Prototype ############################################
// #############################################################################

// #############################################################################
// #### Private Variable(s) ####################################################
// #############################################################################

// #############################################################################
// #### Private Method(s) ######################################################
// #############################################################################

// #############################################################################
// #### Public Method(s) #######################################################
// #############################################################################

SPI_Status_t SPI_IsValid( SPI_t SPI )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( SPI=%d )", __FUNCTION__, 1 + SPI );
        switch ( SPI )
        {
            case SPI_1:
                SPI_Status = SPI_Status_Success;
                break;
            default:
                SPI_Status = SPI_Status_ArgumentInvalid;
                break;
        }
    }
    while ( 0 );
    return SPI_Status;
}

SPI_Status_t SPI_Instance_Initialize( SPI_Instance_t * SPI_Instance )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( Instance=%p )", __FUNCTION__, SPI_Instance );
        // TODO
        SPI_Status = SPI_Status_Success;
    }
    while ( 0 );
    return SPI_Status;
}

SPI_Status_t SPI_Instance_DeInitialize( SPI_Instance_t * SPI_Instance )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( Instance=%p )", __FUNCTION__, SPI_Instance );
        // TODO
        SPI_Status = SPI_Status_Success;
    }
    while ( 0 );
    return SPI_Status;
}

SPI_Status_t SPI_Instance_Cycle( SPI_Instance_t * SPI_Instance )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( Instance=%p )", __FUNCTION__, SPI_Instance );
        // TODO
        SPI_Status = SPI_Status_Success;
    }
    while ( 0 );
    return SPI_Status;
}

SPI_Status_t SPI_Instance_Write( SPI_Instance_t * SPI_Instance, SPI_Data_t * SPI_Data, SPI_DataLength_t SPI_DataLength )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( Instance=%p, Data=%p, Length=%d )", __FUNCTION__, SPI_Instance, SPI_Data, SPI_DataLength );
        // TODO
        SPI_Status = SPI_Status_Success;
    }
    while ( 0 );
    return SPI_Status;
}

SPI_Status_t SPI_Instance_Read( SPI_Instance_t * SPI_Instance, SPI_Data_t * SPI_Data, SPI_DataLength_t SPI_DataLength )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( Instance=%p, Data=%p, Length=%d )", __FUNCTION__, SPI_Instance, SPI_Data, SPI_DataLength );
        // TODO
        SPI_Status = SPI_Status_Success;
    }
    while ( 0 );
    return SPI_Status;
}

SPI_Status_t SPI_Instance_Transaction( SPI_Instance_t * SPI_Instance, SPI_Data_t * SPI_DataTx, SPI_DataLength_t SPI_DataTxLength, SPI_Data_t * SPI_DataRx, SPI_DataLength_t SPI_DataRxLength )
{
    SPI_Status_t SPI_Status = SPI_Status_Error;
    do
    {
        SPI_Trace( "%s( Instance=%p, TX={Data=%p, Length=%d} RX={Data=%p, Length=%d} )", __FUNCTION__, SPI_Instance, SPI_DataTx, SPI_DataTxLength, SPI_DataRx, SPI_DataRxLength );
        // TODO
        SPI_Status = SPI_Status_Success;
    }
    while ( 0 );
    return SPI_Status;
}

// #############################################################################
// #### Public Variable(s) #####################################################
// #############################################################################

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

#endif /* SPI_STUB */

// #############################################################################
// #### END OF FILE ############################################################
// #############################################################################
