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

// Function: func_0034FAD8
// Address: 0x34fad8 - 0x34fb70
void func_0034FAD8_0x34fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FAD8_0x34fad8");
#endif

    switch (ctx->pc) {
        case 0x34fb04u: goto label_34fb04;
        case 0x34fb24u: goto label_34fb24;
        default: break;
    }

    ctx->pc = 0x34fad8u;

    // 0x34fad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34fadc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x34fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x34fae0: 0x2491090c  addiu       $s1, $a0, 0x90C
    ctx->pc = 0x34fae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x34fae4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x34fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x34fae8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34faec: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x34faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x34faf0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34faf4: 0x8c921f7c  lw          $s2, 0x1F7C($a0)
    ctx->pc = 0x34faf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x34faf8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x34faf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34fafc: 0xc0da2ac  jal         func_368AB0
    ctx->pc = 0x34FAFCu;
    SET_GPR_U32(ctx, 31, 0x34FB04u);
    ctx->pc = 0x34FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FAFCu;
    // 0x34fb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368AB0u, 0x34FAFCu, 0x34FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB04u;
label_34fb04:
    // 0x34fb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb08: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x34fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34fb0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x34fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34fb10: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34FB10u;
    {
        const bool branch_taken_0x34fb10 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x34FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB10u;
        // 0x34fb14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb10) {
            ctx->pc = 0x34FB1Cu;
            goto label_34fb1c;
        }
    }
    ctx->pc = 0x34FB18u;
    // 0x34fb18: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x34fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_34fb1c:
    // 0x34fb1c: 0xc0da2c6  jal         func_368B18
    ctx->pc = 0x34FB1Cu;
    SET_GPR_U32(ctx, 31, 0x34FB24u);
    ctx->pc = 0x368B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368B18u, 0x34FB1Cu, 0x34FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB24u;
label_34fb24:
    // 0x34fb24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34fb28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x34fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34fb2c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x34FB2Cu;
    {
        const bool branch_taken_0x34fb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34fb2c) {
            ctx->pc = 0x34FB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FB2Cu;
            // 0x34fb30: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FB34u;
            goto label_34fb34;
        }
    }
    ctx->pc = 0x34FB34u;
label_34fb34:
    // 0x34fb34: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x34fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x34fb38: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FB38u;
    {
        const bool branch_taken_0x34fb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34fb38) {
            ctx->pc = 0x34FB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34FB38u;
            // 0x34fb3c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34FB4Cu;
            goto label_34fb4c;
        }
    }
    ctx->pc = 0x34FB40u;
    // 0x34fb40: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x34fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x34fb44: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x34fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x34fb48: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x34fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_34fb4c:
    // 0x34fb4c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FB4Cu;
    {
        const bool branch_taken_0x34fb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB4Cu;
        // 0x34fb50: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb4c) {
            ctx->pc = 0x34FB5Cu;
            goto label_34fb5c;
        }
    }
    ctx->pc = 0x34FB54u;
    // 0x34fb54: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x34fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x34fb58: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x34fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_34fb5c:
    // 0x34fb5c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x34fb5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fb60: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x34fb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34fb64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34fb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34fb68: 0x3e00008  jr          $ra
    ctx->pc = 0x34FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB68u;
        // 0x34fb6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FB70u;
}
