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

// Function: func_00275D68
// Address: 0x275d68 - 0x275da8
void func_00275D68_0x275d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00275D68_0x275d68");
#endif

    switch (ctx->pc) {
        case 0x275d94u: goto label_275d94;
        default: break;
    }

    ctx->pc = 0x275d68u;

    // 0x275d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275d6c: 0x24030264  addiu       $v1, $zero, 0x264
    ctx->pc = 0x275d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x275d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275d74: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x275d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x275d78: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x275D78u;
    {
        const bool branch_taken_0x275d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x275d78) {
            ctx->pc = 0x275D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275D78u;
            // 0x275d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275D98u;
            goto label_275d98;
        }
    }
    ctx->pc = 0x275D80u;
    // 0x275d80: 0x8c840740  lw          $a0, 0x740($a0)
    ctx->pc = 0x275d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1856)));
    // 0x275d84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x275D84u;
    {
        const bool branch_taken_0x275d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d84) {
            ctx->pc = 0x275D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275D84u;
            // 0x275d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275D98u;
            goto label_275d98;
        }
    }
    ctx->pc = 0x275D8Cu;
    // 0x275d8c: 0xc09f740  jal         func_27DD00
    ctx->pc = 0x275D8Cu;
    SET_GPR_U32(ctx, 31, 0x275D94u);
    ctx->pc = 0x27DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DD00u, 0x275D8Cu, 0x275D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D94u;
label_275d94:
    // 0x275d94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x275d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_275d98:
    // 0x275d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x275D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D9Cu;
        // 0x275da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275DA4u;
    // 0x275da4: 0x0  nop
    ctx->pc = 0x275da4u;
    // NOP
    ctx->pc = 0x275da8u;
}
