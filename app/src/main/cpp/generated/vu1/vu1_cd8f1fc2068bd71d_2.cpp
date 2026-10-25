#include "ps2_vu1_impl.inl"

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0xCD8F1FC2068BD71Dull, 5u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x13E0u: goto seg_13E0;
    case 0x13E8u: goto pc_13E8;
    case 0x13F0u: goto pc_13F0;
    case 0x13F8u: goto pc_13F8;
    case 0x1400u: goto pc_1400;
    case 0x1408u: goto pc_1408;
    case 0x1410u: goto pc_1410;
    case 0x1418u: goto pc_1418;
    case 0x1420u: goto pc_1420;
    case 0x1428u: goto pc_1428;
    case 0x1430u: goto pc_1430;
    case 0x1438u: goto pc_1438;
    case 0x1440u: goto pc_1440;
    case 0x1448u: goto pc_1448;
    case 0x1450u: goto pc_1450;
    case 0x1458u: goto pc_1458;
    case 0x1460u: goto pc_1460;
    case 0x1468u: goto pc_1468;
    case 0x1470u: goto pc_1470;
    case 0x1478u: goto pc_1478;
    case 0x1480u: goto pc_1480;
    case 0x1488u: goto pc_1488;
    case 0x1490u: goto pc_1490;
    case 0x1498u: goto pc_1498;
    case 0x14A0u: goto pc_14A0;
    case 0x14A8u: goto pc_14A8;
    case 0x14B0u: goto pc_14B0;
    case 0x14B8u: goto pc_14B8;
    case 0x14C0u: goto pc_14C0;
    case 0x14C8u: goto pc_14C8;
    case 0x14D0u: goto pc_14D0;
    case 0x14D8u: goto pc_14D8;
    case 0x14E0u: goto pc_14E0;
    case 0x14E8u: goto pc_14E8;
    case 0x14F0u: goto pc_14F0;
    case 0x14F8u: goto pc_14F8;
    case 0x1500u: goto pc_1500;
    case 0x1508u: goto pc_1508;
    case 0x1510u: goto pc_1510;
    case 0x1518u: goto pc_1518;
    case 0x1520u: goto pc_1520;
    case 0x1528u: goto pc_1528;
    case 0x1530u: goto pc_1530;
    case 0x1538u: goto pc_1538;
    case 0x1540u: goto pc_1540;
    case 0x1548u: goto pc_1548;
    case 0x1550u: goto pc_1550;
    case 0x1558u: goto pc_1558;
    case 0x1560u: goto pc_1560;
    case 0x1568u: goto pc_1568;
    case 0x1570u: goto pc_1570;
    case 0x1578u: goto pc_1578;
    case 0x1580u: goto pc_1580;
    case 0x1588u: goto pc_1588;
    case 0x1590u: goto pc_1590;
    case 0x1598u: goto pc_1598;
    case 0x15A0u: goto pc_15A0;
    case 0x15A8u: goto pc_15A8;
    case 0x15B0u: goto pc_15B0;
    case 0x15B8u: goto pc_15B8;
    case 0x15C0u: goto pc_15C0;
    case 0x15C8u: goto pc_15C8;
    case 0x15D0u: goto pc_15D0;
    case 0x15D8u: goto pc_15D8;
    case 0x15E0u: goto pc_15E0;
    case 0x15E8u: goto pc_15E8;
    case 0x15F0u: goto pc_15F0;
    case 0x15F8u: goto pc_15F8;
    case 0x1600u: goto pc_1600;
    case 0x1608u: goto pc_1608;
    case 0x1610u: goto pc_1610;
    case 0x1618u: goto pc_1618;
    case 0x1620u: goto pc_1620;
    case 0x1628u: goto pc_1628;
    case 0x1630u: goto pc_1630;
    case 0x1638u: goto pc_1638;
    case 0x1640u: goto pc_1640;
    case 0x1648u: goto pc_1648;
    case 0x1650u: goto pc_1650;
    case 0x1658u: goto pc_1658;
    case 0x1660u: goto pc_1660;
    case 0x1668u: goto pc_1668;
    case 0x1670u: goto pc_1670;
    case 0x1678u: goto pc_1678;
    case 0x1680u: goto pc_1680;
    case 0x1688u: goto pc_1688;
    case 0x1690u: goto pc_1690;
    case 0x1698u: goto pc_1698;
    case 0x16A0u: goto pc_16A0;
    case 0x16A8u: goto pc_16A8;
    case 0x16B0u: goto pc_16B0;
    case 0x16B8u: goto pc_16B8;
    case 0x16C0u: goto pc_16C0;
    case 0x16C8u: goto pc_16C8;
    case 0x16D0u: goto pc_16D0;
    case 0x16D8u: goto pc_16D8;
    case 0x16E0u: goto pc_16E0;
    case 0x16E8u: goto pc_16E8;
    case 0x16F0u: goto pc_16F0;
    case 0x16F8u: goto pc_16F8;
    case 0x1700u: goto pc_1700;
    case 0x1708u: goto pc_1708;
    case 0x1710u: goto pc_1710;
    case 0x1718u: goto pc_1718;
    case 0x1720u: goto pc_1720;
    case 0x1728u: goto pc_1728;
    case 0x1730u: goto pc_1730;
    case 0x1738u: goto pc_1738;
    case 0x1740u: goto pc_1740;
    case 0x1748u: goto pc_1748;
    case 0x1750u: goto pc_1750;
    case 0x1758u: goto pc_1758;
    case 0x1760u: goto pc_1760;
    case 0x1768u: goto pc_1768;
    case 0x1770u: goto pc_1770;
    case 0x1778u: goto pc_1778;
    case 0x1780u: goto pc_1780;
    case 0x1788u: goto pc_1788;
    case 0x1790u: goto pc_1790;
    case 0x1798u: goto pc_1798;
    case 0x17A0u: goto pc_17A0;
    case 0x17A8u: goto pc_17A8;
    case 0x17B0u: goto pc_17B0;
    case 0x17B8u: goto pc_17B8;
    case 0x17C0u: goto pc_17C0;
    case 0x17C8u: goto pc_17C8;
    case 0x17D0u: goto pc_17D0;
    case 0x17D8u: goto pc_17D8;
    default: return StepResult::Fallback;
    }
pc_13E0:
        if (cyc >= budget) { epc = 0x13E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_13E8:
        if (cyc >= budget) { epc = 0x13E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_13F0:
        if (cyc >= budget) { epc = 0x13F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_13F8:
        if (cyc >= budget) { epc = 0x13F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1400:
        if (cyc >= budget) { epc = 0x1400u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1408:
        if (cyc >= budget) { epc = 0x1408u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1410:
        if (cyc >= budget) { epc = 0x1410u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1418:
        if (cyc >= budget) { epc = 0x1418u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1420:
        if (cyc >= budget) { epc = 0x1420u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1428:
        if (cyc >= budget) { epc = 0x1428u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1430:
        if (cyc >= budget) { epc = 0x1430u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1438:
        if (cyc >= budget) { epc = 0x1438u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1440:
        if (cyc >= budget) { epc = 0x1440u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1448:
        if (cyc >= budget) { epc = 0x1448u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1450:
        if (cyc >= budget) { epc = 0x1450u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1458:
        if (cyc >= budget) { epc = 0x1458u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1460:
        if (cyc >= budget) { epc = 0x1460u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1468:
        if (cyc >= budget) { epc = 0x1468u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1470:
        if (cyc >= budget) { epc = 0x1470u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1478:
        if (cyc >= budget) { epc = 0x1478u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1480:
        if (cyc >= budget) { epc = 0x1480u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1488:
        if (cyc >= budget) { epc = 0x1488u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1490:
        if (cyc >= budget) { epc = 0x1490u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1498:
        if (cyc >= budget) { epc = 0x1498u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14A0:
        if (cyc >= budget) { epc = 0x14A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14A8:
        if (cyc >= budget) { epc = 0x14A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14B0:
        if (cyc >= budget) { epc = 0x14B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14B8:
        if (cyc >= budget) { epc = 0x14B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14C0:
        if (cyc >= budget) { epc = 0x14C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14C8:
        if (cyc >= budget) { epc = 0x14C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14D0:
        if (cyc >= budget) { epc = 0x14D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14D8:
        if (cyc >= budget) { epc = 0x14D8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14E0:
        if (cyc >= budget) { epc = 0x14E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14E8:
        if (cyc >= budget) { epc = 0x14E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14F0:
        if (cyc >= budget) { epc = 0x14F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_14F8:
        if (cyc >= budget) { epc = 0x14F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1500:
        if (cyc >= budget) { epc = 0x1500u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1508:
        if (cyc >= budget) { epc = 0x1508u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1510:
        if (cyc >= budget) { epc = 0x1510u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1518:
        if (cyc >= budget) { epc = 0x1518u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1520:
        if (cyc >= budget) { epc = 0x1520u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1528:
        if (cyc >= budget) { epc = 0x1528u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1530:
        if (cyc >= budget) { epc = 0x1530u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1538:
        if (cyc >= budget) { epc = 0x1538u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1540:
        if (cyc >= budget) { epc = 0x1540u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1548:
        if (cyc >= budget) { epc = 0x1548u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1550:
        if (cyc >= budget) { epc = 0x1550u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1558:
        if (cyc >= budget) { epc = 0x1558u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1560:
        if (cyc >= budget) { epc = 0x1560u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1568:
        if (cyc >= budget) { epc = 0x1568u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1570:
        if (cyc >= budget) { epc = 0x1570u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1578:
        if (cyc >= budget) { epc = 0x1578u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1580:
        if (cyc >= budget) { epc = 0x1580u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1588:
        if (cyc >= budget) { epc = 0x1588u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1590:
        if (cyc >= budget) { epc = 0x1590u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1598:
        if (cyc >= budget) { epc = 0x1598u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15A0:
        if (cyc >= budget) { epc = 0x15A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15A8:
        if (cyc >= budget) { epc = 0x15A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15B0:
        if (cyc >= budget) { epc = 0x15B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15B8:
        if (cyc >= budget) { epc = 0x15B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15C0:
        if (cyc >= budget) { epc = 0x15C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15C8:
        if (cyc >= budget) { epc = 0x15C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15D0:
        if (cyc >= budget) { epc = 0x15D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15D8:
        if (cyc >= budget) { epc = 0x15D8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15E0:
        if (cyc >= budget) { epc = 0x15E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15E8:
        if (cyc >= budget) { epc = 0x15E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15F0:
        if (cyc >= budget) { epc = 0x15F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_15F8:
        if (cyc >= budget) { epc = 0x15F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1600:
        if (cyc >= budget) { epc = 0x1600u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1608:
        if (cyc >= budget) { epc = 0x1608u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1610:
        if (cyc >= budget) { epc = 0x1610u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1618:
        if (cyc >= budget) { epc = 0x1618u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1620:
        if (cyc >= budget) { epc = 0x1620u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1628:
        if (cyc >= budget) { epc = 0x1628u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1630:
        if (cyc >= budget) { epc = 0x1630u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1638:
        if (cyc >= budget) { epc = 0x1638u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1640:
        if (cyc >= budget) { epc = 0x1640u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1648:
        if (cyc >= budget) { epc = 0x1648u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1650:
        if (cyc >= budget) { epc = 0x1650u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1658:
        if (cyc >= budget) { epc = 0x1658u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1660:
        if (cyc >= budget) { epc = 0x1660u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1668:
        if (cyc >= budget) { epc = 0x1668u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1670:
        if (cyc >= budget) { epc = 0x1670u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1678:
        if (cyc >= budget) { epc = 0x1678u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1680:
        if (cyc >= budget) { epc = 0x1680u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1688:
        if (cyc >= budget) { epc = 0x1688u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1690:
        if (cyc >= budget) { epc = 0x1690u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1698:
        if (cyc >= budget) { epc = 0x1698u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16A0:
        if (cyc >= budget) { epc = 0x16A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16A8:
        if (cyc >= budget) { epc = 0x16A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16B0:
        if (cyc >= budget) { epc = 0x16B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16B8:
        if (cyc >= budget) { epc = 0x16B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16C0:
        if (cyc >= budget) { epc = 0x16C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16C8:
        if (cyc >= budget) { epc = 0x16C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16D0:
        if (cyc >= budget) { epc = 0x16D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16D8:
        if (cyc >= budget) { epc = 0x16D8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16E0:
        if (cyc >= budget) { epc = 0x16E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16E8:
        if (cyc >= budget) { epc = 0x16E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16F0:
        if (cyc >= budget) { epc = 0x16F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_16F8:
        if (cyc >= budget) { epc = 0x16F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1700:
        if (cyc >= budget) { epc = 0x1700u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1708:
        if (cyc >= budget) { epc = 0x1708u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1710:
        if (cyc >= budget) { epc = 0x1710u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1718:
        if (cyc >= budget) { epc = 0x1718u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1720:
        if (cyc >= budget) { epc = 0x1720u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1728:
        if (cyc >= budget) { epc = 0x1728u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1730:
        if (cyc >= budget) { epc = 0x1730u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1738:
        if (cyc >= budget) { epc = 0x1738u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1740:
        if (cyc >= budget) { epc = 0x1740u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1748:
        if (cyc >= budget) { epc = 0x1748u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1750:
        if (cyc >= budget) { epc = 0x1750u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1758:
        if (cyc >= budget) { epc = 0x1758u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1760:
        if (cyc >= budget) { epc = 0x1760u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1768:
        if (cyc >= budget) { epc = 0x1768u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1770:
        if (cyc >= budget) { epc = 0x1770u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1778:
        if (cyc >= budget) { epc = 0x1778u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1780:
        if (cyc >= budget) { epc = 0x1780u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1788:
        if (cyc >= budget) { epc = 0x1788u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1790:
        if (cyc >= budget) { epc = 0x1790u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1798:
        if (cyc >= budget) { epc = 0x1798u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17A0:
        if (cyc >= budget) { epc = 0x17A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17A8:
        if (cyc >= budget) { epc = 0x17A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17B0:
        if (cyc >= budget) { epc = 0x17B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17B8:
        if (cyc >= budget) { epc = 0x17B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17C0:
        if (cyc >= budget) { epc = 0x17C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17C8:
        if (cyc >= budget) { epc = 0x17C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17D0:
        if (cyc >= budget) { epc = 0x17D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17D8:
        if (cyc >= budget) { epc = 0x17D8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x17E0u; goto exit_continue; }
seg_13E0:
        if (cyc + 131u > budget) goto pc_13E0;
    {
        uint64_t s13E0_0 = 0u, s13E0_1 = 0u, s13E0_2 = 0u, s13E0_3 = 0u, s13E0_4 = 0u, s13E0_5 = 0u, s13E0_6 = 0u, s13E0_7 = 0u, s13E0_8 = 0u, s13E0_9 = 0u, s13E0_10 = 0u, s13E0_11 = 0u, s13E0_12 = 0u, s13E0_13 = 0u, s13E0_14 = 0u, s13E0_15 = 0u, s13E0_16 = 0u, s13E0_17 = 0u, s13E0_18 = 0u, s13E0_19 = 0u, s13E0_20 = 0u, s13E0_21 = 0u, s13E0_22 = 0u, s13E0_23 = 0u, s13E0_24 = 0u, s13E0_25 = 0u, s13E0_26 = 0u, s13E0_27 = 0u, s13E0_28 = 0u, s13E0_29 = 0u, s13E0_30 = 0u, s13E0_31 = 0u, s13E0_32 = 0u, s13E0_33 = 0u, s13E0_34 = 0u, s13E0_35 = 0u, s13E0_36 = 0u, s13E0_37 = 0u, s13E0_38 = 0u, s13E0_39 = 0u, s13E0_40 = 0u, s13E0_41 = 0u, s13E0_42 = 0u, s13E0_43 = 0u, s13E0_44 = 0u, s13E0_45 = 0u, s13E0_46 = 0u, s13E0_47 = 0u, s13E0_48 = 0u, s13E0_49 = 0u, s13E0_50 = 0u, s13E0_51 = 0u, s13E0_52 = 0u, s13E0_53 = 0u, s13E0_54 = 0u, s13E0_55 = 0u, s13E0_56 = 0u, s13E0_57 = 0u, s13E0_58 = 0u, s13E0_59 = 0u, s13E0_60 = 0u, s13E0_61 = 0u, s13E0_62 = 0u, s13E0_63 = 0u, s13E0_64 = 0u, s13E0_65 = 0u, s13E0_66 = 0u, s13E0_67 = 0u, s13E0_68 = 0u, s13E0_69 = 0u, s13E0_70 = 0u, s13E0_71 = 0u, s13E0_72 = 0u, s13E0_73 = 0u, s13E0_74 = 0u, s13E0_75 = 0u, s13E0_76 = 0u, s13E0_77 = 0u, s13E0_78 = 0u, s13E0_79 = 0u, s13E0_80 = 0u, s13E0_81 = 0u, s13E0_82 = 0u, s13E0_83 = 0u, s13E0_84 = 0u, s13E0_85 = 0u, s13E0_86 = 0u, s13E0_87 = 0u, s13E0_88 = 0u, s13E0_89 = 0u, s13E0_90 = 0u, s13E0_91 = 0u, s13E0_92 = 0u, s13E0_93 = 0u, s13E0_94 = 0u, s13E0_95 = 0u, s13E0_96 = 0u, s13E0_97 = 0u, s13E0_98 = 0u, s13E0_99 = 0u, s13E0_100 = 0u, s13E0_101 = 0u, s13E0_102 = 0u, s13E0_103 = 0u, s13E0_104 = 0u, s13E0_105 = 0u, s13E0_106 = 0u, s13E0_107 = 0u, s13E0_108 = 0u, s13E0_109 = 0u, s13E0_110 = 0u, s13E0_111 = 0u, s13E0_112 = 0u, s13E0_113 = 0u, s13E0_114 = 0u, s13E0_115 = 0u, s13E0_116 = 0u, s13E0_117 = 0u, s13E0_118 = 0u, s13E0_119 = 0u, s13E0_120 = 0u, s13E0_121 = 0u, s13E0_122 = 0u, s13E0_123 = 0u, s13E0_124 = 0u, s13E0_125 = 0u, s13E0_126 = 0u, s13E0_127 = 0u;
        // pc_13E0
        s13E0_0 = cyc;
        {
        }
        ++cyc;
        // pc_13E8
        s13E0_1 = cyc;
        {
        }
        ++cyc;
        // pc_13F0
        s13E0_2 = cyc;
        {
        }
        ++cyc;
        // pc_13F8
        s13E0_3 = cyc;
        {
        }
        ++cyc;
        // pc_1400
        s13E0_4 = cyc;
        {
        }
        ++cyc;
        // pc_1408
        s13E0_5 = cyc;
        {
        }
        ++cyc;
        // pc_1410
        s13E0_6 = cyc;
        {
        }
        ++cyc;
        // pc_1418
        s13E0_7 = cyc;
        {
        }
        ++cyc;
        // pc_1420
        s13E0_8 = cyc;
        {
        }
        ++cyc;
        // pc_1428
        s13E0_9 = cyc;
        {
        }
        ++cyc;
        // pc_1430
        s13E0_10 = cyc;
        {
        }
        ++cyc;
        // pc_1438
        s13E0_11 = cyc;
        {
        }
        ++cyc;
        // pc_1440
        s13E0_12 = cyc;
        {
        }
        ++cyc;
        // pc_1448
        s13E0_13 = cyc;
        {
        }
        ++cyc;
        // pc_1450
        s13E0_14 = cyc;
        {
        }
        ++cyc;
        // pc_1458
        s13E0_15 = cyc;
        {
        }
        ++cyc;
        // pc_1460
        s13E0_16 = cyc;
        {
        }
        ++cyc;
        // pc_1468
        s13E0_17 = cyc;
        {
        }
        ++cyc;
        // pc_1470
        s13E0_18 = cyc;
        {
        }
        ++cyc;
        // pc_1478
        s13E0_19 = cyc;
        {
        }
        ++cyc;
        // pc_1480
        s13E0_20 = cyc;
        {
        }
        ++cyc;
        // pc_1488
        s13E0_21 = cyc;
        {
        }
        ++cyc;
        // pc_1490
        s13E0_22 = cyc;
        {
        }
        ++cyc;
        // pc_1498
        s13E0_23 = cyc;
        {
        }
        ++cyc;
        // pc_14A0
        s13E0_24 = cyc;
        {
        }
        ++cyc;
        // pc_14A8
        s13E0_25 = cyc;
        {
        }
        ++cyc;
        // pc_14B0
        s13E0_26 = cyc;
        {
        }
        ++cyc;
        // pc_14B8
        s13E0_27 = cyc;
        {
        }
        ++cyc;
        // pc_14C0
        s13E0_28 = cyc;
        {
        }
        ++cyc;
        // pc_14C8
        s13E0_29 = cyc;
        {
        }
        ++cyc;
        // pc_14D0
        s13E0_30 = cyc;
        {
        }
        ++cyc;
        // pc_14D8
        s13E0_31 = cyc;
        {
        }
        ++cyc;
        // pc_14E0
        s13E0_32 = cyc;
        {
        }
        ++cyc;
        // pc_14E8
        s13E0_33 = cyc;
        {
        }
        ++cyc;
        // pc_14F0
        s13E0_34 = cyc;
        {
        }
        ++cyc;
        // pc_14F8
        s13E0_35 = cyc;
        {
        }
        ++cyc;
        // pc_1500
        s13E0_36 = cyc;
        {
        }
        ++cyc;
        // pc_1508
        s13E0_37 = cyc;
        {
        }
        ++cyc;
        // pc_1510
        s13E0_38 = cyc;
        {
        }
        ++cyc;
        // pc_1518
        s13E0_39 = cyc;
        {
        }
        ++cyc;
        // pc_1520
        s13E0_40 = cyc;
        {
        }
        ++cyc;
        // pc_1528
        s13E0_41 = cyc;
        {
        }
        ++cyc;
        // pc_1530
        s13E0_42 = cyc;
        {
        }
        ++cyc;
        // pc_1538
        s13E0_43 = cyc;
        {
        }
        ++cyc;
        // pc_1540
        s13E0_44 = cyc;
        {
        }
        ++cyc;
        // pc_1548
        s13E0_45 = cyc;
        {
        }
        ++cyc;
        // pc_1550
        s13E0_46 = cyc;
        {
        }
        ++cyc;
        // pc_1558
        s13E0_47 = cyc;
        {
        }
        ++cyc;
        // pc_1560
        s13E0_48 = cyc;
        {
        }
        ++cyc;
        // pc_1568
        s13E0_49 = cyc;
        {
        }
        ++cyc;
        // pc_1570
        s13E0_50 = cyc;
        {
        }
        ++cyc;
        // pc_1578
        s13E0_51 = cyc;
        {
        }
        ++cyc;
        // pc_1580
        s13E0_52 = cyc;
        {
        }
        ++cyc;
        // pc_1588
        s13E0_53 = cyc;
        {
        }
        ++cyc;
        // pc_1590
        s13E0_54 = cyc;
        {
        }
        ++cyc;
        // pc_1598
        s13E0_55 = cyc;
        {
        }
        ++cyc;
        // pc_15A0
        s13E0_56 = cyc;
        {
        }
        ++cyc;
        // pc_15A8
        s13E0_57 = cyc;
        {
        }
        ++cyc;
        // pc_15B0
        s13E0_58 = cyc;
        {
        }
        ++cyc;
        // pc_15B8
        s13E0_59 = cyc;
        {
        }
        ++cyc;
        // pc_15C0
        s13E0_60 = cyc;
        {
        }
        ++cyc;
        // pc_15C8
        s13E0_61 = cyc;
        {
        }
        ++cyc;
        // pc_15D0
        s13E0_62 = cyc;
        {
        }
        ++cyc;
        // pc_15D8
        s13E0_63 = cyc;
        {
        }
        ++cyc;
        // pc_15E0
        s13E0_64 = cyc;
        {
        }
        ++cyc;
        // pc_15E8
        s13E0_65 = cyc;
        {
        }
        ++cyc;
        // pc_15F0
        s13E0_66 = cyc;
        {
        }
        ++cyc;
        // pc_15F8
        s13E0_67 = cyc;
        {
        }
        ++cyc;
        // pc_1600
        s13E0_68 = cyc;
        {
        }
        ++cyc;
        // pc_1608
        s13E0_69 = cyc;
        {
        }
        ++cyc;
        // pc_1610
        s13E0_70 = cyc;
        {
        }
        ++cyc;
        // pc_1618
        s13E0_71 = cyc;
        {
        }
        ++cyc;
        // pc_1620
        s13E0_72 = cyc;
        {
        }
        ++cyc;
        // pc_1628
        s13E0_73 = cyc;
        {
        }
        ++cyc;
        // pc_1630
        s13E0_74 = cyc;
        {
        }
        ++cyc;
        // pc_1638
        s13E0_75 = cyc;
        {
        }
        ++cyc;
        // pc_1640
        s13E0_76 = cyc;
        {
        }
        ++cyc;
        // pc_1648
        s13E0_77 = cyc;
        {
        }
        ++cyc;
        // pc_1650
        s13E0_78 = cyc;
        {
        }
        ++cyc;
        // pc_1658
        s13E0_79 = cyc;
        {
        }
        ++cyc;
        // pc_1660
        s13E0_80 = cyc;
        {
        }
        ++cyc;
        // pc_1668
        s13E0_81 = cyc;
        {
        }
        ++cyc;
        // pc_1670
        s13E0_82 = cyc;
        {
        }
        ++cyc;
        // pc_1678
        s13E0_83 = cyc;
        {
        }
        ++cyc;
        // pc_1680
        s13E0_84 = cyc;
        {
        }
        ++cyc;
        // pc_1688
        s13E0_85 = cyc;
        {
        }
        ++cyc;
        // pc_1690
        s13E0_86 = cyc;
        {
        }
        ++cyc;
        // pc_1698
        s13E0_87 = cyc;
        {
        }
        ++cyc;
        // pc_16A0
        s13E0_88 = cyc;
        {
        }
        ++cyc;
        // pc_16A8
        s13E0_89 = cyc;
        {
        }
        ++cyc;
        // pc_16B0
        s13E0_90 = cyc;
        {
        }
        ++cyc;
        // pc_16B8
        s13E0_91 = cyc;
        {
        }
        ++cyc;
        // pc_16C0
        s13E0_92 = cyc;
        {
        }
        ++cyc;
        // pc_16C8
        s13E0_93 = cyc;
        {
        }
        ++cyc;
        // pc_16D0
        s13E0_94 = cyc;
        {
        }
        ++cyc;
        // pc_16D8
        s13E0_95 = cyc;
        {
        }
        ++cyc;
        // pc_16E0
        s13E0_96 = cyc;
        {
        }
        ++cyc;
        // pc_16E8
        s13E0_97 = cyc;
        {
        }
        ++cyc;
        // pc_16F0
        s13E0_98 = cyc;
        {
        }
        ++cyc;
        // pc_16F8
        s13E0_99 = cyc;
        {
        }
        ++cyc;
        // pc_1700
        s13E0_100 = cyc;
        {
        }
        ++cyc;
        // pc_1708
        s13E0_101 = cyc;
        {
        }
        ++cyc;
        // pc_1710
        s13E0_102 = cyc;
        {
        }
        ++cyc;
        // pc_1718
        s13E0_103 = cyc;
        {
        }
        ++cyc;
        // pc_1720
        s13E0_104 = cyc;
        {
        }
        ++cyc;
        // pc_1728
        s13E0_105 = cyc;
        {
        }
        ++cyc;
        // pc_1730
        s13E0_106 = cyc;
        {
        }
        ++cyc;
        // pc_1738
        s13E0_107 = cyc;
        {
        }
        ++cyc;
        // pc_1740
        s13E0_108 = cyc;
        {
        }
        ++cyc;
        // pc_1748
        s13E0_109 = cyc;
        {
        }
        ++cyc;
        // pc_1750
        s13E0_110 = cyc;
        {
        }
        ++cyc;
        // pc_1758
        s13E0_111 = cyc;
        {
        }
        ++cyc;
        // pc_1760
        s13E0_112 = cyc;
        {
        }
        ++cyc;
        // pc_1768
        s13E0_113 = cyc;
        {
        }
        ++cyc;
        // pc_1770
        s13E0_114 = cyc;
        {
        }
        ++cyc;
        // pc_1778
        s13E0_115 = cyc;
        {
        }
        ++cyc;
        // pc_1780
        s13E0_116 = cyc;
        {
        }
        ++cyc;
        // pc_1788
        s13E0_117 = cyc;
        {
        }
        ++cyc;
        // pc_1790
        s13E0_118 = cyc;
        {
        }
        ++cyc;
        // pc_1798
        s13E0_119 = cyc;
        {
        }
        ++cyc;
        // pc_17A0
        s13E0_120 = cyc;
        {
        }
        ++cyc;
        // pc_17A8
        s13E0_121 = cyc;
        {
        }
        ++cyc;
        // pc_17B0
        s13E0_122 = cyc;
        {
        }
        ++cyc;
        // pc_17B8
        s13E0_123 = cyc;
        {
        }
        ++cyc;
        // pc_17C0
        s13E0_124 = cyc;
        {
        }
        ++cyc;
        // pc_17C8
        s13E0_125 = cyc;
        {
        }
        ++cyc;
        // pc_17D0
        s13E0_126 = cyc;
        {
        }
        ++cyc;
        // pc_17D8
        s13E0_127 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x17E0u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
}

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0xCD8F1FC2068BD71Dull, 6u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x17E0u: goto seg_17E0;
    case 0x17E8u: goto pc_17E8;
    case 0x17F0u: goto pc_17F0;
    case 0x17F8u: goto pc_17F8;
    case 0x1800u: goto pc_1800;
    case 0x1808u: goto pc_1808;
    case 0x1810u: goto pc_1810;
    case 0x1818u: goto pc_1818;
    case 0x1820u: goto pc_1820;
    case 0x1828u: goto pc_1828;
    case 0x1830u: goto pc_1830;
    case 0x1838u: goto pc_1838;
    case 0x1840u: goto pc_1840;
    case 0x1848u: goto pc_1848;
    case 0x1850u: goto pc_1850;
    case 0x1858u: goto pc_1858;
    case 0x1860u: goto pc_1860;
    case 0x1868u: goto pc_1868;
    case 0x1870u: goto pc_1870;
    case 0x1878u: goto pc_1878;
    case 0x1880u: goto pc_1880;
    case 0x1888u: goto pc_1888;
    case 0x1890u: goto pc_1890;
    case 0x1898u: goto pc_1898;
    case 0x18A0u: goto pc_18A0;
    case 0x18A8u: goto pc_18A8;
    case 0x18B0u: goto pc_18B0;
    case 0x18B8u: goto pc_18B8;
    case 0x18C0u: goto pc_18C0;
    case 0x18C8u: goto pc_18C8;
    case 0x18D0u: goto pc_18D0;
    case 0x18D8u: goto pc_18D8;
    case 0x18E0u: goto pc_18E0;
    case 0x18E8u: goto pc_18E8;
    case 0x18F0u: goto pc_18F0;
    case 0x18F8u: goto pc_18F8;
    case 0x1900u: goto pc_1900;
    case 0x1908u: goto pc_1908;
    case 0x1910u: goto pc_1910;
    case 0x1918u: goto pc_1918;
    case 0x1920u: goto pc_1920;
    case 0x1928u: goto pc_1928;
    case 0x1930u: goto pc_1930;
    case 0x1938u: goto pc_1938;
    case 0x1940u: goto pc_1940;
    case 0x1948u: goto pc_1948;
    case 0x1950u: goto pc_1950;
    case 0x1958u: goto pc_1958;
    case 0x1960u: goto pc_1960;
    case 0x1968u: goto pc_1968;
    case 0x1970u: goto pc_1970;
    case 0x1978u: goto pc_1978;
    case 0x1980u: goto pc_1980;
    case 0x1988u: goto pc_1988;
    case 0x1990u: goto pc_1990;
    case 0x1998u: goto pc_1998;
    case 0x19A0u: goto pc_19A0;
    case 0x19A8u: goto pc_19A8;
    case 0x19B0u: goto pc_19B0;
    case 0x19B8u: goto pc_19B8;
    case 0x19C0u: goto pc_19C0;
    case 0x19C8u: goto pc_19C8;
    case 0x19D0u: goto pc_19D0;
    case 0x19D8u: goto pc_19D8;
    case 0x19E0u: goto pc_19E0;
    case 0x19E8u: goto pc_19E8;
    case 0x19F0u: goto pc_19F0;
    case 0x19F8u: goto pc_19F8;
    case 0x1A00u: goto pc_1A00;
    case 0x1A08u: goto pc_1A08;
    case 0x1A10u: goto pc_1A10;
    case 0x1A18u: goto pc_1A18;
    case 0x1A20u: goto pc_1A20;
    case 0x1A28u: goto pc_1A28;
    case 0x1A30u: goto pc_1A30;
    case 0x1A38u: goto pc_1A38;
    case 0x1A40u: goto pc_1A40;
    case 0x1A48u: goto pc_1A48;
    case 0x1A50u: goto pc_1A50;
    case 0x1A58u: goto pc_1A58;
    case 0x1A60u: goto pc_1A60;
    case 0x1A68u: goto pc_1A68;
    case 0x1A70u: goto pc_1A70;
    case 0x1A78u: goto pc_1A78;
    case 0x1A80u: goto pc_1A80;
    case 0x1A88u: goto pc_1A88;
    case 0x1A90u: goto pc_1A90;
    case 0x1A98u: goto pc_1A98;
    case 0x1AA0u: goto pc_1AA0;
    case 0x1AA8u: goto pc_1AA8;
    case 0x1AB0u: goto pc_1AB0;
    case 0x1AB8u: goto pc_1AB8;
    case 0x1AC0u: goto pc_1AC0;
    case 0x1AC8u: goto pc_1AC8;
    case 0x1AD0u: goto pc_1AD0;
    case 0x1AD8u: goto pc_1AD8;
    case 0x1AE0u: goto pc_1AE0;
    case 0x1AE8u: goto pc_1AE8;
    case 0x1AF0u: goto pc_1AF0;
    case 0x1AF8u: goto pc_1AF8;
    case 0x1B00u: goto pc_1B00;
    case 0x1B08u: goto pc_1B08;
    case 0x1B10u: goto pc_1B10;
    case 0x1B18u: goto pc_1B18;
    case 0x1B20u: goto pc_1B20;
    case 0x1B28u: goto pc_1B28;
    case 0x1B30u: goto pc_1B30;
    case 0x1B38u: goto pc_1B38;
    case 0x1B40u: goto pc_1B40;
    case 0x1B48u: goto pc_1B48;
    case 0x1B50u: goto pc_1B50;
    case 0x1B58u: goto pc_1B58;
    case 0x1B60u: goto pc_1B60;
    case 0x1B68u: goto pc_1B68;
    case 0x1B70u: goto pc_1B70;
    case 0x1B78u: goto pc_1B78;
    case 0x1B80u: goto pc_1B80;
    case 0x1B88u: goto pc_1B88;
    case 0x1B90u: goto pc_1B90;
    case 0x1B98u: goto pc_1B98;
    case 0x1BA0u: goto pc_1BA0;
    case 0x1BA8u: goto pc_1BA8;
    case 0x1BB0u: goto pc_1BB0;
    case 0x1BB8u: goto pc_1BB8;
    case 0x1BC0u: goto pc_1BC0;
    case 0x1BC8u: goto pc_1BC8;
    case 0x1BD0u: goto pc_1BD0;
    case 0x1BD8u: goto pc_1BD8;
    default: return StepResult::Fallback;
    }
pc_17E0:
        if (cyc >= budget) { epc = 0x17E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17E8:
        if (cyc >= budget) { epc = 0x17E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17F0:
        if (cyc >= budget) { epc = 0x17F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_17F8:
        if (cyc >= budget) { epc = 0x17F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1800:
        if (cyc >= budget) { epc = 0x1800u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1808:
        if (cyc >= budget) { epc = 0x1808u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1810:
        if (cyc >= budget) { epc = 0x1810u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1818:
        if (cyc >= budget) { epc = 0x1818u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1820:
        if (cyc >= budget) { epc = 0x1820u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1828:
        if (cyc >= budget) { epc = 0x1828u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1830:
        if (cyc >= budget) { epc = 0x1830u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1838:
        if (cyc >= budget) { epc = 0x1838u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1840:
        if (cyc >= budget) { epc = 0x1840u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1848:
        if (cyc >= budget) { epc = 0x1848u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1850:
        if (cyc >= budget) { epc = 0x1850u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1858:
        if (cyc >= budget) { epc = 0x1858u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1860:
        if (cyc >= budget) { epc = 0x1860u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1868:
        if (cyc >= budget) { epc = 0x1868u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1870:
        if (cyc >= budget) { epc = 0x1870u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1878:
        if (cyc >= budget) { epc = 0x1878u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1880:
        if (cyc >= budget) { epc = 0x1880u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1888:
        if (cyc >= budget) { epc = 0x1888u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1890:
        if (cyc >= budget) { epc = 0x1890u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1898:
        if (cyc >= budget) { epc = 0x1898u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18A0:
        if (cyc >= budget) { epc = 0x18A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18A8:
        if (cyc >= budget) { epc = 0x18A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18B0:
        if (cyc >= budget) { epc = 0x18B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18B8:
        if (cyc >= budget) { epc = 0x18B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18C0:
        if (cyc >= budget) { epc = 0x18C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18C8:
        if (cyc >= budget) { epc = 0x18C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18D0:
        if (cyc >= budget) { epc = 0x18D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18D8:
        if (cyc >= budget) { epc = 0x18D8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18E0:
        if (cyc >= budget) { epc = 0x18E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18E8:
        if (cyc >= budget) { epc = 0x18E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18F0:
        if (cyc >= budget) { epc = 0x18F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_18F8:
        if (cyc >= budget) { epc = 0x18F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1900:
        if (cyc >= budget) { epc = 0x1900u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1908:
        if (cyc >= budget) { epc = 0x1908u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1910:
        if (cyc >= budget) { epc = 0x1910u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1918:
        if (cyc >= budget) { epc = 0x1918u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1920:
        if (cyc >= budget) { epc = 0x1920u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1928:
        if (cyc >= budget) { epc = 0x1928u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1930:
        if (cyc >= budget) { epc = 0x1930u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1938:
        if (cyc >= budget) { epc = 0x1938u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1940:
        if (cyc >= budget) { epc = 0x1940u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1948:
        if (cyc >= budget) { epc = 0x1948u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1950:
        if (cyc >= budget) { epc = 0x1950u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1958:
        if (cyc >= budget) { epc = 0x1958u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1960:
        if (cyc >= budget) { epc = 0x1960u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1968:
        if (cyc >= budget) { epc = 0x1968u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1970:
        if (cyc >= budget) { epc = 0x1970u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1978:
        if (cyc >= budget) { epc = 0x1978u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1980:
        if (cyc >= budget) { epc = 0x1980u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1988:
        if (cyc >= budget) { epc = 0x1988u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1990:
        if (cyc >= budget) { epc = 0x1990u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1998:
        if (cyc >= budget) { epc = 0x1998u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19A0:
        if (cyc >= budget) { epc = 0x19A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19A8:
        if (cyc >= budget) { epc = 0x19A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19B0:
        if (cyc >= budget) { epc = 0x19B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19B8:
        if (cyc >= budget) { epc = 0x19B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19C0:
        if (cyc >= budget) { epc = 0x19C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19C8:
        if (cyc >= budget) { epc = 0x19C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19D0:
        if (cyc >= budget) { epc = 0x19D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19D8:
        if (cyc >= budget) { epc = 0x19D8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19E0:
        if (cyc >= budget) { epc = 0x19E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19E8:
        if (cyc >= budget) { epc = 0x19E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19F0:
        if (cyc >= budget) { epc = 0x19F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_19F8:
        if (cyc >= budget) { epc = 0x19F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A00:
        if (cyc >= budget) { epc = 0x1A00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A08:
        if (cyc >= budget) { epc = 0x1A08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A10:
        if (cyc >= budget) { epc = 0x1A10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A18:
        if (cyc >= budget) { epc = 0x1A18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A20:
        if (cyc >= budget) { epc = 0x1A20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A28:
        if (cyc >= budget) { epc = 0x1A28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A30:
        if (cyc >= budget) { epc = 0x1A30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A38:
        if (cyc >= budget) { epc = 0x1A38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A40:
        if (cyc >= budget) { epc = 0x1A40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A48:
        if (cyc >= budget) { epc = 0x1A48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A50:
        if (cyc >= budget) { epc = 0x1A50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A58:
        if (cyc >= budget) { epc = 0x1A58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A60:
        if (cyc >= budget) { epc = 0x1A60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A68:
        if (cyc >= budget) { epc = 0x1A68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A70:
        if (cyc >= budget) { epc = 0x1A70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A78:
        if (cyc >= budget) { epc = 0x1A78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A80:
        if (cyc >= budget) { epc = 0x1A80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A88:
        if (cyc >= budget) { epc = 0x1A88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A90:
        if (cyc >= budget) { epc = 0x1A90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1A98:
        if (cyc >= budget) { epc = 0x1A98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AA0:
        if (cyc >= budget) { epc = 0x1AA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AA8:
        if (cyc >= budget) { epc = 0x1AA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AB0:
        if (cyc >= budget) { epc = 0x1AB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AB8:
        if (cyc >= budget) { epc = 0x1AB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AC0:
        if (cyc >= budget) { epc = 0x1AC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AC8:
        if (cyc >= budget) { epc = 0x1AC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AD0:
        if (cyc >= budget) { epc = 0x1AD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AD8:
        if (cyc >= budget) { epc = 0x1AD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AE0:
        if (cyc >= budget) { epc = 0x1AE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AE8:
        if (cyc >= budget) { epc = 0x1AE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AF0:
        if (cyc >= budget) { epc = 0x1AF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1AF8:
        if (cyc >= budget) { epc = 0x1AF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B00:
        if (cyc >= budget) { epc = 0x1B00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B08:
        if (cyc >= budget) { epc = 0x1B08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B10:
        if (cyc >= budget) { epc = 0x1B10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B18:
        if (cyc >= budget) { epc = 0x1B18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B20:
        if (cyc >= budget) { epc = 0x1B20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B28:
        if (cyc >= budget) { epc = 0x1B28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B30:
        if (cyc >= budget) { epc = 0x1B30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B38:
        if (cyc >= budget) { epc = 0x1B38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B40:
        if (cyc >= budget) { epc = 0x1B40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B48:
        if (cyc >= budget) { epc = 0x1B48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B50:
        if (cyc >= budget) { epc = 0x1B50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B58:
        if (cyc >= budget) { epc = 0x1B58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B60:
        if (cyc >= budget) { epc = 0x1B60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B68:
        if (cyc >= budget) { epc = 0x1B68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B70:
        if (cyc >= budget) { epc = 0x1B70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B78:
        if (cyc >= budget) { epc = 0x1B78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B80:
        if (cyc >= budget) { epc = 0x1B80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B88:
        if (cyc >= budget) { epc = 0x1B88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B90:
        if (cyc >= budget) { epc = 0x1B90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1B98:
        if (cyc >= budget) { epc = 0x1B98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BA0:
        if (cyc >= budget) { epc = 0x1BA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BA8:
        if (cyc >= budget) { epc = 0x1BA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BB0:
        if (cyc >= budget) { epc = 0x1BB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BB8:
        if (cyc >= budget) { epc = 0x1BB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BC0:
        if (cyc >= budget) { epc = 0x1BC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BC8:
        if (cyc >= budget) { epc = 0x1BC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BD0:
        if (cyc >= budget) { epc = 0x1BD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BD8:
        if (cyc >= budget) { epc = 0x1BD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x1BE0u; goto exit_continue; }
seg_17E0:
        if (cyc + 131u > budget) goto pc_17E0;
    {
        uint64_t s17E0_0 = 0u, s17E0_1 = 0u, s17E0_2 = 0u, s17E0_3 = 0u, s17E0_4 = 0u, s17E0_5 = 0u, s17E0_6 = 0u, s17E0_7 = 0u, s17E0_8 = 0u, s17E0_9 = 0u, s17E0_10 = 0u, s17E0_11 = 0u, s17E0_12 = 0u, s17E0_13 = 0u, s17E0_14 = 0u, s17E0_15 = 0u, s17E0_16 = 0u, s17E0_17 = 0u, s17E0_18 = 0u, s17E0_19 = 0u, s17E0_20 = 0u, s17E0_21 = 0u, s17E0_22 = 0u, s17E0_23 = 0u, s17E0_24 = 0u, s17E0_25 = 0u, s17E0_26 = 0u, s17E0_27 = 0u, s17E0_28 = 0u, s17E0_29 = 0u, s17E0_30 = 0u, s17E0_31 = 0u, s17E0_32 = 0u, s17E0_33 = 0u, s17E0_34 = 0u, s17E0_35 = 0u, s17E0_36 = 0u, s17E0_37 = 0u, s17E0_38 = 0u, s17E0_39 = 0u, s17E0_40 = 0u, s17E0_41 = 0u, s17E0_42 = 0u, s17E0_43 = 0u, s17E0_44 = 0u, s17E0_45 = 0u, s17E0_46 = 0u, s17E0_47 = 0u, s17E0_48 = 0u, s17E0_49 = 0u, s17E0_50 = 0u, s17E0_51 = 0u, s17E0_52 = 0u, s17E0_53 = 0u, s17E0_54 = 0u, s17E0_55 = 0u, s17E0_56 = 0u, s17E0_57 = 0u, s17E0_58 = 0u, s17E0_59 = 0u, s17E0_60 = 0u, s17E0_61 = 0u, s17E0_62 = 0u, s17E0_63 = 0u, s17E0_64 = 0u, s17E0_65 = 0u, s17E0_66 = 0u, s17E0_67 = 0u, s17E0_68 = 0u, s17E0_69 = 0u, s17E0_70 = 0u, s17E0_71 = 0u, s17E0_72 = 0u, s17E0_73 = 0u, s17E0_74 = 0u, s17E0_75 = 0u, s17E0_76 = 0u, s17E0_77 = 0u, s17E0_78 = 0u, s17E0_79 = 0u, s17E0_80 = 0u, s17E0_81 = 0u, s17E0_82 = 0u, s17E0_83 = 0u, s17E0_84 = 0u, s17E0_85 = 0u, s17E0_86 = 0u, s17E0_87 = 0u, s17E0_88 = 0u, s17E0_89 = 0u, s17E0_90 = 0u, s17E0_91 = 0u, s17E0_92 = 0u, s17E0_93 = 0u, s17E0_94 = 0u, s17E0_95 = 0u, s17E0_96 = 0u, s17E0_97 = 0u, s17E0_98 = 0u, s17E0_99 = 0u, s17E0_100 = 0u, s17E0_101 = 0u, s17E0_102 = 0u, s17E0_103 = 0u, s17E0_104 = 0u, s17E0_105 = 0u, s17E0_106 = 0u, s17E0_107 = 0u, s17E0_108 = 0u, s17E0_109 = 0u, s17E0_110 = 0u, s17E0_111 = 0u, s17E0_112 = 0u, s17E0_113 = 0u, s17E0_114 = 0u, s17E0_115 = 0u, s17E0_116 = 0u, s17E0_117 = 0u, s17E0_118 = 0u, s17E0_119 = 0u, s17E0_120 = 0u, s17E0_121 = 0u, s17E0_122 = 0u, s17E0_123 = 0u, s17E0_124 = 0u, s17E0_125 = 0u, s17E0_126 = 0u, s17E0_127 = 0u;
        // pc_17E0
        s17E0_0 = cyc;
        {
        }
        ++cyc;
        // pc_17E8
        s17E0_1 = cyc;
        {
        }
        ++cyc;
        // pc_17F0
        s17E0_2 = cyc;
        {
        }
        ++cyc;
        // pc_17F8
        s17E0_3 = cyc;
        {
        }
        ++cyc;
        // pc_1800
        s17E0_4 = cyc;
        {
        }
        ++cyc;
        // pc_1808
        s17E0_5 = cyc;
        {
        }
        ++cyc;
        // pc_1810
        s17E0_6 = cyc;
        {
        }
        ++cyc;
        // pc_1818
        s17E0_7 = cyc;
        {
        }
        ++cyc;
        // pc_1820
        s17E0_8 = cyc;
        {
        }
        ++cyc;
        // pc_1828
        s17E0_9 = cyc;
        {
        }
        ++cyc;
        // pc_1830
        s17E0_10 = cyc;
        {
        }
        ++cyc;
        // pc_1838
        s17E0_11 = cyc;
        {
        }
        ++cyc;
        // pc_1840
        s17E0_12 = cyc;
        {
        }
        ++cyc;
        // pc_1848
        s17E0_13 = cyc;
        {
        }
        ++cyc;
        // pc_1850
        s17E0_14 = cyc;
        {
        }
        ++cyc;
        // pc_1858
        s17E0_15 = cyc;
        {
        }
        ++cyc;
        // pc_1860
        s17E0_16 = cyc;
        {
        }
        ++cyc;
        // pc_1868
        s17E0_17 = cyc;
        {
        }
        ++cyc;
        // pc_1870
        s17E0_18 = cyc;
        {
        }
        ++cyc;
        // pc_1878
        s17E0_19 = cyc;
        {
        }
        ++cyc;
        // pc_1880
        s17E0_20 = cyc;
        {
        }
        ++cyc;
        // pc_1888
        s17E0_21 = cyc;
        {
        }
        ++cyc;
        // pc_1890
        s17E0_22 = cyc;
        {
        }
        ++cyc;
        // pc_1898
        s17E0_23 = cyc;
        {
        }
        ++cyc;
        // pc_18A0
        s17E0_24 = cyc;
        {
        }
        ++cyc;
        // pc_18A8
        s17E0_25 = cyc;
        {
        }
        ++cyc;
        // pc_18B0
        s17E0_26 = cyc;
        {
        }
        ++cyc;
        // pc_18B8
        s17E0_27 = cyc;
        {
        }
        ++cyc;
        // pc_18C0
        s17E0_28 = cyc;
        {
        }
        ++cyc;
        // pc_18C8
        s17E0_29 = cyc;
        {
        }
        ++cyc;
        // pc_18D0
        s17E0_30 = cyc;
        {
        }
        ++cyc;
        // pc_18D8
        s17E0_31 = cyc;
        {
        }
        ++cyc;
        // pc_18E0
        s17E0_32 = cyc;
        {
        }
        ++cyc;
        // pc_18E8
        s17E0_33 = cyc;
        {
        }
        ++cyc;
        // pc_18F0
        s17E0_34 = cyc;
        {
        }
        ++cyc;
        // pc_18F8
        s17E0_35 = cyc;
        {
        }
        ++cyc;
        // pc_1900
        s17E0_36 = cyc;
        {
        }
        ++cyc;
        // pc_1908
        s17E0_37 = cyc;
        {
        }
        ++cyc;
        // pc_1910
        s17E0_38 = cyc;
        {
        }
        ++cyc;
        // pc_1918
        s17E0_39 = cyc;
        {
        }
        ++cyc;
        // pc_1920
        s17E0_40 = cyc;
        {
        }
        ++cyc;
        // pc_1928
        s17E0_41 = cyc;
        {
        }
        ++cyc;
        // pc_1930
        s17E0_42 = cyc;
        {
        }
        ++cyc;
        // pc_1938
        s17E0_43 = cyc;
        {
        }
        ++cyc;
        // pc_1940
        s17E0_44 = cyc;
        {
        }
        ++cyc;
        // pc_1948
        s17E0_45 = cyc;
        {
        }
        ++cyc;
        // pc_1950
        s17E0_46 = cyc;
        {
        }
        ++cyc;
        // pc_1958
        s17E0_47 = cyc;
        {
        }
        ++cyc;
        // pc_1960
        s17E0_48 = cyc;
        {
        }
        ++cyc;
        // pc_1968
        s17E0_49 = cyc;
        {
        }
        ++cyc;
        // pc_1970
        s17E0_50 = cyc;
        {
        }
        ++cyc;
        // pc_1978
        s17E0_51 = cyc;
        {
        }
        ++cyc;
        // pc_1980
        s17E0_52 = cyc;
        {
        }
        ++cyc;
        // pc_1988
        s17E0_53 = cyc;
        {
        }
        ++cyc;
        // pc_1990
        s17E0_54 = cyc;
        {
        }
        ++cyc;
        // pc_1998
        s17E0_55 = cyc;
        {
        }
        ++cyc;
        // pc_19A0
        s17E0_56 = cyc;
        {
        }
        ++cyc;
        // pc_19A8
        s17E0_57 = cyc;
        {
        }
        ++cyc;
        // pc_19B0
        s17E0_58 = cyc;
        {
        }
        ++cyc;
        // pc_19B8
        s17E0_59 = cyc;
        {
        }
        ++cyc;
        // pc_19C0
        s17E0_60 = cyc;
        {
        }
        ++cyc;
        // pc_19C8
        s17E0_61 = cyc;
        {
        }
        ++cyc;
        // pc_19D0
        s17E0_62 = cyc;
        {
        }
        ++cyc;
        // pc_19D8
        s17E0_63 = cyc;
        {
        }
        ++cyc;
        // pc_19E0
        s17E0_64 = cyc;
        {
        }
        ++cyc;
        // pc_19E8
        s17E0_65 = cyc;
        {
        }
        ++cyc;
        // pc_19F0
        s17E0_66 = cyc;
        {
        }
        ++cyc;
        // pc_19F8
        s17E0_67 = cyc;
        {
        }
        ++cyc;
        // pc_1A00
        s17E0_68 = cyc;
        {
        }
        ++cyc;
        // pc_1A08
        s17E0_69 = cyc;
        {
        }
        ++cyc;
        // pc_1A10
        s17E0_70 = cyc;
        {
        }
        ++cyc;
        // pc_1A18
        s17E0_71 = cyc;
        {
        }
        ++cyc;
        // pc_1A20
        s17E0_72 = cyc;
        {
        }
        ++cyc;
        // pc_1A28
        s17E0_73 = cyc;
        {
        }
        ++cyc;
        // pc_1A30
        s17E0_74 = cyc;
        {
        }
        ++cyc;
        // pc_1A38
        s17E0_75 = cyc;
        {
        }
        ++cyc;
        // pc_1A40
        s17E0_76 = cyc;
        {
        }
        ++cyc;
        // pc_1A48
        s17E0_77 = cyc;
        {
        }
        ++cyc;
        // pc_1A50
        s17E0_78 = cyc;
        {
        }
        ++cyc;
        // pc_1A58
        s17E0_79 = cyc;
        {
        }
        ++cyc;
        // pc_1A60
        s17E0_80 = cyc;
        {
        }
        ++cyc;
        // pc_1A68
        s17E0_81 = cyc;
        {
        }
        ++cyc;
        // pc_1A70
        s17E0_82 = cyc;
        {
        }
        ++cyc;
        // pc_1A78
        s17E0_83 = cyc;
        {
        }
        ++cyc;
        // pc_1A80
        s17E0_84 = cyc;
        {
        }
        ++cyc;
        // pc_1A88
        s17E0_85 = cyc;
        {
        }
        ++cyc;
        // pc_1A90
        s17E0_86 = cyc;
        {
        }
        ++cyc;
        // pc_1A98
        s17E0_87 = cyc;
        {
        }
        ++cyc;
        // pc_1AA0
        s17E0_88 = cyc;
        {
        }
        ++cyc;
        // pc_1AA8
        s17E0_89 = cyc;
        {
        }
        ++cyc;
        // pc_1AB0
        s17E0_90 = cyc;
        {
        }
        ++cyc;
        // pc_1AB8
        s17E0_91 = cyc;
        {
        }
        ++cyc;
        // pc_1AC0
        s17E0_92 = cyc;
        {
        }
        ++cyc;
        // pc_1AC8
        s17E0_93 = cyc;
        {
        }
        ++cyc;
        // pc_1AD0
        s17E0_94 = cyc;
        {
        }
        ++cyc;
        // pc_1AD8
        s17E0_95 = cyc;
        {
        }
        ++cyc;
        // pc_1AE0
        s17E0_96 = cyc;
        {
        }
        ++cyc;
        // pc_1AE8
        s17E0_97 = cyc;
        {
        }
        ++cyc;
        // pc_1AF0
        s17E0_98 = cyc;
        {
        }
        ++cyc;
        // pc_1AF8
        s17E0_99 = cyc;
        {
        }
        ++cyc;
        // pc_1B00
        s17E0_100 = cyc;
        {
        }
        ++cyc;
        // pc_1B08
        s17E0_101 = cyc;
        {
        }
        ++cyc;
        // pc_1B10
        s17E0_102 = cyc;
        {
        }
        ++cyc;
        // pc_1B18
        s17E0_103 = cyc;
        {
        }
        ++cyc;
        // pc_1B20
        s17E0_104 = cyc;
        {
        }
        ++cyc;
        // pc_1B28
        s17E0_105 = cyc;
        {
        }
        ++cyc;
        // pc_1B30
        s17E0_106 = cyc;
        {
        }
        ++cyc;
        // pc_1B38
        s17E0_107 = cyc;
        {
        }
        ++cyc;
        // pc_1B40
        s17E0_108 = cyc;
        {
        }
        ++cyc;
        // pc_1B48
        s17E0_109 = cyc;
        {
        }
        ++cyc;
        // pc_1B50
        s17E0_110 = cyc;
        {
        }
        ++cyc;
        // pc_1B58
        s17E0_111 = cyc;
        {
        }
        ++cyc;
        // pc_1B60
        s17E0_112 = cyc;
        {
        }
        ++cyc;
        // pc_1B68
        s17E0_113 = cyc;
        {
        }
        ++cyc;
        // pc_1B70
        s17E0_114 = cyc;
        {
        }
        ++cyc;
        // pc_1B78
        s17E0_115 = cyc;
        {
        }
        ++cyc;
        // pc_1B80
        s17E0_116 = cyc;
        {
        }
        ++cyc;
        // pc_1B88
        s17E0_117 = cyc;
        {
        }
        ++cyc;
        // pc_1B90
        s17E0_118 = cyc;
        {
        }
        ++cyc;
        // pc_1B98
        s17E0_119 = cyc;
        {
        }
        ++cyc;
        // pc_1BA0
        s17E0_120 = cyc;
        {
        }
        ++cyc;
        // pc_1BA8
        s17E0_121 = cyc;
        {
        }
        ++cyc;
        // pc_1BB0
        s17E0_122 = cyc;
        {
        }
        ++cyc;
        // pc_1BB8
        s17E0_123 = cyc;
        {
        }
        ++cyc;
        // pc_1BC0
        s17E0_124 = cyc;
        {
        }
        ++cyc;
        // pc_1BC8
        s17E0_125 = cyc;
        {
        }
        ++cyc;
        // pc_1BD0
        s17E0_126 = cyc;
        {
        }
        ++cyc;
        // pc_1BD8
        s17E0_127 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x1BE0u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
}

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0xCD8F1FC2068BD71Dull, 7u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x1BE0u: goto seg_1BE0;
    case 0x1BE8u: goto pc_1BE8;
    case 0x1BF0u: goto pc_1BF0;
    case 0x1BF8u: goto pc_1BF8;
    case 0x1C00u: goto pc_1C00;
    case 0x1C08u: goto pc_1C08;
    case 0x1C10u: goto pc_1C10;
    case 0x1C18u: goto pc_1C18;
    case 0x1C20u: goto pc_1C20;
    case 0x1C28u: goto pc_1C28;
    case 0x1C30u: goto pc_1C30;
    case 0x1C38u: goto pc_1C38;
    case 0x1C40u: goto pc_1C40;
    case 0x1C48u: goto pc_1C48;
    case 0x1C50u: goto pc_1C50;
    case 0x1C58u: goto pc_1C58;
    case 0x1C60u: goto pc_1C60;
    case 0x1C68u: goto pc_1C68;
    case 0x1C70u: goto pc_1C70;
    case 0x1C78u: goto pc_1C78;
    case 0x1C80u: goto pc_1C80;
    case 0x1C88u: goto pc_1C88;
    case 0x1C90u: goto pc_1C90;
    case 0x1C98u: goto pc_1C98;
    case 0x1CA0u: goto pc_1CA0;
    case 0x1CA8u: goto pc_1CA8;
    case 0x1CB0u: goto pc_1CB0;
    case 0x1CB8u: goto pc_1CB8;
    case 0x1CC0u: goto pc_1CC0;
    case 0x1CC8u: goto pc_1CC8;
    case 0x1CD0u: goto pc_1CD0;
    case 0x1CD8u: goto pc_1CD8;
    case 0x1CE0u: goto pc_1CE0;
    case 0x1CE8u: goto pc_1CE8;
    case 0x1CF0u: goto pc_1CF0;
    case 0x1CF8u: goto pc_1CF8;
    case 0x1D00u: goto pc_1D00;
    case 0x1D08u: goto pc_1D08;
    case 0x1D10u: goto pc_1D10;
    case 0x1D18u: goto pc_1D18;
    case 0x1D20u: goto pc_1D20;
    case 0x1D28u: goto pc_1D28;
    case 0x1D30u: goto pc_1D30;
    case 0x1D38u: goto pc_1D38;
    case 0x1D40u: goto pc_1D40;
    case 0x1D48u: goto pc_1D48;
    case 0x1D50u: goto pc_1D50;
    case 0x1D58u: goto pc_1D58;
    case 0x1D60u: goto pc_1D60;
    case 0x1D68u: goto pc_1D68;
    case 0x1D70u: goto pc_1D70;
    case 0x1D78u: goto pc_1D78;
    case 0x1D80u: goto pc_1D80;
    case 0x1D88u: goto pc_1D88;
    case 0x1D90u: goto pc_1D90;
    case 0x1D98u: goto pc_1D98;
    case 0x1DA0u: goto pc_1DA0;
    case 0x1DA8u: goto pc_1DA8;
    case 0x1DB0u: goto pc_1DB0;
    case 0x1DB8u: goto pc_1DB8;
    case 0x1DC0u: goto pc_1DC0;
    case 0x1DC8u: goto pc_1DC8;
    case 0x1DD0u: goto pc_1DD0;
    case 0x1DD8u: goto pc_1DD8;
    case 0x1DE0u: goto pc_1DE0;
    case 0x1DE8u: goto pc_1DE8;
    case 0x1DF0u: goto pc_1DF0;
    case 0x1DF8u: goto pc_1DF8;
    case 0x1E00u: goto pc_1E00;
    case 0x1E08u: goto pc_1E08;
    case 0x1E10u: goto pc_1E10;
    case 0x1E18u: goto pc_1E18;
    case 0x1E20u: goto pc_1E20;
    case 0x1E28u: goto pc_1E28;
    case 0x1E30u: goto pc_1E30;
    case 0x1E38u: goto pc_1E38;
    case 0x1E40u: goto pc_1E40;
    case 0x1E48u: goto pc_1E48;
    case 0x1E50u: goto pc_1E50;
    case 0x1E58u: goto pc_1E58;
    case 0x1E60u: goto pc_1E60;
    case 0x1E68u: goto pc_1E68;
    case 0x1E70u: goto pc_1E70;
    case 0x1E78u: goto pc_1E78;
    case 0x1E80u: goto pc_1E80;
    case 0x1E88u: goto pc_1E88;
    case 0x1E90u: goto pc_1E90;
    case 0x1E98u: goto pc_1E98;
    case 0x1EA0u: goto pc_1EA0;
    case 0x1EA8u: goto pc_1EA8;
    case 0x1EB0u: goto pc_1EB0;
    case 0x1EB8u: goto pc_1EB8;
    case 0x1EC0u: goto pc_1EC0;
    case 0x1EC8u: goto pc_1EC8;
    case 0x1ED0u: goto pc_1ED0;
    case 0x1ED8u: goto pc_1ED8;
    case 0x1EE0u: goto pc_1EE0;
    case 0x1EE8u: goto pc_1EE8;
    case 0x1EF0u: goto pc_1EF0;
    case 0x1EF8u: goto pc_1EF8;
    case 0x1F00u: goto pc_1F00;
    case 0x1F08u: goto pc_1F08;
    case 0x1F10u: goto pc_1F10;
    case 0x1F18u: goto pc_1F18;
    case 0x1F20u: goto pc_1F20;
    case 0x1F28u: goto pc_1F28;
    case 0x1F30u: goto pc_1F30;
    case 0x1F38u: goto pc_1F38;
    case 0x1F40u: goto pc_1F40;
    case 0x1F48u: goto pc_1F48;
    case 0x1F50u: goto pc_1F50;
    case 0x1F58u: goto pc_1F58;
    case 0x1F60u: goto pc_1F60;
    case 0x1F68u: goto pc_1F68;
    case 0x1F70u: goto pc_1F70;
    case 0x1F78u: goto pc_1F78;
    case 0x1F80u: goto pc_1F80;
    case 0x1F88u: goto pc_1F88;
    case 0x1F90u: goto pc_1F90;
    case 0x1F98u: goto pc_1F98;
    case 0x1FA0u: goto pc_1FA0;
    case 0x1FA8u: goto pc_1FA8;
    case 0x1FB0u: goto pc_1FB0;
    case 0x1FB8u: goto pc_1FB8;
    case 0x1FC0u: goto pc_1FC0;
    case 0x1FC8u: goto pc_1FC8;
    case 0x1FD0u: goto pc_1FD0;
    case 0x1FD8u: goto pc_1FD8;
    default: return StepResult::Fallback;
    }
pc_1BE0:
        if (cyc >= budget) { epc = 0x1BE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BE8:
        if (cyc >= budget) { epc = 0x1BE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BF0:
        if (cyc >= budget) { epc = 0x1BF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1BF8:
        if (cyc >= budget) { epc = 0x1BF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C00:
        if (cyc >= budget) { epc = 0x1C00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C08:
        if (cyc >= budget) { epc = 0x1C08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C10:
        if (cyc >= budget) { epc = 0x1C10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C18:
        if (cyc >= budget) { epc = 0x1C18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C20:
        if (cyc >= budget) { epc = 0x1C20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C28:
        if (cyc >= budget) { epc = 0x1C28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C30:
        if (cyc >= budget) { epc = 0x1C30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C38:
        if (cyc >= budget) { epc = 0x1C38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C40:
        if (cyc >= budget) { epc = 0x1C40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C48:
        if (cyc >= budget) { epc = 0x1C48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C50:
        if (cyc >= budget) { epc = 0x1C50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C58:
        if (cyc >= budget) { epc = 0x1C58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C60:
        if (cyc >= budget) { epc = 0x1C60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C68:
        if (cyc >= budget) { epc = 0x1C68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C70:
        if (cyc >= budget) { epc = 0x1C70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C78:
        if (cyc >= budget) { epc = 0x1C78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C80:
        if (cyc >= budget) { epc = 0x1C80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C88:
        if (cyc >= budget) { epc = 0x1C88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C90:
        if (cyc >= budget) { epc = 0x1C90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1C98:
        if (cyc >= budget) { epc = 0x1C98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CA0:
        if (cyc >= budget) { epc = 0x1CA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CA8:
        if (cyc >= budget) { epc = 0x1CA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CB0:
        if (cyc >= budget) { epc = 0x1CB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CB8:
        if (cyc >= budget) { epc = 0x1CB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CC0:
        if (cyc >= budget) { epc = 0x1CC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CC8:
        if (cyc >= budget) { epc = 0x1CC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CD0:
        if (cyc >= budget) { epc = 0x1CD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CD8:
        if (cyc >= budget) { epc = 0x1CD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CE0:
        if (cyc >= budget) { epc = 0x1CE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CE8:
        if (cyc >= budget) { epc = 0x1CE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CF0:
        if (cyc >= budget) { epc = 0x1CF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1CF8:
        if (cyc >= budget) { epc = 0x1CF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D00:
        if (cyc >= budget) { epc = 0x1D00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D08:
        if (cyc >= budget) { epc = 0x1D08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D10:
        if (cyc >= budget) { epc = 0x1D10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D18:
        if (cyc >= budget) { epc = 0x1D18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D20:
        if (cyc >= budget) { epc = 0x1D20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D28:
        if (cyc >= budget) { epc = 0x1D28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D30:
        if (cyc >= budget) { epc = 0x1D30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D38:
        if (cyc >= budget) { epc = 0x1D38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D40:
        if (cyc >= budget) { epc = 0x1D40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D48:
        if (cyc >= budget) { epc = 0x1D48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D50:
        if (cyc >= budget) { epc = 0x1D50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D58:
        if (cyc >= budget) { epc = 0x1D58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D60:
        if (cyc >= budget) { epc = 0x1D60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D68:
        if (cyc >= budget) { epc = 0x1D68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D70:
        if (cyc >= budget) { epc = 0x1D70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D78:
        if (cyc >= budget) { epc = 0x1D78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D80:
        if (cyc >= budget) { epc = 0x1D80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D88:
        if (cyc >= budget) { epc = 0x1D88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D90:
        if (cyc >= budget) { epc = 0x1D90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1D98:
        if (cyc >= budget) { epc = 0x1D98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DA0:
        if (cyc >= budget) { epc = 0x1DA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DA8:
        if (cyc >= budget) { epc = 0x1DA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DB0:
        if (cyc >= budget) { epc = 0x1DB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DB8:
        if (cyc >= budget) { epc = 0x1DB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DC0:
        if (cyc >= budget) { epc = 0x1DC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DC8:
        if (cyc >= budget) { epc = 0x1DC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DD0:
        if (cyc >= budget) { epc = 0x1DD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DD8:
        if (cyc >= budget) { epc = 0x1DD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DE0:
        if (cyc >= budget) { epc = 0x1DE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DE8:
        if (cyc >= budget) { epc = 0x1DE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DF0:
        if (cyc >= budget) { epc = 0x1DF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1DF8:
        if (cyc >= budget) { epc = 0x1DF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E00:
        if (cyc >= budget) { epc = 0x1E00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E08:
        if (cyc >= budget) { epc = 0x1E08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E10:
        if (cyc >= budget) { epc = 0x1E10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E18:
        if (cyc >= budget) { epc = 0x1E18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E20:
        if (cyc >= budget) { epc = 0x1E20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E28:
        if (cyc >= budget) { epc = 0x1E28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E30:
        if (cyc >= budget) { epc = 0x1E30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E38:
        if (cyc >= budget) { epc = 0x1E38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E40:
        if (cyc >= budget) { epc = 0x1E40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E48:
        if (cyc >= budget) { epc = 0x1E48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E50:
        if (cyc >= budget) { epc = 0x1E50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E58:
        if (cyc >= budget) { epc = 0x1E58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E60:
        if (cyc >= budget) { epc = 0x1E60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E68:
        if (cyc >= budget) { epc = 0x1E68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E70:
        if (cyc >= budget) { epc = 0x1E70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E78:
        if (cyc >= budget) { epc = 0x1E78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E80:
        if (cyc >= budget) { epc = 0x1E80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E88:
        if (cyc >= budget) { epc = 0x1E88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E90:
        if (cyc >= budget) { epc = 0x1E90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1E98:
        if (cyc >= budget) { epc = 0x1E98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EA0:
        if (cyc >= budget) { epc = 0x1EA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EA8:
        if (cyc >= budget) { epc = 0x1EA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EB0:
        if (cyc >= budget) { epc = 0x1EB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EB8:
        if (cyc >= budget) { epc = 0x1EB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EC0:
        if (cyc >= budget) { epc = 0x1EC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EC8:
        if (cyc >= budget) { epc = 0x1EC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1ED0:
        if (cyc >= budget) { epc = 0x1ED0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1ED8:
        if (cyc >= budget) { epc = 0x1ED8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EE0:
        if (cyc >= budget) { epc = 0x1EE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EE8:
        if (cyc >= budget) { epc = 0x1EE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EF0:
        if (cyc >= budget) { epc = 0x1EF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1EF8:
        if (cyc >= budget) { epc = 0x1EF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F00:
        if (cyc >= budget) { epc = 0x1F00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F08:
        if (cyc >= budget) { epc = 0x1F08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F10:
        if (cyc >= budget) { epc = 0x1F10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F18:
        if (cyc >= budget) { epc = 0x1F18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F20:
        if (cyc >= budget) { epc = 0x1F20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F28:
        if (cyc >= budget) { epc = 0x1F28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F30:
        if (cyc >= budget) { epc = 0x1F30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F38:
        if (cyc >= budget) { epc = 0x1F38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F40:
        if (cyc >= budget) { epc = 0x1F40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F48:
        if (cyc >= budget) { epc = 0x1F48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F50:
        if (cyc >= budget) { epc = 0x1F50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F58:
        if (cyc >= budget) { epc = 0x1F58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F60:
        if (cyc >= budget) { epc = 0x1F60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F68:
        if (cyc >= budget) { epc = 0x1F68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F70:
        if (cyc >= budget) { epc = 0x1F70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F78:
        if (cyc >= budget) { epc = 0x1F78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F80:
        if (cyc >= budget) { epc = 0x1F80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F88:
        if (cyc >= budget) { epc = 0x1F88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F90:
        if (cyc >= budget) { epc = 0x1F90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1F98:
        if (cyc >= budget) { epc = 0x1F98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FA0:
        if (cyc >= budget) { epc = 0x1FA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FA8:
        if (cyc >= budget) { epc = 0x1FA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FB0:
        if (cyc >= budget) { epc = 0x1FB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FB8:
        if (cyc >= budget) { epc = 0x1FB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FC0:
        if (cyc >= budget) { epc = 0x1FC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FC8:
        if (cyc >= budget) { epc = 0x1FC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FD0:
        if (cyc >= budget) { epc = 0x1FD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FD8:
        if (cyc >= budget) { epc = 0x1FD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x1FE0u; goto exit_continue; }
seg_1BE0:
        if (cyc + 131u > budget) goto pc_1BE0;
    {
        uint64_t s1BE0_0 = 0u, s1BE0_1 = 0u, s1BE0_2 = 0u, s1BE0_3 = 0u, s1BE0_4 = 0u, s1BE0_5 = 0u, s1BE0_6 = 0u, s1BE0_7 = 0u, s1BE0_8 = 0u, s1BE0_9 = 0u, s1BE0_10 = 0u, s1BE0_11 = 0u, s1BE0_12 = 0u, s1BE0_13 = 0u, s1BE0_14 = 0u, s1BE0_15 = 0u, s1BE0_16 = 0u, s1BE0_17 = 0u, s1BE0_18 = 0u, s1BE0_19 = 0u, s1BE0_20 = 0u, s1BE0_21 = 0u, s1BE0_22 = 0u, s1BE0_23 = 0u, s1BE0_24 = 0u, s1BE0_25 = 0u, s1BE0_26 = 0u, s1BE0_27 = 0u, s1BE0_28 = 0u, s1BE0_29 = 0u, s1BE0_30 = 0u, s1BE0_31 = 0u, s1BE0_32 = 0u, s1BE0_33 = 0u, s1BE0_34 = 0u, s1BE0_35 = 0u, s1BE0_36 = 0u, s1BE0_37 = 0u, s1BE0_38 = 0u, s1BE0_39 = 0u, s1BE0_40 = 0u, s1BE0_41 = 0u, s1BE0_42 = 0u, s1BE0_43 = 0u, s1BE0_44 = 0u, s1BE0_45 = 0u, s1BE0_46 = 0u, s1BE0_47 = 0u, s1BE0_48 = 0u, s1BE0_49 = 0u, s1BE0_50 = 0u, s1BE0_51 = 0u, s1BE0_52 = 0u, s1BE0_53 = 0u, s1BE0_54 = 0u, s1BE0_55 = 0u, s1BE0_56 = 0u, s1BE0_57 = 0u, s1BE0_58 = 0u, s1BE0_59 = 0u, s1BE0_60 = 0u, s1BE0_61 = 0u, s1BE0_62 = 0u, s1BE0_63 = 0u, s1BE0_64 = 0u, s1BE0_65 = 0u, s1BE0_66 = 0u, s1BE0_67 = 0u, s1BE0_68 = 0u, s1BE0_69 = 0u, s1BE0_70 = 0u, s1BE0_71 = 0u, s1BE0_72 = 0u, s1BE0_73 = 0u, s1BE0_74 = 0u, s1BE0_75 = 0u, s1BE0_76 = 0u, s1BE0_77 = 0u, s1BE0_78 = 0u, s1BE0_79 = 0u, s1BE0_80 = 0u, s1BE0_81 = 0u, s1BE0_82 = 0u, s1BE0_83 = 0u, s1BE0_84 = 0u, s1BE0_85 = 0u, s1BE0_86 = 0u, s1BE0_87 = 0u, s1BE0_88 = 0u, s1BE0_89 = 0u, s1BE0_90 = 0u, s1BE0_91 = 0u, s1BE0_92 = 0u, s1BE0_93 = 0u, s1BE0_94 = 0u, s1BE0_95 = 0u, s1BE0_96 = 0u, s1BE0_97 = 0u, s1BE0_98 = 0u, s1BE0_99 = 0u, s1BE0_100 = 0u, s1BE0_101 = 0u, s1BE0_102 = 0u, s1BE0_103 = 0u, s1BE0_104 = 0u, s1BE0_105 = 0u, s1BE0_106 = 0u, s1BE0_107 = 0u, s1BE0_108 = 0u, s1BE0_109 = 0u, s1BE0_110 = 0u, s1BE0_111 = 0u, s1BE0_112 = 0u, s1BE0_113 = 0u, s1BE0_114 = 0u, s1BE0_115 = 0u, s1BE0_116 = 0u, s1BE0_117 = 0u, s1BE0_118 = 0u, s1BE0_119 = 0u, s1BE0_120 = 0u, s1BE0_121 = 0u, s1BE0_122 = 0u, s1BE0_123 = 0u, s1BE0_124 = 0u, s1BE0_125 = 0u, s1BE0_126 = 0u, s1BE0_127 = 0u;
        // pc_1BE0
        s1BE0_0 = cyc;
        {
        }
        ++cyc;
        // pc_1BE8
        s1BE0_1 = cyc;
        {
        }
        ++cyc;
        // pc_1BF0
        s1BE0_2 = cyc;
        {
        }
        ++cyc;
        // pc_1BF8
        s1BE0_3 = cyc;
        {
        }
        ++cyc;
        // pc_1C00
        s1BE0_4 = cyc;
        {
        }
        ++cyc;
        // pc_1C08
        s1BE0_5 = cyc;
        {
        }
        ++cyc;
        // pc_1C10
        s1BE0_6 = cyc;
        {
        }
        ++cyc;
        // pc_1C18
        s1BE0_7 = cyc;
        {
        }
        ++cyc;
        // pc_1C20
        s1BE0_8 = cyc;
        {
        }
        ++cyc;
        // pc_1C28
        s1BE0_9 = cyc;
        {
        }
        ++cyc;
        // pc_1C30
        s1BE0_10 = cyc;
        {
        }
        ++cyc;
        // pc_1C38
        s1BE0_11 = cyc;
        {
        }
        ++cyc;
        // pc_1C40
        s1BE0_12 = cyc;
        {
        }
        ++cyc;
        // pc_1C48
        s1BE0_13 = cyc;
        {
        }
        ++cyc;
        // pc_1C50
        s1BE0_14 = cyc;
        {
        }
        ++cyc;
        // pc_1C58
        s1BE0_15 = cyc;
        {
        }
        ++cyc;
        // pc_1C60
        s1BE0_16 = cyc;
        {
        }
        ++cyc;
        // pc_1C68
        s1BE0_17 = cyc;
        {
        }
        ++cyc;
        // pc_1C70
        s1BE0_18 = cyc;
        {
        }
        ++cyc;
        // pc_1C78
        s1BE0_19 = cyc;
        {
        }
        ++cyc;
        // pc_1C80
        s1BE0_20 = cyc;
        {
        }
        ++cyc;
        // pc_1C88
        s1BE0_21 = cyc;
        {
        }
        ++cyc;
        // pc_1C90
        s1BE0_22 = cyc;
        {
        }
        ++cyc;
        // pc_1C98
        s1BE0_23 = cyc;
        {
        }
        ++cyc;
        // pc_1CA0
        s1BE0_24 = cyc;
        {
        }
        ++cyc;
        // pc_1CA8
        s1BE0_25 = cyc;
        {
        }
        ++cyc;
        // pc_1CB0
        s1BE0_26 = cyc;
        {
        }
        ++cyc;
        // pc_1CB8
        s1BE0_27 = cyc;
        {
        }
        ++cyc;
        // pc_1CC0
        s1BE0_28 = cyc;
        {
        }
        ++cyc;
        // pc_1CC8
        s1BE0_29 = cyc;
        {
        }
        ++cyc;
        // pc_1CD0
        s1BE0_30 = cyc;
        {
        }
        ++cyc;
        // pc_1CD8
        s1BE0_31 = cyc;
        {
        }
        ++cyc;
        // pc_1CE0
        s1BE0_32 = cyc;
        {
        }
        ++cyc;
        // pc_1CE8
        s1BE0_33 = cyc;
        {
        }
        ++cyc;
        // pc_1CF0
        s1BE0_34 = cyc;
        {
        }
        ++cyc;
        // pc_1CF8
        s1BE0_35 = cyc;
        {
        }
        ++cyc;
        // pc_1D00
        s1BE0_36 = cyc;
        {
        }
        ++cyc;
        // pc_1D08
        s1BE0_37 = cyc;
        {
        }
        ++cyc;
        // pc_1D10
        s1BE0_38 = cyc;
        {
        }
        ++cyc;
        // pc_1D18
        s1BE0_39 = cyc;
        {
        }
        ++cyc;
        // pc_1D20
        s1BE0_40 = cyc;
        {
        }
        ++cyc;
        // pc_1D28
        s1BE0_41 = cyc;
        {
        }
        ++cyc;
        // pc_1D30
        s1BE0_42 = cyc;
        {
        }
        ++cyc;
        // pc_1D38
        s1BE0_43 = cyc;
        {
        }
        ++cyc;
        // pc_1D40
        s1BE0_44 = cyc;
        {
        }
        ++cyc;
        // pc_1D48
        s1BE0_45 = cyc;
        {
        }
        ++cyc;
        // pc_1D50
        s1BE0_46 = cyc;
        {
        }
        ++cyc;
        // pc_1D58
        s1BE0_47 = cyc;
        {
        }
        ++cyc;
        // pc_1D60
        s1BE0_48 = cyc;
        {
        }
        ++cyc;
        // pc_1D68
        s1BE0_49 = cyc;
        {
        }
        ++cyc;
        // pc_1D70
        s1BE0_50 = cyc;
        {
        }
        ++cyc;
        // pc_1D78
        s1BE0_51 = cyc;
        {
        }
        ++cyc;
        // pc_1D80
        s1BE0_52 = cyc;
        {
        }
        ++cyc;
        // pc_1D88
        s1BE0_53 = cyc;
        {
        }
        ++cyc;
        // pc_1D90
        s1BE0_54 = cyc;
        {
        }
        ++cyc;
        // pc_1D98
        s1BE0_55 = cyc;
        {
        }
        ++cyc;
        // pc_1DA0
        s1BE0_56 = cyc;
        {
        }
        ++cyc;
        // pc_1DA8
        s1BE0_57 = cyc;
        {
        }
        ++cyc;
        // pc_1DB0
        s1BE0_58 = cyc;
        {
        }
        ++cyc;
        // pc_1DB8
        s1BE0_59 = cyc;
        {
        }
        ++cyc;
        // pc_1DC0
        s1BE0_60 = cyc;
        {
        }
        ++cyc;
        // pc_1DC8
        s1BE0_61 = cyc;
        {
        }
        ++cyc;
        // pc_1DD0
        s1BE0_62 = cyc;
        {
        }
        ++cyc;
        // pc_1DD8
        s1BE0_63 = cyc;
        {
        }
        ++cyc;
        // pc_1DE0
        s1BE0_64 = cyc;
        {
        }
        ++cyc;
        // pc_1DE8
        s1BE0_65 = cyc;
        {
        }
        ++cyc;
        // pc_1DF0
        s1BE0_66 = cyc;
        {
        }
        ++cyc;
        // pc_1DF8
        s1BE0_67 = cyc;
        {
        }
        ++cyc;
        // pc_1E00
        s1BE0_68 = cyc;
        {
        }
        ++cyc;
        // pc_1E08
        s1BE0_69 = cyc;
        {
        }
        ++cyc;
        // pc_1E10
        s1BE0_70 = cyc;
        {
        }
        ++cyc;
        // pc_1E18
        s1BE0_71 = cyc;
        {
        }
        ++cyc;
        // pc_1E20
        s1BE0_72 = cyc;
        {
        }
        ++cyc;
        // pc_1E28
        s1BE0_73 = cyc;
        {
        }
        ++cyc;
        // pc_1E30
        s1BE0_74 = cyc;
        {
        }
        ++cyc;
        // pc_1E38
        s1BE0_75 = cyc;
        {
        }
        ++cyc;
        // pc_1E40
        s1BE0_76 = cyc;
        {
        }
        ++cyc;
        // pc_1E48
        s1BE0_77 = cyc;
        {
        }
        ++cyc;
        // pc_1E50
        s1BE0_78 = cyc;
        {
        }
        ++cyc;
        // pc_1E58
        s1BE0_79 = cyc;
        {
        }
        ++cyc;
        // pc_1E60
        s1BE0_80 = cyc;
        {
        }
        ++cyc;
        // pc_1E68
        s1BE0_81 = cyc;
        {
        }
        ++cyc;
        // pc_1E70
        s1BE0_82 = cyc;
        {
        }
        ++cyc;
        // pc_1E78
        s1BE0_83 = cyc;
        {
        }
        ++cyc;
        // pc_1E80
        s1BE0_84 = cyc;
        {
        }
        ++cyc;
        // pc_1E88
        s1BE0_85 = cyc;
        {
        }
        ++cyc;
        // pc_1E90
        s1BE0_86 = cyc;
        {
        }
        ++cyc;
        // pc_1E98
        s1BE0_87 = cyc;
        {
        }
        ++cyc;
        // pc_1EA0
        s1BE0_88 = cyc;
        {
        }
        ++cyc;
        // pc_1EA8
        s1BE0_89 = cyc;
        {
        }
        ++cyc;
        // pc_1EB0
        s1BE0_90 = cyc;
        {
        }
        ++cyc;
        // pc_1EB8
        s1BE0_91 = cyc;
        {
        }
        ++cyc;
        // pc_1EC0
        s1BE0_92 = cyc;
        {
        }
        ++cyc;
        // pc_1EC8
        s1BE0_93 = cyc;
        {
        }
        ++cyc;
        // pc_1ED0
        s1BE0_94 = cyc;
        {
        }
        ++cyc;
        // pc_1ED8
        s1BE0_95 = cyc;
        {
        }
        ++cyc;
        // pc_1EE0
        s1BE0_96 = cyc;
        {
        }
        ++cyc;
        // pc_1EE8
        s1BE0_97 = cyc;
        {
        }
        ++cyc;
        // pc_1EF0
        s1BE0_98 = cyc;
        {
        }
        ++cyc;
        // pc_1EF8
        s1BE0_99 = cyc;
        {
        }
        ++cyc;
        // pc_1F00
        s1BE0_100 = cyc;
        {
        }
        ++cyc;
        // pc_1F08
        s1BE0_101 = cyc;
        {
        }
        ++cyc;
        // pc_1F10
        s1BE0_102 = cyc;
        {
        }
        ++cyc;
        // pc_1F18
        s1BE0_103 = cyc;
        {
        }
        ++cyc;
        // pc_1F20
        s1BE0_104 = cyc;
        {
        }
        ++cyc;
        // pc_1F28
        s1BE0_105 = cyc;
        {
        }
        ++cyc;
        // pc_1F30
        s1BE0_106 = cyc;
        {
        }
        ++cyc;
        // pc_1F38
        s1BE0_107 = cyc;
        {
        }
        ++cyc;
        // pc_1F40
        s1BE0_108 = cyc;
        {
        }
        ++cyc;
        // pc_1F48
        s1BE0_109 = cyc;
        {
        }
        ++cyc;
        // pc_1F50
        s1BE0_110 = cyc;
        {
        }
        ++cyc;
        // pc_1F58
        s1BE0_111 = cyc;
        {
        }
        ++cyc;
        // pc_1F60
        s1BE0_112 = cyc;
        {
        }
        ++cyc;
        // pc_1F68
        s1BE0_113 = cyc;
        {
        }
        ++cyc;
        // pc_1F70
        s1BE0_114 = cyc;
        {
        }
        ++cyc;
        // pc_1F78
        s1BE0_115 = cyc;
        {
        }
        ++cyc;
        // pc_1F80
        s1BE0_116 = cyc;
        {
        }
        ++cyc;
        // pc_1F88
        s1BE0_117 = cyc;
        {
        }
        ++cyc;
        // pc_1F90
        s1BE0_118 = cyc;
        {
        }
        ++cyc;
        // pc_1F98
        s1BE0_119 = cyc;
        {
        }
        ++cyc;
        // pc_1FA0
        s1BE0_120 = cyc;
        {
        }
        ++cyc;
        // pc_1FA8
        s1BE0_121 = cyc;
        {
        }
        ++cyc;
        // pc_1FB0
        s1BE0_122 = cyc;
        {
        }
        ++cyc;
        // pc_1FB8
        s1BE0_123 = cyc;
        {
        }
        ++cyc;
        // pc_1FC0
        s1BE0_124 = cyc;
        {
        }
        ++cyc;
        // pc_1FC8
        s1BE0_125 = cyc;
        {
        }
        ++cyc;
        // pc_1FD0
        s1BE0_126 = cyc;
        {
        }
        ++cyc;
        // pc_1FD8
        s1BE0_127 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x1FE0u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
}

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0xCD8F1FC2068BD71Dull, 8u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    bool tk = false;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x1FE0u: goto seg_1FE0;
    case 0x1FE8u: goto pc_1FE8;
    case 0x1FF0u: goto pc_1FF0;
    case 0x1FF8u: goto pc_1FF8;
    case 0x2000u: goto pc_2000;
    case 0x2008u: goto pc_2008;
    case 0x2010u: goto pc_2010;
    case 0x2018u: goto pc_2018;
    case 0x2020u: goto pc_2020;
    case 0x2028u: goto pc_2028;
    case 0x2030u: goto pc_2030;
    case 0x2038u: goto pc_2038;
    case 0x2040u: goto pc_2040;
    case 0x2048u: goto pc_2048;
    case 0x2050u: goto pc_2050;
    case 0x2058u: goto pc_2058;
    case 0x2060u: goto pc_2060;
    case 0x2068u: goto pc_2068;
    case 0x2070u: goto pc_2070;
    case 0x2078u: goto pc_2078;
    case 0x2080u: goto pc_2080;
    case 0x2088u: goto pc_2088;
    case 0x2090u: goto pc_2090;
    case 0x2098u: goto pc_2098;
    case 0x20A0u: goto pc_20A0;
    case 0x20A8u: goto pc_20A8;
    case 0x20B0u: goto pc_20B0;
    case 0x20B8u: goto seg_20B8;
    case 0x20C0u: goto seg_20C0;
    case 0x20C8u: goto pc_20C8;
    case 0x20D0u: goto pc_20D0;
    case 0x20D8u: goto pc_20D8;
    case 0x20E0u: goto pc_20E0;
    case 0x20E8u: goto pc_20E8;
    case 0x20F0u: goto pc_20F0;
    case 0x20F8u: goto pc_20F8;
    case 0x2100u: goto pc_2100;
    case 0x2108u: goto pc_2108;
    case 0x2110u: goto pc_2110;
    case 0x2118u: goto pc_2118;
    case 0x2120u: goto pc_2120;
    case 0x2128u: goto pc_2128;
    case 0x2130u: goto pc_2130;
    case 0x2138u: goto pc_2138;
    case 0x2140u: goto pc_2140;
    case 0x2148u: goto pc_2148;
    case 0x2150u: goto pc_2150;
    case 0x2158u: goto pc_2158;
    case 0x2160u: goto pc_2160;
    case 0x2168u: goto pc_2168;
    case 0x2170u: goto pc_2170;
    case 0x2178u: goto pc_2178;
    case 0x2180u: goto pc_2180;
    case 0x2188u: goto pc_2188;
    case 0x2190u: goto pc_2190;
    case 0x2198u: goto pc_2198;
    case 0x21A0u: goto pc_21A0;
    case 0x21A8u: goto pc_21A8;
    case 0x21B0u: goto pc_21B0;
    case 0x21B8u: goto pc_21B8;
    case 0x21C0u: goto pc_21C0;
    case 0x21C8u: goto pc_21C8;
    case 0x21D0u: goto pc_21D0;
    case 0x21D8u: goto pc_21D8;
    case 0x21E0u: goto pc_21E0;
    case 0x21E8u: goto pc_21E8;
    case 0x21F0u: goto pc_21F0;
    case 0x21F8u: goto pc_21F8;
    case 0x2200u: goto pc_2200;
    case 0x2208u: goto seg_2208;
    case 0x2210u: goto pc_2210;
    case 0x2218u: goto pc_2218;
    case 0x2220u: goto pc_2220;
    case 0x2228u: goto pc_2228;
    case 0x2230u: goto pc_2230;
    case 0x2238u: goto pc_2238;
    case 0x2240u: goto pc_2240;
    case 0x2248u: goto pc_2248;
    case 0x2250u: goto pc_2250;
    case 0x2258u: goto pc_2258;
    case 0x2260u: goto pc_2260;
    case 0x2268u: goto pc_2268;
    case 0x2270u: goto pc_2270;
    case 0x2278u: goto pc_2278;
    case 0x2280u: goto pc_2280;
    case 0x2288u: goto pc_2288;
    case 0x2290u: goto pc_2290;
    case 0x2298u: goto pc_2298;
    case 0x22A0u: goto pc_22A0;
    case 0x22A8u: goto seg_22A8;
    case 0x22B0u: goto seg_22B0;
    case 0x22B8u: goto pc_22B8;
    case 0x22C0u: goto seg_22C0;
    case 0x22C8u: goto seg_22C8;
    case 0x22D0u: goto pc_22D0;
    case 0x22D8u: goto pc_22D8;
    case 0x22E0u: goto seg_22E0;
    case 0x22E8u: goto seg_22E8;
    case 0x22F0u: goto seg_22F0;
    case 0x22F8u: goto seg_22F8;
    case 0x2300u: goto seg_2300;
    case 0x2308u: goto seg_2308;
    case 0x2310u: goto seg_2310;
    case 0x2318u: goto seg_2318;
    case 0x2320u: goto pc_2320;
    case 0x2328u: goto seg_2328;
    case 0x2330u: goto seg_2330;
    case 0x2338u: goto pc_2338;
    case 0x2340u: goto seg_2340;
    case 0x2348u: goto seg_2348;
    case 0x2350u: goto pc_2350;
    case 0x2358u: goto seg_2358;
    case 0x2360u: goto pc_2360;
    case 0x2368u: goto seg_2368;
    case 0x2370u: goto seg_2370;
    case 0x2378u: goto pc_2378;
    case 0x2380u: goto seg_2380;
    case 0x2388u: goto seg_2388;
    case 0x2390u: goto pc_2390;
    default: return StepResult::Fallback;
    }
pc_1FE0:
        if (cyc >= budget) { epc = 0x1FE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FE8:
        if (cyc >= budget) { epc = 0x1FE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FF0:
        if (cyc >= budget) { epc = 0x1FF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1FF8:
        if (cyc >= budget) { epc = 0x1FF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2000:
        if (cyc >= budget) { epc = 0x2000u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2008:
        if (cyc >= budget) { epc = 0x2008u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2008u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 1u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[1][0] = cyc + 4u;
            vu.m_vfReady[1][1] = cyc + 4u;
            vu.m_vfReady[1][2] = cyc + 4u;
            vu.m_vfReady[1][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2010:
        if (cyc >= budget) { epc = 0x2010u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2010u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 2u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[2][0] = cyc + 4u;
            vu.m_vfReady[2][1] = cyc + 4u;
            vu.m_vfReady[2][2] = cyc + 4u;
            vu.m_vfReady[2][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2018:
        if (cyc >= budget) { epc = 0x2018u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2018u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 3u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[3][0] = cyc + 4u;
            vu.m_vfReady[3][1] = cyc + 4u;
            vu.m_vfReady[3][2] = cyc + 4u;
            vu.m_vfReady[3][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2020:
        if (cyc >= budget) { epc = 0x2020u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2020u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 4u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[4][0] = cyc + 4u;
            vu.m_vfReady[4][1] = cyc + 4u;
            vu.m_vfReady[4][2] = cyc + 4u;
            vu.m_vfReady[4][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2028:
        if (cyc >= budget) { epc = 0x2028u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2028u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 9u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[9][0] = cyc + 4u;
            vu.m_vfReady[9][1] = cyc + 4u;
            vu.m_vfReady[9][2] = cyc + 4u;
            vu.m_vfReady[9][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2030:
        if (cyc >= budget) { epc = 0x2030u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2030u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 10u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[10][0] = cyc + 4u;
            vu.m_vfReady[10][1] = cyc + 4u;
            vu.m_vfReady[10][2] = cyc + 4u;
            vu.m_vfReady[10][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2038:
        if (cyc >= budget) { epc = 0x2038u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2038u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 11u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[11][0] = cyc + 4u;
            vu.m_vfReady[11][1] = cyc + 4u;
            vu.m_vfReady[11][2] = cyc + 4u;
            vu.m_vfReady[11][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2040:
        if (cyc >= budget) { epc = 0x2040u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2040u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 12u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[12][0] = cyc + 4u;
            vu.m_vfReady[12][1] = cyc + 4u;
            vu.m_vfReady[12][2] = cyc + 4u;
            vu.m_vfReady[12][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2048:
        if (cyc >= budget) { epc = 0x2048u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2048u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 15u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[15][0] = cyc + 4u;
            vu.m_vfReady[15][1] = cyc + 4u;
            vu.m_vfReady[15][2] = cyc + 4u;
            vu.m_vfReady[15][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2050:
        if (cyc >= budget) { epc = 0x2050u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2050u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 16u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[16][0] = cyc + 4u;
            vu.m_vfReady[16][1] = cyc + 4u;
            vu.m_vfReady[16][2] = cyc + 4u;
            vu.m_vfReady[16][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2058:
        if (cyc >= budget) { epc = 0x2058u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2058u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 17u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[17][0] = cyc + 4u;
            vu.m_vfReady[17][1] = cyc + 4u;
            vu.m_vfReady[17][2] = cyc + 4u;
            vu.m_vfReady[17][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2060:
        if (cyc >= budget) { epc = 0x2060u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2060u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2068:
        if (cyc >= budget) { epc = 0x2068u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2068u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2070:
        if (cyc >= budget) { epc = 0x2070u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2070u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2078:
        if (cyc >= budget) { epc = 0x2078u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2078u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 26u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2080:
        if (cyc >= budget) { epc = 0x2080u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2080u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[10], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2088:
        if (cyc >= budget) { epc = 0x2088u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[0] + 16384);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2090:
        if (cyc >= budget) { epc = 0x2090u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2090u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[6] + 16384);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2098:
        if (cyc >= budget) { epc = 0x2098u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 32767);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_20A0:
        if (cyc >= budget) { epc = 0x20A0u; goto exit_budget; }
        {
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_20A8:
        if (cyc >= budget) { epc = 0x20A8u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xEu, nv(ctx, 0u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 23u, uv, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x437F0000u);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
        }
        ++cyc;
pc_20B0:
        if (cyc >= budget) { epc = 0x20B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // end delay slot
        if (cyc >= budget) { epc = 0x20B8u; vu.m_state.ebit = true; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x20C0u; goto exit_ended; }
pc_20B8:
        if (cyc >= budget) { epc = 0x20B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_20C0;
pc_20C0:
        if (cyc >= budget) { epc = 0x20C0u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[0], 24) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 4u;
        }
        ++cyc;
pc_20C8:
        if (cyc >= budget) { epc = 0x20C8u; goto exit_budget; }
        {
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.top & 0x3FFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
        }
        ++cyc;
pc_20D0:
        if (cyc >= budget) { epc = 0x20D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20D0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 0)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_20D8:
        if (cyc >= budget) { epc = 0x20D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20D8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[5];
            vu.m_state.vi[5] = static_cast<int16_t>(vu.m_state.vi[4] + 208);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[5] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 5u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_20E0:
        if (cyc >= budget) { epc = 0x20E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_viReady[5]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20E0u; goto exit_budget; } } cyc = r; } }
        {
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[5], 0), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_20E8:
        if (cyc >= budget) { epc = 0x20E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20E8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 1)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_20F0:
        if (cyc >= budget) { epc = 0x20F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20F0u; goto exit_budget; } } cyc = r; } }
        {
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[0], 30), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_20F8:
        if (cyc >= budget) { epc = 0x20F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[5]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20F8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[3];
            vu.m_state.vi[3] = static_cast<int16_t>(vu.m_state.vi[5] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 3u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2100:
        if (cyc >= budget) { epc = 0x2100u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2100u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[7] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 0) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 4u;
        }
        ++cyc;
pc_2108:
        if (cyc >= budget) { epc = 0x2108u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2108u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[8] & vu.m_state.vi[7]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2110:
        if (cyc >= budget) { epc = 0x2110u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2110u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[4] + 2);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2118:
        if (cyc >= budget) { epc = 0x2118u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2118u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 0)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_2120:
        if (cyc >= budget) { epc = 0x2120u; goto exit_budget; }
        {
            { const __m128 mr = _mm_loadu_ps(vu.m_state.vf[0]); const __m128 mn = nv(ctx, 0u); writeVf(vu, ctx, 6u, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][2] = cyc + 4u;
        }
        ++cyc;
pc_2128:
        if (cyc >= budget) { epc = 0x2128u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2130:
        if (cyc >= budget) { epc = 0x2130u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2138:
        if (cyc >= budget) { epc = 0x2138u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2138u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[5])); writeVf(vu, ctx, 5u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
        }
        ++cyc;
pc_2140:
        if (cyc >= budget) { epc = 0x2140u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2148:
        if (cyc >= budget) { epc = 0x2148u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2150:
        if (cyc >= budget) { epc = 0x2150u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2158:
        if (cyc >= budget) { epc = 0x2158u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2158u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 5u), nv(ctx, 23u), _mm_setzero_ps(), un); writeVf(vu, ctx, 5u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
        }
        ++cyc;
pc_2160:
        if (cyc >= budget) { epc = 0x2160u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2160u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 1)); writeVf(vu, ctx, 7u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_2168:
        if (cyc >= budget) { epc = 0x2168u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 8)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_2170:
        if (cyc >= budget) { epc = 0x2170u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 9)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
        }
        ++cyc;
pc_2178:
        if (cyc >= budget) { epc = 0x2178u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2178u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2180:
        if (cyc >= budget) { epc = 0x2180u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2180u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2188:
        if (cyc >= budget) { epc = 0x2188u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2188u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[13];
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[13] = static_cast<int16_t>(vu.m_state.vi[0] + -2);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[13] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 13u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2190:
        if (cyc >= budget) { epc = 0x2190u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2190u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 24u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 2)); writeVf(vu, ctx, 6u, lv, vnorm(lv), 0xCu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[24][0] = cyc + 4u;
            vu.m_vfReady[24][1] = cyc + 4u;
            vu.m_vfReady[24][2] = cyc + 4u;
            vu.m_vfReady[24][3] = cyc + 4u;
        }
        ++cyc;
pc_2198:
        if (cyc >= budget) { epc = 0x2198u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[9][0]); r = rmax(r, vu.m_vfReady[9][1]); r = rmax(r, vu.m_vfReady[9][2]); r = rmax(r, vu.m_vfReady[9][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2198u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 9u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_21A0:
        if (cyc >= budget) { epc = 0x21A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[10][0]); r = rmax(r, vu.m_vfReady[10][1]); r = rmax(r, vu.m_vfReady[10][2]); r = rmax(r, vu.m_vfReady[10][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21A0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 10u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_21A8:
        if (cyc >= budget) { epc = 0x21A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[11][0]); r = rmax(r, vu.m_vfReady[11][1]); r = rmax(r, vu.m_vfReady[11][2]); r = rmax(r, vu.m_vfReady[11][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21A8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 11u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_21B0:
        if (cyc >= budget) { epc = 0x21B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[12][0]); r = rmax(r, vu.m_vfReady[12][1]); r = rmax(r, vu.m_vfReady[12][2]); r = rmax(r, vu.m_vfReady[12][3]); r = rmax(r, vu.m_vfReady[24][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21B0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 12u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 13u, uv, uv, 0xFu); }
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[24][3]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[13][0] = cyc + 4u;
            vu.m_vfReady[13][1] = cyc + 4u;
            vu.m_vfReady[13][2] = cyc + 4u;
            vu.m_vfReady[13][3] = cyc + 4u;
        }
        ++cyc;
pc_21B8:
        if (cyc >= budget) { epc = 0x21B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21B8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_21C0:
        if (cyc >= budget) { epc = 0x21C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21C0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<12u>(_mm_loadu_ps(vu.m_state.vf[6])); writeVf(vu, ctx, 6u, uv, uv, 0xCu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
        }
        ++cyc;
pc_21C8:
        if (cyc >= budget) { epc = 0x21C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_21D0:
        if (cyc >= budget) { epc = 0x21D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_21D8:
        if (cyc >= budget) { epc = 0x21D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21D8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 7u), nv(ctx, 21u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_21E0:
        if (cyc >= budget) { epc = 0x21E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21E0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 6u), nv(ctx, 26u), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
            vu.m_vfReady[14][3] = cyc + 4u;
        }
        ++cyc;
pc_21E8:
        if (cyc >= budget) { epc = 0x21E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x21E8u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 24u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 8u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 3)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
            vu.m_vfReady[8][0] = cyc + 4u;
            vu.m_vfReady[8][1] = cyc + 4u;
            vu.m_vfReady[8][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
        }
        ++cyc;
pc_21F0:
        if (cyc >= budget) { epc = 0x21F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_21F8:
        if (cyc >= budget) { epc = 0x21F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2200:
        if (cyc >= budget) { epc = 0x2200u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2200u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 27u), nv(ctx, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
        goto seg_2208;
pc_2208:
        if (cyc >= budget) { epc = 0x2208u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2208u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[5])); writeVf(vu, ctx, 25u, uv, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 6)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
        }
        ++cyc;
pc_2210:
        if (cyc >= budget) { epc = 0x2210u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[24][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2210u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0x1u, nv(ctx, 28u), nv(ctx, 24u), nacc(ctx), un); writeVf(vu, ctx, 8u, uv, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 20)); writeVf(vu, ctx, 18u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[18][0] = cyc + 4u;
            vu.m_vfReady[18][1] = cyc + 4u;
            vu.m_vfReady[18][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
        }
        ++cyc;
pc_2218:
        if (cyc >= budget) { epc = 0x2218u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2218u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_min_ps(nv(ctx, 7u), iN(vu)); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 21)); writeVf(vu, ctx, 19u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[19][0] = cyc + 4u;
            vu.m_vfReady[19][1] = cyc + 4u;
            vu.m_vfReady[19][2] = cyc + 4u;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_2220:
        if (cyc >= budget) { epc = 0x2220u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2220u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 14u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            vu.m_state.vi[14] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 0) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
            vu.m_viReady[14] = cyc + 4u;
        }
        ++cyc;
pc_2228:
        if (cyc >= budget) { epc = 0x2228u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2228u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 8u), nv(ctx, 18u), _mm_setzero_ps(), un); writeVf(vu, ctx, 22u, uv, uv, 0xEu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[0], 20), _mm_loadu_ps(vu.m_state.vf[8]), 0xEu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[22][0] = cyc + 4u;
            vu.m_vfReady[22][1] = cyc + 4u;
            vu.m_vfReady[22][2] = cyc + 4u;
        }
        ++cyc;
pc_2230:
        if (cyc >= budget) { epc = 0x2230u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2230u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = ftoi<0u>(nv(ctx, 7u)); writeVf(vu, ctx, 7u, uv, vnorm(uv), 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[0], 21), _mm_loadu_ps(vu.m_state.vf[18]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_2238:
        if (cyc >= budget) { epc = 0x2238u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_vfReady[14][3]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2238u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 25u), nv(ctx, 23u), _mm_setzero_ps(), un); writeVf(vu, ctx, 25u, uv, uv, 0xEu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[3], 0), _mm_loadu_ps(vu.m_state.vf[14]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
        }
        ++cyc;
pc_2240:
        if (cyc >= budget) { epc = 0x2240u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_viReady[8]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2240u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[2];
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 19u), nv(ctx, 18u), _mm_setzero_ps(), un); writeVf(vu, ctx, 20u, uv, uv, 0xEu); }
            vu.m_state.vi[2] = static_cast<int16_t>(vu.m_state.vi[14] & vu.m_state.vi[8]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
            vu.m_viReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 2u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2248:
        if (cyc >= budget) { epc = 0x2248u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2248u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[15];
            { const __m128 uv = _mm_min_ps(nv(ctx, 8u), iN(vu)); writeVf(vu, ctx, 8u, uv, uv, 0x1u); }
            vu.m_state.vi[15] = static_cast<int16_t>(vu.m_state.vi[0] + 32);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][3] = cyc + 4u;
            vu.m_viReady[15] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 15u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2250:
        if (cyc >= budget) { epc = 0x2250u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[13][0]); r = rmax(r, vu.m_vfReady[13][1]); r = rmax(r, vu.m_vfReady[13][2]); r = rmax(r, vu.m_vfReady[13][3]); r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2250u; goto exit_budget; } } cyc = r; } }
        {
            clipOp(vu, ctx, cyc, _mm_loadu_ps(vu.m_state.vf[13]), _mm_loadu_ps(vu.m_state.vf[13]));
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[3], 1), _mm_loadu_ps(vu.m_state.vf[7]), 0xFu);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2258:
        if (cyc >= budget) { epc = 0x2258u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2258u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 25u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 5)); writeVf(vu, ctx, 6u, lv, vnorm(lv), 0xCu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2260:
        if (cyc >= budget) { epc = 0x2260u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2260u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 25u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[14] & vu.m_state.vi[6]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2268:
        if (cyc >= budget) { epc = 0x2268u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2268u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            { const __m128 uv = _mm_max_ps(nv(ctx, 8u), nbc(ctx, 0u, 0u)); writeVf(vu, ctx, 8u, uv, uv, 0x1u); }
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[7] + -1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][3] = cyc + 4u;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2270:
        if (cyc >= budget) { epc = 0x2270u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[25][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2270u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 25u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            commitClip(vu, ctx, cyc); vu.m_state.vi[1] = (vu.m_state.clip & 0x3FFFFu) != 0u ? 1 : 0;
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2278:
        if (cyc >= budget) { epc = 0x2278u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2278u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[13];
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 24u, uv, uv, 0xFu); }
            vu.m_state.vi[13] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[1]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[24][0] = cyc + 4u;
            vu.m_vfReady[24][1] = cyc + 4u;
            vu.m_vfReady[24][2] = cyc + 4u;
            vu.m_vfReady[24][3] = cyc + 4u;
            vu.m_viReady[13] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 13u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2280:
        if (cyc >= budget) { epc = 0x2280u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[9][0]); r = rmax(r, vu.m_vfReady[9][1]); r = rmax(r, vu.m_vfReady[9][2]); r = rmax(r, vu.m_vfReady[9][3]); r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2280u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 9u), nbc(ctx, 25u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 4)); writeVf(vu, ctx, 7u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2288:
        if (cyc >= budget) { epc = 0x2288u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2288u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            { const __m128 uv = ftoi<4u>(nv(ctx, 8u)); writeVf(vu, ctx, 8u, uv, vnorm(uv), 0xFu); }
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[4] + 3);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][0] = cyc + 4u;
            vu.m_vfReady[8][1] = cyc + 4u;
            vu.m_vfReady[8][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2290:
        if (cyc >= budget) { epc = 0x2290u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[10][0]); r = rmax(r, vu.m_vfReady[10][1]); r = rmax(r, vu.m_vfReady[10][2]); r = rmax(r, vu.m_vfReady[10][3]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2290u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[3];
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 10u), nbc(ctx, 25u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[3] = static_cast<int16_t>(vu.m_state.vi[3] + 3);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 3u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_2298:
        if (cyc >= budget) { epc = 0x2298u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[11][0]); r = rmax(r, vu.m_vfReady[11][1]); r = rmax(r, vu.m_vfReady[11][2]); r = rmax(r, vu.m_vfReady[11][3]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[24][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2298u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 11u), nbc(ctx, 25u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[24][3]);
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_22A0:
        if (cyc >= budget) { epc = 0x22A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[12][0]); r = rmax(r, vu.m_vfReady[12][1]); r = rmax(r, vu.m_vfReady[12][2]); r = rmax(r, vu.m_vfReady[12][3]); r = rmax(r, vu.m_viReady[2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22A0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 12u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 13u, uv, uv, 0xFu); }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(2u));
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[13][0] = cyc + 4u;
            vu.m_vfReady[13][1] = cyc + 4u;
            vu.m_vfReady[13][2] = cyc + 4u;
            vu.m_vfReady[13][3] = cyc + 4u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x22A8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x22C8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22A8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x22C8u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[3], -1), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
        if (tk) goto seg_22C8;
        goto seg_22B0;
pc_22A8:
        if (cyc >= budget) { epc = 0x22A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22A8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[3], -1), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
        goto seg_22B0;
pc_22B0:
        if (cyc >= budget) { epc = 0x22B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[8][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22B0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 22u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_state.vi[9] = static_cast<int16_t>(std::bit_cast<uint32_t>(vu.m_state.vf[8][3]) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_22B8:
        if (cyc >= budget) { epc = 0x22B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22B8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, nv(ctx, 22u), nv(ctx, 20u), nacc(ctx), un); writeVf(vu, ctx, 0u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            resetVf0(vu, ctx);
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x22C0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x22E0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22C0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x22E0u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { const __m128 uv = itof<12u>(_mm_loadu_ps(vu.m_state.vf[6])); writeVf(vu, ctx, 6u, uv, uv, 0xCu); }
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + vu.m_state.vi[6]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        goto seg_22E0;
pc_22C0:
        if (cyc >= budget) { epc = 0x22C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22C0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { const __m128 uv = itof<12u>(_mm_loadu_ps(vu.m_state.vf[6])); writeVf(vu, ctx, 6u, uv, uv, 0xCu); }
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + vu.m_state.vi[6]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        goto seg_22C8;
pc_22C8:
        if (cyc >= budget) { epc = 0x22C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[8][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22C8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, nv(ctx, 22u), nv(ctx, 20u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_state.vi[9] = static_cast<int16_t>(std::bit_cast<uint32_t>(vu.m_state.vf[8][3]) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_22D0:
        if (cyc >= budget) { epc = 0x22D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22D0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 22u), nacc(ctx), un); writeVf(vu, ctx, 0u, uv, uv, 0xEu); }
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + vu.m_state.vi[6]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
            resetVf0(vu, ctx);
        }
        ++cyc;
pc_22D8:
        if (cyc >= budget) { epc = 0x22D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22D8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<12u>(_mm_loadu_ps(vu.m_state.vf[6])); writeVf(vu, ctx, 6u, uv, uv, 0xCu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
        }
        ++cyc;
        goto seg_22E0;
pc_22E0:
        if (cyc >= budget) { epc = 0x22E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22E0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 7u), nv(ctx, 21u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(11u));
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x22E8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2348u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22E8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2348u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 24u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 8u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][0] = cyc + 4u;
            vu.m_vfReady[8][1] = cyc + 4u;
            vu.m_vfReady[8][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
        }
        ++cyc;
        if (tk) goto seg_2348;
        goto seg_22F0;
pc_22E8:
        if (cyc >= budget) { epc = 0x22E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22E8u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 24u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 8u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][0] = cyc + 4u;
            vu.m_vfReady[8][1] = cyc + 4u;
            vu.m_vfReady[8][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
        }
        ++cyc;
        goto seg_22F0;
pc_22F0:
        if (cyc >= budget) { epc = 0x22F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22F0u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(13u)) > 0;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x22F8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2348u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22F8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2348u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            commitStatus(vu, ctx, cyc); vu.m_state.vi[15] = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vu.m_state.vi[15])));
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[15] = cyc + 1u;
        }
        ++cyc;
        if (tk) goto seg_2348;
        goto seg_2300;
pc_22F8:
        if (cyc >= budget) { epc = 0x22F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x22F8u; goto exit_budget; } } cyc = r; } }
        {
            commitStatus(vu, ctx, cyc); vu.m_state.vi[15] = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vu.m_state.vi[15])));
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[15] = cyc + 1u;
        }
        ++cyc;
        goto seg_2300;
pc_2300:
        if (cyc >= budget) { epc = 0x2300u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2300u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(15u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x2308u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2348u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_2348;
        goto seg_2310;
pc_2308:
        if (cyc >= budget) { epc = 0x2308u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_2310;
pc_2310:
        if (cyc >= budget) { epc = 0x2310u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2310u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 6u), nv(ctx, 26u), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xFu); }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(7u));
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
            vu.m_vfReady[14][3] = cyc + 4u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x2318u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2208u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2318u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2208u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 27u), nv(ctx, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
        if (tk) goto seg_2208;
        goto pc_2320;
pc_2318:
        if (cyc >= budget) { epc = 0x2318u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2318u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 27u), nv(ctx, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2320:
        if (cyc >= budget) { epc = 0x2320u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[5]); if (!xgkickStall(vu, ctx, cyc, r, budget)) { epc = 0x2320u; goto exit_budget; } }
        {
            xgkickStart(vu, ctx, cyc, vu.m_state.vi[5]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_2328;
pc_2328:
        if (cyc >= budget) { epc = 0x2328u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // end delay slot
        if (cyc >= budget) { epc = 0x2330u; vu.m_state.ebit = true; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x2338u; goto exit_ended; }
pc_2330:
        if (cyc >= budget) { epc = 0x2330u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2338:
        if (cyc >= budget) { epc = 0x2338u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x2340u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x20C0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_20C0;
pc_2340:
        if (cyc >= budget) { epc = 0x2340u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_2348;
pc_2348:
        if (cyc >= budget) { epc = 0x2348u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2348u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[3], -1), vu.m_state.vi[9], 0x1u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2350:
        if (cyc >= budget) { epc = 0x2350u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2350u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 6u), nv(ctx, 26u), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xFu); }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(7u));
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
            vu.m_vfReady[14][3] = cyc + 4u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x2358u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2208u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2358u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x2208u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 27u), nv(ctx, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
        if (tk) goto seg_2208;
        goto pc_2360;
pc_2358:
        if (cyc >= budget) { epc = 0x2358u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2358u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 27u), nv(ctx, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_2360:
        if (cyc >= budget) { epc = 0x2360u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[5]); if (!xgkickStall(vu, ctx, cyc, r, budget)) { epc = 0x2360u; goto exit_budget; } }
        {
            xgkickStart(vu, ctx, cyc, vu.m_state.vi[5]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_2368;
pc_2368:
        if (cyc >= budget) { epc = 0x2368u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // end delay slot
        if (cyc >= budget) { epc = 0x2370u; vu.m_state.ebit = true; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x2378u; goto exit_ended; }
pc_2370:
        if (cyc >= budget) { epc = 0x2370u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2378:
        if (cyc >= budget) { epc = 0x2378u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x2380u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x20C0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_20C0;
pc_2380:
        if (cyc >= budget) { epc = 0x2380u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_2388;
pc_2388:
        if (cyc >= budget) { epc = 0x2388u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_2390:
        if (cyc >= budget) { epc = 0x2390u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x2398u; goto exit_continue; }
seg_1FE0:
        if (cyc + 31u > budget) goto pc_1FE0;
    {
        uint64_t s1FE0_0 = 0u, s1FE0_1 = 0u, s1FE0_2 = 0u, s1FE0_3 = 0u, s1FE0_4 = 0u, s1FE0_5 = 0u, s1FE0_6 = 0u, s1FE0_7 = 0u, s1FE0_8 = 0u, s1FE0_9 = 0u, s1FE0_10 = 0u, s1FE0_11 = 0u, s1FE0_12 = 0u, s1FE0_13 = 0u, s1FE0_14 = 0u, s1FE0_15 = 0u, s1FE0_16 = 0u, s1FE0_17 = 0u, s1FE0_18 = 0u, s1FE0_19 = 0u, s1FE0_20 = 0u, s1FE0_21 = 0u, s1FE0_22 = 0u, s1FE0_23 = 0u, s1FE0_24 = 0u, s1FE0_25 = 0u, s1FE0_26 = 0u, s1FE0_27 = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr15 = _mm_loadu_ps(vu.m_state.vf[15]); __m128 vn15 = _mm_load_ps(ctx.norm[15]);
        __m128 vr16 = _mm_loadu_ps(vu.m_state.vf[16]); __m128 vn16 = _mm_load_ps(ctx.norm[16]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi10 = vu.m_state.vi[10];
        // pc_1FE0
        s1FE0_0 = cyc;
        {
        }
        ++cyc;
        // pc_1FE8
        s1FE0_1 = cyc;
        {
        }
        ++cyc;
        // pc_1FF0
        s1FE0_2 = cyc;
        {
        }
        ++cyc;
        // pc_1FF8
        s1FE0_3 = cyc;
        {
        }
        ++cyc;
        // pc_2000
        s1FE0_4 = cyc;
        const int32_t bk1FE0_4 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_2008
        s1FE0_5 = cyc;
        const int32_t bk1FE0_5 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[1], lv); vn1 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2010
        s1FE0_6 = cyc;
        const int32_t bk1FE0_6 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[2], lv); vn2 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2018
        s1FE0_7 = cyc;
        const int32_t bk1FE0_7 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[3], lv); vn3 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2020
        s1FE0_8 = cyc;
        const int32_t bk1FE0_8 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[4], lv); vn4 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2028
        s1FE0_9 = cyc;
        const int32_t bk1FE0_9 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[9], lv); vn9 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2030
        s1FE0_10 = cyc;
        const int32_t bk1FE0_10 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[10], lv); vn10 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2038
        s1FE0_11 = cyc;
        const int32_t bk1FE0_11 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[11], lv); vn11 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2040
        s1FE0_12 = cyc;
        const int32_t bk1FE0_12 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[12], lv); vn12 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2048
        s1FE0_13 = cyc;
        const int32_t bk1FE0_13 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[15], lv); vn15 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2050
        s1FE0_14 = cyc;
        const int32_t bk1FE0_14 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[16], lv); vn16 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2058
        s1FE0_15 = cyc;
        const int32_t bk1FE0_15 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[17], lv); vn17 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2060
        s1FE0_16 = cyc;
        const int32_t bk1FE0_16 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2068
        s1FE0_17 = cyc;
        const int32_t bk1FE0_17 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2070
        s1FE0_18 = cyc;
        const int32_t bk1FE0_18 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2078
        s1FE0_19 = cyc;
        const int32_t bk1FE0_19 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[26], lv); vn26 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2080
        s1FE0_20 = cyc;
        const int32_t bk1FE0_20 = vi10;
        {
            { const __m128 lv = ldq(mem, qaddr(vi10, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi10 = static_cast<int16_t>(vi10 + 1);
        }
        ++cyc;
        // pc_2088
        s1FE0_21 = cyc;
        const int32_t bk1FE0_21 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 16384);
        }
        ++cyc;
        // pc_2090
        s1FE0_22 = cyc;
        const int32_t bk1FE0_22 = vi6;
        {
            vi6 = static_cast<int16_t>(vi6 + 16384);
        }
        ++cyc;
        // pc_2098
        s1FE0_23 = cyc;
        const int32_t bk1FE0_23 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 32767);
        }
        ++cyc;
        // pc_20A0
        s1FE0_24 = cyc;
        {
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_20A8
        s1FE0_25 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xEu, kVf0(), iN(vu), _mm_setzero_ps(), un); vr23 = blendDest(vr23, uv, 0xEu); vn23 = blendDest(vn23, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x437F0000u);
        }
        ++cyc;
        // pc_20B0
        s1FE0_26 = cyc;
        {
        }
        ++cyc;
        s1FE0_27 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[1], vn1);
 _mm_store_ps(ctx.norm[2], vn2);
 _mm_store_ps(ctx.norm[3], vn3);
 _mm_store_ps(ctx.norm[4], vn4);
 _mm_store_ps(ctx.norm[9], vn9);
 _mm_store_ps(ctx.norm[10], vn10);
 _mm_store_ps(ctx.norm[11], vn11);
 _mm_store_ps(ctx.norm[12], vn12);
 _mm_store_ps(ctx.norm[15], vn15);
 _mm_store_ps(ctx.norm[16], vn16);
 _mm_store_ps(ctx.norm[17], vn17);
 _mm_store_ps(ctx.norm[21], vn21);
        _mm_storeu_ps(vu.m_state.vf[23], vr23); _mm_store_ps(ctx.norm[23], vn23);
 _mm_store_ps(ctx.norm[26], vn26);
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[10] = vi10;
        vu.m_vfReady[23][0] = s1FE0_25 + 4u;
        vu.m_vfReady[23][1] = s1FE0_25 + 4u;
        vu.m_vfReady[23][2] = s1FE0_25 + 4u;
        vu.m_viBranchBackupValid = false;
        { epc = 0x20C0u; goto exit_ended; }
    }
seg_20B8:
        if (cyc + 53u > budget) goto pc_20B8;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 31u) goto pc_20B8;
    {
        uint64_t s20B8_0 = 0u, s20B8_1 = 0u, s20B8_2 = 0u, s20B8_3 = 0u, s20B8_4 = 0u, s20B8_5 = 0u, s20B8_6 = 0u, s20B8_7 = 0u, s20B8_8 = 0u, s20B8_9 = 0u, s20B8_10 = 0u, s20B8_11 = 0u, s20B8_12 = 0u, s20B8_13 = 0u, s20B8_14 = 0u, s20B8_15 = 0u, s20B8_16 = 0u, s20B8_17 = 0u, s20B8_18 = 0u, s20B8_19 = 0u, s20B8_20 = 0u, s20B8_21 = 0u, s20B8_22 = 0u, s20B8_23 = 0u, s20B8_24 = 0u, s20B8_25 = 0u, s20B8_26 = 0u, s20B8_27 = 0u, s20B8_28 = 0u, s20B8_29 = 0u, s20B8_30 = 0u, s20B8_31 = 0u, s20B8_32 = 0u, s20B8_33 = 0u, s20B8_34 = 0u, s20B8_35 = 0u, s20B8_36 = 0u, s20B8_37 = 0u, s20B8_38 = 0u, s20B8_39 = 0u, s20B8_40 = 0u, s20B8_41 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi13 = vu.m_state.vi[13];
        // pc_20B8
        s20B8_0 = cyc;
        {
        }
        ++cyc;
        // pc_20C0
        s20B8_1 = cyc;
        {
            vi2 = static_cast<int16_t>(ldw(mem, qaddr(0, 24) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_20C8
        s20B8_2 = cyc;
        {
            vi4 = static_cast<int16_t>(vu.m_state.top & 0x3FFu);
        }
        ++cyc;
        // pc_20D0
        s20B8_3 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_20D8
        s20B8_4 = cyc;
        const int32_t bk20B8_4 = vi5;
        {
            vi5 = static_cast<int16_t>(vi4 + 208);
        }
        ++cyc;
        // pc_20E0
        { uint64_t r = cyc; r = rmax(r, s20B8_3 + 4u); r = rmax(r, s20B8_3 + 4u); r = rmax(r, s20B8_3 + 4u); r = rmax(r, s20B8_3 + 4u); cyc = r; }
        s20B8_5 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi5, 0), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
        }
        ++cyc;
        // pc_20E8
        s20B8_6 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 1)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_20F0
        { uint64_t r = cyc; r = rmax(r, s20B8_6 + 4u); r = rmax(r, s20B8_6 + 4u); r = rmax(r, s20B8_6 + 4u); r = rmax(r, s20B8_6 + 4u); cyc = r; }
        s20B8_7 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(0, 30), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
        }
        ++cyc;
        // pc_20F8
        s20B8_8 = cyc;
        const int32_t bk20B8_8 = vi3;
        {
            vi3 = static_cast<int16_t>(vi5 + 1);
        }
        ++cyc;
        // pc_2100
        s20B8_9 = cyc;
        {
            vi7 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_2108
        { uint64_t r = cyc; r = rmax(r, s20B8_9 + 4u); cyc = r; }
        s20B8_10 = cyc;
        const int32_t bk20B8_10 = vi7;
        {
            vi7 = static_cast<int16_t>(vi8 & vi7);
        }
        ++cyc;
        // pc_2110
        s20B8_11 = cyc;
        const int32_t bk20B8_11 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 2);
        }
        ++cyc;
        // pc_2118
        s20B8_12 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_2120
        s20B8_13 = cyc;
        {
            { const __m128 mr = kVf0(); const __m128 mn = kVf0(); vr6 = blendDest(vr6, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); vn6 = blendDest(vn6, _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
        }
        ++cyc;
        // pc_2128
        s20B8_14 = cyc;
        {
        }
        ++cyc;
        // pc_2130
        s20B8_15 = cyc;
        {
        }
        ++cyc;
        // pc_2138
        s20B8_16 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[5])); vr5 = blendDest(_mm_loadu_ps(vu.m_state.vf[5]), uv, 0xEu); vn5 = blendDest(vn5, uv, 0xEu); }
        }
        ++cyc;
        // pc_2140
        s20B8_17 = cyc;
        {
        }
        ++cyc;
        // pc_2148
        s20B8_18 = cyc;
        {
        }
        ++cyc;
        // pc_2150
        s20B8_19 = cyc;
        {
        }
        ++cyc;
        // pc_2158
        s20B8_20 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xEu, vn5, vn23, _mm_setzero_ps(), un); vr5 = blendDest(vr5, uv, 0xEu); vn5 = blendDest(vn5, uv, 0xEu); }
        }
        ++cyc;
        // pc_2160
        s20B8_21 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 1)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_2168
        s20B8_22 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 8)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_2170
        s20B8_23 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 9)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_2178
        s20B8_24 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_2180
        s20B8_25 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_2188
        s20B8_26 = cyc;
        const int32_t bk20B8_26 = vi13;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            vi13 = static_cast<int16_t>(0 + -2);
        }
        ++cyc;
        // pc_2190
        s20B8_27 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un); vn24 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 2)); vr6 = blendDest(vr6, lv, 0xCu); vn6 = blendDest(vn6, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_2198
        s20B8_28 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_21A0
        s20B8_29 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_21A8
        s20B8_30 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_21B0
        s20B8_31 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un); vn13 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn24));
        }
        ++cyc;
        // pc_21B8
        s20B8_32 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
        }
        ++cyc;
        // pc_21C0
        s20B8_33 = cyc;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
        }
        ++cyc;
        // pc_21C8
        s20B8_34 = cyc;
        {
        }
        ++cyc;
        // pc_21D0
        s20B8_35 = cyc;
        {
        }
        ++cyc;
        // pc_21D8
        s20B8_36 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn21, _mm_setzero_ps(), un); vn7 = uv; }
        }
        ++cyc;
        // pc_21E0
        s20B8_37 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Add>(vu, ctx, cyc, 0xFu, vn6, vn26, _mm_setzero_ps(), un); vn14 = uv; }
        }
        ++cyc;
        // pc_21E8
        s20B8_38 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn24, qN(vu), _mm_setzero_ps(), un); vn8 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 3)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_21F0
        s20B8_39 = cyc;
        {
        }
        ++cyc;
        // pc_21F8
        s20B8_40 = cyc;
        {
        }
        ++cyc;
        // pc_2200
        s20B8_41 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[8], vn8); _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.vf[14], vn14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[24], vn24); _mm_store_ps(ctx.norm[24], vn24);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[30], vn30);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[13] = vi13;
        vu.m_viBranchBackupValid = false;
        goto seg_2208;
    }
seg_20C0:
        if (cyc + 52u > budget) goto pc_20C0;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 30u) goto pc_20C0;
    {
        uint64_t s20C0_0 = 0u, s20C0_1 = 0u, s20C0_2 = 0u, s20C0_3 = 0u, s20C0_4 = 0u, s20C0_5 = 0u, s20C0_6 = 0u, s20C0_7 = 0u, s20C0_8 = 0u, s20C0_9 = 0u, s20C0_10 = 0u, s20C0_11 = 0u, s20C0_12 = 0u, s20C0_13 = 0u, s20C0_14 = 0u, s20C0_15 = 0u, s20C0_16 = 0u, s20C0_17 = 0u, s20C0_18 = 0u, s20C0_19 = 0u, s20C0_20 = 0u, s20C0_21 = 0u, s20C0_22 = 0u, s20C0_23 = 0u, s20C0_24 = 0u, s20C0_25 = 0u, s20C0_26 = 0u, s20C0_27 = 0u, s20C0_28 = 0u, s20C0_29 = 0u, s20C0_30 = 0u, s20C0_31 = 0u, s20C0_32 = 0u, s20C0_33 = 0u, s20C0_34 = 0u, s20C0_35 = 0u, s20C0_36 = 0u, s20C0_37 = 0u, s20C0_38 = 0u, s20C0_39 = 0u, s20C0_40 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi13 = vu.m_state.vi[13];
        // pc_20C0
        s20C0_0 = cyc;
        {
            vi2 = static_cast<int16_t>(ldw(mem, qaddr(0, 24) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_20C8
        s20C0_1 = cyc;
        {
            vi4 = static_cast<int16_t>(vu.m_state.top & 0x3FFu);
        }
        ++cyc;
        // pc_20D0
        s20C0_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_20D8
        s20C0_3 = cyc;
        const int32_t bk20C0_3 = vi5;
        {
            vi5 = static_cast<int16_t>(vi4 + 208);
        }
        ++cyc;
        // pc_20E0
        { uint64_t r = cyc; r = rmax(r, s20C0_2 + 4u); r = rmax(r, s20C0_2 + 4u); r = rmax(r, s20C0_2 + 4u); r = rmax(r, s20C0_2 + 4u); cyc = r; }
        s20C0_4 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi5, 0), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
        }
        ++cyc;
        // pc_20E8
        s20C0_5 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 1)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_20F0
        { uint64_t r = cyc; r = rmax(r, s20C0_5 + 4u); r = rmax(r, s20C0_5 + 4u); r = rmax(r, s20C0_5 + 4u); r = rmax(r, s20C0_5 + 4u); cyc = r; }
        s20C0_6 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(0, 30), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
        }
        ++cyc;
        // pc_20F8
        s20C0_7 = cyc;
        const int32_t bk20C0_7 = vi3;
        {
            vi3 = static_cast<int16_t>(vi5 + 1);
        }
        ++cyc;
        // pc_2100
        s20C0_8 = cyc;
        {
            vi7 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_2108
        { uint64_t r = cyc; r = rmax(r, s20C0_8 + 4u); cyc = r; }
        s20C0_9 = cyc;
        const int32_t bk20C0_9 = vi7;
        {
            vi7 = static_cast<int16_t>(vi8 & vi7);
        }
        ++cyc;
        // pc_2110
        s20C0_10 = cyc;
        const int32_t bk20C0_10 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 2);
        }
        ++cyc;
        // pc_2118
        s20C0_11 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_2120
        s20C0_12 = cyc;
        {
            { const __m128 mr = kVf0(); const __m128 mn = kVf0(); vr6 = blendDest(vr6, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); vn6 = blendDest(vn6, _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
        }
        ++cyc;
        // pc_2128
        s20C0_13 = cyc;
        {
        }
        ++cyc;
        // pc_2130
        s20C0_14 = cyc;
        {
        }
        ++cyc;
        // pc_2138
        s20C0_15 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[5])); vr5 = blendDest(_mm_loadu_ps(vu.m_state.vf[5]), uv, 0xEu); vn5 = blendDest(vn5, uv, 0xEu); }
        }
        ++cyc;
        // pc_2140
        s20C0_16 = cyc;
        {
        }
        ++cyc;
        // pc_2148
        s20C0_17 = cyc;
        {
        }
        ++cyc;
        // pc_2150
        s20C0_18 = cyc;
        {
        }
        ++cyc;
        // pc_2158
        s20C0_19 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn5, vn23, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr5 = blendDest(vr5, uv, 0xEu); vn5 = blendDest(vn5, uv, 0xEu); }
        }
        ++cyc;
        // pc_2160
        s20C0_20 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 1)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_2168
        s20C0_21 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 8)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_2170
        s20C0_22 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 9)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_2178
        s20C0_23 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_2180
        s20C0_24 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_2188
        s20C0_25 = cyc;
        const int32_t bk20C0_25 = vi13;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            vi13 = static_cast<int16_t>(0 + -2);
        }
        ++cyc;
        // pc_2190
        s20C0_26 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn24 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 2)); vr6 = blendDest(vr6, lv, 0xCu); vn6 = blendDest(vn6, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_2198
        s20C0_27 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_21A0
        s20C0_28 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_21A8
        s20C0_29 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_21B0
        s20C0_30 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn13 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn24));
        }
        ++cyc;
        // pc_21B8
        s20C0_31 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
        }
        ++cyc;
        // pc_21C0
        s20C0_32 = cyc;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
        }
        ++cyc;
        // pc_21C8
        s20C0_33 = cyc;
        {
        }
        ++cyc;
        // pc_21D0
        s20C0_34 = cyc;
        {
        }
        ++cyc;
        // pc_21D8
        s20C0_35 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn21, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn7 = uv; }
        }
        ++cyc;
        // pc_21E0
        s20C0_36 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn6, vn26, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn14 = uv; }
        }
        ++cyc;
        // pc_21E8
        s20C0_37 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Mul>(vu, ctx, cyc, 0xFu, vn24, qN(vu), _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn8 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 3)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_21F0
        s20C0_38 = cyc;
        {
        }
        ++cyc;
        // pc_21F8
        s20C0_39 = cyc;
        {
        }
        ++cyc;
        // pc_2200
        s20C0_40 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[8], vn8); _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.vf[14], vn14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[24], vn24); _mm_store_ps(ctx.norm[24], vn24);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[30], vn30);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[13] = vi13;
        vu.m_viBranchBackupValid = false;
        goto seg_2208;
    }
seg_2208:
        if (cyc + 27u > budget) goto pc_2208;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 18u) goto pc_2208;
    {
        uint64_t s2208_0 = 0u, s2208_1 = 0u, s2208_2 = 0u, s2208_3 = 0u, s2208_4 = 0u, s2208_5 = 0u, s2208_6 = 0u, s2208_7 = 0u, s2208_8 = 0u, s2208_9 = 0u, s2208_10 = 0u, s2208_11 = 0u, s2208_12 = 0u, s2208_13 = 0u, s2208_14 = 0u, s2208_15 = 0u, s2208_16 = 0u, s2208_17 = 0u, s2208_18 = 0u, s2208_19 = 0u, s2208_20 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi14 = vu.m_state.vi[14];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_2208
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_viReady[4]); cyc = r; }
        s2208_0 = cyc;
        {
            { const __m128 uv = itof<0u>(vr5); vr25 = blendDest(vr25, uv, 0xEu); vn25 = blendDest(vn25, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi4, 6)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_2210
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][3]); r = rmax(r, vu.m_vfReady[28][3]); cyc = r; }
        s2208_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0x1u, vn28, vn24, vn32, un, fAccZ, fAccS, fAccScalar); vr8 = blendDest(vr8, uv, 0x1u); vn8 = blendDest(vn8, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(0, 20)); vr18 = blendDest(vr18, lv, 0xEu); vn18 = blendDest(vn18, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_2218
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); cyc = r; }
        s2208_2 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn7, iN(vu)); vn7 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 21)); vr19 = blendDest(vr19, lv, 0xEu); vn19 = blendDest(vn19, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_2220
        s2208_3 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn14, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            vi14 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_2228
        { uint64_t r = cyc; r = rmax(r, s2208_1 + 4u); r = rmax(r, s2208_1 + 4u); r = rmax(r, s2208_1 + 4u); cyc = r; }
        s2208_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn8, vn18, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr22 = blendDest(vr22, uv, 0xEu); vn22 = blendDest(vn22, uv, 0xEu); }
            stq(vu, ctx, cyc, qaddr(0, 20), vr8, 0xEu);
        }
        ++cyc;
        // pc_2230
        { uint64_t r = cyc; r = rmax(r, s2208_2 + 4u); r = rmax(r, s2208_2 + 4u); r = rmax(r, s2208_2 + 4u); r = rmax(r, s2208_2 + 4u); cyc = r; }
        s2208_5 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn7); _mm_storeu_ps(vu.m_state.vf[7], uv); vn7 = vnorm(uv); }
            stq(vu, ctx, cyc, qaddr(0, 21), vr18, 0xFu);
        }
        ++cyc;
        // pc_2238
        { uint64_t r = cyc; r = rmax(r, s2208_3 + 4u); r = rmax(r, s2208_3 + 4u); r = rmax(r, s2208_3 + 4u); cyc = r; }
        s2208_6 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn25, vn23, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr25 = blendDest(vr25, uv, 0xEu); vn25 = blendDest(vn25, uv, 0xEu); }
            stq(vu, ctx, cyc, qaddr(vi3, 0), vr14, 0xFu);
        }
        ++cyc;
        // pc_2240
        s2208_7 = cyc;
        const int32_t bk2208_7 = vi2;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn19, vn18, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr20 = blendDest(vr20, uv, 0xEu); vn20 = blendDest(vn20, uv, 0xEu); }
            vi2 = static_cast<int16_t>(vi14 & vi8);
        }
        ++cyc;
        // pc_2248
        s2208_8 = cyc;
        const int32_t bk2208_8 = vi15;
        {
            { const __m128 uv = _mm_min_ps(vn8, iN(vu)); vr8 = blendDest(vr8, uv, 0x1u); vn8 = blendDest(vn8, uv, 0x1u); }
            vi15 = static_cast<int16_t>(0 + 32);
        }
        ++cyc;
        // pc_2250
        s2208_9 = cyc;
        {
            clipOp(vu, ctx, cyc, vr13, vr13);
            stq(vu, ctx, cyc, qaddr(vi3, 1), _mm_loadu_ps(vu.m_state.vf[7]), 0xFu);
        }
        ++cyc;
        // pc_2258
        s2208_10 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn25), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 5)); vr6 = blendDest(vr6, lv, 0xCu); vn6 = blendDest(vn6, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_2260
        s2208_11 = cyc;
        const int32_t bk2208_11 = vi11;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn25), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            vi11 = static_cast<int16_t>(vi14 & vi6);
        }
        ++cyc;
        // pc_2268
        s2208_12 = cyc;
        const int32_t bk2208_12 = vi7;
        {
            { const __m128 uv = _mm_max_ps(vn8, bcast<0u>(kVf0())); vr8 = blendDest(vr8, uv, 0x1u); vn8 = blendDest(vn8, uv, 0x1u); }
            vi7 = static_cast<int16_t>(vi7 + -1);
        }
        ++cyc;
        // pc_2270
        s2208_13 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn25), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            commitClip(vu, ctx, cyc); vi1 = (vu.m_state.clip & 0x3FFFFu) != 0u ? 1 : 0;
        }
        ++cyc;
        // pc_2278
        s2208_14 = cyc;
        const int32_t bk2208_14 = vi13;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn24 = uv; }
            vi13 = static_cast<int16_t>(0 + vi1);
        }
        ++cyc;
        // pc_2280
        s2208_15 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn25), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 4)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_2288
        s2208_16 = cyc;
        const int32_t bk2208_16 = vi4;
        {
            { const __m128 uv = ftoi<4u>(vn8); _mm_storeu_ps(vu.m_state.vf[8], uv); vn8 = vnorm(uv); }
            vi4 = static_cast<int16_t>(vi4 + 3);
        }
        ++cyc;
        // pc_2290
        s2208_17 = cyc;
        const int32_t bk2208_17 = vi3;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn25), vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn32 = uv; }
            vi3 = static_cast<int16_t>(vi3 + 3);
        }
        ++cyc;
        // pc_2298
        s2208_18 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn25), vn32, un); vn32 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn24));
        }
        ++cyc;
        // pc_22A0
        s2208_19 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un); vn13 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi2);
        }
        ++cyc;
        s2208_20 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
            stq(vu, ctx, cyc, qaddr(vi3, -1), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
 _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[18], vr18); _mm_store_ps(ctx.norm[18], vn18);
        _mm_storeu_ps(vu.m_state.vf[19], vr19); _mm_store_ps(ctx.norm[19], vn19);
        _mm_storeu_ps(vu.m_state.vf[20], vr20); _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[22], vr22); _mm_store_ps(ctx.norm[22], vn22);
        _mm_storeu_ps(vu.m_state.vf[24], vn24); _mm_store_ps(ctx.norm[24], vn24);
        _mm_storeu_ps(vu.m_state.vf[25], vr25); _mm_store_ps(ctx.norm[25], vn25);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[13] = vi13;
        vu.m_state.vi[14] = vi14;
        vu.m_state.vi[15] = vi15;
        setReady4(vu.m_vfReady[7].data(), s2208_20 + 4u);
        setReady4(vu.m_vfReady[13].data(), s2208_19 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_22C8;
        goto seg_22B0;
    }
seg_22A8:
        if (cyc + 7u > budget) goto pc_22A8;
    {
        uint64_t s22A8_0 = 0u, s22A8_1 = 0u, s22A8_2 = 0u, s22A8_3 = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_22A8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[3]); cyc = r; }
        s22A8_0 = cyc;
        {
            { const __m128 uv = itof<0u>(vr7); vn7 = uv; }
            stq(vu, ctx, cyc, qaddr(vi3, -1), vr8, 0xFu);
        }
        ++cyc;
        // pc_22B0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); cyc = r; }
        s22A8_1 = cyc;
        const int32_t bk22A8_1 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn20, vn22, _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_22B8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); cyc = r; }
        s22A8_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn22, vn20, vn32, un);  }
        }
        ++cyc;
        s22A8_3 = cyc;
        const int32_t bk22A8_3 = vi9;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
            vi9 = static_cast<int16_t>(vi9 + vi6);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[9] = vi9;
        vu.m_vfReady[6][0] = s22A8_3 + 4u;
        vu.m_vfReady[6][1] = s22A8_3 + 4u;
        vu.m_viReady[9] = s22A8_3 + 1u;
        vu.m_viBranchBackupValue = bk22A8_3; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        goto seg_22E0;
    }
seg_22B0:
        if (cyc + 6u > budget) goto pc_22B0;
    {
        uint64_t s22B0_0 = 0u, s22B0_1 = 0u, s22B0_2 = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_22B0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); cyc = r; }
        s22B0_0 = cyc;
        const int32_t bk22B0_0 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn20, vn22, _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_22B8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); cyc = r; }
        s22B0_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn22, vn20, vn32, un);  }
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s22B0_2 = cyc;
        const int32_t bk22B0_2 = vi9;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
            vi9 = static_cast<int16_t>(vi9 + vi6);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[9] = vi9;
        vu.m_vfReady[6][0] = s22B0_2 + 4u;
        vu.m_vfReady[6][1] = s22B0_2 + 4u;
        vu.m_viReady[9] = s22B0_2 + 1u;
        vu.m_viBranchBackupValue = bk22B0_2; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        goto seg_22E0;
    }
seg_22C0:
        if (cyc + 10u > budget) goto pc_22C0;
    {
        uint64_t s22C0_0 = 0u, s22C0_1 = 0u, s22C0_2 = 0u, s22C0_3 = 0u, s22C0_4 = 0u, s22C0_5 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_22C0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s22C0_0 = cyc;
        const int32_t bk22C0_0 = vi9;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
            vi9 = static_cast<int16_t>(vi9 + vi6);
        }
        ++cyc;
        // pc_22C8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); cyc = r; }
        s22C0_1 = cyc;
        const int32_t bk22C0_1 = vi9;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Opmula>(vu, ctx, cyc, 0xEu, vn22, vn20, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_22D0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s22C0_2 = cyc;
        const int32_t bk22C0_2 = vi9;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn20, vn22, vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS));  }
            vi9 = static_cast<int16_t>(vi9 + vi6);
        }
        ++cyc;
        // pc_22D8
        { uint64_t r = cyc; r = rmax(r, s22C0_0 + 4u); r = rmax(r, s22C0_0 + 4u); cyc = r; }
        s22C0_3 = cyc;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
        }
        ++cyc;
        // pc_22E0
        s22C0_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn21, _mm_setzero_ps(), un); vn7 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi11);
        }
        ++cyc;
        s22C0_5 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn24, qN(vu), _mm_setzero_ps(), un); vn8 = uv; }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[8], vn8); _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[9] = vi9;
        vu.m_vfReady[6][0] = s22C0_3 + 4u;
        vu.m_vfReady[6][1] = s22C0_3 + 4u;
        setReady4(vu.m_vfReady[7].data(), s22C0_4 + 4u);
        setReady4(vu.m_vfReady[8].data(), s22C0_5 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_22F0;
    }
seg_22C8:
        if (cyc + 8u > budget) goto pc_22C8;
    {
        uint64_t s22C8_0 = 0u, s22C8_1 = 0u, s22C8_2 = 0u, s22C8_3 = 0u, s22C8_4 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_22C8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); cyc = r; }
        s22C8_0 = cyc;
        const int32_t bk22C8_0 = vi9;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Opmula>(vu, ctx, cyc, 0xEu, vn22, vn20, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_22D0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s22C8_1 = cyc;
        const int32_t bk22C8_1 = vi9;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn20, vn22, vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS));  }
            vi9 = static_cast<int16_t>(vi9 + vi6);
        }
        ++cyc;
        // pc_22D8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); cyc = r; }
        s22C8_2 = cyc;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
        }
        ++cyc;
        // pc_22E0
        s22C8_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn21, _mm_setzero_ps(), un); vn7 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi11);
        }
        ++cyc;
        s22C8_4 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn24, qN(vu), _mm_setzero_ps(), un); vn8 = uv; }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[8], vn8); _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[9] = vi9;
        vu.m_vfReady[6][0] = s22C8_2 + 4u;
        vu.m_vfReady[6][1] = s22C8_2 + 4u;
        setReady4(vu.m_vfReady[7].data(), s22C8_3 + 4u);
        setReady4(vu.m_vfReady[8].data(), s22C8_4 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_22F0;
    }
seg_22E0:
        if (cyc + 5u > budget) goto pc_22E0;
    {
        uint64_t s22E0_0 = 0u, s22E0_1 = 0u;
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        // pc_22E0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s22E0_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn21, _mm_setzero_ps(), un); vn7 = uv; }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(11u));
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); cyc = r; }
        s22E0_1 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn24, qN(vu), _mm_setzero_ps(), un); vn8 = uv; }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[8], vn8); _mm_store_ps(ctx.norm[8], vn8);
        setReady4(vu.m_vfReady[7].data(), s22E0_0 + 4u);
        setReady4(vu.m_vfReady[8].data(), s22E0_1 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_22F0;
    }
seg_22E8:
        if (cyc + 6u > budget) goto pc_22E8;
    {
        uint64_t s22E8_0 = 0u, s22E8_1 = 0u, s22E8_2 = 0u;
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_22E8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); cyc = r; }
        s22E8_0 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn24, qN(vu), _mm_setzero_ps(), un); vn8 = uv; }
        }
        ++cyc;
        // pc_22F0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[13]); cyc = r; }
        s22E8_1 = cyc;
        {
            tk = static_cast<int16_t>(vi13) > 0;
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s22E8_2 = cyc;
        {
            commitStatus(vu, ctx, cyc); vi15 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi15)));
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[8], vn8); _mm_store_ps(ctx.norm[8], vn8);
        vu.m_state.vi[15] = vi15;
        setReady4(vu.m_vfReady[8].data(), s22E8_0 + 4u);
        vu.m_viReady[15] = s22E8_2 + 1u;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_2300;
    }
seg_22F0:
        if (cyc + 5u > budget) goto pc_22F0;
    {
        uint64_t s22F0_0 = 0u, s22F0_1 = 0u;
        int32_t vi15 = vu.m_state.vi[15];
        // pc_22F0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[13]); cyc = r; }
        s22F0_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(13u)) > 0;
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s22F0_1 = cyc;
        {
            commitStatus(vu, ctx, cyc); vi15 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi15)));
        }
        ++cyc;
        vu.m_state.vi[15] = vi15;
        vu.m_viReady[15] = s22F0_1 + 1u;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_2300;
    }
seg_22F8:
        if (cyc + 6u > budget) goto pc_22F8;
    {
        uint64_t s22F8_0 = 0u, s22F8_1 = 0u, s22F8_2 = 0u;
        int32_t vi15 = vu.m_state.vi[15];
        // pc_22F8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s22F8_0 = cyc;
        {
            commitStatus(vu, ctx, cyc); vi15 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi15)));
        }
        ++cyc;
        // pc_2300
        s22F8_1 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi15);
        }
        ++cyc;
        s22F8_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[15] = vi15;
        vu.m_viReady[15] = s22F8_0 + 1u;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_2310;
    }
seg_2300:
        if (cyc + 5u > budget) goto pc_2300;
    {
        uint64_t s2300_0 = 0u, s2300_1 = 0u;
        // pc_2300
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s2300_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(15u));
        }
        ++cyc;
        s2300_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2348;
        goto seg_2310;
    }
seg_2308:
        if (cyc + 6u > budget) goto pc_2308;
    {
        uint64_t s2308_0 = 0u, s2308_1 = 0u, s2308_2 = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi7 = vu.m_state.vi[7];
        // pc_2308
        s2308_0 = cyc;
        {
        }
        ++cyc;
        // pc_2310
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s2308_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, vn6, vn26, _mm_setzero_ps(), un); vn14 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi7);
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); cyc = r; }
        s2308_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[14], vn14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        setReady4(vu.m_vfReady[14].data(), s2308_1 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2208;
        goto pc_2320;
    }
seg_2310:
        if (cyc + 5u > budget) goto pc_2310;
    {
        uint64_t s2310_0 = 0u, s2310_1 = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        // pc_2310
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s2310_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, vn6, vn26, _mm_setzero_ps(), un); vn14 = uv; }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(7u));
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); cyc = r; }
        s2310_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[14], vn14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        setReady4(vu.m_vfReady[14].data(), s2310_0 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2208;
        goto pc_2320;
    }
seg_2318:
        if (cyc + 4u > budget) goto pc_2318;
    {
        uint64_t s2318_0 = 0u;
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        // pc_2318
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); cyc = r; }
        s2318_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_viBranchBackupValid = false;
        goto pc_2320;
    }
seg_2328:
        if (cyc + 5u > budget) goto pc_2328;
    {
        uint64_t s2328_0 = 0u, s2328_1 = 0u;
        // pc_2328
        s2328_0 = cyc;
        {
        }
        ++cyc;
        s2328_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x2338u; goto exit_ended; }
    }
seg_2330:
        if (cyc + 6u > budget) goto pc_2330;
    {
        uint64_t s2330_0 = 0u, s2330_1 = 0u, s2330_2 = 0u;
        // pc_2330
        s2330_0 = cyc;
        {
        }
        ++cyc;
        // pc_2338
        s2330_1 = cyc;
        {
        }
        ++cyc;
        s2330_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        goto seg_20C0;
    }
seg_2340:
        if (cyc + 7u > budget) goto pc_2340;
    {
        uint64_t s2340_0 = 0u, s2340_1 = 0u, s2340_2 = 0u, s2340_3 = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_2340
        s2340_0 = cyc;
        {
        }
        ++cyc;
        // pc_2348
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s2340_1 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi3, -1), vi9, 0x1u);
        }
        ++cyc;
        // pc_2350
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s2340_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, vn6, vn26, _mm_setzero_ps(), un); vn14 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi7);
        }
        ++cyc;
        s2340_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[14], vn14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        setReady4(vu.m_vfReady[14].data(), s2340_2 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2208;
        goto pc_2360;
    }
seg_2348:
        if (cyc + 6u > budget) goto pc_2348;
    {
        uint64_t s2348_0 = 0u, s2348_1 = 0u, s2348_2 = 0u;
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_2348
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s2348_0 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi3, -1), vi9, 0x1u);
        }
        ++cyc;
        // pc_2350
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s2348_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, vn6, vn26, _mm_setzero_ps(), un); vn14 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi7);
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); cyc = r; }
        s2348_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[14], vn14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        setReady4(vu.m_vfReady[14].data(), s2348_1 + 4u);
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_2208;
        goto pc_2360;
    }
seg_2358:
        if (cyc + 4u > budget) goto pc_2358;
    {
        uint64_t s2358_0 = 0u;
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        // pc_2358
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][3]); cyc = r; }
        s2358_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn27, kVf0(), _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_viBranchBackupValid = false;
        goto pc_2360;
    }
seg_2368:
        if (cyc + 5u > budget) goto pc_2368;
    {
        uint64_t s2368_0 = 0u, s2368_1 = 0u;
        // pc_2368
        s2368_0 = cyc;
        {
        }
        ++cyc;
        s2368_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x2378u; goto exit_ended; }
    }
seg_2370:
        if (cyc + 6u > budget) goto pc_2370;
    {
        uint64_t s2370_0 = 0u, s2370_1 = 0u, s2370_2 = 0u;
        // pc_2370
        s2370_0 = cyc;
        {
        }
        ++cyc;
        // pc_2378
        s2370_1 = cyc;
        {
        }
        ++cyc;
        s2370_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        goto seg_20C0;
    }
seg_2380:
        if (cyc + 6u > budget) goto pc_2380;
    {
        uint64_t s2380_0 = 0u, s2380_1 = 0u, s2380_2 = 0u;
        // pc_2380
        s2380_0 = cyc;
        {
        }
        ++cyc;
        // pc_2388
        s2380_1 = cyc;
        {
        }
        ++cyc;
        // pc_2390
        s2380_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x2398u; goto exit_continue; }
    }
seg_2388:
        if (cyc + 5u > budget) goto pc_2388;
    {
        uint64_t s2388_0 = 0u, s2388_1 = 0u;
        // pc_2388
        s2388_0 = cyc;
        {
        }
        ++cyc;
        // pc_2390
        s2388_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x2398u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
exit_ended:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Ended;
}

