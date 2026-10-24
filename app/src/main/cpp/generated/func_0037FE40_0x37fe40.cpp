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

// Function: func_0037FE40
// Address: 0x37fe40 - 0x37fe78
void func_0037FE40_0x37fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FE40_0x37fe40");
#endif

    switch (ctx->pc) {
        case 0x37fe58u: goto label_37fe58;
        default: break;
    }

    ctx->pc = 0x37fe40u;

    // 0x37fe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37fe44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37fe48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37fe48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fe50: 0xc0dff9e  jal         func_37FE78
    ctx->pc = 0x37FE50u;
    SET_GPR_U32(ctx, 31, 0x37FE58u);
    ctx->pc = 0x37FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE50u;
    // 0x37fe54: 0x26050370  addiu       $a1, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FE78u, 0x37FE50u, 0x37FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE58u;
label_37fe58:
    // 0x37fe58: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37FE58u;
    {
        const bool branch_taken_0x37fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE58u;
        // 0x37fe5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe58) {
            ctx->pc = 0x37FE64u;
            goto label_37fe64;
        }
    }
    ctx->pc = 0x37FE60u;
    // 0x37fe60: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x37fe60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_37fe64:
    // 0x37fe64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37fe64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fe68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x37FE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE6Cu;
        // 0x37fe70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FE74u;
    // 0x37fe74: 0x0  nop
    ctx->pc = 0x37fe74u;
    // NOP
    ctx->pc = 0x37fe78u;
}
