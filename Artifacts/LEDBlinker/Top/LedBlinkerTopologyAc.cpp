// ======================================================================
// \title  LedBlinkerTopologyAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for LedBlinker topology
// ======================================================================

#include "LedBlinker/Top/LedBlinkerTopologyAc.hpp"

namespace LedBlinker {

  namespace {

    // ----------------------------------------------------------------------
    // Component configuration objects
    // ----------------------------------------------------------------------

    namespace ConfigObjects {

      namespace health {
        Svc::Health::PingEntry pingEntries[] = {
          {
            PingEntries::blockDrv::WARN,
            PingEntries::blockDrv::FATAL,
            "blockDrv"
          },
          {
            PingEntries::cmdDisp::WARN,
            PingEntries::cmdDisp::FATAL,
            "cmdDisp"
          },
          {
            PingEntries::cmdSeq::WARN,
            PingEntries::cmdSeq::FATAL,
            "cmdSeq"
          },
          {
            PingEntries::eventLogger::WARN,
            PingEntries::eventLogger::FATAL,
            "eventLogger"
          },
          {
            PingEntries::fileDownlink::WARN,
            PingEntries::fileDownlink::FATAL,
            "fileDownlink"
          },
          {
            PingEntries::fileManager::WARN,
            PingEntries::fileManager::FATAL,
            "fileManager"
          },
          {
            PingEntries::fileUplink::WARN,
            PingEntries::fileUplink::FATAL,
            "fileUplink"
          },
          {
            PingEntries::prmDb::WARN,
            PingEntries::prmDb::FATAL,
            "prmDb"
          },
          {
            PingEntries::rateGroup1::WARN,
            PingEntries::rateGroup1::FATAL,
            "rateGroup1"
          },
          {
            PingEntries::rateGroup2::WARN,
            PingEntries::rateGroup2::FATAL,
            "rateGroup2"
          },
          {
            PingEntries::rateGroup3::WARN,
            PingEntries::rateGroup3::FATAL,
            "rateGroup3"
          },
          {
            PingEntries::tlmSend::WARN,
            PingEntries::tlmSend::FATAL,
            "tlmSend"
          },
        };
      }

    }

  }

  // ----------------------------------------------------------------------
  // Component instances
  // ----------------------------------------------------------------------

  Drv::BlockDriver blockDrv(FW_OPTIONAL_NAME("blockDrv"));

  Svc::CommandDispatcher cmdDisp(FW_OPTIONAL_NAME("cmdDisp"));

  Svc::CmdSequencer cmdSeq(FW_OPTIONAL_NAME("cmdSeq"));

  Drv::TcpClient comm(FW_OPTIONAL_NAME("comm"));

  Svc::Framer downlink(FW_OPTIONAL_NAME("downlink"));

  Svc::ActiveLogger eventLogger(FW_OPTIONAL_NAME("eventLogger"));

  Svc::AssertFatalAdapter fatalAdapter(FW_OPTIONAL_NAME("fatalAdapter"));

  Svc::FatalHandler fatalHandler(FW_OPTIONAL_NAME("fatalHandler"));

  Svc::FileDownlink fileDownlink(FW_OPTIONAL_NAME("fileDownlink"));

  Svc::FileManager fileManager(FW_OPTIONAL_NAME("fileManager"));

  Svc::FileUplink fileUplink(FW_OPTIONAL_NAME("fileUplink"));

  Svc::BufferManager fileUplinkBufferManager(FW_OPTIONAL_NAME("fileUplinkBufferManager"));

  Drv::LinuxGpioDriver gpioDriver(FW_OPTIONAL_NAME("gpioDriver"));

  Svc::Health health(FW_OPTIONAL_NAME("health"));

  Components::Led led(FW_OPTIONAL_NAME("led"));

  Svc::LinuxTime linuxTime(FW_OPTIONAL_NAME("linuxTime"));

  Svc::PrmDb prmDb(FW_OPTIONAL_NAME("prmDb"));

  Svc::ActiveRateGroup rateGroup1(FW_OPTIONAL_NAME("rateGroup1"));

  Svc::ActiveRateGroup rateGroup2(FW_OPTIONAL_NAME("rateGroup2"));

  Svc::ActiveRateGroup rateGroup3(FW_OPTIONAL_NAME("rateGroup3"));

  Svc::RateGroupDriver rateGroupDriver(FW_OPTIONAL_NAME("rateGroupDriver"));

  Svc::StaticMemory staticMemory(FW_OPTIONAL_NAME("staticMemory"));

  Svc::SystemResources systemResources(FW_OPTIONAL_NAME("systemResources"));

  Svc::PassiveTextLogger textLogger(FW_OPTIONAL_NAME("textLogger"));

  Svc::TlmChan tlmSend(FW_OPTIONAL_NAME("tlmSend"));

  Svc::Deframer uplink(FW_OPTIONAL_NAME("uplink"));

  // ----------------------------------------------------------------------
  // Helper functions
  // ----------------------------------------------------------------------

  void initComponents(const TopologyState& state) {
    blockDrv.init(QueueSizes::blockDrv, InstanceIds::blockDrv);
    cmdDisp.init(QueueSizes::cmdDisp, InstanceIds::cmdDisp);
    cmdSeq.init(QueueSizes::cmdSeq, InstanceIds::cmdSeq);
    comm.init(InstanceIds::comm);
    downlink.init(InstanceIds::downlink);
    eventLogger.init(QueueSizes::eventLogger, InstanceIds::eventLogger);
    fatalAdapter.init(InstanceIds::fatalAdapter);
    fatalHandler.init(InstanceIds::fatalHandler);
    fileDownlink.init(QueueSizes::fileDownlink, InstanceIds::fileDownlink);
    fileManager.init(QueueSizes::fileManager, InstanceIds::fileManager);
    fileUplink.init(QueueSizes::fileUplink, InstanceIds::fileUplink);
    fileUplinkBufferManager.init(InstanceIds::fileUplinkBufferManager);
    gpioDriver.init(InstanceIds::gpioDriver);
    health.init(QueueSizes::health, InstanceIds::health);
    led.init(QueueSizes::led, InstanceIds::led);
    linuxTime.init(InstanceIds::linuxTime);
    prmDb.init(QueueSizes::prmDb, InstanceIds::prmDb);
    rateGroup1.init(QueueSizes::rateGroup1, InstanceIds::rateGroup1);
    rateGroup2.init(QueueSizes::rateGroup2, InstanceIds::rateGroup2);
    rateGroup3.init(QueueSizes::rateGroup3, InstanceIds::rateGroup3);
    rateGroupDriver.init(InstanceIds::rateGroupDriver);
    staticMemory.init(InstanceIds::staticMemory);
    systemResources.init(InstanceIds::systemResources);
    textLogger.init(InstanceIds::textLogger);
    tlmSend.init(QueueSizes::tlmSend, InstanceIds::tlmSend);
    uplink.init(InstanceIds::uplink);
  }

  void setBaseIds() {
    blockDrv.setIdBase(BaseIds::blockDrv);
    rateGroup1.setIdBase(BaseIds::rateGroup1);
    rateGroup2.setIdBase(BaseIds::rateGroup2);
    rateGroup3.setIdBase(BaseIds::rateGroup3);
    cmdDisp.setIdBase(BaseIds::cmdDisp);
    cmdSeq.setIdBase(BaseIds::cmdSeq);
    fileDownlink.setIdBase(BaseIds::fileDownlink);
    fileManager.setIdBase(BaseIds::fileManager);
    fileUplink.setIdBase(BaseIds::fileUplink);
    eventLogger.setIdBase(BaseIds::eventLogger);
    tlmSend.setIdBase(BaseIds::tlmSend);
    prmDb.setIdBase(BaseIds::prmDb);
    led.setIdBase(BaseIds::led);
    health.setIdBase(BaseIds::health);
    comm.setIdBase(BaseIds::comm);
    downlink.setIdBase(BaseIds::downlink);
    fatalAdapter.setIdBase(BaseIds::fatalAdapter);
    fatalHandler.setIdBase(BaseIds::fatalHandler);
    fileUplinkBufferManager.setIdBase(BaseIds::fileUplinkBufferManager);
    linuxTime.setIdBase(BaseIds::linuxTime);
    rateGroupDriver.setIdBase(BaseIds::rateGroupDriver);
    staticMemory.setIdBase(BaseIds::staticMemory);
    textLogger.setIdBase(BaseIds::textLogger);
    uplink.setIdBase(BaseIds::uplink);
    systemResources.setIdBase(BaseIds::systemResources);
    gpioDriver.setIdBase(BaseIds::gpioDriver);
  }

  void connectComponents() {

    // Command
    cmdDisp.set_compCmdSend_OutputPort(
        0,
        cmdDisp.get_CmdDisp_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        1,
        cmdSeq.get_cmdIn_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        2,
        eventLogger.get_CmdDisp_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        3,
        fileDownlink.get_cmdIn_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        4,
        fileManager.get_cmdIn_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        5,
        health.get_CmdDisp_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        6,
        led.get_cmdIn_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        7,
        prmDb.get_CmdDisp_InputPort(0)
    );
    cmdDisp.set_compCmdSend_OutputPort(
        8,
        systemResources.get_CmdDisp_InputPort(0)
    );

    // CommandRegistration
    cmdDisp.set_CmdReg_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(0)
    );
    cmdSeq.set_cmdRegOut_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(1)
    );
    eventLogger.set_CmdReg_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(2)
    );
    fileDownlink.set_cmdRegOut_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(3)
    );
    fileManager.set_cmdRegOut_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(4)
    );
    health.set_CmdReg_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(5)
    );
    led.set_cmdRegOut_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(6)
    );
    prmDb.set_CmdReg_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(7)
    );
    systemResources.set_CmdReg_OutputPort(
        0,
        cmdDisp.get_compCmdReg_InputPort(8)
    );

    // CommandResponse
    cmdDisp.set_CmdStatus_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    cmdSeq.set_cmdResponseOut_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    eventLogger.set_CmdStatus_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    fileDownlink.set_cmdResponseOut_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    fileManager.set_cmdResponseOut_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    health.set_CmdStatus_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    led.set_cmdResponseOut_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    prmDb.set_CmdStatus_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );
    systemResources.set_CmdStatus_OutputPort(
        0,
        cmdDisp.get_compCmdStat_InputPort(0)
    );

    // Downlink
    comm.set_deallocate_OutputPort(
        0,
        staticMemory.get_bufferDeallocate_InputPort(0)
    );
    downlink.set_bufferDeallocate_OutputPort(
        0,
        fileDownlink.get_bufferReturn_InputPort(0)
    );
    downlink.set_framedAllocate_OutputPort(
        0,
        staticMemory.get_bufferAllocate_InputPort(0)
    );
    downlink.set_framedOut_OutputPort(
        0,
        comm.get_send_InputPort(0)
    );
    eventLogger.set_PktSend_OutputPort(
        0,
        downlink.get_comIn_InputPort(0)
    );
    fileDownlink.set_bufferSendOut_OutputPort(
        0,
        downlink.get_bufferIn_InputPort(0)
    );
    tlmSend.set_PktSend_OutputPort(
        0,
        downlink.get_comIn_InputPort(0)
    );

    // Events
    cmdDisp.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    cmdSeq.set_logOut_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    eventLogger.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    fatalAdapter.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    fileDownlink.set_eventOut_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    fileManager.set_eventOut_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    fileUplink.set_eventOut_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    fileUplinkBufferManager.set_eventOut_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    gpioDriver.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    health.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    led.set_logOut_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    prmDb.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    rateGroup1.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    rateGroup2.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    rateGroup3.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );
    systemResources.set_Log_OutputPort(
        0,
        eventLogger.get_LogRecv_InputPort(0)
    );

    // FaultProtection
    eventLogger.set_FatalAnnounce_OutputPort(
        0,
        fatalHandler.get_FatalReceive_InputPort(0)
    );

    // Health
    blockDrv.set_PingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(0)
    );
    cmdDisp.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(1)
    );
    cmdSeq.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(2)
    );
    eventLogger.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(3)
    );
    fileDownlink.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(4)
    );
    fileManager.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(5)
    );
    fileUplink.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(6)
    );
    health.set_PingSend_OutputPort(
        0,
        blockDrv.get_PingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        1,
        cmdDisp.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        2,
        cmdSeq.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        3,
        eventLogger.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        4,
        fileDownlink.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        5,
        fileManager.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        6,
        fileUplink.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        7,
        prmDb.get_pingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        8,
        rateGroup1.get_PingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        9,
        rateGroup2.get_PingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        10,
        rateGroup3.get_PingIn_InputPort(0)
    );
    health.set_PingSend_OutputPort(
        11,
        tlmSend.get_pingIn_InputPort(0)
    );
    prmDb.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(7)
    );
    rateGroup1.set_PingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(8)
    );
    rateGroup2.set_PingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(9)
    );
    rateGroup3.set_PingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(10)
    );
    tlmSend.set_pingOut_OutputPort(
        0,
        health.get_PingReturn_InputPort(11)
    );

    // LedConnections
    led.set_gpioSet_OutputPort(
        0,
        gpioDriver.get_gpioWrite_InputPort(0)
    );
    rateGroup1.set_RateGroupMemberOut_OutputPort(
        3,
        led.get_run_InputPort(0)
    );

    // Parameters
    led.set_prmGetOut_OutputPort(
        0,
        prmDb.get_getPrm_InputPort(0)
    );
    led.set_prmSetOut_OutputPort(
        0,
        prmDb.get_setPrm_InputPort(0)
    );

    // RateGroups
    blockDrv.set_CycleOut_OutputPort(
        0,
        rateGroupDriver.get_CycleIn_InputPort(0)
    );
    rateGroup1.set_RateGroupMemberOut_OutputPort(
        0,
        tlmSend.get_Run_InputPort(0)
    );
    rateGroup1.set_RateGroupMemberOut_OutputPort(
        1,
        fileDownlink.get_Run_InputPort(0)
    );
    rateGroup1.set_RateGroupMemberOut_OutputPort(
        2,
        systemResources.get_run_InputPort(0)
    );
    rateGroup2.set_RateGroupMemberOut_OutputPort(
        0,
        cmdSeq.get_schedIn_InputPort(0)
    );
    rateGroup3.set_RateGroupMemberOut_OutputPort(
        0,
        health.get_Run_InputPort(0)
    );
    rateGroup3.set_RateGroupMemberOut_OutputPort(
        1,
        blockDrv.get_Sched_InputPort(0)
    );
    rateGroup3.set_RateGroupMemberOut_OutputPort(
        2,
        fileUplinkBufferManager.get_schedIn_InputPort(0)
    );
    rateGroupDriver.set_CycleOut_OutputPort(
        0,
        rateGroup1.get_CycleIn_InputPort(0)
    );
    rateGroupDriver.set_CycleOut_OutputPort(
        1,
        rateGroup2.get_CycleIn_InputPort(0)
    );
    rateGroupDriver.set_CycleOut_OutputPort(
        2,
        rateGroup3.get_CycleIn_InputPort(0)
    );

    // Sequencer
    cmdDisp.set_seqCmdStatus_OutputPort(
        0,
        cmdSeq.get_cmdResponseIn_InputPort(0)
    );
    cmdSeq.set_comCmdOut_OutputPort(
        0,
        cmdDisp.get_seqCmdBuff_InputPort(0)
    );

    // Telemetry
    blockDrv.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    cmdDisp.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    cmdSeq.set_tlmOut_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    fileDownlink.set_tlmOut_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    fileManager.set_tlmOut_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    fileUplink.set_tlmOut_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    fileUplinkBufferManager.set_tlmOut_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    health.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    led.set_tlmOut_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    rateGroup1.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    rateGroup2.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    rateGroup3.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );
    systemResources.set_Tlm_OutputPort(
        0,
        tlmSend.get_TlmRecv_InputPort(0)
    );

    // TextEvents
    cmdDisp.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    cmdSeq.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    eventLogger.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    fatalAdapter.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    fileDownlink.set_textEventOut_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    fileManager.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    fileUplink.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    fileUplinkBufferManager.set_textEventOut_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    gpioDriver.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    health.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    led.set_logTextOut_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    prmDb.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    rateGroup1.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    rateGroup2.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    rateGroup3.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );
    systemResources.set_LogText_OutputPort(
        0,
        textLogger.get_TextLogger_InputPort(0)
    );

    // Time
    blockDrv.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    cmdDisp.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    cmdSeq.set_timeCaller_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    eventLogger.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    fatalAdapter.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    fileDownlink.set_timeCaller_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    fileManager.set_timeCaller_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    fileUplink.set_timeCaller_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    fileUplinkBufferManager.set_timeCaller_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    gpioDriver.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    health.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    led.set_timeCaller_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    prmDb.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    rateGroup1.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    rateGroup2.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    rateGroup3.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );
    systemResources.set_Time_OutputPort(
        0,
        linuxTime.get_timeGetPort_InputPort(0)
    );

    // Uplink
    cmdDisp.set_seqCmdStatus_OutputPort(
        1,
        uplink.get_cmdResponseIn_InputPort(0)
    );
    comm.set_allocate_OutputPort(
        0,
        staticMemory.get_bufferAllocate_InputPort(1)
    );
    comm.set_recv_OutputPort(
        0,
        uplink.get_framedIn_InputPort(0)
    );
    fileUplink.set_bufferSendOut_OutputPort(
        0,
        fileUplinkBufferManager.get_bufferSendIn_InputPort(0)
    );
    uplink.set_bufferAllocate_OutputPort(
        0,
        fileUplinkBufferManager.get_bufferGetCallee_InputPort(0)
    );
    uplink.set_bufferDeallocate_OutputPort(
        0,
        fileUplinkBufferManager.get_bufferSendIn_InputPort(0)
    );
    uplink.set_bufferOut_OutputPort(
        0,
        fileUplink.get_bufferSendIn_InputPort(0)
    );
    uplink.set_comOut_OutputPort(
        0,
        cmdDisp.get_seqCmdBuff_InputPort(1)
    );
    uplink.set_framedDeallocate_OutputPort(
        0,
        staticMemory.get_bufferDeallocate_InputPort(1)
    );
  }

  void regCommands() {
    cmdDisp.regCommands();
    cmdSeq.regCommands();
    eventLogger.regCommands();
    fileDownlink.regCommands();
    fileManager.regCommands();
    health.regCommands();
    led.regCommands();
    prmDb.regCommands();
    systemResources.regCommands();
  }

  void loadParameters() {
    led.loadParameters();
  }

  void startTasks(const TopologyState& state) {
    blockDrv.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::blockDrv),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::blockDrv),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::blockDrv)
    );
    cmdDisp.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::cmdDisp),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::cmdDisp),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::cmdDisp)
    );
    cmdSeq.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::cmdSeq),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::cmdSeq),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::cmdSeq)
    );
    eventLogger.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::eventLogger),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::eventLogger),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::eventLogger)
    );
    fileDownlink.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::fileDownlink),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::fileDownlink),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::fileDownlink)
    );
    fileManager.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::fileManager),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::fileManager),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::fileManager)
    );
    fileUplink.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::fileUplink),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::fileUplink),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::fileUplink)
    );
    led.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::led),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::led),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::led)
    );
    prmDb.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::prmDb),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::prmDb),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::prmDb)
    );
    rateGroup1.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::rateGroup1),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::rateGroup1),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::rateGroup1)
    );
    rateGroup2.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::rateGroup2),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::rateGroup2),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::rateGroup2)
    );
    rateGroup3.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::rateGroup3),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::rateGroup3),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::rateGroup3)
    );
    tlmSend.start(
      static_cast<NATIVE_UINT_TYPE>(Priorities::tlmSend),
      static_cast<NATIVE_UINT_TYPE>(StackSizes::tlmSend),
      Os::Task::TASK_DEFAULT, // Default CPU
      static_cast<NATIVE_UINT_TYPE>(TaskIds::tlmSend)
    );
  }

  void stopTasks(const TopologyState& state) {
    blockDrv.exit();
    cmdDisp.exit();
    cmdSeq.exit();
    eventLogger.exit();
    fileDownlink.exit();
    fileManager.exit();
    fileUplink.exit();
    led.exit();
    prmDb.exit();
    rateGroup1.exit();
    rateGroup2.exit();
    rateGroup3.exit();
    tlmSend.exit();
  }

  void freeThreads(const TopologyState& state) {
    (void) blockDrv.ActiveComponentBase::join(nullptr);
    (void) cmdDisp.ActiveComponentBase::join(nullptr);
    (void) cmdSeq.ActiveComponentBase::join(nullptr);
    (void) eventLogger.ActiveComponentBase::join(nullptr);
    (void) fileDownlink.ActiveComponentBase::join(nullptr);
    (void) fileManager.ActiveComponentBase::join(nullptr);
    (void) fileUplink.ActiveComponentBase::join(nullptr);
    (void) led.ActiveComponentBase::join(nullptr);
    (void) prmDb.ActiveComponentBase::join(nullptr);
    (void) rateGroup1.ActiveComponentBase::join(nullptr);
    (void) rateGroup2.ActiveComponentBase::join(nullptr);
    (void) rateGroup3.ActiveComponentBase::join(nullptr);
    (void) tlmSend.ActiveComponentBase::join(nullptr);
  }

  // ----------------------------------------------------------------------
  // Setup and teardown functions
  // ----------------------------------------------------------------------

  void setup(const TopologyState& state) {
    initComponents(state);
    setBaseIds();
    connectComponents();
    regCommands();
    loadParameters();
    startTasks(state);
  }

  void teardown(const TopologyState& state) {
    stopTasks(state);
    freeThreads(state);
  }

}