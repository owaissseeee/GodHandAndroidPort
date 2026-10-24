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

// Function: BlackJack_StartSetup
// Address: 0x1d4480 - 0x1d44d8
void BlackJack_StartSetup_0x1d4480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_StartSetup_0x1d4480");
#endif

    switch (ctx->pc) {
        case 0x1d44acu: goto label_1d44ac;
        default: break;
    }

    ctx->pc = 0x1d4480u;

    // 0x1d4480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d448c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d448cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4490: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d4494: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4494u;
    {
        const bool branch_taken_0x1d4494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4494) {
            ctx->pc = 0x1D4498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4494u;
            // 0x1d4498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D44C8u;
            goto label_1d44c8;
        }
    }
    ctx->pc = 0x1D449Cu;
    // 0x1d449c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1d449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1d44a0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1d44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1d44a4: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1D44A4u;
    SET_GPR_U32(ctx, 31, 0x1D44ACu);
    ctx->pc = 0x1D44A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D44A4u;
    // 0x1d44a8: 0x24841ae0  addiu       $a0, $a0, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1D44A4u, 0x1D44ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D44ACu;
label_1d44ac:
    // 0x1d44ac: 0x8e021800  lw          $v0, 0x1800($s0)
    ctx->pc = 0x1d44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x1d44b0: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d44b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d44b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d44b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d44bc: 0xae021800  sw          $v0, 0x1800($s0)
    ctx->pc = 0x1d44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
    // 0x1d44c0: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
    // 0x1d44c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d44c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d44c8:
    // 0x1d44c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d44c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d44cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D44CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44CCu;
        // 0x1d44d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D44CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D44D4u;
    // 0x1d44d4: 0x0  nop
    ctx->pc = 0x1d44d4u;
    // NOP
    ctx->pc = 0x1d44d8u;
}
