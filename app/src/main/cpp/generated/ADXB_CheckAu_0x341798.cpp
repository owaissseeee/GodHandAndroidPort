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

// Function: ADXB_CheckAu
// Address: 0x341798 - 0x3417f0
void ADXB_CheckAu_0x341798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXB_CheckAu_0x341798");
#endif

    switch (ctx->pc) {
        case 0x3417b8u: goto label_3417b8;
        case 0x3417d4u: goto label_3417d4;
        default: break;
    }

    ctx->pc = 0x341798u;

    // 0x341798: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x341798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x34179c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34179cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3417a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3417a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3417a4: 0x24a57050  addiu       $a1, $a1, 0x7050
    ctx->pc = 0x3417a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28752));
    // 0x3417a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3417a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3417ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3417acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3417b0: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3417B0u;
    SET_GPR_U32(ctx, 31, 0x3417B8u);
    ctx->pc = 0x3417B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3417B0u;
    // 0x3417b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3417B0u, 0x3417B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417B8u;
label_3417b8:
    // 0x3417b8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3417b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3417bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3417bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417c0: 0x24a57058  addiu       $a1, $a1, 0x7058
    ctx->pc = 0x3417c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28760));
    // 0x3417c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3417C4u;
    {
        const bool branch_taken_0x3417c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417C4u;
        // 0x3417c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417c4) {
            ctx->pc = 0x3417DCu;
            goto label_3417dc;
        }
    }
    ctx->pc = 0x3417CCu;
    // 0x3417cc: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3417CCu;
    SET_GPR_U32(ctx, 31, 0x3417D4u);
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3417CCu, 0x3417D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417D4u;
label_3417d4:
    // 0x3417d4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3417D4u;
    {
        const bool branch_taken_0x3417d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3417d4) {
            ctx->pc = 0x3417D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3417D4u;
            // 0x3417d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3417E0u;
            goto label_3417e0;
        }
    }
    ctx->pc = 0x3417DCu;
label_3417dc:
    // 0x3417dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3417dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3417e0:
    // 0x3417e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3417e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3417e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3417e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3417e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3417E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3417ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417E8u;
        // 0x3417ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3417E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3417F0u;
}
