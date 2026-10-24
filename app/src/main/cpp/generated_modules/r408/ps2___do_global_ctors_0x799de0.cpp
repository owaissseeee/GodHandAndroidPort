#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: __do_global_ctors
// Address: 0x799de0 - 0x799e90
void ps2___do_global_ctors_0x799de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799de0");
#endif

    switch (ctx->pc) {
        case 0x799de0u: goto label_799de0;
        case 0x799de4u: goto label_799de4;
        case 0x799de8u: goto label_799de8;
        case 0x799decu: goto label_799dec;
        case 0x799df0u: goto label_799df0;
        case 0x799df4u: goto label_799df4;
        case 0x799df8u: goto label_799df8;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e00u: goto label_799e00;
        case 0x799e04u: goto label_799e04;
        case 0x799e08u: goto label_799e08;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e10u: goto label_799e10;
        case 0x799e14u: goto label_799e14;
        case 0x799e18u: goto label_799e18;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e20u: goto label_799e20;
        case 0x799e24u: goto label_799e24;
        case 0x799e28u: goto label_799e28;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        case 0x799e58u: goto label_799e58;
        case 0x799e5cu: goto label_799e5c;
        case 0x799e60u: goto label_799e60;
        case 0x799e64u: goto label_799e64;
        case 0x799e68u: goto label_799e68;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e70u: goto label_799e70;
        case 0x799e74u: goto label_799e74;
        case 0x799e78u: goto label_799e78;
        case 0x799e7cu: goto label_799e7c;
        case 0x799e80u: goto label_799e80;
        case 0x799e84u: goto label_799e84;
        case 0x799e88u: goto label_799e88;
        case 0x799e8cu: goto label_799e8c;
        default: break;
    }

    ctx->pc = 0x799de0u;

label_799de0:
    // 0x799de0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799de4:
    // 0x799de4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799de8:
    // 0x799de8: 0x8ce5a080  lw          $a1, -0x5F80($a3)
    ctx->pc = 0x799de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942848)));
label_799dec:
    // 0x799dec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799df0:
    // 0x799df0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799df4:
    // 0x799df4: 0x24e3a080  addiu       $v1, $a3, -0x5F80
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942848));
label_799df8:
    // 0x799df8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799dfc:
    // 0x799dfc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799e00:
    if (ctx->pc == 0x799E00u) {
        ctx->pc = 0x799E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DFCu;
        // 0x799e00: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E04u;
        goto label_799e04;
    }
    ctx->pc = 0x799DFCu;
    {
        const bool branch_taken_0x799dfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DFCu;
        // 0x799e00: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dfc) {
            ctx->pc = 0x799E44u;
            goto label_799e44;
        }
    }
    ctx->pc = 0x799E04u;
label_799e04:
    // 0x799e04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799e08:
    // 0x799e08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799e0c:
    if (ctx->pc == 0x799E0Cu) {
        ctx->pc = 0x799E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E08u;
        // 0x799e0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E10u;
        goto label_799e10;
    }
    ctx->pc = 0x799E08u;
    {
        const bool branch_taken_0x799e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E08u;
        // 0x799e0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e08) {
            ctx->pc = 0x799E44u;
            goto label_799e44;
        }
    }
    ctx->pc = 0x799E10u;
label_799e10:
    // 0x799e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e14:
    // 0x799e14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799e18:
    // 0x799e18: 0x24e4a080  addiu       $a0, $a3, -0x5F80
    ctx->pc = 0x799e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942848));
label_799e1c:
    // 0x799e1c: 0x0  nop
    ctx->pc = 0x799e1cu;
    // NOP
label_799e20:
    // 0x799e20: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799e20u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799e24:
    // 0x799e24: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799e28:
    // 0x799e28: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799e2c:
    // 0x799e2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799e2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799e30:
    // 0x799e30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799e34:
    // 0x799e34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799e38:
    // 0x799e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799e3c:
    // 0x799e3c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799e40:
    if (ctx->pc == 0x799E40u) {
        ctx->pc = 0x799E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E3Cu;
        // 0x799e40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E44u;
        goto label_799e44;
    }
    ctx->pc = 0x799E3Cu;
    {
        const bool branch_taken_0x799e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e3c) {
            ctx->pc = 0x799E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E3Cu;
            // 0x799e40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e20;
        }
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799e44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799e48:
    // 0x799e48: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799e48u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799e4c:
    // 0x799e4c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799e50:
    if (ctx->pc == 0x799E50u) {
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E54u;
        goto label_799e54;
    }
    ctx->pc = 0x799E4Cu;
    {
        const bool branch_taken_0x799e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E4Cu;
        // 0x799e50: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e4c) {
            ctx->pc = 0x799E7Cu;
            goto label_799e7c;
        }
    }
    ctx->pc = 0x799E54u;
label_799e54:
    // 0x799e54: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799e58:
    // 0x799e58: 0x2442a080  addiu       $v0, $v0, -0x5F80
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
label_799e5c:
    // 0x799e5c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799e60:
    // 0x799e60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799e64:
    // 0x799e64: 0x0  nop
    ctx->pc = 0x799e64u;
    // NOP
label_799e68:
    // 0x799e68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799e6c:
    // 0x799e6c: 0x40f809  jalr        $v0
label_799e70:
    if (ctx->pc == 0x799E70u) {
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E74u;
        goto label_799e74;
    }
    ctx->pc = 0x799E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799E74u);
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E6Cu, 0x799E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799E74u;
label_799e74:
    // 0x799e74: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799e78:
    if (ctx->pc == 0x799E78u) {
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E7Cu;
        goto label_799e7c;
    }
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799E74u;
            // 0x799e78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e68;
        }
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799e80:
    // 0x799e80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799e84:
    // 0x799e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799e88:
    // 0x799e88: 0x3e00008  jr          $ra
label_799e8c:
    if (ctx->pc == 0x799E8Cu) {
        ctx->pc = 0x799E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E88u;
        // 0x799e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E90u;
        goto label_fallthrough_0x799e88;
    }
    ctx->pc = 0x799E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E88u;
        // 0x799e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799e88:
    ctx->pc = 0x799E90u;
}
} // namespace gh_r408
