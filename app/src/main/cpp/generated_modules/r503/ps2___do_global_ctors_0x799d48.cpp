#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: __do_global_ctors
// Address: 0x799d48 - 0x799df8
void ps2___do_global_ctors_0x799d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799d48");
#endif

    switch (ctx->pc) {
        case 0x799d48u: goto label_799d48;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d50u: goto label_799d50;
        case 0x799d54u: goto label_799d54;
        case 0x799d58u: goto label_799d58;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d60u: goto label_799d60;
        case 0x799d64u: goto label_799d64;
        case 0x799d68u: goto label_799d68;
        case 0x799d6cu: goto label_799d6c;
        case 0x799d70u: goto label_799d70;
        case 0x799d74u: goto label_799d74;
        case 0x799d78u: goto label_799d78;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d80u: goto label_799d80;
        case 0x799d84u: goto label_799d84;
        case 0x799d88u: goto label_799d88;
        case 0x799d8cu: goto label_799d8c;
        case 0x799d90u: goto label_799d90;
        case 0x799d94u: goto label_799d94;
        case 0x799d98u: goto label_799d98;
        case 0x799d9cu: goto label_799d9c;
        case 0x799da0u: goto label_799da0;
        case 0x799da4u: goto label_799da4;
        case 0x799da8u: goto label_799da8;
        case 0x799dacu: goto label_799dac;
        case 0x799db0u: goto label_799db0;
        case 0x799db4u: goto label_799db4;
        case 0x799db8u: goto label_799db8;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dccu: goto label_799dcc;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd4u: goto label_799dd4;
        case 0x799dd8u: goto label_799dd8;
        case 0x799ddcu: goto label_799ddc;
        case 0x799de0u: goto label_799de0;
        case 0x799de4u: goto label_799de4;
        case 0x799de8u: goto label_799de8;
        case 0x799decu: goto label_799dec;
        case 0x799df0u: goto label_799df0;
        case 0x799df4u: goto label_799df4;
        default: break;
    }

    ctx->pc = 0x799d48u;

label_799d48:
    // 0x799d48: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799d4c:
    // 0x799d4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799d50:
    // 0x799d50: 0x8ce59f80  lw          $a1, -0x6080($a3)
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942592)));
label_799d54:
    // 0x799d54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799d58:
    // 0x799d58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799d5c:
    // 0x799d5c: 0x24e39f80  addiu       $v1, $a3, -0x6080
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942592));
label_799d60:
    // 0x799d60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799d64:
    // 0x799d64: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799d68:
    if (ctx->pc == 0x799D68u) {
        ctx->pc = 0x799D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D64u;
        // 0x799d68: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D6Cu;
        goto label_799d6c;
    }
    ctx->pc = 0x799D64u;
    {
        const bool branch_taken_0x799d64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D64u;
        // 0x799d68: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d64) {
            ctx->pc = 0x799DACu;
            goto label_799dac;
        }
    }
    ctx->pc = 0x799D6Cu;
label_799d6c:
    // 0x799d6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799d70:
    // 0x799d70: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799d74:
    if (ctx->pc == 0x799D74u) {
        ctx->pc = 0x799D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D70u;
        // 0x799d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D78u;
        goto label_799d78;
    }
    ctx->pc = 0x799D70u;
    {
        const bool branch_taken_0x799d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D70u;
        // 0x799d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d70) {
            ctx->pc = 0x799DACu;
            goto label_799dac;
        }
    }
    ctx->pc = 0x799D78u;
label_799d78:
    // 0x799d78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799d7c:
    // 0x799d7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799d80:
    // 0x799d80: 0x24e49f80  addiu       $a0, $a3, -0x6080
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942592));
label_799d84:
    // 0x799d84: 0x0  nop
    ctx->pc = 0x799d84u;
    // NOP
label_799d88:
    // 0x799d88: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799d88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799d8c:
    // 0x799d8c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799d90:
    // 0x799d90: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799d94:
    // 0x799d94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799d98:
    // 0x799d98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799d9c:
    // 0x799d9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799da0:
    // 0x799da0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799da4:
    // 0x799da4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799da8:
    if (ctx->pc == 0x799DA8u) {
        ctx->pc = 0x799DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA4u;
        // 0x799da8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DACu;
        goto label_799dac;
    }
    ctx->pc = 0x799DA4u;
    {
        const bool branch_taken_0x799da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799da4) {
            ctx->pc = 0x799DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DA4u;
            // 0x799da8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d88;
        }
    }
    ctx->pc = 0x799DACu;
label_799dac:
    // 0x799dac: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799dacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799db0:
    // 0x799db0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799db0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799db4:
    // 0x799db4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799db8:
    if (ctx->pc == 0x799DB8u) {
        ctx->pc = 0x799DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB4u;
        // 0x799db8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DBCu;
        goto label_799dbc;
    }
    ctx->pc = 0x799DB4u;
    {
        const bool branch_taken_0x799db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DB4u;
        // 0x799db8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799db4) {
            ctx->pc = 0x799DE4u;
            goto label_799de4;
        }
    }
    ctx->pc = 0x799DBCu;
label_799dbc:
    // 0x799dbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799dc0:
    // 0x799dc0: 0x24429f80  addiu       $v0, $v0, -0x6080
    ctx->pc = 0x799dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
label_799dc4:
    // 0x799dc4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799dc8:
    // 0x799dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799dcc:
    // 0x799dcc: 0x0  nop
    ctx->pc = 0x799dccu;
    // NOP
label_799dd0:
    // 0x799dd0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799dd4:
    // 0x799dd4: 0x40f809  jalr        $v0
label_799dd8:
    if (ctx->pc == 0x799DD8u) {
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DDCu;
        goto label_799ddc;
    }
    ctx->pc = 0x799DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799DDCu);
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799de0:
    if (ctx->pc == 0x799DE0u) {
        ctx->pc = 0x799DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DDCu;
        // 0x799de0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DE4u;
        goto label_799de4;
    }
    ctx->pc = 0x799DDCu;
    {
        const bool branch_taken_0x799ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ddc) {
            ctx->pc = 0x799DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DDCu;
            // 0x799de0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799dd0;
        }
    }
    ctx->pc = 0x799DE4u;
label_799de4:
    // 0x799de4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799de8:
    // 0x799de8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799dec:
    // 0x799dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799df0:
    // 0x799df0: 0x3e00008  jr          $ra
label_799df4:
    if (ctx->pc == 0x799DF4u) {
        ctx->pc = 0x799DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF0u;
        // 0x799df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DF8u;
        goto label_fallthrough_0x799df0;
    }
    ctx->pc = 0x799DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF0u;
        // 0x799df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799df0:
    ctx->pc = 0x799DF8u;
}
} // namespace gh_r503
