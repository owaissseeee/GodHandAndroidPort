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

// Function: func_002B64C0
// Address: 0x2b64c0 - 0x2b6510
void func_002B64C0_0x2b64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B64C0_0x2b64c0");
#endif

    switch (ctx->pc) {
        case 0x2b64f4u: goto label_2b64f4;
        default: break;
    }

    ctx->pc = 0x2b64c0u;

    // 0x2b64c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b64c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b64c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b64c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b64c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b64cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b64ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64d0: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x2b64d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2b64d4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B64D4u;
    {
        const bool branch_taken_0x2b64d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b64d4) {
            ctx->pc = 0x2B64D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B64D4u;
            // 0x2b64d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6500u;
            goto label_2b6500;
        }
    }
    ctx->pc = 0x2B64DCu;
    // 0x2b64dc: 0x92080015  lbu         $t0, 0x15($s0)
    ctx->pc = 0x2b64dcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x2b64e0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2b64e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b64e4: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x2b64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b64e8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x2b64e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2b64ec: 0xc051e92  jal         func_147A48
    ctx->pc = 0x2B64ECu;
    SET_GPR_U32(ctx, 31, 0x2B64F4u);
    ctx->pc = 0x2B64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B64ECu;
    // 0x2b64f0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x2B64ECu, 0x2B64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B64F4u;
label_2b64f4:
    // 0x2b64f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b64f8: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x2b64f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b64fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b64fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6500:
    // 0x2b6500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6504: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6504u;
        // 0x2b6508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B650Cu;
    // 0x2b650c: 0x0  nop
    ctx->pc = 0x2b650cu;
    // NOP
    ctx->pc = 0x2b6510u;
}
