#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: __do_global_ctors
// Address: 0x79acb8 - 0x79ad68
void ps2___do_global_ctors_0x79acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79acb8");
#endif

    switch (ctx->pc) {
        case 0x79acb8u: goto label_79acb8;
        case 0x79acbcu: goto label_79acbc;
        case 0x79acc0u: goto label_79acc0;
        case 0x79acc4u: goto label_79acc4;
        case 0x79acc8u: goto label_79acc8;
        case 0x79acccu: goto label_79accc;
        case 0x79acd0u: goto label_79acd0;
        case 0x79acd4u: goto label_79acd4;
        case 0x79acd8u: goto label_79acd8;
        case 0x79acdcu: goto label_79acdc;
        case 0x79ace0u: goto label_79ace0;
        case 0x79ace4u: goto label_79ace4;
        case 0x79ace8u: goto label_79ace8;
        case 0x79acecu: goto label_79acec;
        case 0x79acf0u: goto label_79acf0;
        case 0x79acf4u: goto label_79acf4;
        case 0x79acf8u: goto label_79acf8;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad00u: goto label_79ad00;
        case 0x79ad04u: goto label_79ad04;
        case 0x79ad08u: goto label_79ad08;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad10u: goto label_79ad10;
        case 0x79ad14u: goto label_79ad14;
        case 0x79ad18u: goto label_79ad18;
        case 0x79ad1cu: goto label_79ad1c;
        case 0x79ad20u: goto label_79ad20;
        case 0x79ad24u: goto label_79ad24;
        case 0x79ad28u: goto label_79ad28;
        case 0x79ad2cu: goto label_79ad2c;
        case 0x79ad30u: goto label_79ad30;
        case 0x79ad34u: goto label_79ad34;
        case 0x79ad38u: goto label_79ad38;
        case 0x79ad3cu: goto label_79ad3c;
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad44u: goto label_79ad44;
        case 0x79ad48u: goto label_79ad48;
        case 0x79ad4cu: goto label_79ad4c;
        case 0x79ad50u: goto label_79ad50;
        case 0x79ad54u: goto label_79ad54;
        case 0x79ad58u: goto label_79ad58;
        case 0x79ad5cu: goto label_79ad5c;
        case 0x79ad60u: goto label_79ad60;
        case 0x79ad64u: goto label_79ad64;
        default: break;
    }

    ctx->pc = 0x79acb8u;

label_79acb8:
    // 0x79acb8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79acb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79acbc:
    // 0x79acbc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79acbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79acc0:
    // 0x79acc0: 0x8ce5af80  lw          $a1, -0x5080($a3)
    ctx->pc = 0x79acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946688)));
label_79acc4:
    // 0x79acc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79acc8:
    // 0x79acc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79accc:
    // 0x79accc: 0x24e3af80  addiu       $v1, $a3, -0x5080
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946688));
label_79acd0:
    // 0x79acd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79acd4:
    // 0x79acd4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79acd8:
    if (ctx->pc == 0x79ACD8u) {
        ctx->pc = 0x79ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD4u;
        // 0x79acd8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACDCu;
        goto label_79acdc;
    }
    ctx->pc = 0x79ACD4u;
    {
        const bool branch_taken_0x79acd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD4u;
        // 0x79acd8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acd4) {
            ctx->pc = 0x79AD1Cu;
            goto label_79ad1c;
        }
    }
    ctx->pc = 0x79ACDCu;
label_79acdc:
    // 0x79acdc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79ace0:
    // 0x79ace0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79ace4:
    if (ctx->pc == 0x79ACE4u) {
        ctx->pc = 0x79ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE0u;
        // 0x79ace4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACE8u;
        goto label_79ace8;
    }
    ctx->pc = 0x79ACE0u;
    {
        const bool branch_taken_0x79ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE0u;
        // 0x79ace4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ace0) {
            ctx->pc = 0x79AD1Cu;
            goto label_79ad1c;
        }
    }
    ctx->pc = 0x79ACE8u;
label_79ace8:
    // 0x79ace8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79acec:
    // 0x79acec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79acecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79acf0:
    // 0x79acf0: 0x24e4af80  addiu       $a0, $a3, -0x5080
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946688));
label_79acf4:
    // 0x79acf4: 0x0  nop
    ctx->pc = 0x79acf4u;
    // NOP
label_79acf8:
    // 0x79acf8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79acf8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79acfc:
    // 0x79acfc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79acfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79ad00:
    // 0x79ad00: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79ad04:
    // 0x79ad04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79ad04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79ad08:
    // 0x79ad08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79ad0c:
    // 0x79ad0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79ad10:
    // 0x79ad10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79ad14:
    // 0x79ad14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79ad18:
    if (ctx->pc == 0x79AD18u) {
        ctx->pc = 0x79AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD14u;
        // 0x79ad18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD1Cu;
        goto label_79ad1c;
    }
    ctx->pc = 0x79AD14u;
    {
        const bool branch_taken_0x79ad14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad14) {
            ctx->pc = 0x79AD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD14u;
            // 0x79ad18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79AD1Cu;
label_79ad1c:
    // 0x79ad1c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79ad1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79ad20:
    // 0x79ad20: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79ad20u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79ad24:
    // 0x79ad24: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79ad28:
    if (ctx->pc == 0x79AD28u) {
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD2Cu;
        goto label_79ad2c;
    }
    ctx->pc = 0x79AD24u;
    {
        const bool branch_taken_0x79ad24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD24u;
        // 0x79ad28: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad24) {
            ctx->pc = 0x79AD54u;
            goto label_79ad54;
        }
    }
    ctx->pc = 0x79AD2Cu;
label_79ad2c:
    // 0x79ad2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79ad30:
    // 0x79ad30: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
label_79ad34:
    // 0x79ad34: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79ad38:
    // 0x79ad38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79ad3c:
    // 0x79ad3c: 0x0  nop
    ctx->pc = 0x79ad3cu;
    // NOP
label_79ad40:
    // 0x79ad40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79ad40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79ad44:
    // 0x79ad44: 0x40f809  jalr        $v0
label_79ad48:
    if (ctx->pc == 0x79AD48u) {
        ctx->pc = 0x79AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD44u;
        // 0x79ad48: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD4Cu;
        goto label_79ad4c;
    }
    ctx->pc = 0x79AD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AD4Cu);
        ctx->pc = 0x79AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD44u;
        // 0x79ad48: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD44u, 0x79AD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AD4Cu;
label_79ad4c:
    // 0x79ad4c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79ad50:
    if (ctx->pc == 0x79AD50u) {
        ctx->pc = 0x79AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD4Cu;
        // 0x79ad50: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD54u;
        goto label_79ad54;
    }
    ctx->pc = 0x79AD4Cu;
    {
        const bool branch_taken_0x79ad4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ad4c) {
            ctx->pc = 0x79AD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD4Cu;
            // 0x79ad50: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad40;
        }
    }
    ctx->pc = 0x79AD54u;
label_79ad54:
    // 0x79ad54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ad54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79ad58:
    // 0x79ad58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79ad58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ad5c:
    // 0x79ad5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ad5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ad60:
    // 0x79ad60: 0x3e00008  jr          $ra
label_79ad64:
    if (ctx->pc == 0x79AD64u) {
        ctx->pc = 0x79AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD60u;
        // 0x79ad64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD68u;
        goto label_fallthrough_0x79ad60;
    }
    ctx->pc = 0x79AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD60u;
        // 0x79ad64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79ad60:
    ctx->pc = 0x79AD68u;
}
} // namespace gh_r204
