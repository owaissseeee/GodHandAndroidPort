#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: __do_global_ctors
// Address: 0x799e58 - 0x799f08
void ps2___do_global_ctors_0x799e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799e58");
#endif

    switch (ctx->pc) {
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
        case 0x799e90u: goto label_799e90;
        case 0x799e94u: goto label_799e94;
        case 0x799e98u: goto label_799e98;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eacu: goto label_799eac;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ebcu: goto label_799ebc;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec4u: goto label_799ec4;
        case 0x799ec8u: goto label_799ec8;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed0u: goto label_799ed0;
        case 0x799ed4u: goto label_799ed4;
        case 0x799ed8u: goto label_799ed8;
        case 0x799edcu: goto label_799edc;
        case 0x799ee0u: goto label_799ee0;
        case 0x799ee4u: goto label_799ee4;
        case 0x799ee8u: goto label_799ee8;
        case 0x799eecu: goto label_799eec;
        case 0x799ef0u: goto label_799ef0;
        case 0x799ef4u: goto label_799ef4;
        case 0x799ef8u: goto label_799ef8;
        case 0x799efcu: goto label_799efc;
        case 0x799f00u: goto label_799f00;
        case 0x799f04u: goto label_799f04;
        default: break;
    }

    ctx->pc = 0x799e58u;

label_799e58:
    // 0x799e58: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799e5c:
    // 0x799e5c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799e60:
    // 0x799e60: 0x8ce5a100  lw          $a1, -0x5F00($a3)
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942976)));
label_799e64:
    // 0x799e64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e68:
    // 0x799e68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799e6c:
    // 0x799e6c: 0x24e3a100  addiu       $v1, $a3, -0x5F00
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942976));
label_799e70:
    // 0x799e70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799e74:
    // 0x799e74: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799e78:
    if (ctx->pc == 0x799E78u) {
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E7Cu;
        goto label_799e7c;
    }
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799EBCu;
            goto label_799ebc;
        }
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799e80:
    // 0x799e80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799e84:
    if (ctx->pc == 0x799E84u) {
        ctx->pc = 0x799E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E80u;
        // 0x799e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E88u;
        goto label_799e88;
    }
    ctx->pc = 0x799E80u;
    {
        const bool branch_taken_0x799e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E80u;
        // 0x799e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e80) {
            ctx->pc = 0x799EBCu;
            goto label_799ebc;
        }
    }
    ctx->pc = 0x799E88u;
label_799e88:
    // 0x799e88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799e8c:
    // 0x799e8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799e90:
    // 0x799e90: 0x24e4a100  addiu       $a0, $a3, -0x5F00
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942976));
label_799e94:
    // 0x799e94: 0x0  nop
    ctx->pc = 0x799e94u;
    // NOP
label_799e98:
    // 0x799e98: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799e98u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799e9c:
    // 0x799e9c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799ea0:
    // 0x799ea0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799ea4:
    // 0x799ea4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799ea8:
    // 0x799ea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799eac:
    // 0x799eac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799eb0:
    // 0x799eb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799eb4:
    // 0x799eb4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799eb8:
    if (ctx->pc == 0x799EB8u) {
        ctx->pc = 0x799EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB4u;
        // 0x799eb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EBCu;
        goto label_799ebc;
    }
    ctx->pc = 0x799EB4u;
    {
        const bool branch_taken_0x799eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799eb4) {
            ctx->pc = 0x799EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EB4u;
            // 0x799eb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e98;
        }
    }
    ctx->pc = 0x799EBCu;
label_799ebc:
    // 0x799ebc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799ebcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799ec0:
    // 0x799ec0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799ec0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799ec4:
    // 0x799ec4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799ec8:
    if (ctx->pc == 0x799EC8u) {
        ctx->pc = 0x799EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC4u;
        // 0x799ec8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799ECCu;
        goto label_799ecc;
    }
    ctx->pc = 0x799EC4u;
    {
        const bool branch_taken_0x799ec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EC4u;
        // 0x799ec8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ec4) {
            ctx->pc = 0x799EF4u;
            goto label_799ef4;
        }
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799ed0:
    // 0x799ed0: 0x2442a100  addiu       $v0, $v0, -0x5F00
    ctx->pc = 0x799ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942976));
label_799ed4:
    // 0x799ed4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799ed8:
    // 0x799ed8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799edc:
    // 0x799edc: 0x0  nop
    ctx->pc = 0x799edcu;
    // NOP
label_799ee0:
    // 0x799ee0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799ee4:
    // 0x799ee4: 0x40f809  jalr        $v0
label_799ee8:
    if (ctx->pc == 0x799EE8u) {
        ctx->pc = 0x799EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE4u;
        // 0x799ee8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EECu;
        goto label_799eec;
    }
    ctx->pc = 0x799EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799EECu);
        ctx->pc = 0x799EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE4u;
        // 0x799ee8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799ef0:
    if (ctx->pc == 0x799EF0u) {
        ctx->pc = 0x799EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EECu;
        // 0x799ef0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EF4u;
        goto label_799ef4;
    }
    ctx->pc = 0x799EECu;
    {
        const bool branch_taken_0x799eec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799eec) {
            ctx->pc = 0x799EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EECu;
            // 0x799ef0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ee0;
        }
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799ef8:
    // 0x799ef8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799efc:
    // 0x799efc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799f00:
    // 0x799f00: 0x3e00008  jr          $ra
label_799f04:
    if (ctx->pc == 0x799F04u) {
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F08u;
        goto label_fallthrough_0x799f00;
    }
    ctx->pc = 0x799F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799f00:
    ctx->pc = 0x799F08u;
}
} // namespace gh_r605
