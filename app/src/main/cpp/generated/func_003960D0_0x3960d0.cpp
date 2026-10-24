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

// Function: func_003960D0
// Address: 0x3960d0 - 0x396158
void func_003960D0_0x3960d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003960D0_0x3960d0");
#endif

    ctx->pc = 0x3960d0u;

    // 0x3960d0: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x3960d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3960d4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3960d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3960d8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3960d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3960dc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3960dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3960e0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x3960e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x3960e4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x3960e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3960e8: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x3960e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x3960ec: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x3960ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x3960f0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3960f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x3960f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3960f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3960f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3960f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3960fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3960fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x396100: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x396100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x396104: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x396104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x396108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x396108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39610c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x39610cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x396110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x396110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x396114: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x396114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x396118: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x396118u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x39611c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x39611cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x396120: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x396120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x396124: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x396124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x396128: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x396128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x39612c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x39612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x396130: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x396130u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x396134: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x396134u;
    {
        const bool branch_taken_0x396134 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x396138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396134u;
        // 0x396138: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396134) {
            ctx->pc = 0x396148u;
            goto label_396148;
        }
    }
    ctx->pc = 0x39613Cu;
    // 0x39613c: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x39613cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x396140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x396140u;
    {
        const bool branch_taken_0x396140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396140u;
        // 0x396144: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396140) {
            ctx->pc = 0x39614Cu;
            goto label_39614c;
        }
    }
    ctx->pc = 0x396148u;
label_396148:
    // 0x396148: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x396148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_39614c:
    // 0x39614c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x39614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x396150: 0x3e00008  jr          $ra
    ctx->pc = 0x396150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396150u;
        // 0x396154: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396158u;
}
