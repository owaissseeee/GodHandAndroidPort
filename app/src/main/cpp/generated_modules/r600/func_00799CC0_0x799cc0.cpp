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
// Function: func_00799CC0
// Address: 0x799cc0 - 0x799d98
void func_00799CC0_0x799cc0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799CC0_0x799cc0");
#endif

    if (__builtin_expect(ctx->pc != 0x799cc0u, 0)) {
        switch (ctx->pc) {
            case 0x799cf8u: goto label_799cf8;
            case 0x799d08u: goto label_799d08;
            case 0x799d1cu: goto label_799d1c;
            case 0x799d2cu: goto label_799d2c;
            case 0x799d54u: goto label_799d54;
            case 0x799d64u: goto label_799d64;
            case 0x799d70u: goto label_799d70;
            default: break;
        }
    }



    // 0x799cc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799cc4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799cc8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799ccc: 0x3c110060  lui         $s1, 0x60
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799cd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799cd4: 0x3c12003c  lui         $s2, 0x3C
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799cd8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x799cdc: 0x3c13005f  lui         $s3, 0x5F
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x799ce0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x799ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799ce4: 0x3c14003c  lui         $s4, 0x3C
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x799ce8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799cec: 0x3c15007a  lui         $s5, 0x7A
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x799cf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799CF0u;
    {
        const bool branch_taken_0x799cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF0u;
        // 0x799cf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cf0) {
            ctx->pc = 0x799D08u;
            goto label_799d08;
        }
    }
label_799cf8:
    // 0x799cf8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799cfc: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d00: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x799D08u);
    ctx->pc = 0x799D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D00u;
    // 0x799d04: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799D00u, 0x799D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_799d08:
    // 0x799d08: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799d0c: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d10: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d14: 0xc0b0aa6  jal         func_2C2A98
    SET_GPR_U32(ctx, 31, 0x799D1Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D14u;
    // 0x799d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_isHit_0x2c2a98, 0x2C2A98u, 0x799D1Cu)) {
        return;
    }
label_799d1c:
    // 0x799d1c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799D1Cu;
    {
        const bool branch_taken_0x799d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D1Cu;
        // 0x799d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d1c) {
            ctx->pc = 0x799CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cf8;
        }
    }
    // 0x799d24: 0xc0b0a7e  jal         func_2C29F8
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_SetDisableById_0x2c29f8, 0x2C29F8u, 0x799D2Cu)) {
        return;
    }
label_799d2c:
    // 0x799d2c: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x799d30: 0x3c048000  lui         $a0, 0x8000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799d34: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d38: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d40: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d44: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799d48: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799d4c: 0xc0b016c  jal         func_2C05B0
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->pc = 0x799D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0x8e84264c  lw          $a0, 0x264C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSaveManager_setCheckPoint_0x2c05b0, 0x2C05B0u, 0x799D54u)) {
        return;
    }
label_799d54:
    // 0x799d54: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799d58: 0x26a59d98  addiu       $a1, $s5, -0x6268
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942104));
    // 0x799d5c: 0xc0b0e24  jal         func_2C3890
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_taskExec_2C3890_0x2c3890, 0x2C3890u, 0x799D64u)) {
        return;
    }
label_799d64:
    // 0x799d64: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799d68: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799D70u)) {
        return;
    }
label_799d70:
    // 0x799d70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799d74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799d78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799d7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d80: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d84: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x799D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D8Cu;
        // 0x799d90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x799d94: 0x0  nop
    // NOP
    ctx->pc = 0x799d98u;
}
} // namespace gh_r600
