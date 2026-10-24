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

// Function: _$_12streammarker
// Address: 0x38b5a0 - 0x38b5e8
void ps2____12streammarker_0x38b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____12streammarker_0x38b5a0");
#endif

    switch (ctx->pc) {
        case 0x38b5bcu: goto label_38b5bc;
        case 0x38b5d0u: goto label_38b5d0;
        default: break;
    }

    ctx->pc = 0x38b5a0u;

    // 0x38b5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38b5a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38b5a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38b5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b5b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38b5b4: 0xc0e340e  jal         func_38D038
    ctx->pc = 0x38B5B4u;
    SET_GPR_U32(ctx, 31, 0x38B5BCu);
    ctx->pc = 0x38B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B5B4u;
    // 0x38b5b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D038u, 0x38B5B4u, 0x38B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B5BCu;
label_38b5bc:
    // 0x38b5bc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x38b5bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x38b5c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B5C0u;
    {
        const bool branch_taken_0x38b5c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5C0u;
        // 0x38b5c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b5c0) {
            ctx->pc = 0x38B5D4u;
            goto label_38b5d4;
        }
    }
    ctx->pc = 0x38B5C8u;
    // 0x38b5c8: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x38B5C8u;
    SET_GPR_U32(ctx, 31, 0x38B5D0u);
    ctx->pc = 0x38B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B5C8u;
    // 0x38b5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x38B5C8u, 0x38B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B5D0u;
label_38b5d0:
    // 0x38b5d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b5d4:
    // 0x38b5d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38b5d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x38B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B5DCu;
        // 0x38b5e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B5E4u;
    // 0x38b5e4: 0x0  nop
    ctx->pc = 0x38b5e4u;
    // NOP
    ctx->pc = 0x38b5e8u;
}
