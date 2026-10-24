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

// Function: func_002AF068
// Address: 0x2af068 - 0x2af0b8
void func_002AF068_0x2af068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF068_0x2af068");
#endif

    switch (ctx->pc) {
        case 0x2af090u: goto label_2af090;
        default: break;
    }

    ctx->pc = 0x2af068u;

    // 0x2af068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af06c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2af06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2af070: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x2af070u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2af074: 0x1013c2  srl         $v0, $s0, 15
    ctx->pc = 0x2af074u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 15));
    // 0x2af078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF078u;
    {
        const bool branch_taken_0x2af078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF078u;
        // 0x2af07c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af078) {
            ctx->pc = 0x2AF088u;
            goto label_2af088;
        }
    }
    ctx->pc = 0x2AF080u;
    // 0x2af080: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF080u;
    {
        const bool branch_taken_0x2af080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF080u;
        // 0x2af084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af080) {
            ctx->pc = 0x2AF0A4u;
            goto label_2af0a4;
        }
    }
    ctx->pc = 0x2AF088u;
label_2af088:
    // 0x2af088: 0xc0abc2e  jal         func_2AF0B8
    ctx->pc = 0x2AF088u;
    SET_GPR_U32(ctx, 31, 0x2AF090u);
    ctx->pc = 0x2AF08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF088u;
    // 0x2af08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0B8u, 0x2AF088u, 0x2AF090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF090u;
label_2af090:
    // 0x2af090: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF090u;
    {
        const bool branch_taken_0x2af090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af090) {
            ctx->pc = 0x2AF094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF090u;
            // 0x2af094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF0A4u;
            goto label_2af0a4;
        }
    }
    ctx->pc = 0x2AF098u;
    // 0x2af098: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x2af098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x2af09c: 0x3842a000  xori        $v0, $v0, 0xA000
    ctx->pc = 0x2af09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)40960);
    // 0x2af0a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2af0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2af0a4:
    // 0x2af0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2af0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0ACu;
        // 0x2af0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF0B4u;
    // 0x2af0b4: 0x0  nop
    ctx->pc = 0x2af0b4u;
    // NOP
    ctx->pc = 0x2af0b8u;
}
