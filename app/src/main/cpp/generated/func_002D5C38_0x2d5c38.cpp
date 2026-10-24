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

// Function: func_002D5C38
// Address: 0x2d5c38 - 0x2d5ca8
void func_002D5C38_0x2d5c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5C38_0x2d5c38");
#endif

    switch (ctx->pc) {
        case 0x2d5c5cu: goto label_2d5c5c;
        default: break;
    }

    ctx->pc = 0x2d5c38u;

    // 0x2d5c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5c3c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2d5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2d5c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5c44: 0x2442d1c8  addiu       $v0, $v0, -0x2E38
    ctx->pc = 0x2d5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955464));
    // 0x2d5c48: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d5c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d5c4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5C4Cu;
    {
        const bool branch_taken_0x2d5c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C4Cu;
        // 0x2d5c50: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c4c) {
            ctx->pc = 0x2D5C5Cu;
            goto label_2d5c5c;
        }
    }
    ctx->pc = 0x2D5C54u;
    // 0x2d5c54: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2D5C54u;
    SET_GPR_U32(ctx, 31, 0x2D5C5Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2D5C54u, 0x2D5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5C5Cu;
label_2d5c5c:
    // 0x2d5c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C60u;
        // 0x2d5c64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5C68u;
    // 0x2d5c68: 0x0  nop
    ctx->pc = 0x2d5c68u;
    // NOP
    // 0x2d5c6c: 0x0  nop
    ctx->pc = 0x2d5c6cu;
    // NOP
    // 0x2d5c70: 0x0  nop
    ctx->pc = 0x2d5c70u;
    // NOP
    // 0x2d5c74: 0x0  nop
    ctx->pc = 0x2d5c74u;
    // NOP
    // 0x2d5c78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5c7c: 0x0  nop
    ctx->pc = 0x2d5c7cu;
    // NOP
    // 0x2d5c80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5c84: 0x0  nop
    ctx->pc = 0x2d5c84u;
    // NOP
    // 0x2d5c88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5c8c: 0x0  nop
    ctx->pc = 0x2d5c8cu;
    // NOP
    // 0x2d5c90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5c94: 0x0  nop
    ctx->pc = 0x2d5c94u;
    // NOP
    // 0x2d5c98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5c9c: 0x0  nop
    ctx->pc = 0x2d5c9cu;
    // NOP
    // 0x2d5ca0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5ca4: 0x0  nop
    ctx->pc = 0x2d5ca4u;
    // NOP
    ctx->pc = 0x2d5ca8u;
}
