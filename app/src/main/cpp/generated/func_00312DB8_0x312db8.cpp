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

// Function: func_00312DB8
// Address: 0x312db8 - 0x312e88
void func_00312DB8_0x312db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00312DB8_0x312db8");
#endif

    switch (ctx->pc) {
        case 0x312dd0u: goto label_312dd0;
        default: break;
    }

    ctx->pc = 0x312db8u;

    // 0x312db8: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x312db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x312dbc: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x312dbcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    // 0x312dc0: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x312DC0u;
    {
        const bool branch_taken_0x312dc0 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x312DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DC0u;
        // 0x312dc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dc0) {
            ctx->pc = 0x312E1Cu;
            goto label_312e1c;
        }
    }
    ctx->pc = 0x312DC8u;
    // 0x312dc8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x312dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312dcc: 0x0  nop
    ctx->pc = 0x312dccu;
    // NOP
label_312dd0:
    // 0x312dd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312dd4: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x312DD4u;
    {
        const bool branch_taken_0x312dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312dd4) {
            ctx->pc = 0x312E78u;
            goto label_312e78;
        }
    }
    ctx->pc = 0x312DDCu;
    // 0x312ddc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x312ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x312de0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312de4: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x312DE4u;
    {
        const bool branch_taken_0x312de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312de4) {
            ctx->pc = 0x312E78u;
            goto label_312e78;
        }
    }
    ctx->pc = 0x312DECu;
    // 0x312dec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x312decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x312df0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312df4: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x312DF4u;
    {
        const bool branch_taken_0x312df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312df4) {
            ctx->pc = 0x312E78u;
            goto label_312e78;
        }
    }
    ctx->pc = 0x312DFCu;
    // 0x312dfc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x312dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x312e00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312e04: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x312E04u;
    {
        const bool branch_taken_0x312e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x312E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E04u;
        // 0x312e08: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e04) {
            ctx->pc = 0x312E78u;
            goto label_312e78;
        }
    }
    ctx->pc = 0x312E0Cu;
    // 0x312e0c: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x312E0Cu;
    {
        const bool branch_taken_0x312e0c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x312E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E0Cu;
        // 0x312e10: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e0c) {
            ctx->pc = 0x312DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312dd0;
        }
    }
    ctx->pc = 0x312E14u;
    // 0x312e14: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x312e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x312e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312e1c:
    // 0x312e1c: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x312e1cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x312e20: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x312E20u;
    {
        const bool branch_taken_0x312e20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x312E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E20u;
        // 0x312e24: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e20) {
            ctx->pc = 0x312E68u;
            goto label_312e68;
        }
    }
    ctx->pc = 0x312E28u;
    // 0x312e28: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x312E28u;
    {
        const bool branch_taken_0x312e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E28u;
        // 0x312e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e28) {
            ctx->pc = 0x312E80u;
            goto label_312e80;
        }
    }
    ctx->pc = 0x312E30u;
    // 0x312e30: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312E30u;
    {
        const bool branch_taken_0x312e30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x312E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E30u;
        // 0x312e34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e30) {
            ctx->pc = 0x312E54u;
            goto label_312e54;
        }
    }
    ctx->pc = 0x312E38u;
    // 0x312e38: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x312E38u;
    {
        const bool branch_taken_0x312e38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x312e38) {
            ctx->pc = 0x312E80u;
            goto label_312e80;
        }
    }
    ctx->pc = 0x312E40u;
    // 0x312e40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x312e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312e44: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x312e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312e48: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x312E48u;
    {
        const bool branch_taken_0x312e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x312e48) {
            ctx->pc = 0x312E78u;
            goto label_312e78;
        }
    }
    ctx->pc = 0x312E50u;
    // 0x312e50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x312e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_312e54:
    // 0x312e54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x312e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312e58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x312e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312e5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312E5Cu;
    {
        const bool branch_taken_0x312e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x312e5c) {
            ctx->pc = 0x312E78u;
            goto label_312e78;
        }
    }
    ctx->pc = 0x312E64u;
    // 0x312e64: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x312e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_312e68:
    // 0x312e68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x312e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x312e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312e70: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312E70u;
    {
        const bool branch_taken_0x312e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x312e70) {
            ctx->pc = 0x312E80u;
            goto label_312e80;
        }
    }
    ctx->pc = 0x312E78u;
label_312e78:
    // 0x312e78: 0x3e00008  jr          $ra
    ctx->pc = 0x312E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E78u;
        // 0x312e7c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312E80u;
label_312e80:
    // 0x312e80: 0x3e00008  jr          $ra
    ctx->pc = 0x312E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E80u;
        // 0x312e84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312E88u;
}
