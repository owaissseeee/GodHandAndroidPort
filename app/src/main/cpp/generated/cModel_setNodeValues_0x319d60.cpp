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

// Function: cModel_setNodeValues
// Address: 0x319d60 - 0x319e00
void cModel_setNodeValues_0x319d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setNodeValues_0x319d60");
#endif

    switch (ctx->pc) {
        case 0x319d8cu: goto label_319d8c;
        case 0x319da0u: goto label_319da0;
        case 0x319da8u: goto label_319da8;
        case 0x319dc0u: goto label_319dc0;
        case 0x319dd0u: goto label_319dd0;
        default: break;
    }

    ctx->pc = 0x319d60u;

    // 0x319d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x319d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x319d64: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x319d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x319d68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x319d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x319d6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x319d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x319d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x319d74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x319d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x319d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x319d7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x319d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x319d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319d84: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x319D84u;
    SET_GPR_U32(ctx, 31, 0x319D8Cu);
    ctx->pc = 0x319D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D84u;
    // 0x319d88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x319D84u, 0x319D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D8Cu;
label_319d8c:
    // 0x319d8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x319d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d90: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x319D90u;
    {
        const bool branch_taken_0x319d90 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x319D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D90u;
        // 0x319d94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d90) {
            ctx->pc = 0x319DE0u;
            goto label_319de0;
        }
    }
    ctx->pc = 0x319D98u;
    // 0x319d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x319d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d9c: 0x0  nop
    ctx->pc = 0x319d9cu;
    // NOP
label_319da0:
    // 0x319da0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319DA0u;
    SET_GPR_U32(ctx, 31, 0x319DA8u);
    ctx->pc = 0x319DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DA0u;
    // 0x319da4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319DA0u, 0x319DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DA8u;
label_319da8:
    // 0x319da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x319da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x319dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x319db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319db8: 0xc055758  jal         func_155D60
    ctx->pc = 0x319DB8u;
    SET_GPR_U32(ctx, 31, 0x319DC0u);
    ctx->pc = 0x319DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DB8u;
    // 0x319dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x319DB8u, 0x319DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DC0u;
label_319dc0:
    // 0x319dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x319dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x319dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319dc8: 0xc055758  jal         func_155D60
    ctx->pc = 0x319DC8u;
    SET_GPR_U32(ctx, 31, 0x319DD0u);
    ctx->pc = 0x319DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DC8u;
    // 0x319dcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x319DC8u, 0x319DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DD0u;
label_319dd0:
    // 0x319dd0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x319dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x319dd4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x319DD4u;
    {
        const bool branch_taken_0x319dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DD4u;
        // 0x319dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dd4) {
            ctx->pc = 0x319DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319da0;
        }
    }
    ctx->pc = 0x319DDCu;
    // 0x319ddc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x319ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_319de0:
    // 0x319de0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x319de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319de4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x319de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319de8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x319de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319dec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x319decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319df4: 0x3e00008  jr          $ra
    ctx->pc = 0x319DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DF4u;
        // 0x319df8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319DFCu;
    // 0x319dfc: 0x0  nop
    ctx->pc = 0x319dfcu;
    // NOP
    ctx->pc = 0x319e00u;
}
