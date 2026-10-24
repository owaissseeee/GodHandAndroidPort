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

// Function: __eq__C9type_infoRC9type_info
// Address: 0x31ee40 - 0x31ee80
void ps2___eq__C9type_infoRC9type_info_0x31ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___eq__C9type_infoRC9type_info_0x31ee40");
#endif

    switch (ctx->pc) {
        case 0x31ee60u: goto label_31ee60;
        default: break;
    }

    ctx->pc = 0x31ee40u;

    // 0x31ee40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ee44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ee48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ee4c: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31EE4Cu;
    {
        const bool branch_taken_0x31ee4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x31EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE4Cu;
        // 0x31ee50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee4c) {
            ctx->pc = 0x31EE68u;
            goto label_31ee68;
        }
    }
    ctx->pc = 0x31EE54u;
    // 0x31ee54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x31ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31ee58: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x31EE58u;
    SET_GPR_U32(ctx, 31, 0x31EE60u);
    ctx->pc = 0x31EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE58u;
    // 0x31ee5c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x31EE58u, 0x31EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE60u;
label_31ee60:
    // 0x31ee60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EE60u;
    {
        const bool branch_taken_0x31ee60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE60u;
        // 0x31ee64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee60) {
            ctx->pc = 0x31EE70u;
            goto label_31ee70;
        }
    }
    ctx->pc = 0x31EE68u;
label_31ee68:
    // 0x31ee68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31ee68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ee6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ee6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ee70:
    // 0x31ee70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ee74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ee74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ee78: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE78u;
        // 0x31ee7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EE80u;
}
