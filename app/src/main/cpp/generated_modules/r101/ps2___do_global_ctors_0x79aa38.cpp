#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: __do_global_ctors
// Address: 0x79aa38 - 0x79aae8
void ps2___do_global_ctors_0x79aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79aa38");
#endif

    switch (ctx->pc) {
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa6cu: goto label_79aa6c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa74u: goto label_79aa74;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa84u: goto label_79aa84;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa94u: goto label_79aa94;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aaa4u: goto label_79aaa4;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aaacu: goto label_79aaac;
        case 0x79aab0u: goto label_79aab0;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        default: break;
    }

    ctx->pc = 0x79aa38u;

label_79aa38:
    // 0x79aa38: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79aa3c:
    // 0x79aa3c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79aa40:
    // 0x79aa40: 0x8ce5ad00  lw          $a1, -0x5300($a3)
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946048)));
label_79aa44:
    // 0x79aa44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79aa48:
    // 0x79aa48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79aa4c:
    // 0x79aa4c: 0x24e3ad00  addiu       $v1, $a3, -0x5300
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946048));
label_79aa50:
    // 0x79aa50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79aa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79aa54:
    // 0x79aa54: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79aa58:
    if (ctx->pc == 0x79AA58u) {
        ctx->pc = 0x79AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA54u;
        // 0x79aa58: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA5Cu;
        goto label_79aa5c;
    }
    ctx->pc = 0x79AA54u;
    {
        const bool branch_taken_0x79aa54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA54u;
        // 0x79aa58: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa54) {
            ctx->pc = 0x79AA9Cu;
            goto label_79aa9c;
        }
    }
    ctx->pc = 0x79AA5Cu;
label_79aa5c:
    // 0x79aa5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79aa60:
    // 0x79aa60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79aa64:
    if (ctx->pc == 0x79AA64u) {
        ctx->pc = 0x79AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA60u;
        // 0x79aa64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA68u;
        goto label_79aa68;
    }
    ctx->pc = 0x79AA60u;
    {
        const bool branch_taken_0x79aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA60u;
        // 0x79aa64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa60) {
            ctx->pc = 0x79AA9Cu;
            goto label_79aa9c;
        }
    }
    ctx->pc = 0x79AA68u;
label_79aa68:
    // 0x79aa68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aa6c:
    // 0x79aa6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79aa6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79aa70:
    // 0x79aa70: 0x24e4ad00  addiu       $a0, $a3, -0x5300
    ctx->pc = 0x79aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946048));
label_79aa74:
    // 0x79aa74: 0x0  nop
    ctx->pc = 0x79aa74u;
    // NOP
label_79aa78:
    // 0x79aa78: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79aa78u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79aa7c:
    // 0x79aa7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79aa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79aa80:
    // 0x79aa80: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79aa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79aa84:
    // 0x79aa84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79aa84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79aa88:
    // 0x79aa88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79aa8c:
    // 0x79aa8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79aa90:
    // 0x79aa90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79aa94:
    // 0x79aa94: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79aa98:
    if (ctx->pc == 0x79AA98u) {
        ctx->pc = 0x79AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA94u;
        // 0x79aa98: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA9Cu;
        goto label_79aa9c;
    }
    ctx->pc = 0x79AA94u;
    {
        const bool branch_taken_0x79aa94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa94) {
            ctx->pc = 0x79AA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA94u;
            // 0x79aa98: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa78;
        }
    }
    ctx->pc = 0x79AA9Cu;
label_79aa9c:
    // 0x79aa9c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79aaa0:
    // 0x79aaa0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79aaa0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79aaa4:
    // 0x79aaa4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79aaa8:
    if (ctx->pc == 0x79AAA8u) {
        ctx->pc = 0x79AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA4u;
        // 0x79aaa8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAACu;
        goto label_79aaac;
    }
    ctx->pc = 0x79AAA4u;
    {
        const bool branch_taken_0x79aaa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA4u;
        // 0x79aaa8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaa4) {
            ctx->pc = 0x79AAD4u;
            goto label_79aad4;
        }
    }
    ctx->pc = 0x79AAACu;
label_79aaac:
    // 0x79aaac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79aab0:
    // 0x79aab0: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x79aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_79aab4:
    // 0x79aab4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79aab8:
    // 0x79aab8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79aabc:
    // 0x79aabc: 0x0  nop
    ctx->pc = 0x79aabcu;
    // NOP
label_79aac0:
    // 0x79aac0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79aac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79aac4:
    // 0x79aac4: 0x40f809  jalr        $v0
label_79aac8:
    if (ctx->pc == 0x79AAC8u) {
        ctx->pc = 0x79AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC4u;
        // 0x79aac8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AACCu;
        goto label_79aacc;
    }
    ctx->pc = 0x79AAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AACCu);
        ctx->pc = 0x79AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC4u;
        // 0x79aac8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAC4u, 0x79AACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AACCu;
label_79aacc:
    // 0x79aacc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79aad0:
    if (ctx->pc == 0x79AAD0u) {
        ctx->pc = 0x79AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AACCu;
        // 0x79aad0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAD4u;
        goto label_79aad4;
    }
    ctx->pc = 0x79AACCu;
    {
        const bool branch_taken_0x79aacc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aacc) {
            ctx->pc = 0x79AAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AACCu;
            // 0x79aad0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aac0;
        }
    }
    ctx->pc = 0x79AAD4u;
label_79aad4:
    // 0x79aad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79aad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79aad8:
    // 0x79aad8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79aad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79aadc:
    // 0x79aadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79aadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79aae0:
    // 0x79aae0: 0x3e00008  jr          $ra
label_79aae4:
    if (ctx->pc == 0x79AAE4u) {
        ctx->pc = 0x79AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE0u;
        // 0x79aae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAE8u;
        goto label_fallthrough_0x79aae0;
    }
    ctx->pc = 0x79AAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAE0u;
        // 0x79aae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79aae0:
    ctx->pc = 0x79AAE8u;
}
} // namespace gh_r101
