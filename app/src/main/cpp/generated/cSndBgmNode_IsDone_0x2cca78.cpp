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

// Function: cSndBgmNode_IsDone
// Address: 0x2cca78 - 0x2ccac8
void cSndBgmNode_IsDone_0x2cca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_IsDone_0x2cca78");
#endif

    switch (ctx->pc) {
        case 0x2cca8cu: goto label_2cca8c;
        case 0x2ccaacu: goto label_2ccaac;
        default: break;
    }

    ctx->pc = 0x2cca78u;

    // 0x2cca78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cca78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cca7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cca80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cca84: 0xc0b315a  jal         func_2CC568
    ctx->pc = 0x2CCA84u;
    SET_GPR_U32(ctx, 31, 0x2CCA8Cu);
    ctx->pc = 0x2CCA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA84u;
    // 0x2cca88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC568u, 0x2CCA84u, 0x2CCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA8Cu;
label_2cca8c:
    // 0x2cca8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CCA8Cu;
    {
        const bool branch_taken_0x2cca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA8Cu;
        // 0x2cca90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca8c) {
            ctx->pc = 0x2CCAB4u;
            goto label_2ccab4;
        }
    }
    ctx->pc = 0x2CCA94u;
    // 0x2cca94: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2cca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2cca98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cca9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCA9Cu;
    {
        const bool branch_taken_0x2cca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA9Cu;
        // 0x2ccaa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca9c) {
            ctx->pc = 0x2CCAB4u;
            goto label_2ccab4;
        }
    }
    ctx->pc = 0x2CCAA4u;
    // 0x2ccaa4: 0xc0dcddc  jal         func_373770
    ctx->pc = 0x2CCAA4u;
    SET_GPR_U32(ctx, 31, 0x2CCAACu);
    ctx->pc = 0x2CCAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAA4u;
    // 0x2ccaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373770u, 0x2CCAA4u, 0x2CCAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAACu;
label_2ccaac:
    // 0x2ccaac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ccaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccab0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ccab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ccab4:
    // 0x2ccab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ccab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ccab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCABCu;
        // 0x2ccac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCAC4u;
    // 0x2ccac4: 0x0  nop
    ctx->pc = 0x2ccac4u;
    // NOP
    ctx->pc = 0x2ccac8u;
}
