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

// Function: func_00366D28
// Address: 0x366d28 - 0x366d78
void func_00366D28_0x366d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366D28_0x366d28");
#endif

    switch (ctx->pc) {
        case 0x366d4cu: goto label_366d4c;
        default: break;
    }

    ctx->pc = 0x366d28u;

    // 0x366d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366d38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x366d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366d40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x366d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x366d44: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x366D44u;
    SET_GPR_U32(ctx, 31, 0x366D4Cu);
    ctx->pc = 0x366D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D44u;
    // 0x366d48: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x366D44u, 0x366D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D4Cu;
label_366d4c:
    // 0x366d4c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x366D4Cu;
    {
        const bool branch_taken_0x366d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366d4c) {
            ctx->pc = 0x366D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366D4Cu;
            // 0x366d50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366D60u;
            goto label_366d60;
        }
    }
    ctx->pc = 0x366D54u;
    // 0x366d54: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x366d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
    // 0x366d58: 0xae1200e4  sw          $s2, 0xE4($s0)
    ctx->pc = 0x366d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 18));
    // 0x366d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366d60:
    // 0x366d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366d64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366d68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x366D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D6Cu;
        // 0x366d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366D74u;
    // 0x366d74: 0x0  nop
    ctx->pc = 0x366d74u;
    // NOP
    ctx->pc = 0x366d78u;
}
