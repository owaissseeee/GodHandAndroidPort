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

// Function: cOmBase_reactHit
// Address: 0x1bfc88 - 0x1bfce0
void cOmBase_reactHit_0x1bfc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_reactHit_0x1bfc88");
#endif

    switch (ctx->pc) {
        case 0x1bfca0u: goto label_1bfca0;
        default: break;
    }

    ctx->pc = 0x1bfc88u;

    // 0x1bfc88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bfc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfc8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bfc90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfc94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc98: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1BFC98u;
    SET_GPR_U32(ctx, 31, 0x1BFCA0u);
    ctx->pc = 0x1BFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC98u;
    // 0x1bfc9c: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1BFC98u, 0x1BFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCA0u;
label_1bfca0:
    // 0x1bfca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfca4: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BFCA4u;
    {
        const bool branch_taken_0x1bfca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfca4) {
            ctx->pc = 0x1BFCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFCA4u;
            // 0x1bfca8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFCD0u;
            goto label_1bfcd0;
        }
    }
    ctx->pc = 0x1BFCACu;
    // 0x1bfcac: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1bfcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1bfcb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfcb4: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1bfcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bfcb8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1bfcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1bfcbc: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bfcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfcc0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1bfcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x1bfcc4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bfcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfcc8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bfcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bfcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfcd0:
    // 0x1bfcd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCD4u;
        // 0x1bfcd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFCDCu;
    // 0x1bfcdc: 0x0  nop
    ctx->pc = 0x1bfcdcu;
    // NOP
    ctx->pc = 0x1bfce0u;
}
