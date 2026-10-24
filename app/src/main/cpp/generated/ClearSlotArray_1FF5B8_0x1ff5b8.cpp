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

// Function: ClearSlotArray_1FF5B8
// Address: 0x1ff5b8 - 0x1ff638
void ClearSlotArray_1FF5B8_0x1ff5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearSlotArray_1FF5B8_0x1ff5b8");
#endif

    switch (ctx->pc) {
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff60cu: goto label_1ff60c;
        default: break;
    }

    ctx->pc = 0x1ff5b8u;

    // 0x1ff5b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff5bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ff5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ff5c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ff5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ff5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ff5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ff5cc: 0x26300024  addiu       $s0, $s1, 0x24
    ctx->pc = 0x1ff5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1ff5d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ff5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ff5d4: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1ff5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff5d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ff5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1ff5dc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff5e4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x1ff5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_1ff5e8:
    // 0x1ff5e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff5ec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ff5f0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF5F0u;
    {
        const bool branch_taken_0x1ff5f0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5F0u;
        // 0x1ff5f4: 0x2684ee00  addiu       $a0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5f0) {
            ctx->pc = 0x1FF610u;
            goto label_1ff610;
        }
    }
    ctx->pc = 0x1FF5F8u;
    // 0x1ff5f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ff5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ff5fc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ff5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ff600: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ff600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ff604: 0xc0b2cd0  jal         func_2CB340
    ctx->pc = 0x1FF604u;
    SET_GPR_U32(ctx, 31, 0x1FF60Cu);
    ctx->pc = 0x1FF608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF604u;
    // 0x1ff608: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB340u, 0x1FF604u, 0x1FF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF60Cu;
label_1ff60c:
    // 0x1ff60c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1ff60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1ff610:
    // 0x1ff610: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF610u;
    {
        const bool branch_taken_0x1ff610 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1FF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF610u;
        // 0x1ff614: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff610) {
            ctx->pc = 0x1FF5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff5e8;
        }
    }
    ctx->pc = 0x1FF618u;
    // 0x1ff618: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ff618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff61c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ff61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff620: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ff620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff624: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ff624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff628: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ff628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff630: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF630u;
        // 0x1ff634: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF638u;
}
