#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: __do_global_ctors
// Address: 0x79ba68 - 0x79bb18
void ps2___do_global_ctors_0x79ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79ba68");
#endif

    switch (ctx->pc) {
        case 0x79ba68u: goto label_79ba68;
        case 0x79ba6cu: goto label_79ba6c;
        case 0x79ba70u: goto label_79ba70;
        case 0x79ba74u: goto label_79ba74;
        case 0x79ba78u: goto label_79ba78;
        case 0x79ba7cu: goto label_79ba7c;
        case 0x79ba80u: goto label_79ba80;
        case 0x79ba84u: goto label_79ba84;
        case 0x79ba88u: goto label_79ba88;
        case 0x79ba8cu: goto label_79ba8c;
        case 0x79ba90u: goto label_79ba90;
        case 0x79ba94u: goto label_79ba94;
        case 0x79ba98u: goto label_79ba98;
        case 0x79ba9cu: goto label_79ba9c;
        case 0x79baa0u: goto label_79baa0;
        case 0x79baa4u: goto label_79baa4;
        case 0x79baa8u: goto label_79baa8;
        case 0x79baacu: goto label_79baac;
        case 0x79bab0u: goto label_79bab0;
        case 0x79bab4u: goto label_79bab4;
        case 0x79bab8u: goto label_79bab8;
        case 0x79babcu: goto label_79babc;
        case 0x79bac0u: goto label_79bac0;
        case 0x79bac4u: goto label_79bac4;
        case 0x79bac8u: goto label_79bac8;
        case 0x79baccu: goto label_79bacc;
        case 0x79bad0u: goto label_79bad0;
        case 0x79bad4u: goto label_79bad4;
        case 0x79bad8u: goto label_79bad8;
        case 0x79badcu: goto label_79badc;
        case 0x79bae0u: goto label_79bae0;
        case 0x79bae4u: goto label_79bae4;
        case 0x79bae8u: goto label_79bae8;
        case 0x79baecu: goto label_79baec;
        case 0x79baf0u: goto label_79baf0;
        case 0x79baf4u: goto label_79baf4;
        case 0x79baf8u: goto label_79baf8;
        case 0x79bafcu: goto label_79bafc;
        case 0x79bb00u: goto label_79bb00;
        case 0x79bb04u: goto label_79bb04;
        case 0x79bb08u: goto label_79bb08;
        case 0x79bb0cu: goto label_79bb0c;
        case 0x79bb10u: goto label_79bb10;
        case 0x79bb14u: goto label_79bb14;
        default: break;
    }

    ctx->pc = 0x79ba68u;

label_79ba68:
    // 0x79ba68: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ba68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79ba6c:
    // 0x79ba6c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ba6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79ba70:
    // 0x79ba70: 0x8ce5bd00  lw          $a1, -0x4300($a3)
    ctx->pc = 0x79ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950144)));
label_79ba74:
    // 0x79ba74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ba78:
    // 0x79ba78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79ba7c:
    // 0x79ba7c: 0x24e3bd00  addiu       $v1, $a3, -0x4300
    ctx->pc = 0x79ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950144));
label_79ba80:
    // 0x79ba80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79ba84:
    // 0x79ba84: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79ba88:
    if (ctx->pc == 0x79BA88u) {
        ctx->pc = 0x79BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA84u;
        // 0x79ba88: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA8Cu;
        goto label_79ba8c;
    }
    ctx->pc = 0x79BA84u;
    {
        const bool branch_taken_0x79ba84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA84u;
        // 0x79ba88: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba84) {
            ctx->pc = 0x79BACCu;
            goto label_79bacc;
        }
    }
    ctx->pc = 0x79BA8Cu;
label_79ba8c:
    // 0x79ba8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79ba90:
    // 0x79ba90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79ba94:
    if (ctx->pc == 0x79BA94u) {
        ctx->pc = 0x79BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA90u;
        // 0x79ba94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA98u;
        goto label_79ba98;
    }
    ctx->pc = 0x79BA90u;
    {
        const bool branch_taken_0x79ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA90u;
        // 0x79ba94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba90) {
            ctx->pc = 0x79BACCu;
            goto label_79bacc;
        }
    }
    ctx->pc = 0x79BA98u;
label_79ba98:
    // 0x79ba98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ba98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ba9c:
    // 0x79ba9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79baa0:
    // 0x79baa0: 0x24e4bd00  addiu       $a0, $a3, -0x4300
    ctx->pc = 0x79baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950144));
label_79baa4:
    // 0x79baa4: 0x0  nop
    ctx->pc = 0x79baa4u;
    // NOP
label_79baa8:
    // 0x79baa8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79baa8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79baac:
    // 0x79baac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79bab0:
    // 0x79bab0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79bab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79bab4:
    // 0x79bab4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79bab4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79bab8:
    // 0x79bab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79babc:
    // 0x79babc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79bac0:
    // 0x79bac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79bac4:
    // 0x79bac4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79bac8:
    if (ctx->pc == 0x79BAC8u) {
        ctx->pc = 0x79BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAC4u;
        // 0x79bac8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BACCu;
        goto label_79bacc;
    }
    ctx->pc = 0x79BAC4u;
    {
        const bool branch_taken_0x79bac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bac4) {
            ctx->pc = 0x79BAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAC4u;
            // 0x79bac8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79baa8;
        }
    }
    ctx->pc = 0x79BACCu;
label_79bacc:
    // 0x79bacc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79baccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79bad0:
    // 0x79bad0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79bad0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79bad4:
    // 0x79bad4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79bad8:
    if (ctx->pc == 0x79BAD8u) {
        ctx->pc = 0x79BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAD4u;
        // 0x79bad8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BADCu;
        goto label_79badc;
    }
    ctx->pc = 0x79BAD4u;
    {
        const bool branch_taken_0x79bad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAD4u;
        // 0x79bad8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bad4) {
            ctx->pc = 0x79BB04u;
            goto label_79bb04;
        }
    }
    ctx->pc = 0x79BADCu;
label_79badc:
    // 0x79badc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79bae0:
    // 0x79bae0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_79bae4:
    // 0x79bae4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79bae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bae8:
    // 0x79bae8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79baec:
    // 0x79baec: 0x0  nop
    ctx->pc = 0x79baecu;
    // NOP
label_79baf0:
    // 0x79baf0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79baf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79baf4:
    // 0x79baf4: 0x40f809  jalr        $v0
label_79baf8:
    if (ctx->pc == 0x79BAF8u) {
        ctx->pc = 0x79BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAF4u;
        // 0x79baf8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAFCu;
        goto label_79bafc;
    }
    ctx->pc = 0x79BAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79BAFCu);
        ctx->pc = 0x79BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAF4u;
        // 0x79baf8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAF4u, 0x79BAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BAFCu;
label_79bafc:
    // 0x79bafc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79bb00:
    if (ctx->pc == 0x79BB00u) {
        ctx->pc = 0x79BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAFCu;
        // 0x79bb00: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB04u;
        goto label_79bb04;
    }
    ctx->pc = 0x79BAFCu;
    {
        const bool branch_taken_0x79bafc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bafc) {
            ctx->pc = 0x79BB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAFCu;
            // 0x79bb00: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79baf0;
        }
    }
    ctx->pc = 0x79BB04u;
label_79bb04:
    // 0x79bb04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79bb08:
    // 0x79bb08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79bb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79bb0c:
    // 0x79bb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79bb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bb10:
    // 0x79bb10: 0x3e00008  jr          $ra
label_79bb14:
    if (ctx->pc == 0x79BB14u) {
        ctx->pc = 0x79BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB10u;
        // 0x79bb14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB18u;
        goto label_fallthrough_0x79bb10;
    }
    ctx->pc = 0x79BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB10u;
        // 0x79bb14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79bb10:
    ctx->pc = 0x79BB18u;
}
} // namespace gh_r201
