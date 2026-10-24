#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __do_global_ctors
// Address: 0x79be58 - 0x79bf08
void ps2___do_global_ctors_0x79be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79be58");
#endif

    switch (ctx->pc) {
        case 0x79be58u: goto label_79be58;
        case 0x79be5cu: goto label_79be5c;
        case 0x79be60u: goto label_79be60;
        case 0x79be64u: goto label_79be64;
        case 0x79be68u: goto label_79be68;
        case 0x79be6cu: goto label_79be6c;
        case 0x79be70u: goto label_79be70;
        case 0x79be74u: goto label_79be74;
        case 0x79be78u: goto label_79be78;
        case 0x79be7cu: goto label_79be7c;
        case 0x79be80u: goto label_79be80;
        case 0x79be84u: goto label_79be84;
        case 0x79be88u: goto label_79be88;
        case 0x79be8cu: goto label_79be8c;
        case 0x79be90u: goto label_79be90;
        case 0x79be94u: goto label_79be94;
        case 0x79be98u: goto label_79be98;
        case 0x79be9cu: goto label_79be9c;
        case 0x79bea0u: goto label_79bea0;
        case 0x79bea4u: goto label_79bea4;
        case 0x79bea8u: goto label_79bea8;
        case 0x79beacu: goto label_79beac;
        case 0x79beb0u: goto label_79beb0;
        case 0x79beb4u: goto label_79beb4;
        case 0x79beb8u: goto label_79beb8;
        case 0x79bebcu: goto label_79bebc;
        case 0x79bec0u: goto label_79bec0;
        case 0x79bec4u: goto label_79bec4;
        case 0x79bec8u: goto label_79bec8;
        case 0x79beccu: goto label_79becc;
        case 0x79bed0u: goto label_79bed0;
        case 0x79bed4u: goto label_79bed4;
        case 0x79bed8u: goto label_79bed8;
        case 0x79bedcu: goto label_79bedc;
        case 0x79bee0u: goto label_79bee0;
        case 0x79bee4u: goto label_79bee4;
        case 0x79bee8u: goto label_79bee8;
        case 0x79beecu: goto label_79beec;
        case 0x79bef0u: goto label_79bef0;
        case 0x79bef4u: goto label_79bef4;
        case 0x79bef8u: goto label_79bef8;
        case 0x79befcu: goto label_79befc;
        case 0x79bf00u: goto label_79bf00;
        case 0x79bf04u: goto label_79bf04;
        default: break;
    }

    ctx->pc = 0x79be58u;

label_79be58:
    // 0x79be58: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79be58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79be5c:
    // 0x79be5c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79be5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79be60:
    // 0x79be60: 0x8ce505a4  lw          $a1, 0x5A4($a3)
    ctx->pc = 0x79be60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1444)));
label_79be64:
    // 0x79be64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79be64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79be68:
    // 0x79be68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79be6c:
    // 0x79be6c: 0x24e305a4  addiu       $v1, $a3, 0x5A4
    ctx->pc = 0x79be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1444));
label_79be70:
    // 0x79be70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79be74:
    // 0x79be74: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79be78:
    if (ctx->pc == 0x79BE78u) {
        ctx->pc = 0x79BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE74u;
        // 0x79be78: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE7Cu;
        goto label_79be7c;
    }
    ctx->pc = 0x79BE74u;
    {
        const bool branch_taken_0x79be74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE74u;
        // 0x79be78: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be74) {
            ctx->pc = 0x79BEBCu;
            goto label_79bebc;
        }
    }
    ctx->pc = 0x79BE7Cu;
label_79be7c:
    // 0x79be7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79be80:
    // 0x79be80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79be84:
    if (ctx->pc == 0x79BE84u) {
        ctx->pc = 0x79BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE80u;
        // 0x79be84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BE88u;
        goto label_79be88;
    }
    ctx->pc = 0x79BE80u;
    {
        const bool branch_taken_0x79be80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE80u;
        // 0x79be84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be80) {
            ctx->pc = 0x79BEBCu;
            goto label_79bebc;
        }
    }
    ctx->pc = 0x79BE88u;
label_79be88:
    // 0x79be88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79be88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79be8c:
    // 0x79be8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79be8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79be90:
    // 0x79be90: 0x24e405a4  addiu       $a0, $a3, 0x5A4
    ctx->pc = 0x79be90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1444));
label_79be94:
    // 0x79be94: 0x0  nop
    ctx->pc = 0x79be94u;
    // NOP
label_79be98:
    // 0x79be98: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79be98u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79be9c:
    // 0x79be9c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79be9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79bea0:
    // 0x79bea0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79bea4:
    // 0x79bea4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79bea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79bea8:
    // 0x79bea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79beac:
    // 0x79beac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79beb0:
    // 0x79beb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79beb4:
    // 0x79beb4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79beb8:
    if (ctx->pc == 0x79BEB8u) {
        ctx->pc = 0x79BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEB4u;
        // 0x79beb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEBCu;
        goto label_79bebc;
    }
    ctx->pc = 0x79BEB4u;
    {
        const bool branch_taken_0x79beb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79beb4) {
            ctx->pc = 0x79BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BEB4u;
            // 0x79beb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be98;
        }
    }
    ctx->pc = 0x79BEBCu;
label_79bebc:
    // 0x79bebc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79bebcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79bec0:
    // 0x79bec0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79bec0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79bec4:
    // 0x79bec4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79bec8:
    if (ctx->pc == 0x79BEC8u) {
        ctx->pc = 0x79BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEC4u;
        // 0x79bec8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BECCu;
        goto label_79becc;
    }
    ctx->pc = 0x79BEC4u;
    {
        const bool branch_taken_0x79bec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEC4u;
        // 0x79bec8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bec4) {
            ctx->pc = 0x79BEF4u;
            goto label_79bef4;
        }
    }
    ctx->pc = 0x79BECCu;
label_79becc:
    // 0x79becc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79beccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79bed0:
    // 0x79bed0: 0x244205a4  addiu       $v0, $v0, 0x5A4
    ctx->pc = 0x79bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1444));
label_79bed4:
    // 0x79bed4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79bed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bed8:
    // 0x79bed8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79bedc:
    // 0x79bedc: 0x0  nop
    ctx->pc = 0x79bedcu;
    // NOP
label_79bee0:
    // 0x79bee0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79bee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79bee4:
    // 0x79bee4: 0x40f809  jalr        $v0
label_79bee8:
    if (ctx->pc == 0x79BEE8u) {
        ctx->pc = 0x79BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE4u;
        // 0x79bee8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEECu;
        goto label_79beec;
    }
    ctx->pc = 0x79BEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79BEECu);
        ctx->pc = 0x79BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE4u;
        // 0x79bee8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEE4u, 0x79BEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BEECu;
label_79beec:
    // 0x79beec: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79bef0:
    if (ctx->pc == 0x79BEF0u) {
        ctx->pc = 0x79BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEECu;
        // 0x79bef0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BEF4u;
        goto label_79bef4;
    }
    ctx->pc = 0x79BEECu;
    {
        const bool branch_taken_0x79beec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79beec) {
            ctx->pc = 0x79BEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BEECu;
            // 0x79bef0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bee0;
        }
    }
    ctx->pc = 0x79BEF4u;
label_79bef4:
    // 0x79bef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79bef8:
    // 0x79bef8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79bef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79befc:
    // 0x79befc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79befcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bf00:
    // 0x79bf00: 0x3e00008  jr          $ra
label_79bf04:
    if (ctx->pc == 0x79BF04u) {
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BF08u;
        goto label_fallthrough_0x79bf00;
    }
    ctx->pc = 0x79BF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF00u;
        // 0x79bf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79bf00:
    ctx->pc = 0x79BF08u;
}
} // namespace gh_r501
