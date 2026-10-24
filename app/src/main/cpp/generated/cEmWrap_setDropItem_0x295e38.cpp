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

// Function: cEmWrap_setDropItem
// Address: 0x295e38 - 0x295e78
void cEmWrap_setDropItem_0x295e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setDropItem_0x295e38");
#endif

    switch (ctx->pc) {
        case 0x295e54u: goto label_295e54;
        default: break;
    }

    ctx->pc = 0x295e38u;

    // 0x295e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295e3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x295e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295e4c: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295E4Cu;
    SET_GPR_U32(ctx, 31, 0x295E54u);
    ctx->pc = 0x295E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E4Cu;
    // 0x295e50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295E4Cu, 0x295E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E54u;
label_295e54:
    // 0x295e54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x295E54u;
    {
        const bool branch_taken_0x295e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e54) {
            ctx->pc = 0x295E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295E54u;
            // 0x295e58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295E68u;
            goto label_295e68;
        }
    }
    ctx->pc = 0x295E5Cu;
    // 0x295e5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295e60: 0xac510560  sw          $s1, 0x560($v0)
    ctx->pc = 0x295e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1376), GPR_U32(ctx, 17));
    // 0x295e64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x295e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295e68:
    // 0x295e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295e70: 0x3e00008  jr          $ra
    ctx->pc = 0x295E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E70u;
        // 0x295e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295E78u;
}
