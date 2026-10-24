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

// Function: func_003A9D88
// Address: 0x3a9d88 - 0x3a9e58
void func_003A9D88_0x3a9d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9D88_0x3a9d88");
#endif

    switch (ctx->pc) {
        case 0x3a9db0u: goto label_3a9db0;
        case 0x3a9dc8u: goto label_3a9dc8;
        case 0x3a9e24u: goto label_3a9e24;
        case 0x3a9e48u: goto label_3a9e48;
        default: break;
    }

    ctx->pc = 0x3a9d88u;

    // 0x3a9d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9d8c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3a9d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a9d94: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a9d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9d98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a9d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9d9c: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x3a9d9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a9da0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A9DA0u;
    {
        const bool branch_taken_0x3a9da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DA0u;
        // 0x3a9da4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9da0) {
            ctx->pc = 0x3A9E3Cu;
            goto label_3a9e3c;
        }
    }
    ctx->pc = 0x3A9DA8u;
    // 0x3a9da8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3a9da8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a9dac: 0x0  nop
    ctx->pc = 0x3a9dacu;
    // NOP
label_3a9db0:
    // 0x3a9db0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3a9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3a9db4: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A9DB4u;
    {
        const bool branch_taken_0x3a9db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a9db4) {
            ctx->pc = 0x3A9DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9DB4u;
            // 0x3a9db8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9E30u;
            goto label_3a9e30;
        }
    }
    ctx->pc = 0x3A9DBCu;
    // 0x3a9dbc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3a9dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3a9dc0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A9DC0u;
    {
        const bool branch_taken_0x3a9dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DC0u;
        // 0x3a9dc4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9dc0) {
            ctx->pc = 0x3A9E30u;
            goto label_3a9e30;
        }
    }
    ctx->pc = 0x3A9DC8u;
label_3a9dc8:
    // 0x3a9dc8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x3a9dc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a9dcc: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x3a9dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x3a9dd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9DD0u;
    {
        const bool branch_taken_0x3a9dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9dd0) {
            ctx->pc = 0x3A9DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9DD0u;
            // 0x3a9dd4: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9DE8u;
            goto label_3a9de8;
        }
    }
    ctx->pc = 0x3A9DD8u;
    // 0x3a9dd8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3a9dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3a9ddc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A9DDCu;
    {
        const bool branch_taken_0x3a9ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ddc) {
            ctx->pc = 0x3A9DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9DDCu;
            // 0x3a9de0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9dc8;
        }
    }
    ctx->pc = 0x3A9DE4u;
    // 0x3a9de4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3a9de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9de8:
    // 0x3a9de8: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x3a9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x3a9dec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a9decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a9df0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3a9df0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a9df4: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x3a9df4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x3a9df8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A9DF8u;
    {
        const bool branch_taken_0x3a9df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9DF8u;
        // 0x3a9dfc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9df8) {
            ctx->pc = 0x3A9E2Cu;
            goto label_3a9e2c;
        }
    }
    ctx->pc = 0x3A9E00u;
    // 0x3a9e00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a9e04: 0x2442f710  addiu       $v0, $v0, -0x8F0
    ctx->pc = 0x3a9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965008));
    // 0x3a9e08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a9e0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a9e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9e10: 0x800008  jr          $a0
    ctx->pc = 0x3A9E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A9E18u: goto label_3a9e18;
            case 0x3A9E2Cu: goto label_3a9e2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9E10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A9E18u;
label_3a9e18:
    // 0x3a9e18: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x3a9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3a9e1c: 0xc0ea796  jal         func_3A9E58
    ctx->pc = 0x3A9E1Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E24u);
    ctx->pc = 0x3A9E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E1Cu;
    // 0x3a9e20: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9E58u, 0x3A9E1Cu, 0x3A9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E24u;
label_3a9e24:
    // 0x3a9e24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A9E24u;
    {
        const bool branch_taken_0x3a9e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E24u;
        // 0x3a9e28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e24) {
            ctx->pc = 0x3A9E4Cu;
            goto label_3a9e4c;
        }
    }
    ctx->pc = 0x3A9E2Cu;
label_3a9e2c:
    // 0x3a9e2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3a9e30:
    // 0x3a9e30: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x3a9e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a9e34: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A9E34u;
    {
        const bool branch_taken_0x3a9e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9e34) {
            ctx->pc = 0x3A9E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9E34u;
            // 0x3a9e38: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9db0;
        }
    }
    ctx->pc = 0x3A9E3Cu;
label_3a9e3c:
    // 0x3a9e3c: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x3a9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3a9e40: 0xc0eac62  jal         func_3AB188
    ctx->pc = 0x3A9E40u;
    SET_GPR_U32(ctx, 31, 0x3A9E48u);
    ctx->pc = 0x3A9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E40u;
    // 0x3a9e44: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB188u, 0x3A9E40u, 0x3A9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E48u;
label_3a9e48:
    // 0x3a9e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9e4c:
    // 0x3a9e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E4Cu;
        // 0x3a9e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9E54u;
    // 0x3a9e54: 0x0  nop
    ctx->pc = 0x3a9e54u;
    // NOP
    ctx->pc = 0x3a9e58u;
}
