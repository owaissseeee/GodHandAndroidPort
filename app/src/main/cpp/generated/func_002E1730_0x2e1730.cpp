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

// Function: func_002E1730
// Address: 0x2e1730 - 0x2e1a08
void func_002E1730_0x2e1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E1730_0x2e1730");
#endif

    switch (ctx->pc) {
        case 0x2e1730u: goto label_2e1730;
        case 0x2e1734u: goto label_2e1734;
        case 0x2e1738u: goto label_2e1738;
        case 0x2e173cu: goto label_2e173c;
        case 0x2e1740u: goto label_2e1740;
        case 0x2e1744u: goto label_2e1744;
        case 0x2e1748u: goto label_2e1748;
        case 0x2e174cu: goto label_2e174c;
        case 0x2e1750u: goto label_2e1750;
        case 0x2e1754u: goto label_2e1754;
        case 0x2e1758u: goto label_2e1758;
        case 0x2e175cu: goto label_2e175c;
        case 0x2e1760u: goto label_2e1760;
        case 0x2e1764u: goto label_2e1764;
        case 0x2e1768u: goto label_2e1768;
        case 0x2e176cu: goto label_2e176c;
        case 0x2e1770u: goto label_2e1770;
        case 0x2e1774u: goto label_2e1774;
        case 0x2e1778u: goto label_2e1778;
        case 0x2e177cu: goto label_2e177c;
        case 0x2e1780u: goto label_2e1780;
        case 0x2e1784u: goto label_2e1784;
        case 0x2e1788u: goto label_2e1788;
        case 0x2e178cu: goto label_2e178c;
        case 0x2e1790u: goto label_2e1790;
        case 0x2e1794u: goto label_2e1794;
        case 0x2e1798u: goto label_2e1798;
        case 0x2e179cu: goto label_2e179c;
        case 0x2e17a0u: goto label_2e17a0;
        case 0x2e17a4u: goto label_2e17a4;
        case 0x2e17a8u: goto label_2e17a8;
        case 0x2e17acu: goto label_2e17ac;
        case 0x2e17b0u: goto label_2e17b0;
        case 0x2e17b4u: goto label_2e17b4;
        case 0x2e17b8u: goto label_2e17b8;
        case 0x2e17bcu: goto label_2e17bc;
        case 0x2e17c0u: goto label_2e17c0;
        case 0x2e17c4u: goto label_2e17c4;
        case 0x2e17c8u: goto label_2e17c8;
        case 0x2e17ccu: goto label_2e17cc;
        case 0x2e17d0u: goto label_2e17d0;
        case 0x2e17d4u: goto label_2e17d4;
        case 0x2e17d8u: goto label_2e17d8;
        case 0x2e17dcu: goto label_2e17dc;
        case 0x2e17e0u: goto label_2e17e0;
        case 0x2e17e4u: goto label_2e17e4;
        case 0x2e17e8u: goto label_2e17e8;
        case 0x2e17ecu: goto label_2e17ec;
        case 0x2e17f0u: goto label_2e17f0;
        case 0x2e17f4u: goto label_2e17f4;
        case 0x2e17f8u: goto label_2e17f8;
        case 0x2e17fcu: goto label_2e17fc;
        case 0x2e1800u: goto label_2e1800;
        case 0x2e1804u: goto label_2e1804;
        case 0x2e1808u: goto label_2e1808;
        case 0x2e180cu: goto label_2e180c;
        case 0x2e1810u: goto label_2e1810;
        case 0x2e1814u: goto label_2e1814;
        case 0x2e1818u: goto label_2e1818;
        case 0x2e181cu: goto label_2e181c;
        case 0x2e1820u: goto label_2e1820;
        case 0x2e1824u: goto label_2e1824;
        case 0x2e1828u: goto label_2e1828;
        case 0x2e182cu: goto label_2e182c;
        case 0x2e1830u: goto label_2e1830;
        case 0x2e1834u: goto label_2e1834;
        case 0x2e1838u: goto label_2e1838;
        case 0x2e183cu: goto label_2e183c;
        case 0x2e1840u: goto label_2e1840;
        case 0x2e1844u: goto label_2e1844;
        case 0x2e1848u: goto label_2e1848;
        case 0x2e184cu: goto label_2e184c;
        case 0x2e1850u: goto label_2e1850;
        case 0x2e1854u: goto label_2e1854;
        case 0x2e1858u: goto label_2e1858;
        case 0x2e185cu: goto label_2e185c;
        case 0x2e1860u: goto label_2e1860;
        case 0x2e1864u: goto label_2e1864;
        case 0x2e1868u: goto label_2e1868;
        case 0x2e186cu: goto label_2e186c;
        case 0x2e1870u: goto label_2e1870;
        case 0x2e1874u: goto label_2e1874;
        case 0x2e1878u: goto label_2e1878;
        case 0x2e187cu: goto label_2e187c;
        case 0x2e1880u: goto label_2e1880;
        case 0x2e1884u: goto label_2e1884;
        case 0x2e1888u: goto label_2e1888;
        case 0x2e188cu: goto label_2e188c;
        case 0x2e1890u: goto label_2e1890;
        case 0x2e1894u: goto label_2e1894;
        case 0x2e1898u: goto label_2e1898;
        case 0x2e189cu: goto label_2e189c;
        case 0x2e18a0u: goto label_2e18a0;
        case 0x2e18a4u: goto label_2e18a4;
        case 0x2e18a8u: goto label_2e18a8;
        case 0x2e18acu: goto label_2e18ac;
        case 0x2e18b0u: goto label_2e18b0;
        case 0x2e18b4u: goto label_2e18b4;
        case 0x2e18b8u: goto label_2e18b8;
        case 0x2e18bcu: goto label_2e18bc;
        case 0x2e18c0u: goto label_2e18c0;
        case 0x2e18c4u: goto label_2e18c4;
        case 0x2e18c8u: goto label_2e18c8;
        case 0x2e18ccu: goto label_2e18cc;
        case 0x2e18d0u: goto label_2e18d0;
        case 0x2e18d4u: goto label_2e18d4;
        case 0x2e18d8u: goto label_2e18d8;
        case 0x2e18dcu: goto label_2e18dc;
        case 0x2e18e0u: goto label_2e18e0;
        case 0x2e18e4u: goto label_2e18e4;
        case 0x2e18e8u: goto label_2e18e8;
        case 0x2e18ecu: goto label_2e18ec;
        case 0x2e18f0u: goto label_2e18f0;
        case 0x2e18f4u: goto label_2e18f4;
        case 0x2e18f8u: goto label_2e18f8;
        case 0x2e18fcu: goto label_2e18fc;
        case 0x2e1900u: goto label_2e1900;
        case 0x2e1904u: goto label_2e1904;
        case 0x2e1908u: goto label_2e1908;
        case 0x2e190cu: goto label_2e190c;
        case 0x2e1910u: goto label_2e1910;
        case 0x2e1914u: goto label_2e1914;
        case 0x2e1918u: goto label_2e1918;
        case 0x2e191cu: goto label_2e191c;
        case 0x2e1920u: goto label_2e1920;
        case 0x2e1924u: goto label_2e1924;
        case 0x2e1928u: goto label_2e1928;
        case 0x2e192cu: goto label_2e192c;
        case 0x2e1930u: goto label_2e1930;
        case 0x2e1934u: goto label_2e1934;
        case 0x2e1938u: goto label_2e1938;
        case 0x2e193cu: goto label_2e193c;
        case 0x2e1940u: goto label_2e1940;
        case 0x2e1944u: goto label_2e1944;
        case 0x2e1948u: goto label_2e1948;
        case 0x2e194cu: goto label_2e194c;
        case 0x2e1950u: goto label_2e1950;
        case 0x2e1954u: goto label_2e1954;
        case 0x2e1958u: goto label_2e1958;
        case 0x2e195cu: goto label_2e195c;
        case 0x2e1960u: goto label_2e1960;
        case 0x2e1964u: goto label_2e1964;
        case 0x2e1968u: goto label_2e1968;
        case 0x2e196cu: goto label_2e196c;
        case 0x2e1970u: goto label_2e1970;
        case 0x2e1974u: goto label_2e1974;
        case 0x2e1978u: goto label_2e1978;
        case 0x2e197cu: goto label_2e197c;
        case 0x2e1980u: goto label_2e1980;
        case 0x2e1984u: goto label_2e1984;
        case 0x2e1988u: goto label_2e1988;
        case 0x2e198cu: goto label_2e198c;
        case 0x2e1990u: goto label_2e1990;
        case 0x2e1994u: goto label_2e1994;
        case 0x2e1998u: goto label_2e1998;
        case 0x2e199cu: goto label_2e199c;
        case 0x2e19a0u: goto label_2e19a0;
        case 0x2e19a4u: goto label_2e19a4;
        case 0x2e19a8u: goto label_2e19a8;
        case 0x2e19acu: goto label_2e19ac;
        case 0x2e19b0u: goto label_2e19b0;
        case 0x2e19b4u: goto label_2e19b4;
        case 0x2e19b8u: goto label_2e19b8;
        case 0x2e19bcu: goto label_2e19bc;
        case 0x2e19c0u: goto label_2e19c0;
        case 0x2e19c4u: goto label_2e19c4;
        case 0x2e19c8u: goto label_2e19c8;
        case 0x2e19ccu: goto label_2e19cc;
        case 0x2e19d0u: goto label_2e19d0;
        case 0x2e19d4u: goto label_2e19d4;
        case 0x2e19d8u: goto label_2e19d8;
        case 0x2e19dcu: goto label_2e19dc;
        case 0x2e19e0u: goto label_2e19e0;
        case 0x2e19e4u: goto label_2e19e4;
        case 0x2e19e8u: goto label_2e19e8;
        case 0x2e19ecu: goto label_2e19ec;
        case 0x2e19f0u: goto label_2e19f0;
        case 0x2e19f4u: goto label_2e19f4;
        case 0x2e19f8u: goto label_2e19f8;
        case 0x2e19fcu: goto label_2e19fc;
        case 0x2e1a00u: goto label_2e1a00;
        case 0x2e1a04u: goto label_2e1a04;
        default: break;
    }

    ctx->pc = 0x2e1730u;

label_2e1730:
    // 0x2e1730: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e1734:
    // 0x2e1734: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2e1734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_2e1738:
    // 0x2e1738: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e1738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2e173c:
    // 0x2e173c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e173cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2e1740:
    // 0x2e1740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1744:
    // 0x2e1744: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e1744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2e1748:
    // 0x2e1748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e1748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e174c:
    // 0x2e174c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2e174cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2e1750:
    // 0x2e1750: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2e1750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2e1754:
    // 0x2e1754: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2e1754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_2e1758:
    // 0x2e1758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e175c:
    // 0x2e175c: 0x544000a3  bnel        $v0, $zero, . + 4 + (0xA3 << 2)
label_2e1760:
    if (ctx->pc == 0x2E1760u) {
        ctx->pc = 0x2E1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E175Cu;
        // 0x2e1760: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1764u;
        goto label_2e1764;
    }
    ctx->pc = 0x2E175Cu;
    {
        const bool branch_taken_0x2e175c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e175c) {
            ctx->pc = 0x2E1760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E175Cu;
            // 0x2e1760: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E19ECu;
            goto label_2e19ec;
        }
    }
    ctx->pc = 0x2E1764u;
label_2e1764:
    // 0x2e1764: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2e1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e1768:
    // 0x2e1768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e176c:
    // 0x2e176c: 0x463009a  bgezl       $v1, . + 4 + (0x9A << 2)
label_2e1770:
    if (ctx->pc == 0x2E1770u) {
        ctx->pc = 0x2E1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E176Cu;
        // 0x2e1770: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1774u;
        goto label_2e1774;
    }
    ctx->pc = 0x2E176Cu;
    {
        const bool branch_taken_0x2e176c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e176c) {
            ctx->pc = 0x2E1770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E176Cu;
            // 0x2e1770: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E19D8u;
            goto label_2e19d8;
        }
    }
    ctx->pc = 0x2E1774u;
label_2e1774:
    // 0x2e1774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e1774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e1778:
    // 0x2e1778: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e177c:
    // 0x2e177c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2e1780:
    if (ctx->pc == 0x2E1780u) {
        ctx->pc = 0x2E1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E177Cu;
        // 0x2e1780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1784u;
        goto label_2e1784;
    }
    ctx->pc = 0x2E177Cu;
    {
        const bool branch_taken_0x2e177c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e177c) {
            ctx->pc = 0x2E1780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E177Cu;
            // 0x2e1780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E179Cu;
            goto label_2e179c;
        }
    }
    ctx->pc = 0x2E1784u;
label_2e1784:
    // 0x2e1784: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2e1788:
    // 0x2e1788: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2e1788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_2e178c:
    // 0x2e178c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2e178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2e1790:
    // 0x2e1790: 0x60f809  jalr        $v1
label_2e1794:
    if (ctx->pc == 0x2E1794u) {
        ctx->pc = 0x2E1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1790u;
        // 0x2e1794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1798u;
        goto label_2e1798;
    }
    ctx->pc = 0x2E1790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E1798u);
        ctx->pc = 0x2E1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1790u;
        // 0x2e1794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1790u, 0x2E1798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1798u;
label_2e1798:
    // 0x2e1798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e1798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e179c:
    // 0x2e179c: 0xc0ad8b8  jal         func_2B62E0
label_2e17a0:
    if (ctx->pc == 0x2E17A0u) {
        ctx->pc = 0x2E17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E179Cu;
        // 0x2e17a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E17A4u;
        goto label_2e17a4;
    }
    ctx->pc = 0x2E179Cu;
    SET_GPR_U32(ctx, 31, 0x2E17A4u);
    ctx->pc = 0x2E17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E179Cu;
    // 0x2e17a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2E179Cu, 0x2E17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17A4u;
label_2e17a4:
    // 0x2e17a4: 0x92110247  lbu         $s1, 0x247($s0)
    ctx->pc = 0x2e17a4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 583)));
label_2e17a8:
    // 0x2e17a8: 0x8e120118  lw          $s2, 0x118($s0)
    ctx->pc = 0x2e17a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_2e17ac:
    // 0x2e17ac: 0x6a02018f  ldl         $v0, 0x18F($s0)
    ctx->pc = 0x2e17acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2e17b0:
    // 0x2e17b0: 0x6e020188  ldr         $v0, 0x188($s0)
    ctx->pc = 0x2e17b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2e17b4:
    // 0x2e17b4: 0x6a030197  ldl         $v1, 0x197($s0)
    ctx->pc = 0x2e17b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2e17b8:
    // 0x2e17b8: 0x6e030190  ldr         $v1, 0x190($s0)
    ctx->pc = 0x2e17b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2e17bc:
    // 0x2e17bc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2e17bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e17c0:
    // 0x2e17c0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2e17c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e17c4:
    // 0x2e17c4: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2e17c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e17c8:
    // 0x2e17c8: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2e17c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e17cc:
    // 0x2e17cc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2e17ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e17d0:
    // 0x2e17d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2e17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_2e17d4:
    // 0x2e17d4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2e17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e17d8:
    // 0x2e17d8: 0x90430295  lbu         $v1, 0x295($v0)
    ctx->pc = 0x2e17d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 661)));
label_2e17dc:
    // 0x2e17dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2e17e0:
    if (ctx->pc == 0x2E17E0u) {
        ctx->pc = 0x2E17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17DCu;
        // 0x2e17e0: 0xc454029c  lwc1        $f20, 0x29C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E17E4u;
        goto label_2e17e4;
    }
    ctx->pc = 0x2E17DCu;
    {
        const bool branch_taken_0x2e17dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17DCu;
        // 0x2e17e0: 0xc454029c  lwc1        $f20, 0x29C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17dc) {
            ctx->pc = 0x2E1818u;
            goto label_2e1818;
        }
    }
    ctx->pc = 0x2E17E4u;
label_2e17e4:
    // 0x2e17e4: 0xc07dfbc  jal         func_1F7EF0
label_2e17e8:
    if (ctx->pc == 0x2E17E8u) {
        ctx->pc = 0x2E17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17E4u;
        // 0x2e17e8: 0xc60c0258  lwc1        $f12, 0x258($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E17ECu;
        goto label_2e17ec;
    }
    ctx->pc = 0x2E17E4u;
    SET_GPR_U32(ctx, 31, 0x2E17ECu);
    ctx->pc = 0x2E17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17E4u;
    // 0x2e17e8: 0xc60c0258  lwc1        $f12, 0x258($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E17E4u, 0x2E17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17ECu;
label_2e17ec:
    // 0x2e17ec: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2e17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e17f0:
    // 0x2e17f0: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x2e17f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
label_2e17f4:
    // 0x2e17f4: 0x3421a0a1  ori         $at, $at, 0xA0A1
    ctx->pc = 0x2e17f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41121);
label_2e17f8:
    // 0x2e17f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e17f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e17fc:
    // 0x2e17fc: 0x90620294  lbu         $v0, 0x294($v1)
    ctx->pc = 0x2e17fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 660)));
label_2e1800:
    // 0x2e1800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e1804:
    // 0x2e1804: 0x0  nop
    ctx->pc = 0x2e1804u;
    // NOP
label_2e1808:
    // 0x2e1808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e180c:
    // 0x2e180c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e180cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e1810:
    // 0x2e1810: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e1810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2e1814:
    // 0x2e1814: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2e1814u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2e1818:
    // 0x2e1818: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e1818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2e181c:
    // 0x2e181c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e181cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e1820:
    // 0x2e1820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e1820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e1824:
    // 0x2e1824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1828:
    // 0x2e1828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e182c:
    // 0x2e182c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e182cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2e1830:
    // 0x2e1830: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e1830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e1834:
    // 0x2e1834: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2e1834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2e1838:
    // 0x2e1838: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2e1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e183c:
    // 0x2e183c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2e183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1840:
    // 0x2e1840: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2e1840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_2e1844:
    // 0x2e1844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e1844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e1848:
    // 0x2e1848: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e1848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2e184c:
    // 0x2e184c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e1850:
    // 0x2e1850: 0xc0ad876  jal         func_2B61D8
label_2e1854:
    if (ctx->pc == 0x2E1854u) {
        ctx->pc = 0x2E1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1850u;
        // 0x2e1854: 0xe7a20020  swc1        $f2, 0x20($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1858u;
        goto label_2e1858;
    }
    ctx->pc = 0x2E1850u;
    SET_GPR_U32(ctx, 31, 0x2E1858u);
    ctx->pc = 0x2E1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1850u;
    // 0x2e1854: 0xe7a20020  swc1        $f2, 0x20($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2E1850u, 0x2E1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1858u;
label_2e1858:
    // 0x2e1858: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2e1858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e185c:
    // 0x2e185c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2e185cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_2e1860:
    // 0x2e1860: 0x90830296  lbu         $v1, 0x296($a0)
    ctx->pc = 0x2e1860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 662)));
label_2e1864:
    // 0x2e1864: 0xa2030247  sb          $v1, 0x247($s0)
    ctx->pc = 0x2e1864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 583), (uint8_t)GPR_U32(ctx, 3));
label_2e1868:
    // 0x2e1868: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e1868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2e186c:
    // 0x2e186c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e1870:
    // 0x2e1870: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e1874:
    if (ctx->pc == 0x2E1874u) {
        ctx->pc = 0x2E1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1870u;
        // 0x2e1874: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1878u;
        goto label_2e1878;
    }
    ctx->pc = 0x2E1870u;
    {
        const bool branch_taken_0x2e1870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1870) {
            ctx->pc = 0x2E1874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1870u;
            // 0x2e1874: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1884u;
            goto label_2e1884;
        }
    }
    ctx->pc = 0x2E1878u;
label_2e1878:
    // 0x2e1878: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x2e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_2e187c:
    // 0x2e187c: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x2e187cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_2e1880:
    // 0x2e1880: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2e1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e1884:
    // 0x2e1884: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2e1884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_2e1888:
    // 0x2e1888: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e188c:
    // 0x2e188c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2e1890:
    // 0x2e1890: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2e1894:
    if (ctx->pc == 0x2E1894u) {
        ctx->pc = 0x2E1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1890u;
        // 0x2e1894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1898u;
        goto label_2e1898;
    }
    ctx->pc = 0x2E1890u;
    {
        const bool branch_taken_0x2e1890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1890u;
        // 0x2e1894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1890) {
            ctx->pc = 0x2E18A8u;
            goto label_2e18a8;
        }
    }
    ctx->pc = 0x2E1898u;
label_2e1898:
    // 0x2e1898: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x2e1898u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_2e189c:
    // 0x2e189c: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x2e189cu;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_2e18a0:
    // 0x2e18a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e18a4:
    if (ctx->pc == 0x2E18A4u) {
        ctx->pc = 0x2E18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18A0u;
        // 0x2e18a4: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E18A8u;
        goto label_2e18a8;
    }
    ctx->pc = 0x2E18A0u;
    {
        const bool branch_taken_0x2e18a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18A0u;
        // 0x2e18a4: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18a0) {
            ctx->pc = 0x2E18B4u;
            goto label_2e18b4;
        }
    }
    ctx->pc = 0x2E18A8u;
label_2e18a8:
    // 0x2e18a8: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2e18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e18ac:
    // 0x2e18ac: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2e18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e18b0:
    // 0x2e18b0: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2e18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2e18b4:
    // 0x2e18b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2e18b8:
    // 0x2e18b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2e18bc:
    // 0x2e18bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e18bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e18c0:
    // 0x2e18c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e18c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2e18c4:
    // 0x2e18c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e18c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e18c8:
    // 0x2e18c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2e18cc:
    if (ctx->pc == 0x2E18CCu) {
        ctx->pc = 0x2E18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18C8u;
        // 0x2e18cc: 0xc7a3001c  lwc1        $f3, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E18D0u;
        goto label_2e18d0;
    }
    ctx->pc = 0x2E18C8u;
    {
        const bool branch_taken_0x2e18c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e18c8) {
            ctx->pc = 0x2E18CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E18C8u;
            // 0x2e18cc: 0xc7a3001c  lwc1        $f3, 0x1C($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E18D0u;
            goto label_2e18d0;
        }
    }
    ctx->pc = 0x2E18D0u;
label_2e18d0:
    // 0x2e18d0: 0x90a20298  lbu         $v0, 0x298($a1)
    ctx->pc = 0x2e18d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 664)));
label_2e18d4:
    // 0x2e18d4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2e18d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_2e18d8:
    // 0x2e18d8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x2e18d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_2e18dc:
    // 0x2e18dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e18dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e18e0:
    // 0x2e18e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e18e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e18e4:
    // 0x2e18e4: 0x0  nop
    ctx->pc = 0x2e18e4u;
    // NOP
label_2e18e8:
    // 0x2e18e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e18e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e18ec:
    // 0x2e18ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e18ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e18f0:
    // 0x2e18f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e18f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2e18f4:
    // 0x2e18f4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e18f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_2e18f8:
    // 0x2e18f8: 0x90a20299  lbu         $v0, 0x299($a1)
    ctx->pc = 0x2e18f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 665)));
label_2e18fc:
    // 0x2e18fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e18fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1900:
    // 0x2e1900: 0x0  nop
    ctx->pc = 0x2e1900u;
    // NOP
label_2e1904:
    // 0x2e1904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e1908:
    // 0x2e1908: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e1908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e190c:
    // 0x2e190c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e190cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2e1910:
    // 0x2e1910: 0xe600018c  swc1        $f0, 0x18C($s0)
    ctx->pc = 0x2e1910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 396), bits); }
label_2e1914:
    // 0x2e1914: 0x90a2029a  lbu         $v0, 0x29A($a1)
    ctx->pc = 0x2e1914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 666)));
label_2e1918:
    // 0x2e1918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e191c:
    // 0x2e191c: 0x0  nop
    ctx->pc = 0x2e191cu;
    // NOP
label_2e1920:
    // 0x2e1920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e1924:
    // 0x2e1924: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e1924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e1928:
    // 0x2e1928: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2e1928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_2e192c:
    // 0x2e192c: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x2e192cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
label_2e1930:
    // 0x2e1930: 0x90a2029b  lbu         $v0, 0x29B($a1)
    ctx->pc = 0x2e1930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 667)));
label_2e1934:
    // 0x2e1934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e1938:
    if (ctx->pc == 0x2E1938u) {
        ctx->pc = 0x2E193Cu;
        goto label_2e193c;
    }
    ctx->pc = 0x2E1934u;
    {
        const bool branch_taken_0x2e1934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1934) {
            ctx->pc = 0x2E1944u;
            goto label_2e1944;
        }
    }
    ctx->pc = 0x2E193Cu;
label_2e193c:
    // 0x2e193c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e1940:
    if (ctx->pc == 0x2E1940u) {
        ctx->pc = 0x2E1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E193Cu;
        // 0x2e1940: 0xe6030194  swc1        $f3, 0x194($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1944u;
        goto label_2e1944;
    }
    ctx->pc = 0x2E193Cu;
    {
        const bool branch_taken_0x2e193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E193Cu;
        // 0x2e1940: 0xe6030194  swc1        $f3, 0x194($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e193c) {
            ctx->pc = 0x2E195Cu;
            goto label_2e195c;
        }
    }
    ctx->pc = 0x2E1944u;
label_2e1944:
    // 0x2e1944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1948:
    // 0x2e1948: 0x0  nop
    ctx->pc = 0x2e1948u;
    // NOP
label_2e194c:
    // 0x2e194c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e194cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e1950:
    // 0x2e1950: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e1950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2e1954:
    // 0x2e1954: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e1954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e1958:
    // 0x2e1958: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x2e1958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
label_2e195c:
    // 0x2e195c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2e195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2e1960:
    // 0x2e1960: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2e1960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_2e1964:
    // 0x2e1964: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2e1964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2e1968:
    // 0x2e1968: 0x60f809  jalr        $v1
label_2e196c:
    if (ctx->pc == 0x2E196Cu) {
        ctx->pc = 0x2E196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1968u;
        // 0x2e196c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1970u;
        goto label_2e1970;
    }
    ctx->pc = 0x2E1968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E1970u);
        ctx->pc = 0x2E196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1968u;
        // 0x2e196c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1968u, 0x2E1970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1970u;
label_2e1970:
    // 0x2e1970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1974:
    // 0x2e1974: 0xc0ad876  jal         func_2B61D8
label_2e1978:
    if (ctx->pc == 0x2E1978u) {
        ctx->pc = 0x2E1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1974u;
        // 0x2e1978: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E197Cu;
        goto label_2e197c;
    }
    ctx->pc = 0x2E1974u;
    SET_GPR_U32(ctx, 31, 0x2E197Cu);
    ctx->pc = 0x2E1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1974u;
    // 0x2e1978: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2E1974u, 0x2E197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E197Cu;
label_2e197c:
    // 0x2e197c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2e197cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2e1980:
    // 0x2e1980: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2e1980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2e1984:
    // 0x2e1984: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x2e1984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2e1988:
    // 0x2e1988: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x2e1988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2e198c:
    // 0x2e198c: 0xb202018f  sdl         $v0, 0x18F($s0)
    ctx->pc = 0x2e198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e1990:
    // 0x2e1990: 0xb6020188  sdr         $v0, 0x188($s0)
    ctx->pc = 0x2e1990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e1994:
    // 0x2e1994: 0xb2030197  sdl         $v1, 0x197($s0)
    ctx->pc = 0x2e1994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e1998:
    // 0x2e1998: 0xb6030190  sdr         $v1, 0x190($s0)
    ctx->pc = 0x2e1998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e199c:
    // 0x2e199c: 0xa2110247  sb          $s1, 0x247($s0)
    ctx->pc = 0x2e199cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 583), (uint8_t)GPR_U32(ctx, 17));
label_2e19a0:
    // 0x2e19a0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2e19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2e19a4:
    // 0x2e19a4: 0xae120118  sw          $s2, 0x118($s0)
    ctx->pc = 0x2e19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 18));
label_2e19a8:
    // 0x2e19a8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2e19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2e19ac:
    // 0x2e19ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e19acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e19b0:
    // 0x2e19b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e19b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2e19b4:
    // 0x2e19b4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2e19b8:
    if (ctx->pc == 0x2E19B8u) {
        ctx->pc = 0x2E19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19B4u;
        // 0x2e19b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E19BCu;
        goto label_2e19bc;
    }
    ctx->pc = 0x2E19B4u;
    {
        const bool branch_taken_0x2e19b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e19b4) {
            ctx->pc = 0x2E19B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E19B4u;
            // 0x2e19b8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E19ECu;
            goto label_2e19ec;
        }
    }
    ctx->pc = 0x2E19BCu;
label_2e19bc:
    // 0x2e19bc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2e19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2e19c0:
    // 0x2e19c0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2e19c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_2e19c4:
    // 0x2e19c4: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2e19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2e19c8:
    // 0x2e19c8: 0x60f809  jalr        $v1
label_2e19cc:
    if (ctx->pc == 0x2E19CCu) {
        ctx->pc = 0x2E19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19C8u;
        // 0x2e19cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E19D0u;
        goto label_2e19d0;
    }
    ctx->pc = 0x2E19C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E19D0u);
        ctx->pc = 0x2E19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19C8u;
        // 0x2e19cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E19C8u, 0x2E19D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E19D0u;
label_2e19d0:
    // 0x2e19d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e19d4:
    if (ctx->pc == 0x2E19D4u) {
        ctx->pc = 0x2E19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19D0u;
        // 0x2e19d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E19D8u;
        goto label_2e19d8;
    }
    ctx->pc = 0x2E19D0u;
    {
        const bool branch_taken_0x2e19d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19D0u;
        // 0x2e19d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19d0) {
            ctx->pc = 0x2E19ECu;
            goto label_2e19ec;
        }
    }
    ctx->pc = 0x2E19D8u;
label_2e19d8:
    // 0x2e19d8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2e19d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_2e19dc:
    // 0x2e19dc: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2e19e0:
    // 0x2e19e0: 0x60f809  jalr        $v1
label_2e19e4:
    if (ctx->pc == 0x2E19E4u) {
        ctx->pc = 0x2E19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19E0u;
        // 0x2e19e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E19E8u;
        goto label_2e19e8;
    }
    ctx->pc = 0x2E19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E19E8u);
        ctx->pc = 0x2E19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19E0u;
        // 0x2e19e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E19E0u, 0x2E19E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E19E8u;
label_2e19e8:
    // 0x2e19e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e19e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e19ec:
    // 0x2e19ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e19ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e19f0:
    // 0x2e19f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e19f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e19f4:
    // 0x2e19f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e19f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e19f8:
    // 0x2e19f8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2e19f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e19fc:
    // 0x2e19fc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2e19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1a00:
    // 0x2e1a00: 0x3e00008  jr          $ra
label_2e1a04:
    if (ctx->pc == 0x2E1A04u) {
        ctx->pc = 0x2E1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A00u;
        // 0x2e1a04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1A08u;
        goto label_fallthrough_0x2e1a00;
    }
    ctx->pc = 0x2E1A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A00u;
        // 0x2e1a04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1a00:
    ctx->pc = 0x2E1A08u;
}
