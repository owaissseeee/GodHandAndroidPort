#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: __do_global_ctors
// Address: 0x79bf40 - 0x79bff0
void ps2___do_global_ctors_0x79bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79bf40");
#endif

    switch (ctx->pc) {
        case 0x79bf40u: goto label_79bf40;
        case 0x79bf44u: goto label_79bf44;
        case 0x79bf48u: goto label_79bf48;
        case 0x79bf4cu: goto label_79bf4c;
        case 0x79bf50u: goto label_79bf50;
        case 0x79bf54u: goto label_79bf54;
        case 0x79bf58u: goto label_79bf58;
        case 0x79bf5cu: goto label_79bf5c;
        case 0x79bf60u: goto label_79bf60;
        case 0x79bf64u: goto label_79bf64;
        case 0x79bf68u: goto label_79bf68;
        case 0x79bf6cu: goto label_79bf6c;
        case 0x79bf70u: goto label_79bf70;
        case 0x79bf74u: goto label_79bf74;
        case 0x79bf78u: goto label_79bf78;
        case 0x79bf7cu: goto label_79bf7c;
        case 0x79bf80u: goto label_79bf80;
        case 0x79bf84u: goto label_79bf84;
        case 0x79bf88u: goto label_79bf88;
        case 0x79bf8cu: goto label_79bf8c;
        case 0x79bf90u: goto label_79bf90;
        case 0x79bf94u: goto label_79bf94;
        case 0x79bf98u: goto label_79bf98;
        case 0x79bf9cu: goto label_79bf9c;
        case 0x79bfa0u: goto label_79bfa0;
        case 0x79bfa4u: goto label_79bfa4;
        case 0x79bfa8u: goto label_79bfa8;
        case 0x79bfacu: goto label_79bfac;
        case 0x79bfb0u: goto label_79bfb0;
        case 0x79bfb4u: goto label_79bfb4;
        case 0x79bfb8u: goto label_79bfb8;
        case 0x79bfbcu: goto label_79bfbc;
        case 0x79bfc0u: goto label_79bfc0;
        case 0x79bfc4u: goto label_79bfc4;
        case 0x79bfc8u: goto label_79bfc8;
        case 0x79bfccu: goto label_79bfcc;
        case 0x79bfd0u: goto label_79bfd0;
        case 0x79bfd4u: goto label_79bfd4;
        case 0x79bfd8u: goto label_79bfd8;
        case 0x79bfdcu: goto label_79bfdc;
        case 0x79bfe0u: goto label_79bfe0;
        case 0x79bfe4u: goto label_79bfe4;
        case 0x79bfe8u: goto label_79bfe8;
        case 0x79bfecu: goto label_79bfec;
        default: break;
    }

    ctx->pc = 0x79bf40u;

label_79bf40:
    // 0x79bf40: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79bf40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79bf44:
    // 0x79bf44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bf44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79bf48:
    // 0x79bf48: 0x8ce5c134  lw          $a1, -0x3ECC($a3)
    ctx->pc = 0x79bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951220)));
label_79bf4c:
    // 0x79bf4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bf50:
    // 0x79bf50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79bf54:
    // 0x79bf54: 0x24e3c134  addiu       $v1, $a3, -0x3ECC
    ctx->pc = 0x79bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951220));
label_79bf58:
    // 0x79bf58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79bf5c:
    // 0x79bf5c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79bf60:
    if (ctx->pc == 0x79BF60u) {
        ctx->pc = 0x79BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF5Cu;
        // 0x79bf60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF64u;
        goto label_79bf64;
    }
    ctx->pc = 0x79BF5Cu;
    {
        const bool branch_taken_0x79bf5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF5Cu;
        // 0x79bf60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf5c) {
            ctx->pc = 0x79BFA4u;
            goto label_79bfa4;
        }
    }
    ctx->pc = 0x79BF64u;
label_79bf64:
    // 0x79bf64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79bf68:
    // 0x79bf68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79bf6c:
    if (ctx->pc == 0x79BF6Cu) {
        ctx->pc = 0x79BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF68u;
        // 0x79bf6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF70u;
        goto label_79bf70;
    }
    ctx->pc = 0x79BF68u;
    {
        const bool branch_taken_0x79bf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF68u;
        // 0x79bf6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf68) {
            ctx->pc = 0x79BFA4u;
            goto label_79bfa4;
        }
    }
    ctx->pc = 0x79BF70u;
label_79bf70:
    // 0x79bf70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bf74:
    // 0x79bf74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79bf78:
    // 0x79bf78: 0x24e4c134  addiu       $a0, $a3, -0x3ECC
    ctx->pc = 0x79bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951220));
label_79bf7c:
    // 0x79bf7c: 0x0  nop
    ctx->pc = 0x79bf7cu;
    // NOP
label_79bf80:
    // 0x79bf80: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79bf80u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79bf84:
    // 0x79bf84: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79bf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79bf88:
    // 0x79bf88: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79bf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79bf8c:
    // 0x79bf8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79bf8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79bf90:
    // 0x79bf90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79bf94:
    // 0x79bf94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79bf98:
    // 0x79bf98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bf9c:
    // 0x79bf9c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79bfa0:
    if (ctx->pc == 0x79BFA0u) {
        ctx->pc = 0x79BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF9Cu;
        // 0x79bfa0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFA4u;
        goto label_79bfa4;
    }
    ctx->pc = 0x79BF9Cu;
    {
        const bool branch_taken_0x79bf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bf9c) {
            ctx->pc = 0x79BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BF9Cu;
            // 0x79bfa0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf80;
        }
    }
    ctx->pc = 0x79BFA4u;
label_79bfa4:
    // 0x79bfa4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79bfa4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79bfa8:
    // 0x79bfa8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79bfa8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79bfac:
    // 0x79bfac: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79bfb0:
    if (ctx->pc == 0x79BFB0u) {
        ctx->pc = 0x79BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFACu;
        // 0x79bfb0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFB4u;
        goto label_79bfb4;
    }
    ctx->pc = 0x79BFACu;
    {
        const bool branch_taken_0x79bfac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFACu;
        // 0x79bfb0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfac) {
            ctx->pc = 0x79BFDCu;
            goto label_79bfdc;
        }
    }
    ctx->pc = 0x79BFB4u;
label_79bfb4:
    // 0x79bfb4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79bfb8:
    // 0x79bfb8: 0x2442c134  addiu       $v0, $v0, -0x3ECC
    ctx->pc = 0x79bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951220));
label_79bfbc:
    // 0x79bfbc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79bfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bfc0:
    // 0x79bfc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79bfc4:
    // 0x79bfc4: 0x0  nop
    ctx->pc = 0x79bfc4u;
    // NOP
label_79bfc8:
    // 0x79bfc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79bfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79bfcc:
    // 0x79bfcc: 0x40f809  jalr        $v0
label_79bfd0:
    if (ctx->pc == 0x79BFD0u) {
        ctx->pc = 0x79BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFCCu;
        // 0x79bfd0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFD4u;
        goto label_79bfd4;
    }
    ctx->pc = 0x79BFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79BFD4u);
        ctx->pc = 0x79BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFCCu;
        // 0x79bfd0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFCCu, 0x79BFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BFD4u;
label_79bfd4:
    // 0x79bfd4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79bfd8:
    if (ctx->pc == 0x79BFD8u) {
        ctx->pc = 0x79BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFD4u;
        // 0x79bfd8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFDCu;
        goto label_79bfdc;
    }
    ctx->pc = 0x79BFD4u;
    {
        const bool branch_taken_0x79bfd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bfd4) {
            ctx->pc = 0x79BFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BFD4u;
            // 0x79bfd8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bfc8;
        }
    }
    ctx->pc = 0x79BFDCu;
label_79bfdc:
    // 0x79bfdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79bfe0:
    // 0x79bfe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79bfe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bfe4:
    // 0x79bfe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79bfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bfe8:
    // 0x79bfe8: 0x3e00008  jr          $ra
label_79bfec:
    if (ctx->pc == 0x79BFECu) {
        ctx->pc = 0x79BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFE8u;
        // 0x79bfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BFF0u;
        goto label_fallthrough_0x79bfe8;
    }
    ctx->pc = 0x79BFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFE8u;
        // 0x79bfec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79bfe8:
    ctx->pc = 0x79BFF0u;
}
} // namespace gh_r700
