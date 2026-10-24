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

// Function: func_00340740
// Address: 0x340740 - 0x3407a0
void func_00340740_0x340740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340740_0x340740");
#endif

    switch (ctx->pc) {
        case 0x340770u: goto label_340770;
        case 0x340784u: goto label_340784;
        default: break;
    }

    ctx->pc = 0x340740u;

    // 0x340740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340748: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x340748u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x34074c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34074cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x340750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340754: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x340758: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x340758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34075c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34075cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x340760: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x340760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x340764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x340768: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x340768u;
    SET_GPR_U32(ctx, 31, 0x340770u);
    ctx->pc = 0x34076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340768u;
    // 0x34076c: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x340768u, 0x340770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340770u;
label_340770:
    // 0x340770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x340778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34077c: 0xc0d01e8  jal         func_3407A0
    ctx->pc = 0x34077Cu;
    SET_GPR_U32(ctx, 31, 0x340784u);
    ctx->pc = 0x340780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34077Cu;
    // 0x340780: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407A0u, 0x34077Cu, 0x340784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340784u;
label_340784:
    // 0x340784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34078c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34078cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340790: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x340790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340798: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x340798u;
    ctx->pc = 0x34079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340798u;
    // 0x34079c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x340798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3407A0u;
}
