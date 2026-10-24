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

// Function: func_0033A880
// Address: 0x33a880 - 0x33a8d0
void func_0033A880_0x33a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A880_0x33a880");
#endif

    switch (ctx->pc) {
        case 0x33a8a4u: goto label_33a8a4;
        case 0x33a8b4u: goto label_33a8b4;
        default: break;
    }

    ctx->pc = 0x33a880u;

    // 0x33a880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33a884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a88c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33a890: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33a890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33a898: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33a898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33a89c: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A89Cu;
    SET_GPR_U32(ctx, 31, 0x33A8A4u);
    ctx->pc = 0x33A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A89Cu;
    // 0x33a8a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A89Cu, 0x33A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A8A4u;
label_33a8a4:
    // 0x33a8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8ac: 0xc0cea34  jal         func_33A8D0
    ctx->pc = 0x33A8ACu;
    SET_GPR_U32(ctx, 31, 0x33A8B4u);
    ctx->pc = 0x33A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8ACu;
    // 0x33a8b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A8D0u, 0x33A8ACu, 0x33A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A8B4u;
label_33a8b4:
    // 0x33a8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a8b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33a8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a8bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33a8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a8c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33a8c4: 0x80ce284  j           func_338A10
    ctx->pc = 0x33A8C4u;
    ctx->pc = 0x33A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8C4u;
    // 0x33a8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A8C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A8CCu;
    // 0x33a8cc: 0x0  nop
    ctx->pc = 0x33a8ccu;
    // NOP
    ctx->pc = 0x33a8d0u;
}
