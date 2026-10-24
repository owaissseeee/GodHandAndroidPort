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

// Function: cEmWrap_release
// Address: 0x295b38 - 0x295b80
void cEmWrap_release_0x295b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_release_0x295b38");
#endif

    switch (ctx->pc) {
        case 0x295b4cu: goto label_295b4c;
        case 0x295b70u: goto label_295b70;
        default: break;
    }

    ctx->pc = 0x295b38u;

    // 0x295b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295b3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295b44: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295B44u;
    SET_GPR_U32(ctx, 31, 0x295B4Cu);
    ctx->pc = 0x295B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B44u;
    // 0x295b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295B44u, 0x295B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B4Cu;
label_295b4c:
    // 0x295b4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x295B4Cu;
    {
        const bool branch_taken_0x295b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B4Cu;
        // 0x295b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b4c) {
            ctx->pc = 0x295B70u;
            goto label_295b70;
        }
    }
    ctx->pc = 0x295B54u;
    // 0x295b54: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x295b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295b58: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x295B58u;
    {
        const bool branch_taken_0x295b58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x295B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B58u;
        // 0x295b5c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b58) {
            ctx->pc = 0x295B68u;
            goto label_295b68;
        }
    }
    ctx->pc = 0x295B60u;
    // 0x295b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295B60u;
    {
        const bool branch_taken_0x295b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B60u;
        // 0x295b64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295b60) {
            ctx->pc = 0x295B74u;
            goto label_295b74;
        }
    }
    ctx->pc = 0x295B68u;
label_295b68:
    // 0x295b68: 0xc0a41dc  jal         func_290770
    ctx->pc = 0x295B68u;
    SET_GPR_U32(ctx, 31, 0x295B70u);
    ctx->pc = 0x295B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B68u;
    // 0x295b6c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x295B68u, 0x295B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B70u;
label_295b70:
    // 0x295b70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295b74:
    // 0x295b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295b78: 0x3e00008  jr          $ra
    ctx->pc = 0x295B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295B78u;
        // 0x295b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295B80u;
}
