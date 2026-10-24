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

// Function: func_00307388
// Address: 0x307388 - 0x3076e0
void func_00307388_0x307388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307388_0x307388");
#endif

    switch (ctx->pc) {
        case 0x3073b4u: goto label_3073b4;
        case 0x307590u: goto label_307590;
        case 0x307654u: goto label_307654;
        case 0x3076acu: goto label_3076ac;
        default: break;
    }

    ctx->pc = 0x307388u;

    // 0x307388: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x307388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x30738c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x30738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x307390: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x307390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x307394: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x307394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x307398: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x307398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x30739c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x30739cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3073a0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3073a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3073a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073a8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3073a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3073ac: 0xc0c1dfa  jal         func_3077E8
    ctx->pc = 0x3073ACu;
    SET_GPR_U32(ctx, 31, 0x3073B4u);
    ctx->pc = 0x3077E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3077E8u, 0x3073ACu, 0x3073B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073B4u;
label_3073b4:
    // 0x3073b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3073B4u;
    {
        const bool branch_taken_0x3073b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3073b4) {
            ctx->pc = 0x3073C4u;
            goto label_3073c4;
        }
    }
    ctx->pc = 0x3073BCu;
    // 0x3073bc: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x3073BCu;
    {
        const bool branch_taken_0x3073bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3073bc) {
            ctx->pc = 0x3076BCu;
            goto label_3076bc;
        }
    }
    ctx->pc = 0x3073C4u;
label_3073c4:
    // 0x3073c4: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x3073c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3073c8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x3073c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3073cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3073ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3073d0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3073d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3073d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3073d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3073d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3073D8u;
    {
        const bool branch_taken_0x3073d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3073d8) {
            ctx->pc = 0x3073E8u;
            goto label_3073e8;
        }
    }
    ctx->pc = 0x3073E0u;
    // 0x3073e0: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x3073E0u;
    {
        const bool branch_taken_0x3073e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3073e0) {
            ctx->pc = 0x3076BCu;
            goto label_3076bc;
        }
    }
    ctx->pc = 0x3073E8u;
label_3073e8:
    // 0x3073e8: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x3073e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3073ec: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x3073ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3073f0: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3073F0u;
    {
        const bool branch_taken_0x3073f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3073f0) {
            ctx->pc = 0x307454u;
            goto label_307454;
        }
    }
    ctx->pc = 0x3073F8u;
    // 0x3073f8: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x3073f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3073fc: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x3073fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x307400: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x307400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x307404: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307404u;
    {
        const bool branch_taken_0x307404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307404) {
            ctx->pc = 0x307418u;
            goto label_307418;
        }
    }
    ctx->pc = 0x30740Cu;
    // 0x30740c: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x30740cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x307410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x307410u;
    {
        const bool branch_taken_0x307410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307410) {
            ctx->pc = 0x307424u;
            goto label_307424;
        }
    }
    ctx->pc = 0x307418u;
label_307418:
    // 0x307418: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x307418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30741c: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x30741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x307420: 0xa203001c  sb          $v1, 0x1C($s0)
    ctx->pc = 0x307420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
label_307424:
    // 0x307424: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x307424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x307428: 0xa3c20004  sb          $v0, 0x4($fp)
    ctx->pc = 0x307428u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x30742c: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x30742cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x307430: 0xa3c20005  sb          $v0, 0x5($fp)
    ctx->pc = 0x307430u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x307434: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x307434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x307438: 0xa3c20006  sb          $v0, 0x6($fp)
    ctx->pc = 0x307438u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x30743c: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x30743cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x307440: 0xa3c20007  sb          $v0, 0x7($fp)
    ctx->pc = 0x307440u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x307444: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x307444u;
    {
        const bool branch_taken_0x307444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307444) {
            ctx->pc = 0x307580u;
            goto label_307580;
        }
    }
    ctx->pc = 0x30744Cu;
    // 0x30744c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x30744Cu;
    {
        const bool branch_taken_0x30744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30744c) {
            ctx->pc = 0x3076ACu;
            goto label_3076ac;
        }
    }
    ctx->pc = 0x307454u;
label_307454:
    // 0x307454: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x307454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x307458: 0xa3c20004  sb          $v0, 0x4($fp)
    ctx->pc = 0x307458u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x30745c: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x30745cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x307460: 0x93c30004  lbu         $v1, 0x4($fp)
    ctx->pc = 0x307460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x307464: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x307464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x307468: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x307468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x30746c: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x30746cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x307470: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x307470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x307474: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x307474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x307478: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x307478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30747c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x30747cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x307480: 0x1012  mflo        $v0
    ctx->pc = 0x307480u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x307484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307488: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x307488u;
    {
        const bool branch_taken_0x307488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x307488) {
            ctx->pc = 0x30748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307488u;
            // 0x30748c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x307490u;
            goto label_307490;
        }
    }
    ctx->pc = 0x307490u;
label_307490:
    // 0x307490: 0x93c30004  lbu         $v1, 0x4($fp)
    ctx->pc = 0x307490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x307494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307498: 0xa3c30004  sb          $v1, 0x4($fp)
    ctx->pc = 0x307498u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x30749c: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x30749cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3074a0: 0xa3c20005  sb          $v0, 0x5($fp)
    ctx->pc = 0x3074a0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3074a4: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x3074a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x3074a8: 0x93c30005  lbu         $v1, 0x5($fp)
    ctx->pc = 0x3074a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 5)));
    // 0x3074ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3074acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3074b0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3074b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3074b4: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x3074b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x3074b8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3074b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3074bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3074bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3074c0: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x3074c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3074c4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3074c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3074c8: 0x1012  mflo        $v0
    ctx->pc = 0x3074c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3074cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3074ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3074d0: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3074D0u;
    {
        const bool branch_taken_0x3074d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3074d0) {
            ctx->pc = 0x3074D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3074D0u;
            // 0x3074d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3074D8u;
            goto label_3074d8;
        }
    }
    ctx->pc = 0x3074D8u;
label_3074d8:
    // 0x3074d8: 0x93c30005  lbu         $v1, 0x5($fp)
    ctx->pc = 0x3074d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 5)));
    // 0x3074dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3074dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3074e0: 0xa3c30005  sb          $v1, 0x5($fp)
    ctx->pc = 0x3074e0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3074e4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x3074e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3074e8: 0xa3c20006  sb          $v0, 0x6($fp)
    ctx->pc = 0x3074e8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3074ec: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x3074ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3074f0: 0x93c30006  lbu         $v1, 0x6($fp)
    ctx->pc = 0x3074f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x3074f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3074f8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3074f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3074fc: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x3074fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x307500: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x307500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x307504: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x307504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x307508: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x307508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30750c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x30750cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x307510: 0x1012  mflo        $v0
    ctx->pc = 0x307510u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x307514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307518: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x307518u;
    {
        const bool branch_taken_0x307518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x307518) {
            ctx->pc = 0x30751Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307518u;
            // 0x30751c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x307520u;
            goto label_307520;
        }
    }
    ctx->pc = 0x307520u;
label_307520:
    // 0x307520: 0x93c30006  lbu         $v1, 0x6($fp)
    ctx->pc = 0x307520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x307524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307528: 0xa3c30006  sb          $v1, 0x6($fp)
    ctx->pc = 0x307528u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x30752c: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x30752cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x307530: 0xa3c20007  sb          $v0, 0x7($fp)
    ctx->pc = 0x307530u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x307534: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x307534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x307538: 0x93c30007  lbu         $v1, 0x7($fp)
    ctx->pc = 0x307538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 7)));
    // 0x30753c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x307540: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x307540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x307544: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x307544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x307548: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x30754c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x30754cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x307550: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x307550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x307554: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x307554u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x307558: 0x1012  mflo        $v0
    ctx->pc = 0x307558u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x30755c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307560: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x307560u;
    {
        const bool branch_taken_0x307560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x307560) {
            ctx->pc = 0x307564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307560u;
            // 0x307564: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x307568u;
            goto label_307568;
        }
    }
    ctx->pc = 0x307568u;
label_307568:
    // 0x307568: 0x93c30007  lbu         $v1, 0x7($fp)
    ctx->pc = 0x307568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 7)));
    // 0x30756c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307570: 0xa3c30007  sb          $v1, 0x7($fp)
    ctx->pc = 0x307570u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x307574: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x307574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x307578: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x307578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30757c: 0xa603001a  sh          $v1, 0x1A($s0)
    ctx->pc = 0x30757cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
label_307580:
    // 0x307580: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x307580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x307584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307588: 0xc0c1e10  jal         func_307840
    ctx->pc = 0x307588u;
    SET_GPR_U32(ctx, 31, 0x307590u);
    ctx->pc = 0x307840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307840u, 0x307588u, 0x307590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307590u;
label_307590:
    // 0x307590: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x307590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x307594: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x307594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x307598: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x307598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30759c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x30759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3075a0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3075a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3075a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3075A4u;
    {
        const bool branch_taken_0x3075a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075a4) {
            ctx->pc = 0x3075BCu;
            goto label_3075bc;
        }
    }
    ctx->pc = 0x3075ACu;
    // 0x3075ac: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3075acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3075b0: 0xffc20040  sd          $v0, 0x40($fp)
    ctx->pc = 0x3075b0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 2));
    // 0x3075b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3075B4u;
    {
        const bool branch_taken_0x3075b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075b4) {
            ctx->pc = 0x3075E8u;
            goto label_3075e8;
        }
    }
    ctx->pc = 0x3075BCu;
label_3075bc:
    // 0x3075bc: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x3075bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3075c0: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x3075c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3075c4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3075c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3075c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3075C8u;
    {
        const bool branch_taken_0x3075c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075c8) {
            ctx->pc = 0x3075E0u;
            goto label_3075e0;
        }
    }
    ctx->pc = 0x3075D0u;
    // 0x3075d0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3075d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3075d4: 0xffc20040  sd          $v0, 0x40($fp)
    ctx->pc = 0x3075d4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 2));
    // 0x3075d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3075D8u;
    {
        const bool branch_taken_0x3075d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075d8) {
            ctx->pc = 0x3075E8u;
            goto label_3075e8;
        }
    }
    ctx->pc = 0x3075E0u;
label_3075e0:
    // 0x3075e0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3075e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x3075e4: 0xffc20040  sd          $v0, 0x40($fp)
    ctx->pc = 0x3075e4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 2));
label_3075e8:
    // 0x3075e8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3075e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3075ec: 0xffc20048  sd          $v0, 0x48($fp)
    ctx->pc = 0x3075ecu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 72), GPR_U64(ctx, 2));
    // 0x3075f0: 0x93c30007  lbu         $v1, 0x7($fp)
    ctx->pc = 0x3075f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 7)));
    // 0x3075f4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3075f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3075f8: 0x93c30006  lbu         $v1, 0x6($fp)
    ctx->pc = 0x3075f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x3075fc: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x3075fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x307600: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x307600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x307604: 0x93c30005  lbu         $v1, 0x5($fp)
    ctx->pc = 0x307604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 5)));
    // 0x307608: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x307608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30760c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x307610: 0x93c30004  lbu         $v1, 0x4($fp)
    ctx->pc = 0x307610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x307614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x307614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x307618: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x307618u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x30761c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x30761cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x307620: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x307620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x307624: 0x0  nop
    ctx->pc = 0x307624u;
    // NOP
    // 0x307628: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x307628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x30762c: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x30762cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x307630: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x307630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x307634: 0x0  nop
    ctx->pc = 0x307634u;
    // NOP
    // 0x307638: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x307638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x30763c: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x30763cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x307640: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x307640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307644: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x307644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x307648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30764c: 0xc0c774c  jal         func_31DD30
    ctx->pc = 0x30764Cu;
    SET_GPR_U32(ctx, 31, 0x307654u);
    ctx->pc = 0x31DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD30u, 0x30764Cu, 0x307654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307654u;
label_307654:
    // 0x307654: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x307654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x307658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x307658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30765c: 0x0  nop
    ctx->pc = 0x30765cu;
    // NOP
    // 0x307660: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x307660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x307664: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x307664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x307668: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x307668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30766c: 0x0  nop
    ctx->pc = 0x30766cu;
    // NOP
    // 0x307670: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x307670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x307674: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x307674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x307678: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x307678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30767c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x30767cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x307680: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x307680u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x307684: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x307684u;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
    // 0x307688: 0x46001406  mov.s       $f16, $f2
    ctx->pc = 0x307688u;
    ctx->f[16] = FPU_MOV_S(ctx->f[2]);
    // 0x30768c: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x30768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x307690: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x307690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x307694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x307694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307698: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x307698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30769c: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x30769cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3076a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3076a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076a4: 0xc05724a  jal         func_15C928
    ctx->pc = 0x3076A4u;
    SET_GPR_U32(ctx, 31, 0x3076ACu);
    ctx->pc = 0x15C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C928u, 0x3076A4u, 0x3076ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076ACu;
label_3076ac:
    // 0x3076ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3076ACu;
    {
        const bool branch_taken_0x3076ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076ac) {
            ctx->pc = 0x3076BCu;
            goto label_3076bc;
        }
    }
    ctx->pc = 0x3076B4u;
    // 0x3076b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3076B4u;
    {
        const bool branch_taken_0x3076b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076b4) {
            ctx->pc = 0x3076BCu;
            goto label_3076bc;
        }
    }
    ctx->pc = 0x3076BCu;
label_3076bc:
    // 0x3076bc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3076bcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3076c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3076c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3076c4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3076c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3076c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3076c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3076cc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3076ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3076d0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3076d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3076d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x3076d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3076d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3076D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3076D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3076E0u;
}
