#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_00799D10
// Address: 0x799d10 - 0x799e08
void func_00799D10_0x799d10(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D10_0x799d10");
#endif

    if (__builtin_expect(ctx->pc != 0x799d10u, 0)) {
        switch (ctx->pc) {
            case 0x799d34u: goto label_799d34;
            case 0x799d58u: goto label_799d58;
            case 0x799d64u: goto label_799d64;
            case 0x799d70u: goto label_799d70;
            case 0x799d94u: goto label_799d94;
            case 0x799db0u: goto label_799db0;
            case 0x799dc4u: goto label_799dc4;
            case 0x799dd0u: goto label_799dd0;
            case 0x799df4u: goto label_799df4;
            default: break;
        }
    }



    // 0x799d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799d14: 0x3c020057  lui         $v0, 0x57
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799d18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799d1c: 0x24509b70  addiu       $s0, $v0, -0x6490
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799d24: 0x3c11003c  lui         $s1, 0x3C
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d2c: 0xc07ea80  jal         func_1FAA00
    SET_GPR_U32(ctx, 31, 0x799D34u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D2Cu;
    // 0x799d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getKeyNum_0x1faa00, 0x1FAA00u, 0x799D34u)) {
        return;
    }
label_799d34:
    // 0x799d34: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799D34u;
    {
        const bool branch_taken_0x799d34 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x799d34) {
            ctx->pc = 0x799D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D34u;
            // 0x799d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D68u;
            goto label_799d68;
        }
    }
    // 0x799d3c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d40: 0x24051000  addiu       $a1, $zero, 0x1000
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799d44: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d48: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d4c: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d50: 0xc0b1032  jal         func_2C40C8
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_execUpCut_0x2c40c8, 0x2C40C8u, 0x799D58u)) {
        return;
    }
label_799d58:
    // 0x799d58: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d5c: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->pc = 0x799D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799D64u)) {
        return;
    }
label_799d64:
    // 0x799d64: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799d68:
    // 0x799d68: 0xc07ea6e  jal         func_1FA9B8
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_setKeyNum_0x1fa9b8, 0x1FA9B8u, 0x799D70u)) {
        return;
    }
label_799d70:
    // 0x799d70: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799d74: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799d7c: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d80: 0x24060014  addiu       $a2, $zero, 0x14
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799d84: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d88: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d8c: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x799D94u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D8Cu;
    // 0x799d90: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x799D94u)) {
        return;
    }
label_799d94:
    // 0x799d94: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799d98: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d9c: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da0: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da4: 0x24090001  addiu       $t1, $zero, 0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799da8: 0xc0b1032  jal         func_2C40C8
    SET_GPR_U32(ctx, 31, 0x799DB0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA8u;
    // 0x799dac: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cScenario_execUpCut_0x2c40c8, 0x2C40C8u, 0x799DB0u)) {
        return;
    }
label_799db0:
    // 0x799db0: 0x3c100060  lui         $s0, 0x60
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799db4: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799db8: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799dbc: 0xc0b0ab8  jal         func_2C2AE0
    SET_GPR_U32(ctx, 31, 0x799DC4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DBCu;
    // 0x799dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_getJumpPointAt_0x2c2ae0, 0x2C2AE0u, 0x799DC4u)) {
        return;
    }
label_799dc4:
    // 0x799dc4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dc8: 0xc0b0a02  jal         func_2C2808
    SET_GPR_U32(ctx, 31, 0x799DD0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC8u;
    // 0x799dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtManager_AtDataReset_0x2c2808, 0x2C2808u, 0x799DD0u)) {
        return;
    }
label_799dd0:
    // 0x799dd0: 0x3c03005f  lui         $v1, 0x5F
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x799dd4: 0x3c050080  lui         $a1, 0x80
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x799dd8: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799ddc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799de0: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799de4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799de8: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799dec: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x799DF4u);
    ctx->pc = 0x799DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DECu;
    // 0x799df0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x799DF4u)) {
        return;
    }
label_799df4:
    // 0x799df4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e00: 0x3e00008  jr          $ra
    ctx->pc = 0x799E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E08u;
}
} // namespace gh_r300
