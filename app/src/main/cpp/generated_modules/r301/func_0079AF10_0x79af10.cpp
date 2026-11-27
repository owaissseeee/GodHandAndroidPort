#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079AF10
// Address: 0x79af10 - 0x79afd8
void func_0079AF10_0x79af10(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AF10_0x79af10");
#endif

    if (__builtin_expect(ctx->pc != 0x79af10u, 0)) {
        switch (ctx->pc) {
            case 0x79af38u: goto label_79af38;
            case 0x79af48u: goto label_79af48;
            case 0x79af58u: goto label_79af58;
            case 0x79af68u: goto label_79af68;
            case 0x79af78u: goto label_79af78;
            case 0x79af84u: goto label_79af84;
            case 0x79af94u: goto label_79af94;
            case 0x79afa0u: goto label_79afa0;
            case 0x79afa8u: goto label_79afa8;
            case 0x79afb0u: goto label_79afb0;
            case 0x79afbcu: goto label_79afbc;
            default: break;
        }
    }



    // 0x79af10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79af14: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79af18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79af1c: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79af20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79af20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79af24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79af24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79af28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79af2c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79af30: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79AF38u);
    ctx->pc = 0x79AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF30u;
    // 0x79af34: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AF30u, 0x79AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79af38:
    // 0x79af38: 0x3c110060  lui         $s1, 0x60
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79af3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AF3Cu;
    {
        const bool branch_taken_0x79af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF3Cu;
        // 0x79af40: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af3c) {
            ctx->pc = 0x79AF58u;
            goto label_79af58;
        }
    }
    // 0x79af44: 0x0  nop
    // NOP
label_79af48:
    // 0x79af48: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79af4c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79af50: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79AF58u);
    ctx->pc = 0x79AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF50u;
    // 0x79af54: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AF50u, 0x79AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79af58:
    // 0x79af58: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79af5c: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79af60: 0xc0b0aa6  jal         func_2C2A98
    SET_GPR_U32(ctx, 31, 0x79AF68u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF60u;
    // 0x79af64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_isHit_0x2c2a98, 0x2C2A98u, 0x79AF68u)) {
        return;
    }
label_79af68:
    // 0x79af68: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AF68u;
    {
        const bool branch_taken_0x79af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF68u;
        // 0x79af6c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af68) {
            ctx->pc = 0x79AF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af48;
        }
    }
    // 0x79af70: 0xc0b0e6c  jal         func_2C39B0
    SET_GPR_U32(ctx, 31, 0x79AF78u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF70u;
    // 0x79af74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_startSoftEvent_0x2c39b0, 0x2C39B0u, 0x79AF78u)) {
        return;
    }
label_79af78:
    // 0x79af78: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79af78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79af7c: 0xc0b0fb6  jal         func_2C3ED8
    SET_GPR_U32(ctx, 31, 0x79AF84u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF7Cu;
    // 0x79af80: 0x2645dd38  addiu       $a1, $s2, -0x22C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_setCam_0x2c3ed8, 0x2C3ED8u, 0x79AF84u)) {
        return;
    }
label_79af84:
    // 0x79af84: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79af84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79af88: 0x2405000a  addiu       $a1, $zero, 0xA
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79af8c: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79AF94u);
    ctx->pc = 0x79AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF8Cu;
    // 0x79af90: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AF8Cu, 0x79AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79af94:
    // 0x79af94: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79af98: 0xc1e6ad2  jal         func_79AB48
    SET_GPR_U32(ctx, 31, 0x79AFA0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF98u;
    // 0x79af9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x79AF98u, 0x79AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79afa0:
    // 0x79afa0: 0xc0b101e  jal         func_2C4078
    SET_GPR_U32(ctx, 31, 0x79AFA8u);
    ctx->pc = 0x79AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA0u;
    // 0x79afa4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_waitCam_0x2c4078, 0x2C4078u, 0x79AFA8u)) {
        return;
    }
label_79afa8:
    // 0x79afa8: 0xc0b0f04  jal         func_2C3C10
    SET_GPR_U32(ctx, 31, 0x79AFB0u);
    ctx->pc = 0x79AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA8u;
    // 0x79afac: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario__endSoftEvent_0x2c3c10, 0x2C3C10u, 0x79AFB0u)) {
        return;
    }
label_79afb0:
    // 0x79afb0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79afb4: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x79AFBCu);
    ctx->pc = 0x79AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFB4u;
    // 0x79afb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x79AFBCu)) {
        return;
    }
label_79afbc:
    // 0x79afbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79afbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79afc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79afc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79afc4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79afc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79afc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79afcc: 0x3e00008  jr          $ra
    ctx->pc = 0x79AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFCCu;
        // 0x79afd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79afd4: 0x0  nop
    // NOP
    ctx->pc = 0x79afd8u;
}
} // namespace gh_r301
