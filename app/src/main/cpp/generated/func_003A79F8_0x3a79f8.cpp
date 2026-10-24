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

// Function: func_003A79F8
// Address: 0x3a79f8 - 0x3a7ae8
void func_003A79F8_0x3a79f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A79F8_0x3a79f8");
#endif

    switch (ctx->pc) {
        case 0x3a7a28u: goto label_3a7a28;
        case 0x3a7a48u: goto label_3a7a48;
        case 0x3a7a58u: goto label_3a7a58;
        case 0x3a7a5cu: goto label_3a7a5c;
        case 0x3a7a64u: goto label_3a7a64;
        case 0x3a7ac0u: goto label_3a7ac0;
        default: break;
    }

    ctx->pc = 0x3a79f8u;

    // 0x3a79f8: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x3a79f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a79fc: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x3a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3a7a00: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7A00u;
    {
        const bool branch_taken_0x3a7a00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A00u;
        // 0x3a7a04: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a00) {
            ctx->pc = 0x3A7A18u;
            goto label_3a7a18;
        }
    }
    ctx->pc = 0x3A7A08u;
    // 0x3a7a08: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x3a7a08u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7a0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a7a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7A10u;
    {
        const bool branch_taken_0x3a7a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A10u;
        // 0x3a7a14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a10) {
            ctx->pc = 0x3A7A1Cu;
            goto label_3a7a1c;
        }
    }
    ctx->pc = 0x3A7A18u;
label_3a7a18:
    // 0x3a7a18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7a1c:
    // 0x3a7a1c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3a7a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3a7a20: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x3a7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x3a7a24: 0x0  nop
    ctx->pc = 0x3a7a24u;
    // NOP
label_3a7a28:
    // 0x3a7a28: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x3a7a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3a7a2c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3a7a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a7a30: 0x0  nop
    ctx->pc = 0x3a7a30u;
    // NOP
    // 0x3a7a34: 0x0  nop
    ctx->pc = 0x3a7a34u;
    // NOP
    // 0x3a7a38: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A7A38u;
    {
        const bool branch_taken_0x3a7a38 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3A7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A38u;
        // 0x3a7a3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a38) {
            ctx->pc = 0x3A7A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7a28;
        }
    }
    ctx->pc = 0x3A7A40u;
    // 0x3a7a40: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7A40u;
    {
        const bool branch_taken_0x3a7a40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A40u;
        // 0x3a7a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a40) {
            ctx->pc = 0x3A7A50u;
            goto label_3a7a50;
        }
    }
    ctx->pc = 0x3A7A48u;
label_3a7a48:
    // 0x3a7a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A48u;
        // 0x3a7a4c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7A50u;
label_3a7a50:
    // 0x3a7a50: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x3a7a50u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3a7a54: 0x0  nop
    ctx->pc = 0x3a7a54u;
    // NOP
label_3a7a58:
    // 0x3a7a58: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3a7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3a7a5c:
    // 0x3a7a5c: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x3a7a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3a7a60: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x3a7a60u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a7a64:
    // 0x3a7a64: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a7a68: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A7A68u;
    {
        const bool branch_taken_0x3a7a68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A68u;
        // 0x3a7a6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a68) {
            ctx->pc = 0x3A7A9Cu;
            goto label_3a7a9c;
        }
    }
    ctx->pc = 0x3A7A70u;
    // 0x3a7a70: 0x28e2002e  slti        $v0, $a3, 0x2E
    ctx->pc = 0x3a7a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x3a7a74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7A74u;
    {
        const bool branch_taken_0x3a7a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A74u;
        // 0x3a7a78: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a74) {
            ctx->pc = 0x3A7A8Cu;
            goto label_3a7a8c;
        }
    }
    ctx->pc = 0x3A7A7Cu;
    // 0x3a7a7c: 0x10e0fff2  beqz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A7A7Cu;
    {
        const bool branch_taken_0x3a7a7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A7Cu;
        // 0x3a7a80: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a7c) {
            ctx->pc = 0x3A7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7a48;
        }
    }
    ctx->pc = 0x3A7A84u;
    // 0x3a7a84: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x3A7A84u;
    {
        const bool branch_taken_0x3a7a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A84u;
        // 0x3a7a88: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a84) {
            ctx->pc = 0x3A7A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7a5c;
        }
    }
    ctx->pc = 0x3A7A8Cu;
label_3a7a8c:
    // 0x3a7a8c: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A7A8Cu;
    {
        const bool branch_taken_0x3a7a8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A8Cu;
        // 0x3a7a90: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a8c) {
            ctx->pc = 0x3A7AE0u;
            goto label_3a7ae0;
        }
    }
    ctx->pc = 0x3A7A94u;
    // 0x3a7a94: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3A7A94u;
    {
        const bool branch_taken_0x3a7a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A94u;
        // 0x3a7a98: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a94) {
            ctx->pc = 0x3A7A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7a5c;
        }
    }
    ctx->pc = 0x3A7A9Cu;
label_3a7a9c:
    // 0x3a7a9c: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x3a7a9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7aa0: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x3a7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3a7aa4: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7AA4u;
    {
        const bool branch_taken_0x3a7aa4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AA4u;
        // 0x3a7aa8: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7aa4) {
            ctx->pc = 0x3A7AB4u;
            goto label_3a7ab4;
        }
    }
    ctx->pc = 0x3A7AACu;
    // 0x3a7aac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7AACu;
    {
        const bool branch_taken_0x3a7aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7aac) {
            ctx->pc = 0x3A7AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7AACu;
            // 0x3a7ab0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7AC0u;
            goto label_3a7ac0;
        }
    }
    ctx->pc = 0x3A7AB4u;
label_3a7ab4:
    // 0x3a7ab4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3A7AB4u;
    {
        const bool branch_taken_0x3a7ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AB4u;
        // 0x3a7ab8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ab4) {
            ctx->pc = 0x3A7A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7a58;
        }
    }
    ctx->pc = 0x3A7ABCu;
    // 0x3a7abc: 0x0  nop
    ctx->pc = 0x3a7abcu;
    // NOP
label_3a7ac0:
    // 0x3a7ac0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a7ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a7ac4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3a7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3a7ac8: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x3a7ac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a7acc: 0x0  nop
    ctx->pc = 0x3a7accu;
    // NOP
    // 0x3a7ad0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A7AD0u;
    {
        const bool branch_taken_0x3a7ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AD0u;
        // 0x3a7ad4: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ad0) {
            ctx->pc = 0x3A7AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7ac0;
        }
    }
    ctx->pc = 0x3A7AD8u;
    // 0x3a7ad8: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x3A7AD8u;
    {
        const bool branch_taken_0x3a7ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AD8u;
        // 0x3a7adc: 0x80a70000  lb          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ad8) {
            ctx->pc = 0x3A7A64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7a64;
        }
    }
    ctx->pc = 0x3A7AE0u;
label_3a7ae0:
    // 0x3a7ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AE0u;
        // 0x3a7ae4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7AE8u;
}
