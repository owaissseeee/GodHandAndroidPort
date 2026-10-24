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

// Function: strrchr
// Address: 0x3a93a8 - 0x3a93f8
void strrchr_0x3a93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strrchr_0x3a93a8");
#endif

    switch (ctx->pc) {
        case 0x3a93c0u: goto label_3a93c0;
        default: break;
    }

    ctx->pc = 0x3a93a8u;

    // 0x3a93a8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3a93a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3a93ac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a93acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a93b0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x3a93b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x3a93b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a93b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a93b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A93B8u;
    {
        const bool branch_taken_0x3a93b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93B8u;
        // 0x3a93bc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93b8) {
            ctx->pc = 0x3A93E0u;
            goto label_3a93e0;
        }
    }
    ctx->pc = 0x3A93C0u;
label_3a93c0:
    // 0x3a93c0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a93c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a93c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a93c8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x3a93c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x3a93cc: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x3a93ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x3a93d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a93d4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a93d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a93d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A93D8u;
    {
        const bool branch_taken_0x3a93d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93D8u;
        // 0x3a93dc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93d8) {
            ctx->pc = 0x3A93C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a93c0;
        }
    }
    ctx->pc = 0x3A93E0u;
label_3a93e0:
    // 0x3a93e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x3a93e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a93e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a93e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a93e8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x3a93e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x3a93ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A93ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A93F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93ECu;
        // 0x3a93f0: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A93ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A93F4u;
    // 0x3a93f4: 0x0  nop
    ctx->pc = 0x3a93f4u;
    // NOP
    ctx->pc = 0x3a93f8u;
}
