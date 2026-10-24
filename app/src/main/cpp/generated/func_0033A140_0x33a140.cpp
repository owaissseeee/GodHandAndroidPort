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

// Function: func_0033A140
// Address: 0x33a140 - 0x33a190
void func_0033A140_0x33a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A140_0x33a140");
#endif

    ctx->pc = 0x33a140u;

    // 0x33a140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a144: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33a144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x33a148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a14c: 0x24637fe8  addiu       $v1, $v1, 0x7FE8
    ctx->pc = 0x33a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32744));
    // 0x33a150: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33a150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E7FE8u));
    // 0x33a154: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a158: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A158u;
    {
        const bool branch_taken_0x33a158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A158u;
        // 0x33a15c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a158) {
            ctx->pc = 0x33A180u;
            goto label_33a180;
        }
    }
    ctx->pc = 0x33A160u;
    // 0x33a160: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x33a160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x33a164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a16c: 0x24847ff0  addiu       $a0, $a0, 0x7FF0
    ctx->pc = 0x33a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32752));
    // 0x33a170: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x33a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x33a174: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x33A174u;
    ctx->pc = 0x33A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A174u;
    // 0x33a178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33A174u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A17Cu;
    // 0x33a17c: 0x0  nop
    ctx->pc = 0x33a17cu;
    // NOP
label_33a180:
    // 0x33a180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a184: 0x3e00008  jr          $ra
    ctx->pc = 0x33A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A184u;
        // 0x33a188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A18Cu;
    // 0x33a18c: 0x0  nop
    ctx->pc = 0x33a18cu;
    // NOP
    ctx->pc = 0x33a190u;
}
