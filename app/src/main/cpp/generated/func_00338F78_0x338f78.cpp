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

// Function: func_00338F78
// Address: 0x338f78 - 0x338fd8
void func_00338F78_0x338f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338F78_0x338f78");
#endif

    switch (ctx->pc) {
        case 0x338fa4u: goto label_338fa4;
        case 0x338fb8u: goto label_338fb8;
        default: break;
    }

    ctx->pc = 0x338f78u;

    // 0x338f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338f80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338f88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x338f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x338f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x338f90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x338f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x338f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x338f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x338f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x338f9c: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338F9Cu;
    SET_GPR_U32(ctx, 31, 0x338FA4u);
    ctx->pc = 0x338FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F9Cu;
    // 0x338fa0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x338F9Cu, 0x338FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338FA4u;
label_338fa4:
    // 0x338fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x338facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338fb0: 0xc0ce3f6  jal         func_338FD8
    ctx->pc = 0x338FB0u;
    SET_GPR_U32(ctx, 31, 0x338FB8u);
    ctx->pc = 0x338FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338FB0u;
    // 0x338fb4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FD8u, 0x338FB0u, 0x338FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338FB8u;
label_338fb8:
    // 0x338fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338fc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338fc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x338fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x338fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338fcc: 0x80ce284  j           func_338A10
    ctx->pc = 0x338FCCu;
    ctx->pc = 0x338FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338FCCu;
    // 0x338fd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338FCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338FD4u;
    // 0x338fd4: 0x0  nop
    ctx->pc = 0x338fd4u;
    // NOP
    ctx->pc = 0x338fd8u;
}
