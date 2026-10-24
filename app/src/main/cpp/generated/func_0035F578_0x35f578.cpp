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

// Function: func_0035F578
// Address: 0x35f578 - 0x35f5f0
void func_0035F578_0x35f578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F578_0x35f578");
#endif

    switch (ctx->pc) {
        case 0x35f5b4u: goto label_35f5b4;
        case 0x35f5ccu: goto label_35f5cc;
        default: break;
    }

    ctx->pc = 0x35f578u;

    // 0x35f578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35f580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f588: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35f588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f58c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35f590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f594: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35f598: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x35f598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f59c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x35f59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5a0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x35f5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5a4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x35f5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f5ac: 0xc0d7a8c  jal         func_35EA30
    ctx->pc = 0x35F5ACu;
    SET_GPR_U32(ctx, 31, 0x35F5B4u);
    ctx->pc = 0x35F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F5ACu;
    // 0x35f5b0: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EA30u, 0x35F5ACu, 0x35F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5B4u;
label_35f5b4:
    // 0x35f5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35f5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35f5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35f5c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5c4: 0xc0d7d7c  jal         func_35F5F0
    ctx->pc = 0x35F5C4u;
    SET_GPR_U32(ctx, 31, 0x35F5CCu);
    ctx->pc = 0x35F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F5C4u;
    // 0x35f5c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F5F0u, 0x35F5C4u, 0x35F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F5CCu;
label_35f5cc:
    // 0x35f5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f5d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x35f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x35f5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f5d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f5dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f5e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f5e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x35F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F5E8u;
        // 0x35f5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F5F0u;
}
