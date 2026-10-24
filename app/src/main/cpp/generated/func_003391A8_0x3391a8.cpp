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

// Function: func_003391A8
// Address: 0x3391a8 - 0x3391f8
void func_003391A8_0x3391a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003391A8_0x3391a8");
#endif

    switch (ctx->pc) {
        case 0x3391ccu: goto label_3391cc;
        case 0x3391dcu: goto label_3391dc;
        default: break;
    }

    ctx->pc = 0x3391a8u;

    // 0x3391a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3391a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3391ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3391acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3391b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3391b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3391b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3391b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3391b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3391bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3391c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3391c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3391c4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3391C4u;
    SET_GPR_U32(ctx, 31, 0x3391CCu);
    ctx->pc = 0x3391C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3391C4u;
    // 0x3391c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3391C4u, 0x3391CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3391CCu;
label_3391cc:
    // 0x3391cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3391ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3391d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391d4: 0xc0ce47e  jal         func_3391F8
    ctx->pc = 0x3391D4u;
    SET_GPR_U32(ctx, 31, 0x3391DCu);
    ctx->pc = 0x3391D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3391D4u;
    // 0x3391d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3391F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3391F8u, 0x3391D4u, 0x3391DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3391DCu;
label_3391dc:
    // 0x3391dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3391dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3391e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3391e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3391e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3391e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3391e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3391e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3391ec: 0x80ce284  j           func_338A10
    ctx->pc = 0x3391ECu;
    ctx->pc = 0x3391F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3391ECu;
    // 0x3391f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3391ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3391F4u;
    // 0x3391f4: 0x0  nop
    ctx->pc = 0x3391f4u;
    // NOP
    ctx->pc = 0x3391f8u;
}
