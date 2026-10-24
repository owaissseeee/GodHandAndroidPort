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

// Function: ForwardIdBaseTransIfValid_13F208
// Address: 0x13f208 - 0x13f238
void ForwardIdBaseTransIfValid_13F208_0x13f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardIdBaseTransIfValid_13F208_0x13f208");
#endif

    switch (ctx->pc) {
        case 0x13f228u: goto label_13f228;
        default: break;
    }

    ctx->pc = 0x13f208u;

    // 0x13f208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f20c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13f20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f214: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x13f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x13f218: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F218u;
    {
        const bool branch_taken_0x13f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F218u;
        // 0x13f21c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f218) {
            ctx->pc = 0x13F22Cu;
            goto label_13f22c;
        }
    }
    ctx->pc = 0x13F220u;
    // 0x13f220: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13F220u;
    SET_GPR_U32(ctx, 31, 0x13F228u);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13F220u, 0x13F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F228u;
label_13f228:
    // 0x13f228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f22c:
    // 0x13f22c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F22Cu;
        // 0x13f230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F234u;
    // 0x13f234: 0x0  nop
    ctx->pc = 0x13f234u;
    // NOP
    ctx->pc = 0x13f238u;
}
