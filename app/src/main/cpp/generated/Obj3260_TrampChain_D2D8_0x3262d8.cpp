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

// Function: Obj3260_TrampChain_D2D8
// Address: 0x3262d8 - 0x326320
void Obj3260_TrampChain_D2D8_0x3262d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_TrampChain_D2D8_0x3262d8");
#endif

    switch (ctx->pc) {
        case 0x3262f0u: goto label_3262f0;
        case 0x3262fcu: goto label_3262fc;
        default: break;
    }

    ctx->pc = 0x3262d8u;

    // 0x3262d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3262d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3262dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3262dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3262e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3262e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3262e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3262e8: 0xc0ce0ce  jal         func_338338
    ctx->pc = 0x3262E8u;
    SET_GPR_U32(ctx, 31, 0x3262F0u);
    ctx->pc = 0x3262ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262E8u;
    // 0x3262ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338338u, 0x3262E8u, 0x3262F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262F0u;
label_3262f0:
    // 0x3262f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3262f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262f4: 0xc0ce0a8  jal         func_3382A0
    ctx->pc = 0x3262F4u;
    SET_GPR_U32(ctx, 31, 0x3262FCu);
    ctx->pc = 0x3262F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262F4u;
    // 0x3262f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3382A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3382A0u, 0x3262F4u, 0x3262FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262FCu;
label_3262fc:
    // 0x3262fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3262fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326300: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x326300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326308: 0x80ce06c  j           func_3381B0
    ctx->pc = 0x326308u;
    ctx->pc = 0x32630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326308u;
    // 0x32630c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3381B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3381B0u, 0x326308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326310u;
    // 0x326310: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326314: 0x0  nop
    ctx->pc = 0x326314u;
    // NOP
    // 0x326318: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32631c: 0x0  nop
    ctx->pc = 0x32631cu;
    // NOP
    ctx->pc = 0x326320u;
}
