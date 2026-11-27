#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079A0E0
// Address: 0x79a0e0 - 0x79a1d8
void func_0079A0E0_0x79a0e0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A0E0_0x79a0e0");
#endif

    if (__builtin_expect(ctx->pc != 0x79a0e0u, 0)) {
        switch (ctx->pc) {
            case 0x79a11cu: goto label_79a11c;
            case 0x79a128u: goto label_79a128;
            case 0x79a130u: goto label_79a130;
            case 0x79a150u: goto label_79a150;
            case 0x79a160u: goto label_79a160;
            case 0x79a170u: goto label_79a170;
            case 0x79a178u: goto label_79a178;
            case 0x79a198u: goto label_79a198;
            case 0x79a1acu: goto label_79a1ac;
            case 0x79a1bcu: goto label_79a1bc;
            default: break;
        }
    }



    // 0x79a0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a0e4: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a0e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a0ec: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a0f4: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a0fc: 0x3c110060  lui         $s1, 0x60
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79a100: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a104: 0x3c128000  lui         $s2, 0x8000
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x79a108: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a10c: 0x3c130074  lui         $s3, 0x74
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x79a110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a114: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79A11Cu);
    ctx->pc = 0x79A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A114u;
    // 0x79a118: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A114u, 0x79A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79a11c:
    // 0x79a11c: 0x24020011  addiu       $v0, $zero, 0x11
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a120: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a124: 0x0  nop
    // NOP
label_79a128:
    // 0x79a128: 0xc0a57ca  jal         func_295F28
    SET_GPR_U32(ctx, 31, 0x79A130u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A128u;
    // 0x79a12c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_CkActive_0x295f28, 0x295F28u, 0x79A130u)) {
        return;
    }
label_79a130:
    // 0x79a130: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A130u;
    {
        const bool branch_taken_0x79a130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A130u;
        // 0x79a134: 0x8e627a8c  lw          $v0, 0x7A8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a130) {
            ctx->pc = 0x79A158u;
            goto label_79a158;
        }
    }
    // 0x79a138: 0x521024  and         $v0, $v0, $s2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x79a13c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A13Cu;
    {
        const bool branch_taken_0x79a13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A13Cu;
        // 0x79a140: 0x2624ea60  addiu       $a0, $s1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a13c) {
            ctx->pc = 0x79A158u;
            goto label_79a158;
        }
    }
    // 0x79a144: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a148: 0xc0b0aa6  jal         func_2C2A98
    SET_GPR_U32(ctx, 31, 0x79A150u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A148u;
    // 0x79a14c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_isHit_0x2c2a98, 0x2C2A98u, 0x79A150u)) {
        return;
    }
label_79a150:
    // 0x79a150: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A150u;
    {
        const bool branch_taken_0x79a150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A150u;
        // 0x79a154: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a150) {
            ctx->pc = 0x79A1A0u;
            goto label_79a1a0;
        }
    }
label_79a158:
    // 0x79a158: 0xc0a57ca  jal         func_295F28
    SET_GPR_U32(ctx, 31, 0x79A160u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A158u;
    // 0x79a15c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_CkActive_0x295f28, 0x295F28u, 0x79A160u)) {
        return;
    }
label_79a160:
    // 0x79a160: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A160u;
    {
        const bool branch_taken_0x79a160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A160u;
        // 0x79a164: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a160) {
            ctx->pc = 0x79A1B4u;
            goto label_79a1b4;
        }
    }
    // 0x79a168: 0xc0a573a  jal         func_295CE8
    SET_GPR_U32(ctx, 31, 0x79A170u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A168u;
    // 0x79a16c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_StartAction_0x295ce8, 0x295CE8u, 0x79A170u)) {
        return;
    }
label_79a170:
    // 0x79a170: 0xc0b6dac  jal         func_2DB6B0
    SET_GPR_U32(ctx, 31, 0x79A178u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &Getplayer_0x2db6b0, 0x2DB6B0u, 0x79A178u)) {
        return;
    }
label_79a178:
    // 0x79a178: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a17c: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a180: 0x3c014974  lui         $at, 0x4974
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a184: 0x342123fe  ori         $at, $at, 0x23FE
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a188: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a18c: 0x24060002  addiu       $a2, $zero, 0x2
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a190: 0xc0a57e0  jal         func_295F80
    SET_GPR_U32(ctx, 31, 0x79A198u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A190u;
    // 0x79a194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_setGoto_0x295f80, 0x295F80u, 0x79A198u)) {
        return;
    }
label_79a198:
    // 0x79a198: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A198u;
    {
        const bool branch_taken_0x79a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A198u;
        // 0x79a19c: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a198) {
            ctx->pc = 0x79A1B4u;
            goto label_79a1b4;
        }
    }
label_79a1a0:
    // 0x79a1a0: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1a4: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79A1ACu);
    ctx->pc = 0x79A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A4u;
    // 0x79a1a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1A4u, 0x79A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79a1ac:
    // 0x79a1ac: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x79A1ACu;
    {
        const bool branch_taken_0x79a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a1ac) {
            ctx->pc = 0x79A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a128;
        }
    }
label_79a1b4:
    // 0x79a1b4: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x79A1BCu);
    ctx->pc = 0x79A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B4u;
    // 0x79a1b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x79A1BCu)) {
        return;
    }
label_79a1bc:
    // 0x79a1bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a1c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a1c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a1c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a1cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D0u;
        // 0x79a1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A1D8u;
}
} // namespace gh_r600
