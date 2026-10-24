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

// Function: func_002F4B30
// Address: 0x2f4b30 - 0x2f4b88
void func_002F4B30_0x2f4b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4B30_0x2f4b30");
#endif

    switch (ctx->pc) {
        case 0x2f4b64u: goto label_2f4b64;
        case 0x2f4b70u: goto label_2f4b70;
        default: break;
    }

    ctx->pc = 0x2f4b30u;

    // 0x2f4b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4b34: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f4b38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f4b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f4b3c: 0x2442f1c8  addiu       $v0, $v0, -0xE38
    ctx->pc = 0x2f4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963656));
    // 0x2f4b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4b4c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f4b50: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x2f4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f4b54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4B54u;
    {
        const bool branch_taken_0x2f4b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B54u;
        // 0x2f4b58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b54) {
            ctx->pc = 0x2F4B64u;
            goto label_2f4b64;
        }
    }
    ctx->pc = 0x2F4B5Cu;
    // 0x2f4b5c: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x2F4B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F4B64u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2F4B5Cu, 0x2F4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B64u;
label_2f4b64:
    // 0x2f4b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b68: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2F4B68u;
    SET_GPR_U32(ctx, 31, 0x2F4B70u);
    ctx->pc = 0x2F4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B68u;
    // 0x2f4b6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2F4B68u, 0x2F4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B70u;
label_2f4b70:
    // 0x2f4b70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f4b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B7Cu;
        // 0x2f4b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B84u;
    // 0x2f4b84: 0x0  nop
    ctx->pc = 0x2f4b84u;
    // NOP
    ctx->pc = 0x2f4b88u;
}
