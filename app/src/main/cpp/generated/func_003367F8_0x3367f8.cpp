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

// Function: func_003367F8
// Address: 0x3367f8 - 0x336980
void func_003367F8_0x3367f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003367F8_0x3367f8");
#endif

    switch (ctx->pc) {
        case 0x336854u: goto label_336854;
        case 0x33688cu: goto label_33688c;
        case 0x3368c4u: goto label_3368c4;
        case 0x3368e8u: goto label_3368e8;
        case 0x336908u: goto label_336908;
        case 0x33691cu: goto label_33691c;
        case 0x336930u: goto label_336930;
        case 0x336938u: goto label_336938;
        case 0x336960u: goto label_336960;
        default: break;
    }

    ctx->pc = 0x3367f8u;

    // 0x3367f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3367f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3367fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3367fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x336800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x336800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336804: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x336804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x336808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x336808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33680c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x336810: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x336810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336814: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x336814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x336818: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x336818u;
    {
        const bool branch_taken_0x336818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x33681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336818u;
        // 0x33681c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336818) {
            ctx->pc = 0x336830u;
            goto label_336830;
        }
    }
    ctx->pc = 0x336820u;
    // 0x336820: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x336820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x336824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x336824u;
    {
        const bool branch_taken_0x336824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336824u;
        // 0x336828: 0x24a55150  addiu       $a1, $a1, 0x5150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336824) {
            ctx->pc = 0x33684Cu;
            goto label_33684c;
        }
    }
    ctx->pc = 0x33682Cu;
    // 0x33682c: 0x0  nop
    ctx->pc = 0x33682cu;
    // NOP
label_336830:
    // 0x336830: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336830u;
    {
        const bool branch_taken_0x336830 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x336834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336830u;
        // 0x336834: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336830) {
            ctx->pc = 0x336840u;
            goto label_336840;
        }
    }
    ctx->pc = 0x336838u;
    // 0x336838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336838u;
    {
        const bool branch_taken_0x336838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336838u;
        // 0x33683c: 0x24a55170  addiu       $a1, $a1, 0x5170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336838) {
            ctx->pc = 0x33684Cu;
            goto label_33684c;
        }
    }
    ctx->pc = 0x336840u;
label_336840:
    // 0x336840: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x336840u;
    {
        const bool branch_taken_0x336840 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x336844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336840u;
        // 0x336844: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336840) {
            ctx->pc = 0x336860u;
            goto label_336860;
        }
    }
    ctx->pc = 0x336848u;
    // 0x336848: 0x24a55190  addiu       $a1, $a1, 0x5190
    ctx->pc = 0x336848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20880));
label_33684c:
    // 0x33684c: 0xc0cd8cc  jal         func_336330
    ctx->pc = 0x33684Cu;
    SET_GPR_U32(ctx, 31, 0x336854u);
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x33684Cu, 0x336854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336854u;
label_336854:
    // 0x336854: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x336854u;
    {
        const bool branch_taken_0x336854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336854u;
        // 0x336858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336854) {
            ctx->pc = 0x336964u;
            goto label_336964;
        }
    }
    ctx->pc = 0x33685Cu;
    // 0x33685c: 0x0  nop
    ctx->pc = 0x33685cu;
    // NOP
label_336860:
    // 0x336860: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x336860u;
    {
        const bool branch_taken_0x336860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x336860) {
            ctx->pc = 0x336864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336860u;
            // 0x336864: 0x82430001  lb          $v1, 0x1($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336878u;
            goto label_336878;
        }
    }
    ctx->pc = 0x336868u;
    // 0x336868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33686c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33686cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336870: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x336870u;
    {
        const bool branch_taken_0x336870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336870u;
        // 0x336874: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336870) {
            ctx->pc = 0x336964u;
            goto label_336964;
        }
    }
    ctx->pc = 0x336878u;
label_336878:
    // 0x336878: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x336878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33687c: 0x10710039  beq         $v1, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x33687Cu;
    {
        const bool branch_taken_0x33687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x336880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33687Cu;
        // 0x336880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33687c) {
            ctx->pc = 0x336964u;
            goto label_336964;
        }
    }
    ctx->pc = 0x336884u;
    // 0x336884: 0xc0cd8ba  jal         func_3362E8
    ctx->pc = 0x336884u;
    SET_GPR_U32(ctx, 31, 0x33688Cu);
    ctx->pc = 0x3362E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3362E8u, 0x336884u, 0x33688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33688Cu;
label_33688c:
    // 0x33688c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x33688cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x336890: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x336890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x336894: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x336894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x336898: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x336898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33689c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x33689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3368a0: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x3368a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3368a4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3368a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3368a8: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x3368a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x3368ac: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x3368acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3368b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3368B0u;
    {
        const bool branch_taken_0x3368b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3368B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368B0u;
        // 0x3368b4: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368b0) {
            ctx->pc = 0x3368D0u;
            goto label_3368d0;
        }
    }
    ctx->pc = 0x3368B8u;
    // 0x3368b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3368b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3368bc: 0xc0cd8c0  jal         func_336300
    ctx->pc = 0x3368BCu;
    SET_GPR_U32(ctx, 31, 0x3368C4u);
    ctx->pc = 0x3368C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368BCu;
    // 0x3368c0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336300u, 0x3368BCu, 0x3368C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368C4u;
label_3368c4:
    // 0x3368c4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3368C4u;
    {
        const bool branch_taken_0x3368c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368C4u;
        // 0x3368c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368c4) {
            ctx->pc = 0x336964u;
            goto label_336964;
        }
    }
    ctx->pc = 0x3368CCu;
    // 0x3368cc: 0x0  nop
    ctx->pc = 0x3368ccu;
    // NOP
label_3368d0:
    // 0x3368d0: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x3368d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x3368d4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x3368d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x3368d8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x3368d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x3368dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3368dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368e0: 0xc0cd8fe  jal         func_3363F8
    ctx->pc = 0x3368E0u;
    SET_GPR_U32(ctx, 31, 0x3368E8u);
    ctx->pc = 0x3368E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368E0u;
    // 0x3368e4: 0xa2510001  sb          $s1, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363F8u, 0x3368E0u, 0x3368E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368E8u;
label_3368e8:
    // 0x3368e8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x3368e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3368ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3368ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3368f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3368f4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x3368f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x3368f8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3368f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3368fc: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x3368fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x336900: 0xc0cd8c0  jal         func_336300
    ctx->pc = 0x336900u;
    SET_GPR_U32(ctx, 31, 0x336908u);
    ctx->pc = 0x336904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336900u;
    // 0x336904: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336300u, 0x336900u, 0x336908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336908u;
label_336908:
    // 0x336908: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x336908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x33690c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336910: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x336910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x336914: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x336914u;
    SET_GPR_U32(ctx, 31, 0x33691Cu);
    ctx->pc = 0x336918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336914u;
    // 0x336918: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x336914u, 0x33691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33691Cu;
label_33691c:
    // 0x33691c: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x33691cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x336920: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x336920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x336924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336928: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x336928u;
    SET_GPR_U32(ctx, 31, 0x336930u);
    ctx->pc = 0x33692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336928u;
    // 0x33692c: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x336928u, 0x336930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336930u;
label_336930:
    // 0x336930: 0xc0cd8ba  jal         func_3362E8
    ctx->pc = 0x336930u;
    SET_GPR_U32(ctx, 31, 0x336938u);
    ctx->pc = 0x3362E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3362E8u, 0x336930u, 0x336938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336938u;
label_336938:
    // 0x336938: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x336938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x33693c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336940: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x336940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x336944: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x336944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x336948: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x336948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33694c: 0xa2450001  sb          $a1, 0x1($s2)
    ctx->pc = 0x33694cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x336950: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x336950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x336954: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x336954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x336958: 0xc0cd8c0  jal         func_336300
    ctx->pc = 0x336958u;
    SET_GPR_U32(ctx, 31, 0x336960u);
    ctx->pc = 0x33695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336958u;
    // 0x33695c: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336300u, 0x336958u, 0x336960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336960u;
label_336960:
    // 0x336960: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x336960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_336964:
    // 0x336964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x336964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336968: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x336968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33696c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33696cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336970: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x336970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x336974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x336974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336978: 0x3e00008  jr          $ra
    ctx->pc = 0x336978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336978u;
        // 0x33697c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336980u;
}
