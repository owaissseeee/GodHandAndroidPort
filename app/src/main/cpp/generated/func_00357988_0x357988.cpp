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

// Function: func_00357988
// Address: 0x357988 - 0x3579f0
void func_00357988_0x357988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357988_0x357988");
#endif

    switch (ctx->pc) {
        case 0x3579dcu: goto label_3579dc;
        default: break;
    }

    ctx->pc = 0x357988u;

    // 0x357988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35798c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35798cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357994: 0x24a60a0c  addiu       $a2, $a1, 0xA0C
    ctx->pc = 0x357994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2572));
    // 0x357998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35799c: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x35799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x3579a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3579A0u;
    {
        const bool branch_taken_0x3579a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579A0u;
        // 0x3579a4: 0x24a50d30  addiu       $a1, $a1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579a0) {
            ctx->pc = 0x3579E0u;
            goto label_3579e0;
        }
    }
    ctx->pc = 0x3579A8u;
    // 0x3579a8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x3579a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3579ac: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3579ACu;
    {
        const bool branch_taken_0x3579ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579ac) {
            ctx->pc = 0x3579B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3579ACu;
            // 0x3579b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3579E4u;
            goto label_3579e4;
        }
    }
    ctx->pc = 0x3579B4u;
    // 0x3579b4: 0x8ca302b0  lw          $v1, 0x2B0($a1)
    ctx->pc = 0x3579b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
    // 0x3579b8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3579B8u;
    {
        const bool branch_taken_0x3579b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3579b8) {
            ctx->pc = 0x3579BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3579B8u;
            // 0x3579bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3579E4u;
            goto label_3579e4;
        }
    }
    ctx->pc = 0x3579C0u;
    // 0x3579c0: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x3579c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
    // 0x3579c4: 0x8cc500b4  lw          $a1, 0xB4($a2)
    ctx->pc = 0x3579c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x3579c8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3579c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3579cc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3579CCu;
    {
        const bool branch_taken_0x3579cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3579cc) {
            ctx->pc = 0x3579D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3579CCu;
            // 0x3579d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3579E4u;
            goto label_3579e4;
        }
    }
    ctx->pc = 0x3579D4u;
    // 0x3579d4: 0xc0d5ff2  jal         func_357FC8
    ctx->pc = 0x3579D4u;
    SET_GPR_U32(ctx, 31, 0x3579DCu);
    ctx->pc = 0x357FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357FC8u, 0x3579D4u, 0x3579DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3579DCu;
label_3579dc:
    // 0x3579dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3579dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3579e0:
    // 0x3579e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3579e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3579e4:
    // 0x3579e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3579E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3579E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3579E4u;
        // 0x3579e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3579E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3579ECu;
    // 0x3579ec: 0x0  nop
    ctx->pc = 0x3579ecu;
    // NOP
    ctx->pc = 0x3579f0u;
}
