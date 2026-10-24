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

// Function: func_00322A68
// Address: 0x322a68 - 0x322ad0
void func_00322A68_0x322a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322A68_0x322a68");
#endif

    switch (ctx->pc) {
        case 0x322a94u: goto label_322a94;
        case 0x322aa8u: goto label_322aa8;
        case 0x322ab0u: goto label_322ab0;
        default: break;
    }

    ctx->pc = 0x322a68u;

    // 0x322a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x322a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x322a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x322a80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x322a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x322a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x322a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322a8c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x322A8Cu;
    SET_GPR_U32(ctx, 31, 0x322A94u);
    ctx->pc = 0x322A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A8Cu;
    // 0x322a90: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x322A8Cu, 0x322A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A94u;
label_322a94:
    // 0x322a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322a9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x322a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322aa0: 0xc0c8ab4  jal         func_322AD0
    ctx->pc = 0x322AA0u;
    SET_GPR_U32(ctx, 31, 0x322AA8u);
    ctx->pc = 0x322AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AA0u;
    // 0x322aa4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322AD0u, 0x322AA0u, 0x322AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322AA8u;
label_322aa8:
    // 0x322aa8: 0xc0c9226  jal         func_324898
    ctx->pc = 0x322AA8u;
    SET_GPR_U32(ctx, 31, 0x322AB0u);
    ctx->pc = 0x322AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AA8u;
    // 0x322aac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x322AA8u, 0x322AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322AB0u;
label_322ab0:
    // 0x322ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322ab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ab8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322ac0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x322ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x322AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322AC8u;
        // 0x322acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322AD0u;
}
