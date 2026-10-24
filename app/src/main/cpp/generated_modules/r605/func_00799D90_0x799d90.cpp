#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: func_00799D90
// Address: 0x799d90 - 0x799e00
void func_00799D90_0x799d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D90_0x799d90");
#endif

    switch (ctx->pc) {
        case 0x799db8u: goto label_799db8;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dccu: goto label_799dcc;
        case 0x799de0u: goto label_799de0;
        case 0x799decu: goto label_799dec;
        default: break;
    }

    ctx->pc = 0x799d90u;

    // 0x799d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799d94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799d98: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799da4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x799da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799da8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799da8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799dac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799DACu;
    {
        const bool branch_taken_0x799dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DACu;
        // 0x799db0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dac) {
            ctx->pc = 0x799DC4u;
            goto label_799dc4;
        }
    }
    ctx->pc = 0x799DB4u;
    // 0x799db4: 0x0  nop
    ctx->pc = 0x799db4u;
    // NOP
label_799db8:
    // 0x799db8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799dbc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799DBCu;
    SET_GPR_U32(ctx, 31, 0x799DC4u);
    ctx->pc = 0x799DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DBCu;
    // 0x799dc0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799DBCu, 0x799DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DC4u;
label_799dc4:
    // 0x799dc4: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x799DC4u;
    SET_GPR_U32(ctx, 31, 0x799DCCu);
    ctx->pc = 0x799DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DC4u;
    // 0x799dc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x799DC4u, 0x799DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DCCu;
label_799dcc:
    // 0x799dcc: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x799DCCu;
    {
        const bool branch_taken_0x799dcc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x799DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DCCu;
        // 0x799dd0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dcc) {
            ctx->pc = 0x799DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799db8;
        }
    }
    ctx->pc = 0x799DD4u;
    // 0x799dd4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x799dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x799dd8: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x799DD8u;
    SET_GPR_U32(ctx, 31, 0x799DE0u);
    ctx->pc = 0x799DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD8u;
    // 0x799ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x799DD8u, 0x799DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DE0u;
label_799de0:
    // 0x799de0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799de4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799DE4u;
    SET_GPR_U32(ctx, 31, 0x799DECu);
    ctx->pc = 0x799DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DE4u;
    // 0x799de8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799DE4u, 0x799DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DECu;
label_799dec:
    // 0x799dec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799df0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799df8: 0x3e00008  jr          $ra
    ctx->pc = 0x799DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF8u;
        // 0x799dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E00u;
}
} // namespace gh_r605
