#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: __do_global_ctors
// Address: 0x79bc40 - 0x79bcf0
void ps2___do_global_ctors_0x79bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79bc40");
#endif

    switch (ctx->pc) {
        case 0x79bc40u: goto label_79bc40;
        case 0x79bc44u: goto label_79bc44;
        case 0x79bc48u: goto label_79bc48;
        case 0x79bc4cu: goto label_79bc4c;
        case 0x79bc50u: goto label_79bc50;
        case 0x79bc54u: goto label_79bc54;
        case 0x79bc58u: goto label_79bc58;
        case 0x79bc5cu: goto label_79bc5c;
        case 0x79bc60u: goto label_79bc60;
        case 0x79bc64u: goto label_79bc64;
        case 0x79bc68u: goto label_79bc68;
        case 0x79bc6cu: goto label_79bc6c;
        case 0x79bc70u: goto label_79bc70;
        case 0x79bc74u: goto label_79bc74;
        case 0x79bc78u: goto label_79bc78;
        case 0x79bc7cu: goto label_79bc7c;
        case 0x79bc80u: goto label_79bc80;
        case 0x79bc84u: goto label_79bc84;
        case 0x79bc88u: goto label_79bc88;
        case 0x79bc8cu: goto label_79bc8c;
        case 0x79bc90u: goto label_79bc90;
        case 0x79bc94u: goto label_79bc94;
        case 0x79bc98u: goto label_79bc98;
        case 0x79bc9cu: goto label_79bc9c;
        case 0x79bca0u: goto label_79bca0;
        case 0x79bca4u: goto label_79bca4;
        case 0x79bca8u: goto label_79bca8;
        case 0x79bcacu: goto label_79bcac;
        case 0x79bcb0u: goto label_79bcb0;
        case 0x79bcb4u: goto label_79bcb4;
        case 0x79bcb8u: goto label_79bcb8;
        case 0x79bcbcu: goto label_79bcbc;
        case 0x79bcc0u: goto label_79bcc0;
        case 0x79bcc4u: goto label_79bcc4;
        case 0x79bcc8u: goto label_79bcc8;
        case 0x79bcccu: goto label_79bccc;
        case 0x79bcd0u: goto label_79bcd0;
        case 0x79bcd4u: goto label_79bcd4;
        case 0x79bcd8u: goto label_79bcd8;
        case 0x79bcdcu: goto label_79bcdc;
        case 0x79bce0u: goto label_79bce0;
        case 0x79bce4u: goto label_79bce4;
        case 0x79bce8u: goto label_79bce8;
        case 0x79bcecu: goto label_79bcec;
        default: break;
    }

    ctx->pc = 0x79bc40u;

label_79bc40:
    // 0x79bc40: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79bc40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79bc44:
    // 0x79bc44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bc44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79bc48:
    // 0x79bc48: 0x8ce5c100  lw          $a1, -0x3F00($a3)
    ctx->pc = 0x79bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951168)));
label_79bc4c:
    // 0x79bc4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bc50:
    // 0x79bc50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79bc54:
    // 0x79bc54: 0x24e3c100  addiu       $v1, $a3, -0x3F00
    ctx->pc = 0x79bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951168));
label_79bc58:
    // 0x79bc58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79bc5c:
    // 0x79bc5c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79bc60:
    if (ctx->pc == 0x79BC60u) {
        ctx->pc = 0x79BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC5Cu;
        // 0x79bc60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC64u;
        goto label_79bc64;
    }
    ctx->pc = 0x79BC5Cu;
    {
        const bool branch_taken_0x79bc5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC5Cu;
        // 0x79bc60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc5c) {
            ctx->pc = 0x79BCA4u;
            goto label_79bca4;
        }
    }
    ctx->pc = 0x79BC64u;
label_79bc64:
    // 0x79bc64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79bc68:
    // 0x79bc68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79bc6c:
    if (ctx->pc == 0x79BC6Cu) {
        ctx->pc = 0x79BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC68u;
        // 0x79bc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BC70u;
        goto label_79bc70;
    }
    ctx->pc = 0x79BC68u;
    {
        const bool branch_taken_0x79bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC68u;
        // 0x79bc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc68) {
            ctx->pc = 0x79BCA4u;
            goto label_79bca4;
        }
    }
    ctx->pc = 0x79BC70u;
label_79bc70:
    // 0x79bc70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79bc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bc74:
    // 0x79bc74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79bc78:
    // 0x79bc78: 0x24e4c100  addiu       $a0, $a3, -0x3F00
    ctx->pc = 0x79bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951168));
label_79bc7c:
    // 0x79bc7c: 0x0  nop
    ctx->pc = 0x79bc7cu;
    // NOP
label_79bc80:
    // 0x79bc80: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79bc80u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79bc84:
    // 0x79bc84: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79bc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79bc88:
    // 0x79bc88: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79bc8c:
    // 0x79bc8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79bc8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79bc90:
    // 0x79bc90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79bc94:
    // 0x79bc94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79bc98:
    // 0x79bc98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bc9c:
    // 0x79bc9c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79bca0:
    if (ctx->pc == 0x79BCA0u) {
        ctx->pc = 0x79BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC9Cu;
        // 0x79bca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCA4u;
        goto label_79bca4;
    }
    ctx->pc = 0x79BC9Cu;
    {
        const bool branch_taken_0x79bc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bc9c) {
            ctx->pc = 0x79BCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC9Cu;
            // 0x79bca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc80;
        }
    }
    ctx->pc = 0x79BCA4u;
label_79bca4:
    // 0x79bca4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79bca4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79bca8:
    // 0x79bca8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79bca8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79bcac:
    // 0x79bcac: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79bcb0:
    if (ctx->pc == 0x79BCB0u) {
        ctx->pc = 0x79BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCACu;
        // 0x79bcb0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCB4u;
        goto label_79bcb4;
    }
    ctx->pc = 0x79BCACu;
    {
        const bool branch_taken_0x79bcac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCACu;
        // 0x79bcb0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcac) {
            ctx->pc = 0x79BCDCu;
            goto label_79bcdc;
        }
    }
    ctx->pc = 0x79BCB4u;
label_79bcb4:
    // 0x79bcb4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79bcb8:
    // 0x79bcb8: 0x2442c100  addiu       $v0, $v0, -0x3F00
    ctx->pc = 0x79bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
label_79bcbc:
    // 0x79bcbc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79bcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bcc0:
    // 0x79bcc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79bcc4:
    // 0x79bcc4: 0x0  nop
    ctx->pc = 0x79bcc4u;
    // NOP
label_79bcc8:
    // 0x79bcc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79bcc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79bccc:
    // 0x79bccc: 0x40f809  jalr        $v0
label_79bcd0:
    if (ctx->pc == 0x79BCD0u) {
        ctx->pc = 0x79BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCCCu;
        // 0x79bcd0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCD4u;
        goto label_79bcd4;
    }
    ctx->pc = 0x79BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79BCD4u);
        ctx->pc = 0x79BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCCCu;
        // 0x79bcd0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BCCCu, 0x79BCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BCD4u;
label_79bcd4:
    // 0x79bcd4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79bcd8:
    if (ctx->pc == 0x79BCD8u) {
        ctx->pc = 0x79BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCD4u;
        // 0x79bcd8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCDCu;
        goto label_79bcdc;
    }
    ctx->pc = 0x79BCD4u;
    {
        const bool branch_taken_0x79bcd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bcd4) {
            ctx->pc = 0x79BCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BCD4u;
            // 0x79bcd8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bcc8;
        }
    }
    ctx->pc = 0x79BCDCu;
label_79bcdc:
    // 0x79bcdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79bce0:
    // 0x79bce0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79bce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bce4:
    // 0x79bce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79bce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bce8:
    // 0x79bce8: 0x3e00008  jr          $ra
label_79bcec:
    if (ctx->pc == 0x79BCECu) {
        ctx->pc = 0x79BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCE8u;
        // 0x79bcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BCF0u;
        goto label_fallthrough_0x79bce8;
    }
    ctx->pc = 0x79BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCE8u;
        // 0x79bcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79bce8:
    ctx->pc = 0x79BCF0u;
}
} // namespace gh_r409
