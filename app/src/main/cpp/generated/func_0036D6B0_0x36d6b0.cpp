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

// Function: func_0036D6B0
// Address: 0x36d6b0 - 0x36d7c0
void func_0036D6B0_0x36d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D6B0_0x36d6b0");
#endif

    switch (ctx->pc) {
        case 0x36d6c0u: goto label_36d6c0;
        case 0x36d6e8u: goto label_36d6e8;
        default: break;
    }

    ctx->pc = 0x36d6b0u;

    // 0x36d6b0: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x36d6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x36d6b4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x36D6B4u;
    {
        const bool branch_taken_0x36d6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6b4) {
            ctx->pc = 0x36D6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D6B4u;
            // 0x36d6b8: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D6E0u;
            goto label_36d6e0;
        }
    }
    ctx->pc = 0x36D6BCu;
    // 0x36d6bc: 0x0  nop
    ctx->pc = 0x36d6bcu;
    // NOP
label_36d6c0:
    // 0x36d6c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d6c4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d6c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36d6cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36d6d0: 0x0  nop
    ctx->pc = 0x36d6d0u;
    // NOP
    // 0x36d6d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36D6D4u;
    {
        const bool branch_taken_0x36d6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D6D4u;
        // 0x36d6d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d6d4) {
            ctx->pc = 0x36D6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d6c0;
        }
    }
    ctx->pc = 0x36D6DCu;
    // 0x36d6dc: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x36d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_36d6e0:
    // 0x36d6e0: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x36D6E0u;
    {
        const bool branch_taken_0x36d6e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6e0) {
            ctx->pc = 0x36D7B4u;
            goto label_36d7b4;
        }
    }
    ctx->pc = 0x36D6E8u;
label_36d6e8:
    // 0x36d6e8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x36d6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d6ec: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d6f0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x36d6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d6f4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d6f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d6fc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d700: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d704: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d708: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x36d708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x36d70c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x36d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x36d710: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x36d710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x36d714: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x36d714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x36d718: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x36d718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x36d71c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x36d71cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d720: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d724: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x36d724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d728: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d72c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d730: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d734: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d738: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d73c: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x36d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x36d740: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x36d740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x36d744: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x36d744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x36d748: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x36d748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x36d74c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x36d74cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d750: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d754: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x36d754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d758: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d75c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d760: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d768: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d76c: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x36d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x36d770: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x36d770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x36d774: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x36d774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x36d778: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x36d778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x36d77c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x36d77cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d780: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d784: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x36d784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d788: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d78c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d790: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d794: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d798: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36d798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36d79c: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x36d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x36d7a0: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x36d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x36d7a4: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x36d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x36d7a8: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x36d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x36d7ac: 0x14c0ffce  bnez        $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x36D7ACu;
    {
        const bool branch_taken_0x36d7ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7ACu;
        // 0x36d7b0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d7ac) {
            ctx->pc = 0x36D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d6e8;
        }
    }
    ctx->pc = 0x36D7B4u;
label_36d7b4:
    // 0x36d7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7BCu;
    // 0x36d7bc: 0x0  nop
    ctx->pc = 0x36d7bcu;
    // NOP
    ctx->pc = 0x36d7c0u;
}
