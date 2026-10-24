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

// Function: func_002D5990
// Address: 0x2d5990 - 0x2d59f0
void func_002D5990_0x2d5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5990_0x2d5990");
#endif

    switch (ctx->pc) {
        case 0x2d59c4u: goto label_2d59c4;
        case 0x2d59d0u: goto label_2d59d0;
        case 0x2d59d8u: goto label_2d59d8;
        default: break;
    }

    ctx->pc = 0x2d5990u;

    // 0x2d5990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5998: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d5998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d599c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d59a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d59a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d59a8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2d59a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d59ac: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2d59acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d59b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d59b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d59b4: 0x50910009  beql        $a0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D59B4u;
    {
        const bool branch_taken_0x2d59b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d59b4) {
            ctx->pc = 0x2D59B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D59B4u;
            // 0x2d59b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59DCu;
            goto label_2d59dc;
        }
    }
    ctx->pc = 0x2D59BCu;
    // 0x2d59bc: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x2D59BCu;
    SET_GPR_U32(ctx, 31, 0x2D59C4u);
    ctx->pc = 0x2D59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59BCu;
    // 0x2d59c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x2D59BCu, 0x2D59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59C4u;
label_2d59c4:
    // 0x2d59c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d59c8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x2D59C8u;
    SET_GPR_U32(ctx, 31, 0x2D59D0u);
    ctx->pc = 0x2D59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59C8u;
    // 0x2d59cc: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x2D59C8u, 0x2D59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59D0u;
label_2d59d0:
    // 0x2d59d0: 0xc0ebeb8  jal         func_3AFAE0
    ctx->pc = 0x2D59D0u;
    SET_GPR_U32(ctx, 31, 0x2D59D8u);
    ctx->pc = 0x2D59D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59D0u;
    // 0x2d59d4: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x2D59D0u, 0x2D59D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59D8u;
label_2d59d8:
    // 0x2d59d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d59d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d59dc:
    // 0x2d59dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d59dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d59e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d59e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d59e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D59E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59E4u;
        // 0x2d59e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D59E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D59ECu;
    // 0x2d59ec: 0x0  nop
    ctx->pc = 0x2d59ecu;
    // NOP
    ctx->pc = 0x2d59f0u;
}
