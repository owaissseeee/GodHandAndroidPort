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

// Function: func_0031A650
// Address: 0x31a650 - 0x31a6b0
void func_0031A650_0x31a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A650_0x31a650");
#endif

    switch (ctx->pc) {
        case 0x31a6a0u: goto label_31a6a0;
        default: break;
    }

    ctx->pc = 0x31a650u;

    // 0x31a650: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x31a650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a654: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a658: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x31a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a660: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x31a660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a664: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x31a664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x31a668: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31A668u;
    {
        const bool branch_taken_0x31a668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A668u;
        // 0x31a66c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a668) {
            ctx->pc = 0x31A6A0u;
            goto label_31a6a0;
        }
    }
    ctx->pc = 0x31A670u;
    // 0x31a670: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31a670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31a674: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31a674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31a678: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x31a678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30384)));
    // 0x31a67c: 0xc7400a  movz        $t0, $a2, $a3
    ctx->pc = 0x31a67cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x31a680: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x31a680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a684: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x31a684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a688: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31a688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31a68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31a690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a694: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x31a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x31a698: 0xc053fc0  jal         func_14FF00
    ctx->pc = 0x31A698u;
    SET_GPR_U32(ctx, 31, 0x31A6A0u);
    ctx->pc = 0x31A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A698u;
    // 0x31a69c: 0x8c640b00  lw          $a0, 0xB00($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF00u, 0x31A698u, 0x31A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6A0u;
label_31a6a0:
    // 0x31a6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A6A4u;
        // 0x31a6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A6ACu;
    // 0x31a6ac: 0x0  nop
    ctx->pc = 0x31a6acu;
    // NOP
    ctx->pc = 0x31a6b0u;
}
