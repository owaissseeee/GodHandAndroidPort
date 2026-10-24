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

// Function: func_00344680
// Address: 0x344680 - 0x3446d0
void func_00344680_0x344680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344680_0x344680");
#endif

    switch (ctx->pc) {
        case 0x3446a4u: goto label_3446a4;
        case 0x3446b8u: goto label_3446b8;
        default: break;
    }

    ctx->pc = 0x344680u;

    // 0x344680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34468c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344690: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x344690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x344694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344694u;
    {
        const bool branch_taken_0x344694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344694u;
        // 0x344698: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344694) {
            ctx->pc = 0x3446B0u;
            goto label_3446b0;
        }
    }
    ctx->pc = 0x34469Cu;
    // 0x34469c: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x34469Cu;
    SET_GPR_U32(ctx, 31, 0x3446A4u);
    ctx->pc = 0x3446D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3446D0u, 0x34469Cu, 0x3446A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446A4u;
label_3446a4:
    // 0x3446a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3446A4u;
    {
        const bool branch_taken_0x3446a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446A4u;
        // 0x3446a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446a4) {
            ctx->pc = 0x3446BCu;
            goto label_3446bc;
        }
    }
    ctx->pc = 0x3446ACu;
    // 0x3446ac: 0x0  nop
    ctx->pc = 0x3446acu;
    // NOP
label_3446b0:
    // 0x3446b0: 0xc0d11b6  jal         func_3446D8
    ctx->pc = 0x3446B0u;
    SET_GPR_U32(ctx, 31, 0x3446B8u);
    ctx->pc = 0x3446B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446B0u;
    // 0x3446b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3446D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3446D8u, 0x3446B0u, 0x3446B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446B8u;
label_3446b8:
    // 0x3446b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3446b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3446bc:
    // 0x3446bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3446bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3446c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3446c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3446c4: 0x80d11e0  j           func_344780
    ctx->pc = 0x3446C4u;
    ctx->pc = 0x3446C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446C4u;
    // 0x3446c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344780u, 0x3446C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3446CCu;
    // 0x3446cc: 0x0  nop
    ctx->pc = 0x3446ccu;
    // NOP
    ctx->pc = 0x3446d0u;
}
