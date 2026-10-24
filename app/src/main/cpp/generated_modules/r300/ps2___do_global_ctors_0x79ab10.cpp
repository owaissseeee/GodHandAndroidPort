#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: __do_global_ctors
// Address: 0x79ab10 - 0x79abc0
void ps2___do_global_ctors_0x79ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79ab10");
#endif

    switch (ctx->pc) {
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab14u: goto label_79ab14;
        case 0x79ab18u: goto label_79ab18;
        case 0x79ab1cu: goto label_79ab1c;
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab24u: goto label_79ab24;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab38u: goto label_79ab38;
        case 0x79ab3cu: goto label_79ab3c;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        default: break;
    }

    ctx->pc = 0x79ab10u;

label_79ab10:
    // 0x79ab10: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79ab14:
    // 0x79ab14: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ab14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79ab18:
    // 0x79ab18: 0x8ce5ae00  lw          $a1, -0x5200($a3)
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946304)));
label_79ab1c:
    // 0x79ab1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ab20:
    // 0x79ab20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79ab24:
    // 0x79ab24: 0x24e3ae00  addiu       $v1, $a3, -0x5200
    ctx->pc = 0x79ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946304));
label_79ab28:
    // 0x79ab28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79ab2c:
    // 0x79ab2c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79ab30:
    if (ctx->pc == 0x79AB30u) {
        ctx->pc = 0x79AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB2Cu;
        // 0x79ab30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB34u;
        goto label_79ab34;
    }
    ctx->pc = 0x79AB2Cu;
    {
        const bool branch_taken_0x79ab2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB2Cu;
        // 0x79ab30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab2c) {
            ctx->pc = 0x79AB74u;
            goto label_79ab74;
        }
    }
    ctx->pc = 0x79AB34u;
label_79ab34:
    // 0x79ab34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79ab38:
    // 0x79ab38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79ab3c:
    if (ctx->pc == 0x79AB3Cu) {
        ctx->pc = 0x79AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB38u;
        // 0x79ab3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB40u;
        goto label_79ab40;
    }
    ctx->pc = 0x79AB38u;
    {
        const bool branch_taken_0x79ab38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB38u;
        // 0x79ab3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab38) {
            ctx->pc = 0x79AB74u;
            goto label_79ab74;
        }
    }
    ctx->pc = 0x79AB40u;
label_79ab40:
    // 0x79ab40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ab44:
    // 0x79ab44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79ab44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79ab48:
    // 0x79ab48: 0x24e4ae00  addiu       $a0, $a3, -0x5200
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946304));
label_79ab4c:
    // 0x79ab4c: 0x0  nop
    ctx->pc = 0x79ab4cu;
    // NOP
label_79ab50:
    // 0x79ab50: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79ab50u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79ab54:
    // 0x79ab54: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79ab54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79ab58:
    // 0x79ab58: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79ab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79ab5c:
    // 0x79ab5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79ab5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79ab60:
    // 0x79ab60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79ab64:
    // 0x79ab64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79ab68:
    // 0x79ab68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ab6c:
    // 0x79ab6c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79ab70:
    if (ctx->pc == 0x79AB70u) {
        ctx->pc = 0x79AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB6Cu;
        // 0x79ab70: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB74u;
        goto label_79ab74;
    }
    ctx->pc = 0x79AB6Cu;
    {
        const bool branch_taken_0x79ab6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ab6c) {
            ctx->pc = 0x79AB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB6Cu;
            // 0x79ab70: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab50;
        }
    }
    ctx->pc = 0x79AB74u;
label_79ab74:
    // 0x79ab74: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79ab74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79ab78:
    // 0x79ab78: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79ab78u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79ab7c:
    // 0x79ab7c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79ab80:
    if (ctx->pc == 0x79AB80u) {
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB84u;
        goto label_79ab84;
    }
    ctx->pc = 0x79AB7Cu;
    {
        const bool branch_taken_0x79ab7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB7Cu;
        // 0x79ab80: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab7c) {
            ctx->pc = 0x79ABACu;
            goto label_79abac;
        }
    }
    ctx->pc = 0x79AB84u;
label_79ab84:
    // 0x79ab84: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79ab88:
    // 0x79ab88: 0x2442ae00  addiu       $v0, $v0, -0x5200
    ctx->pc = 0x79ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
label_79ab8c:
    // 0x79ab8c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79ab8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79ab90:
    // 0x79ab90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79ab94:
    // 0x79ab94: 0x0  nop
    ctx->pc = 0x79ab94u;
    // NOP
label_79ab98:
    // 0x79ab98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79ab9c:
    // 0x79ab9c: 0x40f809  jalr        $v0
label_79aba0:
    if (ctx->pc == 0x79ABA0u) {
        ctx->pc = 0x79ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB9Cu;
        // 0x79aba0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABA4u;
        goto label_79aba4;
    }
    ctx->pc = 0x79AB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79ABA4u);
        ctx->pc = 0x79ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB9Cu;
        // 0x79aba0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB9Cu, 0x79ABA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79ABA4u;
label_79aba4:
    // 0x79aba4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79aba8:
    if (ctx->pc == 0x79ABA8u) {
        ctx->pc = 0x79ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA4u;
        // 0x79aba8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABACu;
        goto label_79abac;
    }
    ctx->pc = 0x79ABA4u;
    {
        const bool branch_taken_0x79aba4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aba4) {
            ctx->pc = 0x79ABA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABA4u;
            // 0x79aba8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab98;
        }
    }
    ctx->pc = 0x79ABACu;
label_79abac:
    // 0x79abac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79abacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79abb0:
    // 0x79abb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79abb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79abb4:
    // 0x79abb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79abb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79abb8:
    // 0x79abb8: 0x3e00008  jr          $ra
label_79abbc:
    if (ctx->pc == 0x79ABBCu) {
        ctx->pc = 0x79ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB8u;
        // 0x79abbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABC0u;
        goto label_fallthrough_0x79abb8;
    }
    ctx->pc = 0x79ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB8u;
        // 0x79abbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79abb8:
    ctx->pc = 0x79ABC0u;
}
} // namespace gh_r300
