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

// Function: func_0033A418
// Address: 0x33a418 - 0x33a468
void func_0033A418_0x33a418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A418_0x33a418");
#endif

    switch (ctx->pc) {
        case 0x33a43cu: goto label_33a43c;
        case 0x33a44cu: goto label_33a44c;
        default: break;
    }

    ctx->pc = 0x33a418u;

    // 0x33a418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33a418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33a41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33a424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33a428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33a428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a42c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33a430: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33a430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33a434: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A434u;
    SET_GPR_U32(ctx, 31, 0x33A43Cu);
    ctx->pc = 0x33A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A434u;
    // 0x33a438: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A434u, 0x33A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A43Cu;
label_33a43c:
    // 0x33a43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a444: 0xc0ce91a  jal         func_33A468
    ctx->pc = 0x33A444u;
    SET_GPR_U32(ctx, 31, 0x33A44Cu);
    ctx->pc = 0x33A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A444u;
    // 0x33a448: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A468u, 0x33A444u, 0x33A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A44Cu;
label_33a44c:
    // 0x33a44c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33a450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33a454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a458: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33a458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33a45c: 0x80ce284  j           func_338A10
    ctx->pc = 0x33A45Cu;
    ctx->pc = 0x33A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A45Cu;
    // 0x33a460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A45Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A464u;
    // 0x33a464: 0x0  nop
    ctx->pc = 0x33a464u;
    // NOP
    ctx->pc = 0x33a468u;
}
