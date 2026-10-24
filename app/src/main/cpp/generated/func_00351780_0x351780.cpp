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

// Function: func_00351780
// Address: 0x351780 - 0x3517d0
void func_00351780_0x351780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351780_0x351780");
#endif

    switch (ctx->pc) {
        case 0x35179cu: goto label_35179c;
        default: break;
    }

    ctx->pc = 0x351780u;

    // 0x351780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351784: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x351784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x351788: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x351788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35178c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351790: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x351790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351794: 0xc0d30ae  jal         func_34C2B8
    ctx->pc = 0x351794u;
    SET_GPR_U32(ctx, 31, 0x35179Cu);
    ctx->pc = 0x351798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351794u;
    // 0x351798: 0x8c851fc8  lw          $a1, 0x1FC8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B8u, 0x351794u, 0x35179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35179Cu;
label_35179c:
    // 0x35179c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35179Cu;
    {
        const bool branch_taken_0x35179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3517A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35179Cu;
        // 0x3517a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35179c) {
            ctx->pc = 0x3517B0u;
            goto label_3517b0;
        }
    }
    ctx->pc = 0x3517A4u;
    // 0x3517a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3517a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3517a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3517A8u;
    {
        const bool branch_taken_0x3517a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3517ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517A8u;
        // 0x3517ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517a8) {
            ctx->pc = 0x3517BCu;
            goto label_3517bc;
        }
    }
    ctx->pc = 0x3517B0u;
label_3517b0:
    // 0x3517b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3517b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3517b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3517b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3517b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3517b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3517bc:
    // 0x3517bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3517bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3517c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3517c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3517c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3517C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3517C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517C4u;
        // 0x3517c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3517C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3517CCu;
    // 0x3517cc: 0x0  nop
    ctx->pc = 0x3517ccu;
    // NOP
    ctx->pc = 0x3517d0u;
}
