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

// Function: func_003549A8
// Address: 0x3549a8 - 0x354a70
void func_003549A8_0x3549a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003549A8_0x3549a8");
#endif

    switch (ctx->pc) {
        case 0x3549c4u: goto label_3549c4;
        case 0x3549f8u: goto label_3549f8;
        case 0x354a40u: goto label_354a40;
        default: break;
    }

    ctx->pc = 0x3549a8u;

    // 0x3549a8: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x3549a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x3549ac: 0x24a36ba8  addiu       $v1, $a1, 0x6BA8
    ctx->pc = 0x3549acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
    // 0x3549b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3549b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x766BC4u));
    // 0x3549b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3549b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3549b8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3549b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3549bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3549BCu;
    {
        const bool branch_taken_0x3549bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3549bc) {
            ctx->pc = 0x3549C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3549BCu;
            // 0x3549c0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3549D0u;
            goto label_3549d0;
        }
    }
    ctx->pc = 0x3549C4u;
label_3549c4:
    // 0x3549c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3549C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3549C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549C4u;
        // 0x3549c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3549C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3549CCu;
    // 0x3549cc: 0x0  nop
    ctx->pc = 0x3549ccu;
    // NOP
label_3549d0:
    // 0x3549d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3549D0u;
    {
        const bool branch_taken_0x3549d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3549D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549D0u;
        // 0x3549d4: 0x3c020076  lui         $v0, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549d0) {
            ctx->pc = 0x3549E8u;
            goto label_3549e8;
        }
    }
    ctx->pc = 0x3549D8u;
    // 0x3549d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3549d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3549dc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3549DCu;
    {
        const bool branch_taken_0x3549dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3549dc) {
            ctx->pc = 0x354A64u;
            goto label_354a64;
        }
    }
    ctx->pc = 0x3549E4u;
    // 0x3549e4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x3549e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_3549e8:
    // 0x3549e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3549e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3549ec: 0x24446bd0  addiu       $a0, $v0, 0x6BD0
    ctx->pc = 0x3549ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    // 0x3549f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3549f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3549f4: 0x0  nop
    ctx->pc = 0x3549f4u;
    // NOP
label_3549f8:
    // 0x3549f8: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3549F8u;
    {
        const bool branch_taken_0x3549f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3549FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549F8u;
        // 0x3549fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549f8) {
            ctx->pc = 0x3549C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3549c4;
        }
    }
    ctx->pc = 0x354A00u;
    // 0x354a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x354a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354a04: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x354a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x354a08: 0x0  nop
    ctx->pc = 0x354a08u;
    // NOP
    // 0x354a0c: 0x0  nop
    ctx->pc = 0x354a0cu;
    // NOP
    // 0x354a10: 0x0  nop
    ctx->pc = 0x354a10u;
    // NOP
    // 0x354a14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x354A14u;
    {
        const bool branch_taken_0x354a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354a14) {
            ctx->pc = 0x354A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354A14u;
            // 0x354a18: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3549F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3549f8;
        }
    }
    ctx->pc = 0x354A1Cu;
    // 0x354a1c: 0x24a26ba8  addiu       $v0, $a1, 0x6BA8
    ctx->pc = 0x354a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
    // 0x354a20: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x354a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x354a24: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x354A24u;
    {
        const bool branch_taken_0x354a24 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x354A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A24u;
        // 0x354a28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a24) {
            ctx->pc = 0x354A64u;
            goto label_354a64;
        }
    }
    ctx->pc = 0x354A2Cu;
    // 0x354a2c: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x354a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x354a30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x354a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a34: 0x24446bd8  addiu       $a0, $v0, 0x6BD8
    ctx->pc = 0x354a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
    // 0x354a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x354a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x766BD8u));
    // 0x354a3c: 0x0  nop
    ctx->pc = 0x354a3cu;
    // NOP
label_354a40:
    // 0x354a40: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x354A40u;
    {
        const bool branch_taken_0x354a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A40u;
        // 0x354a44: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a40) {
            ctx->pc = 0x3549C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3549c4;
        }
    }
    ctx->pc = 0x354A48u;
    // 0x354a48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x354a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354a4c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x354a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x354a50: 0x0  nop
    ctx->pc = 0x354a50u;
    // NOP
    // 0x354a54: 0x0  nop
    ctx->pc = 0x354a54u;
    // NOP
    // 0x354a58: 0x0  nop
    ctx->pc = 0x354a58u;
    // NOP
    // 0x354a5c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x354A5Cu;
    {
        const bool branch_taken_0x354a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354a5c) {
            ctx->pc = 0x354A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354A5Cu;
            // 0x354a60: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354a40;
        }
    }
    ctx->pc = 0x354A64u;
label_354a64:
    // 0x354a64: 0x3e00008  jr          $ra
    ctx->pc = 0x354A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A64u;
        // 0x354a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354A6Cu;
    // 0x354a6c: 0x0  nop
    ctx->pc = 0x354a6cu;
    // NOP
    ctx->pc = 0x354a70u;
}
