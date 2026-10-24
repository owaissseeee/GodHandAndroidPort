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

// Function: func_00356E98
// Address: 0x356e98 - 0x356ef8
void func_00356E98_0x356e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356E98_0x356e98");
#endif

    switch (ctx->pc) {
        case 0x356eacu: goto label_356eac;
        default: break;
    }

    ctx->pc = 0x356e98u;

    // 0x356e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x356ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x356ea4: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x356EA4u;
    SET_GPR_U32(ctx, 31, 0x356EACu);
    ctx->pc = 0x356EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356EA4u;
    // 0x356ea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x356EA4u, 0x356EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356EACu;
label_356eac:
    // 0x356eac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356EACu;
    {
        const bool branch_taken_0x356eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EACu;
        // 0x356eb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356eac) {
            ctx->pc = 0x356EC0u;
            goto label_356ec0;
        }
    }
    ctx->pc = 0x356EB4u;
    // 0x356eb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x356EB4u;
    {
        const bool branch_taken_0x356eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EB4u;
        // 0x356eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356eb4) {
            ctx->pc = 0x356EE0u;
            goto label_356ee0;
        }
    }
    ctx->pc = 0x356EBCu;
    // 0x356ebc: 0x0  nop
    ctx->pc = 0x356ebcu;
    // NOP
label_356ec0:
    // 0x356ec0: 0x8e041fc0  lw          $a0, 0x1FC0($s0)
    ctx->pc = 0x356ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x356ec4: 0x24841128  addiu       $a0, $a0, 0x1128
    ctx->pc = 0x356ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x356ec8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x356ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x356ecc: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356ECCu;
    {
        const bool branch_taken_0x356ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x356ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356ECCu;
        // 0x356ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ecc) {
            ctx->pc = 0x356EE0u;
            goto label_356ee0;
        }
    }
    ctx->pc = 0x356ED4u;
    // 0x356ed4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x356ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x356ed8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x356ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x356edc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x356edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_356ee0:
    // 0x356ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356ee4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x356ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x356EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356EE8u;
        // 0x356eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356EF0u;
    // 0x356ef0: 0x24421150  addiu       $v0, $v0, 0x1150
    ctx->pc = 0x356ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
    // 0x356ef4: 0x0  nop
    ctx->pc = 0x356ef4u;
    // NOP
    ctx->pc = 0x356ef8u;
}
