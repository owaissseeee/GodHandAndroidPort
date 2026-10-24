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

// Function: func_00356988
// Address: 0x356988 - 0x3569e0
void func_00356988_0x356988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356988_0x356988");
#endif

    switch (ctx->pc) {
        case 0x3569c0u: goto label_3569c0;
        default: break;
    }

    ctx->pc = 0x356988u;

    // 0x356988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35698c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356994: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x356994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x356998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35699c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x35699cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3569a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3569a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3569a4: 0x8c841fc0  lw          $a0, 0x1FC0($a0)
    ctx->pc = 0x3569a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3569a8: 0x24901128  addiu       $s0, $a0, 0x1128
    ctx->pc = 0x3569a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x3569ac: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3569acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3569b0: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3569B0u;
    {
        const bool branch_taken_0x3569b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3569B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569B0u;
        // 0x3569b4: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3569b0) {
            ctx->pc = 0x3569C8u;
            goto label_3569c8;
        }
    }
    ctx->pc = 0x3569B8u;
    // 0x3569b8: 0xc0d58be  jal         func_3562F8
    ctx->pc = 0x3569B8u;
    SET_GPR_U32(ctx, 31, 0x3569C0u);
    ctx->pc = 0x3562F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562F8u, 0x3569B8u, 0x3569C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569C0u;
label_3569c0:
    // 0x3569c0: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x3569c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x3569c4: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x3569c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_3569c8:
    // 0x3569c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3569c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3569cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3569ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3569d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3569d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3569d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3569d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3569d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3569D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3569DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569D8u;
        // 0x3569dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3569D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3569E0u;
}
