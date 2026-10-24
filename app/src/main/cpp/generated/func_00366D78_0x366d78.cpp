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

// Function: func_00366D78
// Address: 0x366d78 - 0x366dc8
void func_00366D78_0x366d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366D78_0x366d78");
#endif

    switch (ctx->pc) {
        case 0x366d9cu: goto label_366d9c;
        default: break;
    }

    ctx->pc = 0x366d78u;

    // 0x366d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366d88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x366d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366d90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x366d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x366d94: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x366D94u;
    SET_GPR_U32(ctx, 31, 0x366D9Cu);
    ctx->pc = 0x366D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D94u;
    // 0x366d98: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x366D94u, 0x366D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D9Cu;
label_366d9c:
    // 0x366d9c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x366D9Cu;
    {
        const bool branch_taken_0x366d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366d9c) {
            ctx->pc = 0x366DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366D9Cu;
            // 0x366da0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366DB0u;
            goto label_366db0;
        }
    }
    ctx->pc = 0x366DA4u;
    // 0x366da4: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x366da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
    // 0x366da8: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x366da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x366dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366db0:
    // 0x366db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366db4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366db8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x366DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366DBCu;
        // 0x366dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366DC4u;
    // 0x366dc4: 0x0  nop
    ctx->pc = 0x366dc4u;
    // NOP
    ctx->pc = 0x366dc8u;
}
