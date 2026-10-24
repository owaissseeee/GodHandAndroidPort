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

// Function: func_002C0ED0
// Address: 0x2c0ed0 - 0x2c0f90
void func_002C0ED0_0x2c0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0ED0_0x2c0ed0");
#endif

    switch (ctx->pc) {
        case 0x2c0f0cu: goto label_2c0f0c;
        default: break;
    }

    ctx->pc = 0x2c0ed0u;

    // 0x2c0ed0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2c0ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c0ed4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C0ED4u;
    {
        const bool branch_taken_0x2c0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0ED4u;
        // 0x2c0ed8: 0x24860050  addiu       $a2, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ed4) {
            ctx->pc = 0x2C0F80u;
            goto label_2c0f80;
        }
    }
    ctx->pc = 0x2C0EDCu;
    // 0x2c0edc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2c0ee0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c0ee4: 0x2442c1f0  addiu       $v0, $v0, -0x3E10
    ctx->pc = 0x2c0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
    // 0x2c0ee8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0eec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c0eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0ef0: 0x800008  jr          $a0
    ctx->pc = 0x2C0EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C0EF8u: goto label_2c0ef8;
            case 0x2C0F04u: goto label_2c0f04;
            case 0x2C0F18u: goto label_2c0f18;
            case 0x2C0F24u: goto label_2c0f24;
            case 0x2C0F40u: goto label_2c0f40;
            case 0x2C0F4Cu: goto label_2c0f4c;
            case 0x2C0F68u: goto label_2c0f68;
            case 0x2C0F74u: goto label_2c0f74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C0EF8u;
label_2c0ef8:
    // 0x2c0ef8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0efc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EFCu;
        // 0x2c0f00: 0x28420000  slti        $v0, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F04u;
label_2c0f04:
    // 0x2c0f04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f08: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2c0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2c0f0c:
    // 0x2c0f0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c0f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c0f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F10u;
        // 0x2c0f14: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F18u;
label_2c0f18:
    // 0x2c0f18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f1c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C0F1Cu;
    {
        const bool branch_taken_0x2c0f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F1Cu;
        // 0x2c0f20: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f1c) {
            ctx->pc = 0x2C0F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f0c;
        }
    }
    ctx->pc = 0x2C0F24u;
label_2c0f24:
    // 0x2c0f24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c0f2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c0f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c0f30: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x2c0f30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2c0f34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c0f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c0f38: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F38u;
        // 0x2c0f3c: 0x621026  xor         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F40u;
label_2c0f40:
    // 0x2c0f40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f44: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0F44u;
    {
        const bool branch_taken_0x2c0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F44u;
        // 0x2c0f48: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f44) {
            ctx->pc = 0x2C0F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f0c;
        }
    }
    ctx->pc = 0x2C0F4Cu;
label_2c0f4c:
    // 0x2c0f4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f50: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C0F50u;
    {
        const bool branch_taken_0x2c0f50 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2C0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F50u;
        // 0x2c0f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f50) {
            ctx->pc = 0x2C0F88u;
            goto label_2c0f88;
        }
    }
    ctx->pc = 0x2C0F58u;
    // 0x2c0f58: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2c0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2c0f5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c0f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c0f60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F60u;
        // 0x2c0f64: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F68u;
label_2c0f68:
    // 0x2c0f68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f6c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C0F6Cu;
    {
        const bool branch_taken_0x2c0f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F6Cu;
        // 0x2c0f70: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f6c) {
            ctx->pc = 0x2C0F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f0c;
        }
    }
    ctx->pc = 0x2C0F74u;
label_2c0f74:
    // 0x2c0f74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0f78: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x2C0F78u;
    {
        const bool branch_taken_0x2c0f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F78u;
        // 0x2c0f7c: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f78) {
            ctx->pc = 0x2C0F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f0c;
        }
    }
    ctx->pc = 0x2C0F80u;
label_2c0f80:
    // 0x2c0f80: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F80u;
        // 0x2c0f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F88u;
label_2c0f88:
    // 0x2c0f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0F90u;
}
