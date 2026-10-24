#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002C1618
// Address: 0x2c1618 - 0x2c1ae0
void func_002C1618_0x2c1618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C1618_0x2c1618");
#endif

    switch (ctx->pc) {
        case 0x2c1618u: goto label_2c1618;
        case 0x2c161cu: goto label_2c161c;
        case 0x2c1620u: goto label_2c1620;
        case 0x2c1624u: goto label_2c1624;
        case 0x2c1628u: goto label_2c1628;
        case 0x2c162cu: goto label_2c162c;
        case 0x2c1630u: goto label_2c1630;
        case 0x2c1634u: goto label_2c1634;
        case 0x2c1638u: goto label_2c1638;
        case 0x2c163cu: goto label_2c163c;
        case 0x2c1640u: goto label_2c1640;
        case 0x2c1644u: goto label_2c1644;
        case 0x2c1648u: goto label_2c1648;
        case 0x2c164cu: goto label_2c164c;
        case 0x2c1650u: goto label_2c1650;
        case 0x2c1654u: goto label_2c1654;
        case 0x2c1658u: goto label_2c1658;
        case 0x2c165cu: goto label_2c165c;
        case 0x2c1660u: goto label_2c1660;
        case 0x2c1664u: goto label_2c1664;
        case 0x2c1668u: goto label_2c1668;
        case 0x2c166cu: goto label_2c166c;
        case 0x2c1670u: goto label_2c1670;
        case 0x2c1674u: goto label_2c1674;
        case 0x2c1678u: goto label_2c1678;
        case 0x2c167cu: goto label_2c167c;
        case 0x2c1680u: goto label_2c1680;
        case 0x2c1684u: goto label_2c1684;
        case 0x2c1688u: goto label_2c1688;
        case 0x2c168cu: goto label_2c168c;
        case 0x2c1690u: goto label_2c1690;
        case 0x2c1694u: goto label_2c1694;
        case 0x2c1698u: goto label_2c1698;
        case 0x2c169cu: goto label_2c169c;
        case 0x2c16a0u: goto label_2c16a0;
        case 0x2c16a4u: goto label_2c16a4;
        case 0x2c16a8u: goto label_2c16a8;
        case 0x2c16acu: goto label_2c16ac;
        case 0x2c16b0u: goto label_2c16b0;
        case 0x2c16b4u: goto label_2c16b4;
        case 0x2c16b8u: goto label_2c16b8;
        case 0x2c16bcu: goto label_2c16bc;
        case 0x2c16c0u: goto label_2c16c0;
        case 0x2c16c4u: goto label_2c16c4;
        case 0x2c16c8u: goto label_2c16c8;
        case 0x2c16ccu: goto label_2c16cc;
        case 0x2c16d0u: goto label_2c16d0;
        case 0x2c16d4u: goto label_2c16d4;
        case 0x2c16d8u: goto label_2c16d8;
        case 0x2c16dcu: goto label_2c16dc;
        case 0x2c16e0u: goto label_2c16e0;
        case 0x2c16e4u: goto label_2c16e4;
        case 0x2c16e8u: goto label_2c16e8;
        case 0x2c16ecu: goto label_2c16ec;
        case 0x2c16f0u: goto label_2c16f0;
        case 0x2c16f4u: goto label_2c16f4;
        case 0x2c16f8u: goto label_2c16f8;
        case 0x2c16fcu: goto label_2c16fc;
        case 0x2c1700u: goto label_2c1700;
        case 0x2c1704u: goto label_2c1704;
        case 0x2c1708u: goto label_2c1708;
        case 0x2c170cu: goto label_2c170c;
        case 0x2c1710u: goto label_2c1710;
        case 0x2c1714u: goto label_2c1714;
        case 0x2c1718u: goto label_2c1718;
        case 0x2c171cu: goto label_2c171c;
        case 0x2c1720u: goto label_2c1720;
        case 0x2c1724u: goto label_2c1724;
        case 0x2c1728u: goto label_2c1728;
        case 0x2c172cu: goto label_2c172c;
        case 0x2c1730u: goto label_2c1730;
        case 0x2c1734u: goto label_2c1734;
        case 0x2c1738u: goto label_2c1738;
        case 0x2c173cu: goto label_2c173c;
        case 0x2c1740u: goto label_2c1740;
        case 0x2c1744u: goto label_2c1744;
        case 0x2c1748u: goto label_2c1748;
        case 0x2c174cu: goto label_2c174c;
        case 0x2c1750u: goto label_2c1750;
        case 0x2c1754u: goto label_2c1754;
        case 0x2c1758u: goto label_2c1758;
        case 0x2c175cu: goto label_2c175c;
        case 0x2c1760u: goto label_2c1760;
        case 0x2c1764u: goto label_2c1764;
        case 0x2c1768u: goto label_2c1768;
        case 0x2c176cu: goto label_2c176c;
        case 0x2c1770u: goto label_2c1770;
        case 0x2c1774u: goto label_2c1774;
        case 0x2c1778u: goto label_2c1778;
        case 0x2c177cu: goto label_2c177c;
        case 0x2c1780u: goto label_2c1780;
        case 0x2c1784u: goto label_2c1784;
        case 0x2c1788u: goto label_2c1788;
        case 0x2c178cu: goto label_2c178c;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c1794u: goto label_2c1794;
        case 0x2c1798u: goto label_2c1798;
        case 0x2c179cu: goto label_2c179c;
        case 0x2c17a0u: goto label_2c17a0;
        case 0x2c17a4u: goto label_2c17a4;
        case 0x2c17a8u: goto label_2c17a8;
        case 0x2c17acu: goto label_2c17ac;
        case 0x2c17b0u: goto label_2c17b0;
        case 0x2c17b4u: goto label_2c17b4;
        case 0x2c17b8u: goto label_2c17b8;
        case 0x2c17bcu: goto label_2c17bc;
        case 0x2c17c0u: goto label_2c17c0;
        case 0x2c17c4u: goto label_2c17c4;
        case 0x2c17c8u: goto label_2c17c8;
        case 0x2c17ccu: goto label_2c17cc;
        case 0x2c17d0u: goto label_2c17d0;
        case 0x2c17d4u: goto label_2c17d4;
        case 0x2c17d8u: goto label_2c17d8;
        case 0x2c17dcu: goto label_2c17dc;
        case 0x2c17e0u: goto label_2c17e0;
        case 0x2c17e4u: goto label_2c17e4;
        case 0x2c17e8u: goto label_2c17e8;
        case 0x2c17ecu: goto label_2c17ec;
        case 0x2c17f0u: goto label_2c17f0;
        case 0x2c17f4u: goto label_2c17f4;
        case 0x2c17f8u: goto label_2c17f8;
        case 0x2c17fcu: goto label_2c17fc;
        case 0x2c1800u: goto label_2c1800;
        case 0x2c1804u: goto label_2c1804;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c180cu: goto label_2c180c;
        case 0x2c1810u: goto label_2c1810;
        case 0x2c1814u: goto label_2c1814;
        case 0x2c1818u: goto label_2c1818;
        case 0x2c181cu: goto label_2c181c;
        case 0x2c1820u: goto label_2c1820;
        case 0x2c1824u: goto label_2c1824;
        case 0x2c1828u: goto label_2c1828;
        case 0x2c182cu: goto label_2c182c;
        case 0x2c1830u: goto label_2c1830;
        case 0x2c1834u: goto label_2c1834;
        case 0x2c1838u: goto label_2c1838;
        case 0x2c183cu: goto label_2c183c;
        case 0x2c1840u: goto label_2c1840;
        case 0x2c1844u: goto label_2c1844;
        case 0x2c1848u: goto label_2c1848;
        case 0x2c184cu: goto label_2c184c;
        case 0x2c1850u: goto label_2c1850;
        case 0x2c1854u: goto label_2c1854;
        case 0x2c1858u: goto label_2c1858;
        case 0x2c185cu: goto label_2c185c;
        case 0x2c1860u: goto label_2c1860;
        case 0x2c1864u: goto label_2c1864;
        case 0x2c1868u: goto label_2c1868;
        case 0x2c186cu: goto label_2c186c;
        case 0x2c1870u: goto label_2c1870;
        case 0x2c1874u: goto label_2c1874;
        case 0x2c1878u: goto label_2c1878;
        case 0x2c187cu: goto label_2c187c;
        case 0x2c1880u: goto label_2c1880;
        case 0x2c1884u: goto label_2c1884;
        case 0x2c1888u: goto label_2c1888;
        case 0x2c188cu: goto label_2c188c;
        case 0x2c1890u: goto label_2c1890;
        case 0x2c1894u: goto label_2c1894;
        case 0x2c1898u: goto label_2c1898;
        case 0x2c189cu: goto label_2c189c;
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c18a4u: goto label_2c18a4;
        case 0x2c18a8u: goto label_2c18a8;
        case 0x2c18acu: goto label_2c18ac;
        case 0x2c18b0u: goto label_2c18b0;
        case 0x2c18b4u: goto label_2c18b4;
        case 0x2c18b8u: goto label_2c18b8;
        case 0x2c18bcu: goto label_2c18bc;
        case 0x2c18c0u: goto label_2c18c0;
        case 0x2c18c4u: goto label_2c18c4;
        case 0x2c18c8u: goto label_2c18c8;
        case 0x2c18ccu: goto label_2c18cc;
        case 0x2c18d0u: goto label_2c18d0;
        case 0x2c18d4u: goto label_2c18d4;
        case 0x2c18d8u: goto label_2c18d8;
        case 0x2c18dcu: goto label_2c18dc;
        case 0x2c18e0u: goto label_2c18e0;
        case 0x2c18e4u: goto label_2c18e4;
        case 0x2c18e8u: goto label_2c18e8;
        case 0x2c18ecu: goto label_2c18ec;
        case 0x2c18f0u: goto label_2c18f0;
        case 0x2c18f4u: goto label_2c18f4;
        case 0x2c18f8u: goto label_2c18f8;
        case 0x2c18fcu: goto label_2c18fc;
        case 0x2c1900u: goto label_2c1900;
        case 0x2c1904u: goto label_2c1904;
        case 0x2c1908u: goto label_2c1908;
        case 0x2c190cu: goto label_2c190c;
        case 0x2c1910u: goto label_2c1910;
        case 0x2c1914u: goto label_2c1914;
        case 0x2c1918u: goto label_2c1918;
        case 0x2c191cu: goto label_2c191c;
        case 0x2c1920u: goto label_2c1920;
        case 0x2c1924u: goto label_2c1924;
        case 0x2c1928u: goto label_2c1928;
        case 0x2c192cu: goto label_2c192c;
        case 0x2c1930u: goto label_2c1930;
        case 0x2c1934u: goto label_2c1934;
        case 0x2c1938u: goto label_2c1938;
        case 0x2c193cu: goto label_2c193c;
        case 0x2c1940u: goto label_2c1940;
        case 0x2c1944u: goto label_2c1944;
        case 0x2c1948u: goto label_2c1948;
        case 0x2c194cu: goto label_2c194c;
        case 0x2c1950u: goto label_2c1950;
        case 0x2c1954u: goto label_2c1954;
        case 0x2c1958u: goto label_2c1958;
        case 0x2c195cu: goto label_2c195c;
        case 0x2c1960u: goto label_2c1960;
        case 0x2c1964u: goto label_2c1964;
        case 0x2c1968u: goto label_2c1968;
        case 0x2c196cu: goto label_2c196c;
        case 0x2c1970u: goto label_2c1970;
        case 0x2c1974u: goto label_2c1974;
        case 0x2c1978u: goto label_2c1978;
        case 0x2c197cu: goto label_2c197c;
        case 0x2c1980u: goto label_2c1980;
        case 0x2c1984u: goto label_2c1984;
        case 0x2c1988u: goto label_2c1988;
        case 0x2c198cu: goto label_2c198c;
        case 0x2c1990u: goto label_2c1990;
        case 0x2c1994u: goto label_2c1994;
        case 0x2c1998u: goto label_2c1998;
        case 0x2c199cu: goto label_2c199c;
        case 0x2c19a0u: goto label_2c19a0;
        case 0x2c19a4u: goto label_2c19a4;
        case 0x2c19a8u: goto label_2c19a8;
        case 0x2c19acu: goto label_2c19ac;
        case 0x2c19b0u: goto label_2c19b0;
        case 0x2c19b4u: goto label_2c19b4;
        case 0x2c19b8u: goto label_2c19b8;
        case 0x2c19bcu: goto label_2c19bc;
        case 0x2c19c0u: goto label_2c19c0;
        case 0x2c19c4u: goto label_2c19c4;
        case 0x2c19c8u: goto label_2c19c8;
        case 0x2c19ccu: goto label_2c19cc;
        case 0x2c19d0u: goto label_2c19d0;
        case 0x2c19d4u: goto label_2c19d4;
        case 0x2c19d8u: goto label_2c19d8;
        case 0x2c19dcu: goto label_2c19dc;
        case 0x2c19e0u: goto label_2c19e0;
        case 0x2c19e4u: goto label_2c19e4;
        case 0x2c19e8u: goto label_2c19e8;
        case 0x2c19ecu: goto label_2c19ec;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c19f4u: goto label_2c19f4;
        case 0x2c19f8u: goto label_2c19f8;
        case 0x2c19fcu: goto label_2c19fc;
        case 0x2c1a00u: goto label_2c1a00;
        case 0x2c1a04u: goto label_2c1a04;
        case 0x2c1a08u: goto label_2c1a08;
        case 0x2c1a0cu: goto label_2c1a0c;
        case 0x2c1a10u: goto label_2c1a10;
        case 0x2c1a14u: goto label_2c1a14;
        case 0x2c1a18u: goto label_2c1a18;
        case 0x2c1a1cu: goto label_2c1a1c;
        case 0x2c1a20u: goto label_2c1a20;
        case 0x2c1a24u: goto label_2c1a24;
        case 0x2c1a28u: goto label_2c1a28;
        case 0x2c1a2cu: goto label_2c1a2c;
        case 0x2c1a30u: goto label_2c1a30;
        case 0x2c1a34u: goto label_2c1a34;
        case 0x2c1a38u: goto label_2c1a38;
        case 0x2c1a3cu: goto label_2c1a3c;
        case 0x2c1a40u: goto label_2c1a40;
        case 0x2c1a44u: goto label_2c1a44;
        case 0x2c1a48u: goto label_2c1a48;
        case 0x2c1a4cu: goto label_2c1a4c;
        case 0x2c1a50u: goto label_2c1a50;
        case 0x2c1a54u: goto label_2c1a54;
        case 0x2c1a58u: goto label_2c1a58;
        case 0x2c1a5cu: goto label_2c1a5c;
        case 0x2c1a60u: goto label_2c1a60;
        case 0x2c1a64u: goto label_2c1a64;
        case 0x2c1a68u: goto label_2c1a68;
        case 0x2c1a6cu: goto label_2c1a6c;
        case 0x2c1a70u: goto label_2c1a70;
        case 0x2c1a74u: goto label_2c1a74;
        case 0x2c1a78u: goto label_2c1a78;
        case 0x2c1a7cu: goto label_2c1a7c;
        case 0x2c1a80u: goto label_2c1a80;
        case 0x2c1a84u: goto label_2c1a84;
        case 0x2c1a88u: goto label_2c1a88;
        case 0x2c1a8cu: goto label_2c1a8c;
        case 0x2c1a90u: goto label_2c1a90;
        case 0x2c1a94u: goto label_2c1a94;
        case 0x2c1a98u: goto label_2c1a98;
        case 0x2c1a9cu: goto label_2c1a9c;
        case 0x2c1aa0u: goto label_2c1aa0;
        case 0x2c1aa4u: goto label_2c1aa4;
        case 0x2c1aa8u: goto label_2c1aa8;
        case 0x2c1aacu: goto label_2c1aac;
        case 0x2c1ab0u: goto label_2c1ab0;
        case 0x2c1ab4u: goto label_2c1ab4;
        case 0x2c1ab8u: goto label_2c1ab8;
        case 0x2c1abcu: goto label_2c1abc;
        case 0x2c1ac0u: goto label_2c1ac0;
        case 0x2c1ac4u: goto label_2c1ac4;
        case 0x2c1ac8u: goto label_2c1ac8;
        case 0x2c1accu: goto label_2c1acc;
        case 0x2c1ad0u: goto label_2c1ad0;
        case 0x2c1ad4u: goto label_2c1ad4;
        case 0x2c1ad8u: goto label_2c1ad8;
        case 0x2c1adcu: goto label_2c1adc;
        default: break;
    }

    ctx->pc = 0x2c1618u;

label_2c1618:
    // 0x2c1618: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c1618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2c161c:
    // 0x2c161c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2c161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2c1620:
    // 0x2c1620: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2c1620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2c1624:
    // 0x2c1624: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c1624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1628:
    // 0x2c1628: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2c1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2c162c:
    // 0x2c162c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2c162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2c1630:
    // 0x2c1630: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2c1630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2c1634:
    // 0x2c1634: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2c1634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2c1638:
    // 0x2c1638: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2c1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2c163c:
    // 0x2c163c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2c1640:
    // 0x2c1640: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2c1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2c1644:
    // 0x2c1644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2c1648:
    // 0x2c1648: 0xc0b6dac  jal         func_2DB6B0
label_2c164c:
    if (ctx->pc == 0x2C164Cu) {
        ctx->pc = 0x2C164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1648u;
        // 0x2c164c: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1650u;
        goto label_2c1650;
    }
    ctx->pc = 0x2C1648u;
    SET_GPR_U32(ctx, 31, 0x2C1650u);
    ctx->pc = 0x2C164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1648u;
    // 0x2c164c: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C1648u, 0x2C1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1650u;
label_2c1650:
    // 0x2c1650: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2c1650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2c1654:
    // 0x2c1654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1658:
    // 0x2c1658: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2c1658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_2c165c:
    // 0x2c165c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2c165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_2c1660:
    // 0x2c1660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c1660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c1664:
    // 0x2c1664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c1664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c1668:
    // 0x2c1668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c166c:
    // 0x2c166c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2c166cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2c1670:
    // 0x2c1670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c1670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c1674:
    // 0x2c1674: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c1674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c1678:
    // 0x2c1678: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2c1678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2c167c:
    // 0x2c167c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2c167cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2c1680:
    // 0x2c1680: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c1680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1684:
    // 0x2c1684: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2c1684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2c1688:
    // 0x2c1688: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c1688u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c168c:
    // 0x2c168c: 0xc054236  jal         func_1508D8
label_2c1690:
    if (ctx->pc == 0x2C1690u) {
        ctx->pc = 0x2C1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C168Cu;
        // 0x2c1690: 0xe6340004  swc1        $f20, 0x4($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1694u;
        goto label_2c1694;
    }
    ctx->pc = 0x2C168Cu;
    SET_GPR_U32(ctx, 31, 0x2C1694u);
    ctx->pc = 0x2C1690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C168Cu;
    // 0x2c1690: 0xe6340004  swc1        $f20, 0x4($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x2C168Cu, 0x2C1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1694u;
label_2c1694:
    // 0x2c1694: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2c1694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2c1698:
    // 0x2c1698: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2c169c:
    // 0x2c169c: 0x12c20008  beq         $s6, $v0, . + 4 + (0x8 << 2)
label_2c16a0:
    if (ctx->pc == 0x2C16A0u) {
        ctx->pc = 0x2C16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C169Cu;
        // 0x2c16a0: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16A4u;
        goto label_2c16a4;
    }
    ctx->pc = 0x2C169Cu;
    {
        const bool branch_taken_0x2c169c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C169Cu;
        // 0x2c16a0: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c169c) {
            ctx->pc = 0x2C16C0u;
            goto label_2c16c0;
        }
    }
    ctx->pc = 0x2C16A4u;
label_2c16a4:
    // 0x2c16a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c16a8:
    // 0x2c16a8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c16a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2c16ac:
    // 0x2c16ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c16b0:
    // 0x2c16b0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2c16b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2c16b4:
    // 0x2c16b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c16b8:
    // 0x2c16b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c16b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2c16bc:
    // 0x2c16bc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c16c0:
    // 0x2c16c0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2c16c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2c16c4:
    // 0x2c16c4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2c16c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2c16c8:
    // 0x2c16c8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2c16c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_2c16cc:
    // 0x2c16cc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2c16ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c16d0:
    // 0x2c16d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c16d4:
    // 0x2c16d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2c16d8:
    // 0x2c16d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c16d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c16dc:
    // 0x2c16dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2c16e0:
    // 0x2c16e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c16e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c16e4:
    // 0x2c16e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2c16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2c16e8:
    // 0x2c16e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c16e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c16ec:
    // 0x2c16ec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2c16ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2c16f0:
    // 0x2c16f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c16f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c16f4:
    // 0x2c16f4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2c16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2c16f8:
    // 0x2c16f8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2c16f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2c16fc:
    // 0x2c16fc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c16fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c1700:
    // 0x2c1700: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c1700u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1704:
    // 0x2c1704: 0xc04c784  jal         func_131E10
label_2c1708:
    if (ctx->pc == 0x2C1708u) {
        ctx->pc = 0x2C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1704u;
        // 0x2c1708: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C170Cu;
        goto label_2c170c;
    }
    ctx->pc = 0x2C1704u;
    SET_GPR_U32(ctx, 31, 0x2C170Cu);
    ctx->pc = 0x2C1708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1704u;
    // 0x2c1708: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2C1704u, 0x2C170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C170Cu;
label_2c170c:
    // 0x2c170c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c1710:
    if (ctx->pc == 0x2C1710u) {
        ctx->pc = 0x2C1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C170Cu;
        // 0x2c1710: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1714u;
        goto label_2c1714;
    }
    ctx->pc = 0x2C170Cu;
    {
        const bool branch_taken_0x2c170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C170Cu;
        // 0x2c1710: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c170c) {
            ctx->pc = 0x2C1734u;
            goto label_2c1734;
        }
    }
    ctx->pc = 0x2C1714u;
label_2c1714:
    // 0x2c1714: 0x12300007  beq         $s1, $s0, . + 4 + (0x7 << 2)
label_2c1718:
    if (ctx->pc == 0x2C1718u) {
        ctx->pc = 0x2C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1714u;
        // 0x2c1718: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C171Cu;
        goto label_2c171c;
    }
    ctx->pc = 0x2C1714u;
    {
        const bool branch_taken_0x2c1714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1714u;
        // 0x2c1718: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1714) {
            ctx->pc = 0x2C1734u;
            goto label_2c1734;
        }
    }
    ctx->pc = 0x2C171Cu;
label_2c171c:
    // 0x2c171c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2c171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c1720:
    // 0x2c1720: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c1720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2c1724:
    // 0x2c1724: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c1724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2c1728:
    // 0x2c1728: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2c1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c172c:
    // 0x2c172c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2c172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2c1730:
    // 0x2c1730: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2c1734:
    // 0x2c1734: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2c1734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c1738:
    // 0x2c1738: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2c1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_2c173c:
    // 0x2c173c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c173cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1740:
    // 0x2c1740: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x2c1740u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
label_2c1744:
    // 0x2c1744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c1748:
    // 0x2c1748: 0xdc450178  ld          $a1, 0x178($v0)
    ctx->pc = 0x2c1748u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 376)));
label_2c174c:
    // 0x2c174c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c174cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1750:
    // 0x2c1750: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c1750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2c1754:
    // 0x2c1754: 0xc3900b  movn        $s2, $a2, $v1
    ctx->pc = 0x2c1754u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
label_2c1758:
    // 0x2c1758: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2c1758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2c175c:
    // 0x2c175c: 0x36420004  ori         $v0, $s2, 0x4
    ctx->pc = 0x2c175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_2c1760:
    // 0x2c1760: 0xc0b0c30  jal         func_2C30C0
label_2c1764:
    if (ctx->pc == 0x2C1764u) {
        ctx->pc = 0x2C1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1760u;
        // 0x2c1764: 0x45900b  movn        $s2, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1768u;
        goto label_2c1768;
    }
    ctx->pc = 0x2C1760u;
    SET_GPR_U32(ctx, 31, 0x2C1768u);
    ctx->pc = 0x2C1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1760u;
    // 0x2c1764: 0x45900b  movn        $s2, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C1760u, 0x2C1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1768u;
label_2c1768:
    // 0x2c1768: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c1768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c176c:
    // 0x2c176c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c176cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1770:
    // 0x2c1770: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2c1774:
    if (ctx->pc == 0x2C1774u) {
        ctx->pc = 0x2C1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1770u;
        // 0x2c1774: 0x247e2650  addiu       $fp, $v1, 0x2650 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 9808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1778u;
        goto label_2c1778;
    }
    ctx->pc = 0x2C1770u;
    {
        const bool branch_taken_0x2c1770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1770u;
        // 0x2c1774: 0x247e2650  addiu       $fp, $v1, 0x2650 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 9808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1770) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C1778u;
label_2c1778:
    // 0x2c1778: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_2c177c:
    // 0x2c177c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c1780:
    // 0x2c1780: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x2c1780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
label_2c1784:
    // 0x2c1784: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c1784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c1788:
    // 0x2c1788: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c1788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c178c:
    // 0x2c178c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c1790:
    // 0x2c1790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1794:
    // 0x2c1794: 0xc0b039a  jal         func_2C0E68
label_2c1798:
    if (ctx->pc == 0x2C1798u) {
        ctx->pc = 0x2C1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1794u;
        // 0x2c1798: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C179Cu;
        goto label_2c179c;
    }
    ctx->pc = 0x2C1794u;
    SET_GPR_U32(ctx, 31, 0x2C179Cu);
    ctx->pc = 0x2C1798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1794u;
    // 0x2c1798: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E68u, 0x2C1794u, 0x2C179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C179Cu;
label_2c179c:
    // 0x2c179c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c17a0:
    if (ctx->pc == 0x2C17A0u) {
        ctx->pc = 0x2C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C179Cu;
        // 0x2c17a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17A4u;
        goto label_2c17a4;
    }
    ctx->pc = 0x2C179Cu;
    {
        const bool branch_taken_0x2c179c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C179Cu;
        // 0x2c17a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c179c) {
            ctx->pc = 0x2C17BCu;
            goto label_2c17bc;
        }
    }
    ctx->pc = 0x2C17A4u;
label_2c17a4:
    // 0x2c17a4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2c17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2c17a8:
    // 0x2c17a8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2c17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_2c17ac:
    // 0x2c17ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c17acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2c17b0:
    // 0x2c17b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c17b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c17b4:
    // 0x2c17b4: 0x1000008b  b           . + 4 + (0x8B << 2)
label_2c17b8:
    if (ctx->pc == 0x2C17B8u) {
        ctx->pc = 0x2C17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17B4u;
        // 0x2c17b8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17BCu;
        goto label_2c17bc;
    }
    ctx->pc = 0x2C17B4u;
    {
        const bool branch_taken_0x2c17b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17B4u;
        // 0x2c17b8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17b4) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C17BCu;
label_2c17bc:
    // 0x2c17bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c17bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c17c0:
    // 0x2c17c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c17c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2c17c4:
    // 0x2c17c4: 0xc0b06b8  jal         func_2C1AE0
label_2c17c8:
    if (ctx->pc == 0x2C17C8u) {
        ctx->pc = 0x2C17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17C4u;
        // 0x2c17c8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17CCu;
        goto label_2c17cc;
    }
    ctx->pc = 0x2C17C4u;
    SET_GPR_U32(ctx, 31, 0x2C17CCu);
    ctx->pc = 0x2C17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17C4u;
    // 0x2c17c8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1AE0u, 0x2C17C4u, 0x2C17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17CCu;
label_2c17cc:
    // 0x2c17cc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2c17d0:
    if (ctx->pc == 0x2C17D0u) {
        ctx->pc = 0x2C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17CCu;
        // 0x2c17d0: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17D4u;
        goto label_2c17d4;
    }
    ctx->pc = 0x2C17CCu;
    {
        const bool branch_taken_0x2c17cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C17D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17CCu;
        // 0x2c17d0: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17cc) {
            ctx->pc = 0x2C1810u;
            goto label_2c1810;
        }
    }
    ctx->pc = 0x2C17D4u;
label_2c17d4:
    // 0x2c17d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2c17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_2c17d8:
    // 0x2c17d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c17d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2c17dc:
    // 0x2c17dc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2c17dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c17e0:
    // 0x2c17e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2c17e4:
    // 0x2c17e4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2c17e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c17e8:
    // 0x2c17e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c17e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c17ec:
    // 0x2c17ec: 0x2a4100b  movn        $v0, $s5, $a0
    ctx->pc = 0x2c17ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 21));
label_2c17f0:
    // 0x2c17f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c17f4:
    // 0x2c17f4: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
label_2c17f8:
    if (ctx->pc == 0x2C17F8u) {
        ctx->pc = 0x2C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17F4u;
        // 0x2c17f8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17FCu;
        goto label_2c17fc;
    }
    ctx->pc = 0x2C17F4u;
    {
        const bool branch_taken_0x2c17f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17F4u;
        // 0x2c17f8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17f4) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C17FCu;
label_2c17fc:
    // 0x2c17fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2c17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2c1800:
    // 0x2c1800: 0x36520020  ori         $s2, $s2, 0x20
    ctx->pc = 0x2c1800u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
label_2c1804:
    // 0x2c1804: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2c1804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c1808:
    // 0x2c1808: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2c180c:
    if (ctx->pc == 0x2C180Cu) {
        ctx->pc = 0x2C180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1808u;
        // 0x2c180c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1810u;
        goto label_2c1810;
    }
    ctx->pc = 0x2C1808u;
    {
        const bool branch_taken_0x2c1808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1808u;
        // 0x2c180c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1808) {
            ctx->pc = 0x2C1880u;
            goto label_2c1880;
        }
    }
    ctx->pc = 0x2C1810u;
label_2c1810:
    // 0x2c1810: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2c1810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_2c1814:
    // 0x2c1814: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x2c1814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_2c1818:
    // 0x2c1818: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x2c1818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2c181c:
    // 0x2c181c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c1820:
    if (ctx->pc == 0x2C1820u) {
        ctx->pc = 0x2C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C181Cu;
        // 0x2c1820: 0xae040050  sw          $a0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1824u;
        goto label_2c1824;
    }
    ctx->pc = 0x2C181Cu;
    {
        const bool branch_taken_0x2c181c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C181Cu;
        // 0x2c1820: 0xae040050  sw          $a0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c181c) {
            ctx->pc = 0x2C1830u;
            goto label_2c1830;
        }
    }
    ctx->pc = 0x2C1824u;
label_2c1824:
    // 0x2c1824: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2c1824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_2c1828:
    // 0x2c1828: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2c1828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2c182c:
    // 0x2c182c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2c182cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2c1830:
    // 0x2c1830: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2c1830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2c1834:
    // 0x2c1834: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2c1834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2c1838:
    // 0x2c1838: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x2c1838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_2c183c:
    // 0x2c183c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2c183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2c1840:
    // 0x2c1840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1844:
    // 0x2c1844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1848:
    // 0x2c1848: 0x2a2300b  movn        $a2, $s5, $v0
    ctx->pc = 0x2c1848u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 21));
label_2c184c:
    // 0x2c184c: 0x2a3200b  movn        $a0, $s5, $v1
    ctx->pc = 0x2c184cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
label_2c1850:
    // 0x2c1850: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x2c1850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_2c1854:
    // 0x2c1854: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2c1858:
    // 0x2c1858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c185c:
    if (ctx->pc == 0x2C185Cu) {
        ctx->pc = 0x2C185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1858u;
        // 0x2c185c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1860u;
        goto label_2c1860;
    }
    ctx->pc = 0x2C1858u;
    {
        const bool branch_taken_0x2c1858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1858u;
        // 0x2c185c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1858) {
            ctx->pc = 0x2C186Cu;
            goto label_2c186c;
        }
    }
    ctx->pc = 0x2C1860u;
label_2c1860:
    // 0x2c1860: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x2c1860u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_2c1864:
    // 0x2c1864: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2c1864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2c1868:
    // 0x2c1868: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2c1868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2c186c:
    // 0x2c186c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2c186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2c1870:
    // 0x2c1870: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c1870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2c1874:
    // 0x2c1874: 0x36440040  ori         $a0, $s2, 0x40
    ctx->pc = 0x2c1874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
label_2c1878:
    // 0x2c1878: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c1878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c187c:
    // 0x2c187c: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x2c187cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_2c1880:
    // 0x2c1880: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x2c1880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2c1884:
    // 0x2c1884: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2c1884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c1888:
    // 0x2c1888: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
label_2c188c:
    if (ctx->pc == 0x2C188Cu) {
        ctx->pc = 0x2C188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1888u;
        // 0x2c188c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1890u;
        goto label_2c1890;
    }
    ctx->pc = 0x2C1888u;
    {
        const bool branch_taken_0x2c1888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1888u;
        // 0x2c188c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1888) {
            ctx->pc = 0x2C189Cu;
            goto label_2c189c;
        }
    }
    ctx->pc = 0x2C1890u;
label_2c1890:
    // 0x2c1890: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2c1894:
    // 0x2c1894: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_2c1898:
    if (ctx->pc == 0x2C1898u) {
        ctx->pc = 0x2C189Cu;
        goto label_2c189c;
    }
    ctx->pc = 0x2C1894u;
    {
        const bool branch_taken_0x2c1894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1894) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C189Cu;
label_2c189c:
    // 0x2c189c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2c189cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2c18a0:
    // 0x2c18a0: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2c18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31364)));
label_2c18a4:
    // 0x2c18a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c18a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c18a8:
    // 0x2c18a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2c18ac:
    if (ctx->pc == 0x2C18ACu) {
        ctx->pc = 0x2C18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18A8u;
        // 0x2c18ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18B0u;
        goto label_2c18b0;
    }
    ctx->pc = 0x2C18A8u;
    {
        const bool branch_taken_0x2c18a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18a8) {
            ctx->pc = 0x2C18ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C18A8u;
            // 0x2c18ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18CCu;
            goto label_2c18cc;
        }
    }
    ctx->pc = 0x2C18B0u;
label_2c18b0:
    // 0x2c18b0: 0x92030035  lbu         $v1, 0x35($s0)
    ctx->pc = 0x2c18b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2c18b4:
    // 0x2c18b4: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2c18b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2c18b8:
    // 0x2c18b8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_2c18bc:
    if (ctx->pc == 0x2C18BCu) {
        ctx->pc = 0x2C18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B8u;
        // 0x2c18bc: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18C0u;
        goto label_2c18c0;
    }
    ctx->pc = 0x2C18B8u;
    {
        const bool branch_taken_0x2c18b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B8u;
        // 0x2c18bc: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18b8) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C18C0u;
label_2c18c0:
    // 0x2c18c0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_2c18c4:
    if (ctx->pc == 0x2C18C4u) {
        ctx->pc = 0x2C18C8u;
        goto label_2c18c8;
    }
    ctx->pc = 0x2C18C0u;
    {
        const bool branch_taken_0x2c18c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c18c0) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C18C8u;
label_2c18c8:
    // 0x2c18c8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2c18cc:
    // 0x2c18cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2c18d0:
    if (ctx->pc == 0x2C18D0u) {
        ctx->pc = 0x2C18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18CCu;
        // 0x2c18d0: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18D4u;
        goto label_2c18d4;
    }
    ctx->pc = 0x2C18CCu;
    {
        const bool branch_taken_0x2c18cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18CCu;
        // 0x2c18d0: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18cc) {
            ctx->pc = 0x2C18D8u;
            goto label_2c18d8;
        }
    }
    ctx->pc = 0x2C18D4u;
label_2c18d4:
    // 0x2c18d4: 0x92110035  lbu         $s1, 0x35($s0)
    ctx->pc = 0x2c18d4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2c18d8:
    // 0x2c18d8: 0x9202003b  lbu         $v0, 0x3B($s0)
    ctx->pc = 0x2c18d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2c18dc:
    // 0x2c18dc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2c18dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2c18e0:
    // 0x2c18e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2c18e4:
    if (ctx->pc == 0x2C18E4u) {
        ctx->pc = 0x2C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E0u;
        // 0x2c18e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18E8u;
        goto label_2c18e8;
    }
    ctx->pc = 0x2C18E0u;
    {
        const bool branch_taken_0x2c18e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E0u;
        // 0x2c18e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18e0) {
            ctx->pc = 0x2C195Cu;
            goto label_2c195c;
        }
    }
    ctx->pc = 0x2C18E8u;
label_2c18e8:
    // 0x2c18e8: 0xc0b0732  jal         func_2C1CC8
label_2c18ec:
    if (ctx->pc == 0x2C18ECu) {
        ctx->pc = 0x2C18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E8u;
        // 0x2c18ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18F0u;
        goto label_2c18f0;
    }
    ctx->pc = 0x2C18E8u;
    SET_GPR_U32(ctx, 31, 0x2C18F0u);
    ctx->pc = 0x2C18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18E8u;
    // 0x2c18ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1CC8u, 0x2C18E8u, 0x2C18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18F0u;
label_2c18f0:
    // 0x2c18f0: 0x1455003c  bne         $v0, $s5, . + 4 + (0x3C << 2)
label_2c18f4:
    if (ctx->pc == 0x2C18F4u) {
        ctx->pc = 0x2C18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F0u;
        // 0x2c18f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18F8u;
        goto label_2c18f8;
    }
    ctx->pc = 0x2C18F0u;
    {
        const bool branch_taken_0x2c18f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F0u;
        // 0x2c18f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18f0) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C18F8u;
label_2c18f8:
    // 0x2c18f8: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_2c18fc:
    if (ctx->pc == 0x2C18FCu) {
        ctx->pc = 0x2C18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F8u;
        // 0x2c18fc: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1900u;
        goto label_2c1900;
    }
    ctx->pc = 0x2C18F8u;
    {
        const bool branch_taken_0x2c18f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F8u;
        // 0x2c18fc: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18f8) {
            ctx->pc = 0x2C192Cu;
            goto label_2c192c;
        }
    }
    ctx->pc = 0x2C1900u;
label_2c1900:
    // 0x2c1900: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c1900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2c1904:
    // 0x2c1904: 0x92050039  lbu         $a1, 0x39($s0)
    ctx->pc = 0x2c1904u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_2c1908:
    // 0x2c1908: 0x9206003a  lbu         $a2, 0x3A($s0)
    ctx->pc = 0x2c1908u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_2c190c:
    // 0x2c190c: 0x24448288  addiu       $a0, $v0, -0x7D78
    ctx->pc = 0x2c190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935176));
label_2c1910:
    // 0x2c1910: 0x8e08005c  lw          $t0, 0x5C($s0)
    ctx->pc = 0x2c1910u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2c1914:
    // 0x2c1914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1918:
    // 0x2c1918: 0x8e090064  lw          $t1, 0x64($s0)
    ctx->pc = 0x2c1918u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_2c191c:
    // 0x2c191c: 0xc07de16  jal         func_1F7858
label_2c1920:
    if (ctx->pc == 0x2C1920u) {
        ctx->pc = 0x2C1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C191Cu;
        // 0x2c1920: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1924u;
        goto label_2c1924;
    }
    ctx->pc = 0x2C191Cu;
    SET_GPR_U32(ctx, 31, 0x2C1924u);
    ctx->pc = 0x2C1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C191Cu;
    // 0x2c1920: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2C191Cu, 0x2C1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1924u;
label_2c1924:
    // 0x2c1924: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2c1928:
    if (ctx->pc == 0x2C1928u) {
        ctx->pc = 0x2C192Cu;
        goto label_2c192c;
    }
    ctx->pc = 0x2C1924u;
    {
        const bool branch_taken_0x2c1924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1924) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C192Cu;
label_2c192c:
    // 0x2c192c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c192cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_2c1930:
    // 0x2c1930: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2c1930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2c1934:
    // 0x2c1934: 0x92050039  lbu         $a1, 0x39($s0)
    ctx->pc = 0x2c1934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_2c1938:
    // 0x2c1938: 0x9206003a  lbu         $a2, 0x3A($s0)
    ctx->pc = 0x2c1938u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_2c193c:
    // 0x2c193c: 0x24648288  addiu       $a0, $v1, -0x7D78
    ctx->pc = 0x2c193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935176));
label_2c1940:
    // 0x2c1940: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2c1940u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c1944:
    // 0x2c1944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1948:
    // 0x2c1948: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2c1948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c194c:
    // 0x2c194c: 0xc07de16  jal         func_1F7858
label_2c1950:
    if (ctx->pc == 0x2C1950u) {
        ctx->pc = 0x2C1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C194Cu;
        // 0x2c1950: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1954u;
        goto label_2c1954;
    }
    ctx->pc = 0x2C194Cu;
    SET_GPR_U32(ctx, 31, 0x2C1954u);
    ctx->pc = 0x2C1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C194Cu;
    // 0x2c1950: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2C194Cu, 0x2C1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1954u;
label_2c1954:
    // 0x2c1954: 0x10000023  b           . + 4 + (0x23 << 2)
label_2c1958:
    if (ctx->pc == 0x2C1958u) {
        ctx->pc = 0x2C195Cu;
        goto label_2c195c;
    }
    ctx->pc = 0x2C1954u;
    {
        const bool branch_taken_0x2c1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1954) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C195Cu;
label_2c195c:
    // 0x2c195c: 0x9202003b  lbu         $v0, 0x3B($s0)
    ctx->pc = 0x2c195cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2c1960:
    // 0x2c1960: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2c1960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2c1964:
    // 0x2c1964: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2c1968:
    if (ctx->pc == 0x2C1968u) {
        ctx->pc = 0x2C1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1964u;
        // 0x2c1968: 0x2a22000e  slti        $v0, $s1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C196Cu;
        goto label_2c196c;
    }
    ctx->pc = 0x2C1964u;
    {
        const bool branch_taken_0x2c1964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1964u;
        // 0x2c1968: 0x2a22000e  slti        $v0, $s1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1964) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C196Cu;
label_2c196c:
    // 0x2c196c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2c1970:
    if (ctx->pc == 0x2C1970u) {
        ctx->pc = 0x2C1974u;
        goto label_2c1974;
    }
    ctx->pc = 0x2C196Cu;
    {
        const bool branch_taken_0x2c196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c196c) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C1974u;
label_2c1974:
    // 0x2c1974: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_2c1978:
    if (ctx->pc == 0x2C1978u) {
        ctx->pc = 0x2C1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1974u;
        // 0x2c1978: 0x1130c0  sll         $a2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C197Cu;
        goto label_2c197c;
    }
    ctx->pc = 0x2C1974u;
    {
        const bool branch_taken_0x2c1974 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1974u;
        // 0x2c1978: 0x1130c0  sll         $a2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1974) {
            ctx->pc = 0x2C198Cu;
            goto label_2c198c;
        }
    }
    ctx->pc = 0x2C197Cu;
label_2c197c:
    // 0x2c197c: 0xde1021  addu        $v0, $a2, $fp
    ctx->pc = 0x2c197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
label_2c1980:
    // 0x2c1980: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x2c1980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_2c1984:
    // 0x2c1984: 0x14750017  bne         $v1, $s5, . + 4 + (0x17 << 2)
label_2c1988:
    if (ctx->pc == 0x2C1988u) {
        ctx->pc = 0x2C198Cu;
        goto label_2c198c;
    }
    ctx->pc = 0x2C1984u;
    {
        const bool branch_taken_0x2c1984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c1984) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C198Cu;
label_2c198c:
    // 0x2c198c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2c198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2c1990:
    // 0x2c1990: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2c1990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_2c1994:
    // 0x2c1994: 0xde3021  addu        $a2, $a2, $fp
    ctx->pc = 0x2c1994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
label_2c1998:
    // 0x2c1998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c199c:
    // 0x2c199c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c19a0:
    // 0x2c19a0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2c19a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2c19a4:
    // 0x2c19a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c19a8:
    // 0x2c19a8: 0x40f809  jalr        $v0
label_2c19ac:
    if (ctx->pc == 0x2C19ACu) {
        ctx->pc = 0x2C19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19A8u;
        // 0x2c19ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19B0u;
        goto label_2c19b0;
    }
    ctx->pc = 0x2C19A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C19B0u);
        ctx->pc = 0x2C19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19A8u;
        // 0x2c19ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C19A8u, 0x2C19B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C19B0u;
label_2c19b0:
    // 0x2c19b0: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2c19b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_2c19b4:
    // 0x2c19b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c19b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2c19b8:
    // 0x2c19b8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c19b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2c19bc:
    // 0x2c19bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2c19c0:
    if (ctx->pc == 0x2C19C0u) {
        ctx->pc = 0x2C19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19BCu;
        // 0x2c19c0: 0x2a2b80a  movz        $s7, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19C4u;
        goto label_2c19c4;
    }
    ctx->pc = 0x2C19BCu;
    {
        const bool branch_taken_0x2c19bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19BCu;
        // 0x2c19c0: 0x2a2b80a  movz        $s7, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19bc) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C19C4u;
label_2c19c4:
    // 0x2c19c4: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x2c19c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2c19c8:
    // 0x2c19c8: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
label_2c19cc:
    if (ctx->pc == 0x2C19CCu) {
        ctx->pc = 0x2C19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19C8u;
        // 0x2c19cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19D0u;
        goto label_2c19d0;
    }
    ctx->pc = 0x2C19C8u;
    {
        const bool branch_taken_0x2c19c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19C8u;
        // 0x2c19cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19c8) {
            ctx->pc = 0x2C19DCu;
            goto label_2c19dc;
        }
    }
    ctx->pc = 0x2C19D0u;
label_2c19d0:
    // 0x2c19d0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2c19d4:
    // 0x2c19d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c19d8:
    if (ctx->pc == 0x2C19D8u) {
        ctx->pc = 0x2C19DCu;
        goto label_2c19dc;
    }
    ctx->pc = 0x2C19D4u;
    {
        const bool branch_taken_0x2c19d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c19d4) {
            ctx->pc = 0x2C19E4u;
            goto label_2c19e4;
        }
    }
    ctx->pc = 0x2C19DCu;
label_2c19dc:
    // 0x2c19dc: 0xc0b038a  jal         func_2C0E28
label_2c19e0:
    if (ctx->pc == 0x2C19E0u) {
        ctx->pc = 0x2C19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19DCu;
        // 0x2c19e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19E4u;
        goto label_2c19e4;
    }
    ctx->pc = 0x2C19DCu;
    SET_GPR_U32(ctx, 31, 0x2C19E4u);
    ctx->pc = 0x2C19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C19DCu;
    // 0x2c19e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x2C19DCu, 0x2C19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19E4u;
label_2c19e4:
    // 0x2c19e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2c19e8:
    // 0x2c19e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c19e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c19ec:
    // 0x2c19ec: 0x3442ff8f  ori         $v0, $v0, 0xFF8F
    ctx->pc = 0x2c19ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65423);
label_2c19f0:
    // 0x2c19f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c19f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c19f4:
    // 0x2c19f4: 0xc0b0c32  jal         func_2C30C8
label_2c19f8:
    if (ctx->pc == 0x2C19F8u) {
        ctx->pc = 0x2C19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19F4u;
        // 0x2c19f8: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19FCu;
        goto label_2c19fc;
    }
    ctx->pc = 0x2C19F4u;
    SET_GPR_U32(ctx, 31, 0x2C19FCu);
    ctx->pc = 0x2C19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C19F4u;
    // 0x2c19f8: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C19F4u, 0x2C19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C19FCu;
label_2c19fc:
    // 0x2c19fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c19fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a00:
    // 0x2c1a00: 0x5600ff5d  bnel        $s0, $zero, . + 4 + (-0xA3 << 2)
label_2c1a04:
    if (ctx->pc == 0x2C1A04u) {
        ctx->pc = 0x2C1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A00u;
        // 0x2c1a04: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A08u;
        goto label_2c1a08;
    }
    ctx->pc = 0x2C1A00u;
    {
        const bool branch_taken_0x2c1a00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a00) {
            ctx->pc = 0x2C1A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A00u;
            // 0x2c1a04: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1778;
        }
    }
    ctx->pc = 0x2C1A08u;
label_2c1a08:
    // 0x2c1a08: 0x3c12dfff  lui         $s2, 0xDFFF
    ctx->pc = 0x2c1a08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57343 << 16));
label_2c1a0c:
    // 0x2c1a0c: 0xc0b0c30  jal         func_2C30C0
label_2c1a10:
    if (ctx->pc == 0x2C1A10u) {
        ctx->pc = 0x2C1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A0Cu;
        // 0x2c1a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A14u;
        goto label_2c1a14;
    }
    ctx->pc = 0x2C1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1A14u);
    ctx->pc = 0x2C1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A0Cu;
    // 0x2c1a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C1A0Cu, 0x2C1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A14u;
label_2c1a14:
    // 0x2c1a14: 0x3c11efff  lui         $s1, 0xEFFF
    ctx->pc = 0x2c1a14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61439 << 16));
label_2c1a18:
    // 0x2c1a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a1c:
    // 0x2c1a1c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2c1a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1a20:
    // 0x2c1a20: 0x3c1e4000  lui         $fp, 0x4000
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16384 << 16));
label_2c1a24:
    // 0x2c1a24: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x2c1a24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
label_2c1a28:
    // 0x2c1a28: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2c1a28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2c1a2c:
    // 0x2c1a2c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x2c1a2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
label_2c1a30:
    // 0x2c1a30: 0x10000016  b           . + 4 + (0x16 << 2)
label_2c1a34:
    if (ctx->pc == 0x2C1A34u) {
        ctx->pc = 0x2C1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A30u;
        // 0x2c1a34: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A38u;
        goto label_2c1a38;
    }
    ctx->pc = 0x2C1A30u;
    {
        const bool branch_taken_0x2c1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A30u;
        // 0x2c1a34: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a30) {
            ctx->pc = 0x2C1A8Cu;
            goto label_2c1a8c;
        }
    }
    ctx->pc = 0x2C1A38u;
label_2c1a38:
    // 0x2c1a38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2c1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2c1a3c:
    // 0x2c1a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c1a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a40:
    // 0x2c1a40: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x2c1a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2c1a44:
    // 0x2c1a44: 0xbe1824  and         $v1, $a1, $fp
    ctx->pc = 0x2c1a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
label_2c1a48:
    // 0x2c1a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a4c:
    // 0x2c1a4c: 0x262300b  movn        $a2, $s3, $v0
    ctx->pc = 0x2c1a4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
label_2c1a50:
    // 0x2c1a50: 0x263200b  movn        $a0, $s3, $v1
    ctx->pc = 0x2c1a50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
label_2c1a54:
    // 0x2c1a54: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x2c1a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_2c1a58:
    // 0x2c1a58: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c1a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2c1a5c:
    // 0x2c1a5c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2c1a60:
    if (ctx->pc == 0x2C1A60u) {
        ctx->pc = 0x2C1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A5Cu;
        // 0x2c1a60: 0xb61025  or          $v0, $a1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A64u;
        goto label_2c1a64;
    }
    ctx->pc = 0x2C1A5Cu;
    {
        const bool branch_taken_0x2c1a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A5Cu;
        // 0x2c1a60: 0xb61025  or          $v0, $a1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a5c) {
            ctx->pc = 0x2C1A68u;
            goto label_2c1a68;
        }
    }
    ctx->pc = 0x2C1A64u;
label_2c1a64:
    // 0x2c1a64: 0xb21024  and         $v0, $a1, $s2
    ctx->pc = 0x2c1a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_2c1a68:
    // 0x2c1a68: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2c1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2c1a6c:
    // 0x2c1a6c: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x2c1a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_2c1a70:
    // 0x2c1a70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c1a74:
    // 0x2c1a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c1a78:
    if (ctx->pc == 0x2C1A78u) {
        ctx->pc = 0x2C1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A74u;
        // 0x2c1a78: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A7Cu;
        goto label_2c1a7c;
    }
    ctx->pc = 0x2C1A74u;
    {
        const bool branch_taken_0x2c1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A74u;
        // 0x2c1a78: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a74) {
            ctx->pc = 0x2C1A84u;
            goto label_2c1a84;
        }
    }
    ctx->pc = 0x2C1A7Cu;
label_2c1a7c:
    // 0x2c1a7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c1a80:
    if (ctx->pc == 0x2C1A80u) {
        ctx->pc = 0x2C1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A7Cu;
        // 0x2c1a80: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A84u;
        goto label_2c1a84;
    }
    ctx->pc = 0x2C1A7Cu;
    {
        const bool branch_taken_0x2c1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A7Cu;
        // 0x2c1a80: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a7c) {
            ctx->pc = 0x2C1A88u;
            goto label_2c1a88;
        }
    }
    ctx->pc = 0x2C1A84u;
label_2c1a84:
    // 0x2c1a84: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2c1a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_2c1a88:
    // 0x2c1a88: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2c1a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2c1a8c:
    // 0x2c1a8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a90:
    // 0x2c1a90: 0xc0b0c32  jal         func_2C30C8
label_2c1a94:
    if (ctx->pc == 0x2C1A94u) {
        ctx->pc = 0x2C1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A90u;
        // 0x2c1a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A98u;
        goto label_2c1a98;
    }
    ctx->pc = 0x2C1A90u;
    SET_GPR_U32(ctx, 31, 0x2C1A98u);
    ctx->pc = 0x2C1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1A90u;
    // 0x2c1a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C1A90u, 0x2C1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1A98u;
label_2c1a98:
    // 0x2c1a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a9c:
    // 0x2c1a9c: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
label_2c1aa0:
    if (ctx->pc == 0x2C1AA0u) {
        ctx->pc = 0x2C1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A9Cu;
        // 0x2c1aa0: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AA4u;
        goto label_2c1aa4;
    }
    ctx->pc = 0x2C1A9Cu;
    {
        const bool branch_taken_0x2c1a9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1a9c) {
            ctx->pc = 0x2C1AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A9Cu;
            // 0x2c1aa0: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1a38;
        }
    }
    ctx->pc = 0x2C1AA4u;
label_2c1aa4:
    // 0x2c1aa4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2c1aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c1aa8:
    // 0x2c1aa8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2c1aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2c1aac:
    // 0x2c1aac: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2c1aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c1ab0:
    // 0x2c1ab0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2c1ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c1ab4:
    // 0x2c1ab4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2c1ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c1ab8:
    // 0x2c1ab8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2c1ab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c1abc:
    // 0x2c1abc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2c1abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c1ac0:
    // 0x2c1ac0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2c1ac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c1ac4:
    // 0x2c1ac4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c1ac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c1ac8:
    // 0x2c1ac8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2c1ac8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c1acc:
    // 0x2c1acc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c1accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c1ad0:
    // 0x2c1ad0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2c1ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c1ad4:
    // 0x2c1ad4: 0x3e00008  jr          $ra
label_2c1ad8:
    if (ctx->pc == 0x2C1AD8u) {
        ctx->pc = 0x2C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AD4u;
        // 0x2c1ad8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1ADCu;
        goto label_2c1adc;
    }
    ctx->pc = 0x2C1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AD4u;
        // 0x2c1ad8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1ADCu;
label_2c1adc:
    // 0x2c1adc: 0x0  nop
    ctx->pc = 0x2c1adcu;
    // NOP
    ctx->pc = 0x2c1ae0u;
}
