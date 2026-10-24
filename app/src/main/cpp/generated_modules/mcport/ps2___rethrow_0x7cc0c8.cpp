#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __rethrow
// Address: 0x7cc0c8 - 0x7cc2b0
void ps2___rethrow_0x7cc0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rethrow_0x7cc0c8");
#endif

    switch (ctx->pc) {
        case 0x7cc0c8u: goto label_7cc0c8;
        case 0x7cc0ccu: goto label_7cc0cc;
        case 0x7cc0d0u: goto label_7cc0d0;
        case 0x7cc0d4u: goto label_7cc0d4;
        case 0x7cc0d8u: goto label_7cc0d8;
        case 0x7cc0dcu: goto label_7cc0dc;
        case 0x7cc0e0u: goto label_7cc0e0;
        case 0x7cc0e4u: goto label_7cc0e4;
        case 0x7cc0e8u: goto label_7cc0e8;
        case 0x7cc0ecu: goto label_7cc0ec;
        case 0x7cc0f0u: goto label_7cc0f0;
        case 0x7cc0f4u: goto label_7cc0f4;
        case 0x7cc0f8u: goto label_7cc0f8;
        case 0x7cc0fcu: goto label_7cc0fc;
        case 0x7cc100u: goto label_7cc100;
        case 0x7cc104u: goto label_7cc104;
        case 0x7cc108u: goto label_7cc108;
        case 0x7cc10cu: goto label_7cc10c;
        case 0x7cc110u: goto label_7cc110;
        case 0x7cc114u: goto label_7cc114;
        case 0x7cc118u: goto label_7cc118;
        case 0x7cc11cu: goto label_7cc11c;
        case 0x7cc120u: goto label_7cc120;
        case 0x7cc124u: goto label_7cc124;
        case 0x7cc128u: goto label_7cc128;
        case 0x7cc12cu: goto label_7cc12c;
        case 0x7cc130u: goto label_7cc130;
        case 0x7cc134u: goto label_7cc134;
        case 0x7cc138u: goto label_7cc138;
        case 0x7cc13cu: goto label_7cc13c;
        case 0x7cc140u: goto label_7cc140;
        case 0x7cc144u: goto label_7cc144;
        case 0x7cc148u: goto label_7cc148;
        case 0x7cc14cu: goto label_7cc14c;
        case 0x7cc150u: goto label_7cc150;
        case 0x7cc154u: goto label_7cc154;
        case 0x7cc158u: goto label_7cc158;
        case 0x7cc15cu: goto label_7cc15c;
        case 0x7cc160u: goto label_7cc160;
        case 0x7cc164u: goto label_7cc164;
        case 0x7cc168u: goto label_7cc168;
        case 0x7cc16cu: goto label_7cc16c;
        case 0x7cc170u: goto label_7cc170;
        case 0x7cc174u: goto label_7cc174;
        case 0x7cc178u: goto label_7cc178;
        case 0x7cc17cu: goto label_7cc17c;
        case 0x7cc180u: goto label_7cc180;
        case 0x7cc184u: goto label_7cc184;
        case 0x7cc188u: goto label_7cc188;
        case 0x7cc18cu: goto label_7cc18c;
        case 0x7cc190u: goto label_7cc190;
        case 0x7cc194u: goto label_7cc194;
        case 0x7cc198u: goto label_7cc198;
        case 0x7cc19cu: goto label_7cc19c;
        case 0x7cc1a0u: goto label_7cc1a0;
        case 0x7cc1a4u: goto label_7cc1a4;
        case 0x7cc1a8u: goto label_7cc1a8;
        case 0x7cc1acu: goto label_7cc1ac;
        case 0x7cc1b0u: goto label_7cc1b0;
        case 0x7cc1b4u: goto label_7cc1b4;
        case 0x7cc1b8u: goto label_7cc1b8;
        case 0x7cc1bcu: goto label_7cc1bc;
        case 0x7cc1c0u: goto label_7cc1c0;
        case 0x7cc1c4u: goto label_7cc1c4;
        case 0x7cc1c8u: goto label_7cc1c8;
        case 0x7cc1ccu: goto label_7cc1cc;
        case 0x7cc1d0u: goto label_7cc1d0;
        case 0x7cc1d4u: goto label_7cc1d4;
        case 0x7cc1d8u: goto label_7cc1d8;
        case 0x7cc1dcu: goto label_7cc1dc;
        case 0x7cc1e0u: goto label_7cc1e0;
        case 0x7cc1e4u: goto label_7cc1e4;
        case 0x7cc1e8u: goto label_7cc1e8;
        case 0x7cc1ecu: goto label_7cc1ec;
        case 0x7cc1f0u: goto label_7cc1f0;
        case 0x7cc1f4u: goto label_7cc1f4;
        case 0x7cc1f8u: goto label_7cc1f8;
        case 0x7cc1fcu: goto label_7cc1fc;
        case 0x7cc200u: goto label_7cc200;
        case 0x7cc204u: goto label_7cc204;
        case 0x7cc208u: goto label_7cc208;
        case 0x7cc20cu: goto label_7cc20c;
        case 0x7cc210u: goto label_7cc210;
        case 0x7cc214u: goto label_7cc214;
        case 0x7cc218u: goto label_7cc218;
        case 0x7cc21cu: goto label_7cc21c;
        case 0x7cc220u: goto label_7cc220;
        case 0x7cc224u: goto label_7cc224;
        case 0x7cc228u: goto label_7cc228;
        case 0x7cc22cu: goto label_7cc22c;
        case 0x7cc230u: goto label_7cc230;
        case 0x7cc234u: goto label_7cc234;
        case 0x7cc238u: goto label_7cc238;
        case 0x7cc23cu: goto label_7cc23c;
        case 0x7cc240u: goto label_7cc240;
        case 0x7cc244u: goto label_7cc244;
        case 0x7cc248u: goto label_7cc248;
        case 0x7cc24cu: goto label_7cc24c;
        case 0x7cc250u: goto label_7cc250;
        case 0x7cc254u: goto label_7cc254;
        case 0x7cc258u: goto label_7cc258;
        case 0x7cc25cu: goto label_7cc25c;
        case 0x7cc260u: goto label_7cc260;
        case 0x7cc264u: goto label_7cc264;
        case 0x7cc268u: goto label_7cc268;
        case 0x7cc26cu: goto label_7cc26c;
        case 0x7cc270u: goto label_7cc270;
        case 0x7cc274u: goto label_7cc274;
        case 0x7cc278u: goto label_7cc278;
        case 0x7cc27cu: goto label_7cc27c;
        case 0x7cc280u: goto label_7cc280;
        case 0x7cc284u: goto label_7cc284;
        case 0x7cc288u: goto label_7cc288;
        case 0x7cc28cu: goto label_7cc28c;
        case 0x7cc290u: goto label_7cc290;
        case 0x7cc294u: goto label_7cc294;
        case 0x7cc298u: goto label_7cc298;
        case 0x7cc29cu: goto label_7cc29c;
        case 0x7cc2a0u: goto label_7cc2a0;
        case 0x7cc2a4u: goto label_7cc2a4;
        case 0x7cc2a8u: goto label_7cc2a8;
        case 0x7cc2acu: goto label_7cc2ac;
        default: break;
    }

    ctx->pc = 0x7cc0c8u;

label_7cc0c8:
    // 0x7cc0c8: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x7cc0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_7cc0cc:
    // 0x7cc0cc: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cc0d0:
    // 0x7cc0d0: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x7cc0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_7cc0d4:
    // 0x7cc0d4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x7cc0d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7cc0d8:
    // 0x7cc0d8: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x7cc0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_7cc0dc:
    // 0x7cc0dc: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x7cc0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_7cc0e0:
    // 0x7cc0e0: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x7cc0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_7cc0e4:
    // 0x7cc0e4: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x7cc0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_7cc0e8:
    // 0x7cc0e8: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x7cc0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_7cc0ec:
    // 0x7cc0ec: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x7cc0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_7cc0f0:
    // 0x7cc0f0: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x7cc0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_7cc0f4:
    // 0x7cc0f4: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x7cc0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_7cc0f8:
    // 0x7cc0f8: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x7cc0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_7cc0fc:
    // 0x7cc0fc: 0xe7bf06f8  swc1        $f31, 0x6F8($sp)
    ctx->pc = 0x7cc0fcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_7cc100:
    // 0x7cc100: 0xe7be06f0  swc1        $f30, 0x6F0($sp)
    ctx->pc = 0x7cc100u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_7cc104:
    // 0x7cc104: 0xe7bd06e8  swc1        $f29, 0x6E8($sp)
    ctx->pc = 0x7cc104u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_7cc108:
    // 0x7cc108: 0xe7bc06e0  swc1        $f28, 0x6E0($sp)
    ctx->pc = 0x7cc108u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_7cc10c:
    // 0x7cc10c: 0xe7bb06d8  swc1        $f27, 0x6D8($sp)
    ctx->pc = 0x7cc10cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_7cc110:
    // 0x7cc110: 0xe7ba06d0  swc1        $f26, 0x6D0($sp)
    ctx->pc = 0x7cc110u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_7cc114:
    // 0x7cc114: 0xe7b906c8  swc1        $f25, 0x6C8($sp)
    ctx->pc = 0x7cc114u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_7cc118:
    // 0x7cc118: 0xe7b806c0  swc1        $f24, 0x6C0($sp)
    ctx->pc = 0x7cc118u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_7cc11c:
    // 0x7cc11c: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x7cc11cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_7cc120:
    // 0x7cc120: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x7cc120u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_7cc124:
    // 0x7cc124: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x7cc124u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_7cc128:
    // 0x7cc128: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x7cc128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_7cc12c:
    // 0x7cc12c: 0xafc405e4  sw          $a0, 0x5E4($fp)
    ctx->pc = 0x7cc12cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 4));
label_7cc130:
    // 0x7cc130: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cc130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cc134:
    // 0x7cc134: 0x40f809  jalr        $v0
label_7cc138:
    if (ctx->pc == 0x7CC138u) {
        ctx->pc = 0x7CC13Cu;
        goto label_7cc13c;
    }
    ctx->pc = 0x7CC134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CC13Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC134u, 0x7CC13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CC13Cu;
label_7cc13c:
    // 0x7cc13c: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x7cc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_7cc140:
    // 0x7cc140: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x7cc140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_7cc144:
    // 0x7cc144: 0x8fc305e8  lw          $v1, 0x5E8($fp)
    ctx->pc = 0x7cc144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_7cc148:
    // 0x7cc148: 0xafc205ec  sw          $v0, 0x5EC($fp)
    ctx->pc = 0x7cc148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 2));
label_7cc14c:
    // 0x7cc14c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cc14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7cc150:
    // 0x7cc150: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_7cc154:
    if (ctx->pc == 0x7CC154u) {
        ctx->pc = 0x7CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC150u;
        // 0x7cc154: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC158u;
        goto label_7cc158;
    }
    ctx->pc = 0x7CC150u;
    {
        const bool branch_taken_0x7cc150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC150u;
        // 0x7cc154: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc150) {
            ctx->pc = 0x7CC160u;
            goto label_7cc160;
        }
    }
    ctx->pc = 0x7CC158u;
label_7cc158:
    // 0x7cc158: 0xc1f2cd4  jal         func_7CB350
label_7cc15c:
    if (ctx->pc == 0x7CC15Cu) {
        ctx->pc = 0x7CC160u;
        goto label_7cc160;
    }
    ctx->pc = 0x7CC158u;
    SET_GPR_U32(ctx, 31, 0x7CC160u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CC158u, 0x7CC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC160u;
label_7cc160:
    // 0x7cc160: 0x8fc605e4  lw          $a2, 0x5E4($fp)
    ctx->pc = 0x7cc160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_7cc164:
    // 0x7cc164: 0x27c705e0  addiu       $a3, $fp, 0x5E0
    ctx->pc = 0x7cc164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_7cc168:
    // 0x7cc168: 0x8fc505e8  lw          $a1, 0x5E8($fp)
    ctx->pc = 0x7cc168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_7cc16c:
    // 0x7cc16c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x7cc16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_7cc170:
    // 0x7cc170: 0xafc705f0  sw          $a3, 0x5F0($fp)
    ctx->pc = 0x7cc170u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1520), GPR_U32(ctx, 7));
label_7cc174:
    // 0x7cc174: 0x3c08007d  lui         $t0, 0x7D
    ctx->pc = 0x7cc174u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)125 << 16));
label_7cc178:
    // 0x7cc178: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x7cc178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_7cc17c:
    // 0x7cc17c: 0xc1f33e4  jal         func_7CCF90
label_7cc180:
    if (ctx->pc == 0x7CC180u) {
        ctx->pc = 0x7CC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC17Cu;
        // 0x7cc180: 0x2504c174  addiu       $a0, $t0, -0x3E8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC184u;
        goto label_7cc184;
    }
    ctx->pc = 0x7CC17Cu;
    SET_GPR_U32(ctx, 31, 0x7CC184u);
    ctx->pc = 0x7CC180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC17Cu;
    // 0x7cc180: 0x2504c174  addiu       $a0, $t0, -0x3E8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCF90u, 0x7CC17Cu, 0x7CC184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC184u;
label_7cc184:
    // 0x7cc184: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7cc184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cc188:
    // 0x7cc188: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_7cc18c:
    if (ctx->pc == 0x7CC18Cu) {
        ctx->pc = 0x7CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC188u;
        // 0x7cc18c: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC190u;
        goto label_7cc190;
    }
    ctx->pc = 0x7CC188u;
    {
        const bool branch_taken_0x7cc188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC188u;
        // 0x7cc18c: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc188) {
            ctx->pc = 0x7CC19Cu;
            goto label_7cc19c;
        }
    }
    ctx->pc = 0x7CC190u;
label_7cc190:
    // 0x7cc190: 0xc1f2cd4  jal         func_7CB350
label_7cc194:
    if (ctx->pc == 0x7CC194u) {
        ctx->pc = 0x7CC198u;
        goto label_7cc198;
    }
    ctx->pc = 0x7CC190u;
    SET_GPR_U32(ctx, 31, 0x7CC198u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CC190u, 0x7CC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC198u;
label_7cc198:
    // 0x7cc198: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x7cc198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_7cc19c:
    // 0x7cc19c: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x7cc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
label_7cc1a0:
    // 0x7cc1a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x7cc1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7cc1a4:
    // 0x7cc1a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7cc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_7cc1a8:
    // 0x7cc1a8: 0x8fc205ec  lw          $v0, 0x5EC($fp)
    ctx->pc = 0x7cc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_7cc1ac:
    // 0x7cc1ac: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x7cc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_7cc1b0:
    // 0x7cc1b0: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x7cc1b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_7cc1b4:
    // 0x7cc1b4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x7cc1b4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_7cc1b8:
    // 0x7cc1b8: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x7cc1b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_7cc1bc:
    // 0x7cc1bc: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x7cc1bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_7cc1c0:
    // 0x7cc1c0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x7cc1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_7cc1c4:
    // 0x7cc1c4: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x7cc1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_7cc1c8:
    // 0x7cc1c8: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x7cc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_7cc1cc:
    // 0x7cc1cc: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x7cc1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_7cc1d0:
    // 0x7cc1d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7cc1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_7cc1d4:
    // 0x7cc1d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7cc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_7cc1d8:
    // 0x7cc1d8: 0x0  nop
    ctx->pc = 0x7cc1d8u;
    // NOP
label_7cc1dc:
    // 0x7cc1dc: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_7cc1e0:
    if (ctx->pc == 0x7CC1E0u) {
        ctx->pc = 0x7CC1E4u;
        goto label_7cc1e4;
    }
    ctx->pc = 0x7CC1DCu;
    {
        const bool branch_taken_0x7cc1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x7cc1dc) {
            ctx->pc = 0x7CC1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc1b0;
        }
    }
    ctx->pc = 0x7CC1E4u;
label_7cc1e4:
    // 0x7cc1e4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x7cc1e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_7cc1e8:
    // 0x7cc1e8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x7cc1e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_7cc1ec:
    // 0x7cc1ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x7cc1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_7cc1f0:
    // 0x7cc1f0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x7cc1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_7cc1f4:
    // 0x7cc1f4: 0x27c20690  addiu       $v0, $fp, 0x690
    ctx->pc = 0x7cc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_7cc1f8:
    // 0x7cc1f8: 0x8fc405e8  lw          $a0, 0x5E8($fp)
    ctx->pc = 0x7cc1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_7cc1fc:
    // 0x7cc1fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x7cc1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7cc200:
    // 0x7cc200: 0x8fc605ec  lw          $a2, 0x5EC($fp)
    ctx->pc = 0x7cc200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_7cc204:
    // 0x7cc204: 0x8fc705f0  lw          $a3, 0x5F0($fp)
    ctx->pc = 0x7cc204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1520)));
label_7cc208:
    // 0x7cc208: 0xc1f2eee  jal         func_7CBBB8
label_7cc20c:
    if (ctx->pc == 0x7CC20Cu) {
        ctx->pc = 0x7CC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC208u;
        // 0x7cc20c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC210u;
        goto label_7cc210;
    }
    ctx->pc = 0x7CC208u;
    SET_GPR_U32(ctx, 31, 0x7CC210u);
    ctx->pc = 0x7CC20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC208u;
    // 0x7cc20c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBBB8u, 0x7CC208u, 0x7CC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC210u;
label_7cc210:
    // 0x7cc210: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x7cc210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_7cc214:
    // 0x7cc214: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cc214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cc218:
    // 0x7cc218: 0x8fc805ec  lw          $t0, 0x5EC($fp)
    ctx->pc = 0x7cc218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_7cc21c:
    // 0x7cc21c: 0x2465c240  addiu       $a1, $v1, -0x3DC0
    ctx->pc = 0x7cc21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951488));
label_7cc220:
    // 0x7cc220: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x7cc220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_7cc224:
    // 0x7cc224: 0x27c40690  addiu       $a0, $fp, 0x690
    ctx->pc = 0x7cc224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_7cc228:
    // 0x7cc228: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x7cc228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_7cc22c:
    // 0x7cc22c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7cc22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_7cc230:
    // 0x7cc230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7cc230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cc234:
    // 0x7cc234: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x7cc234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_7cc238:
    // 0x7cc238: 0x10000003  b           . + 4 + (0x3 << 2)
label_7cc23c:
    if (ctx->pc == 0x7CC23Cu) {
        ctx->pc = 0x7CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC238u;
        // 0x7cc23c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC240u;
        goto label_7cc240;
    }
    ctx->pc = 0x7CC238u;
    {
        const bool branch_taken_0x7cc238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC238u;
        // 0x7cc23c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc238) {
            ctx->pc = 0x7CC248u;
            goto label_7cc248;
        }
    }
    ctx->pc = 0x7CC240u;
label_7cc240:
    // 0x7cc240: 0x800008  jr          $a0
label_7cc244:
    if (ctx->pc == 0x7CC244u) {
        ctx->pc = 0x7CC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC240u;
        // 0x7cc244: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC248u;
        goto label_7cc248;
    }
    ctx->pc = 0x7CC240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7CC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC240u;
        // 0x7cc244: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7CC248u;
label_7cc248:
    // 0x7cc248: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x7cc248u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_7cc24c:
    // 0x7cc24c: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x7cc24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_7cc250:
    // 0x7cc250: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x7cc250u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_7cc254:
    // 0x7cc254: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x7cc254u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_7cc258:
    // 0x7cc258: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x7cc258u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_7cc25c:
    // 0x7cc25c: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x7cc25cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_7cc260:
    // 0x7cc260: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x7cc260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_7cc264:
    // 0x7cc264: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x7cc264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_7cc268:
    // 0x7cc268: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x7cc268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_7cc26c:
    // 0x7cc26c: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x7cc26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_7cc270:
    // 0x7cc270: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x7cc270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_7cc274:
    // 0x7cc274: 0xc7bf06f8  lwc1        $f31, 0x6F8($sp)
    ctx->pc = 0x7cc274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_7cc278:
    // 0x7cc278: 0xc7be06f0  lwc1        $f30, 0x6F0($sp)
    ctx->pc = 0x7cc278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_7cc27c:
    // 0x7cc27c: 0xc7bd06e8  lwc1        $f29, 0x6E8($sp)
    ctx->pc = 0x7cc27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_7cc280:
    // 0x7cc280: 0xc7bc06e0  lwc1        $f28, 0x6E0($sp)
    ctx->pc = 0x7cc280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_7cc284:
    // 0x7cc284: 0xc7bb06d8  lwc1        $f27, 0x6D8($sp)
    ctx->pc = 0x7cc284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_7cc288:
    // 0x7cc288: 0xc7ba06d0  lwc1        $f26, 0x6D0($sp)
    ctx->pc = 0x7cc288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_7cc28c:
    // 0x7cc28c: 0xc7b906c8  lwc1        $f25, 0x6C8($sp)
    ctx->pc = 0x7cc28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_7cc290:
    // 0x7cc290: 0xc7b806c0  lwc1        $f24, 0x6C0($sp)
    ctx->pc = 0x7cc290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_7cc294:
    // 0x7cc294: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x7cc294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_7cc298:
    // 0x7cc298: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x7cc298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_7cc29c:
    // 0x7cc29c: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x7cc29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7cc2a0:
    // 0x7cc2a0: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x7cc2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7cc2a4:
    // 0x7cc2a4: 0x3e00008  jr          $ra
label_7cc2a8:
    if (ctx->pc == 0x7CC2A8u) {
        ctx->pc = 0x7CC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC2A4u;
        // 0x7cc2a8: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CC2ACu;
        goto label_7cc2ac;
    }
    ctx->pc = 0x7CC2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC2A4u;
        // 0x7cc2a8: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC2ACu;
label_7cc2ac:
    // 0x7cc2ac: 0x0  nop
    ctx->pc = 0x7cc2acu;
    // NOP
    ctx->pc = 0x7cc2b0u;
}
} // namespace gh_mcport
