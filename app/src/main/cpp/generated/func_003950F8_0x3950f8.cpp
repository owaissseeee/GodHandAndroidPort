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

// Function: func_003950F8
// Address: 0x3950f8 - 0x395180
void func_003950F8_0x3950f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003950F8_0x3950f8");
#endif

    switch (ctx->pc) {
        case 0x395120u: goto label_395120;
        default: break;
    }

    ctx->pc = 0x3950f8u;

    // 0x3950f8: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x3950f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x3950fc: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x3950fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x395100: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x395100u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x395104: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x395104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x395108: 0x354a9000  ori         $t2, $t2, 0x9000
    ctx->pc = 0x395108u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)36864);
    // 0x39510c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x39510cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395110: 0x3529a000  ori         $t1, $t1, 0xA000
    ctx->pc = 0x395110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)40960);
    // 0x395114: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x395114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x395118: 0x34e73020  ori         $a3, $a3, 0x3020
    ctx->pc = 0x395118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
    // 0x39511c: 0x0  nop
    ctx->pc = 0x39511cu;
    // NOP
label_395120:
    // 0x395120: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x395120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x395124: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x395124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395128: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x395128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39512c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x39512cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x395130: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x395130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x395134: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x395134u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x395138: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x395138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x39513c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x39513cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x395140: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x395140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x395144: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x395144u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x395148: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x395148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x39514c: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x39514cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x395150: 0x4844e800  cfc2.ni     $a0, $vi29
    ctx->pc = 0x395150u;
    SET_GPR_U32(ctx, 4, ctx->vu0_vpu_stat);
    // 0x395154: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x395154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x395158: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x395158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x39515c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x39515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x395160: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x395160u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x395164: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x395164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x395168: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x395168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x39516c: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x39516cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x395170: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x395170u;
    {
        const bool branch_taken_0x395170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395170u;
        // 0x395174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395170) {
            ctx->pc = 0x395120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395120;
        }
    }
    ctx->pc = 0x395178u;
    // 0x395178: 0x3e00008  jr          $ra
    ctx->pc = 0x395178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395180u;
}
