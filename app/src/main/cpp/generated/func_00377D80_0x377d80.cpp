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

// Function: func_00377D80
// Address: 0x377d80 - 0x377e28
void func_00377D80_0x377d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377D80_0x377d80");
#endif

    switch (ctx->pc) {
        case 0x377da0u: goto label_377da0;
        case 0x377db8u: goto label_377db8;
        case 0x377dccu: goto label_377dcc;
        case 0x377dd8u: goto label_377dd8;
        case 0x377e00u: goto label_377e00;
        default: break;
    }

    ctx->pc = 0x377d80u;

    // 0x377d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377d84: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377d88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377d94: 0x2484e510  addiu       $a0, $a0, -0x1AF0
    ctx->pc = 0x377d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960400));
    // 0x377d98: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377D98u;
    SET_GPR_U32(ctx, 31, 0x377DA0u);
    ctx->pc = 0x377D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D98u;
    // 0x377d9c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377D98u, 0x377DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DA0u;
label_377da0:
    // 0x377da0: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x377da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x377da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377da8: 0x2610e590  addiu       $s0, $s0, -0x1A70
    ctx->pc = 0x377da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960528));
    // 0x377dac: 0x24060380  addiu       $a2, $zero, 0x380
    ctx->pc = 0x377dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x377db0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377DB0u;
    SET_GPR_U32(ctx, 31, 0x377DB8u);
    ctx->pc = 0x377DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DB0u;
    // 0x377db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377DB0u, 0x377DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DB8u;
label_377db8:
    // 0x377db8: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377dc0: 0x2484e910  addiu       $a0, $a0, -0x16F0
    ctx->pc = 0x377dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961424));
    // 0x377dc4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377DC4u;
    SET_GPR_U32(ctx, 31, 0x377DCCu);
    ctx->pc = 0x377DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DC4u;
    // 0x377dc8: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377DC4u, 0x377DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DCCu;
label_377dcc:
    // 0x377dcc: 0x26100312  addiu       $s0, $s0, 0x312
    ctx->pc = 0x377dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 786));
    // 0x377dd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x377dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x377dd4: 0x0  nop
    ctx->pc = 0x377dd4u;
    // NOP
label_377dd8:
    // 0x377dd8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x377dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x377ddc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x377ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x377de0: 0x0  nop
    ctx->pc = 0x377de0u;
    // NOP
    // 0x377de4: 0x0  nop
    ctx->pc = 0x377de4u;
    // NOP
    // 0x377de8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377DE8u;
    {
        const bool branch_taken_0x377de8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x377DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DE8u;
        // 0x377dec: 0x2610ff90  addiu       $s0, $s0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377de8) {
            ctx->pc = 0x377DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377dd8;
        }
    }
    ctx->pc = 0x377DF0u;
    // 0x377df0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377df8: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x377df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x377dfc: 0x244200a2  addiu       $v0, $v0, 0xA2
    ctx->pc = 0x377dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 162));
label_377e00:
    // 0x377e00: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x377e00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x377e04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x377e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x377e08: 0x0  nop
    ctx->pc = 0x377e08u;
    // NOP
    // 0x377e0c: 0x0  nop
    ctx->pc = 0x377e0cu;
    // NOP
    // 0x377e10: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377E10u;
    {
        const bool branch_taken_0x377e10 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x377E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E10u;
        // 0x377e14: 0x2442ff60  addiu       $v0, $v0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e10) {
            ctx->pc = 0x377E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377e00;
        }
    }
    ctx->pc = 0x377E18u;
    // 0x377e18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377e20: 0x3e00008  jr          $ra
    ctx->pc = 0x377E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E20u;
        // 0x377e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377E28u;
}
