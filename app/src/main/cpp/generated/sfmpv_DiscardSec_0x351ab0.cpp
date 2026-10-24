#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sfmpv_DiscardSec
// Address: 0x351ab0 - 0x351b70
void sfmpv_DiscardSec_0x351ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_DiscardSec_0x351ab0");
#endif

    switch (ctx->pc) {
        case 0x351ab0u: goto label_351ab0;
        case 0x351ab4u: goto label_351ab4;
        case 0x351ab8u: goto label_351ab8;
        case 0x351abcu: goto label_351abc;
        case 0x351ac0u: goto label_351ac0;
        case 0x351ac4u: goto label_351ac4;
        case 0x351ac8u: goto label_351ac8;
        case 0x351accu: goto label_351acc;
        case 0x351ad0u: goto label_351ad0;
        case 0x351ad4u: goto label_351ad4;
        case 0x351ad8u: goto label_351ad8;
        case 0x351adcu: goto label_351adc;
        case 0x351ae0u: goto label_351ae0;
        case 0x351ae4u: goto label_351ae4;
        case 0x351ae8u: goto label_351ae8;
        case 0x351aecu: goto label_351aec;
        case 0x351af0u: goto label_351af0;
        case 0x351af4u: goto label_351af4;
        case 0x351af8u: goto label_351af8;
        case 0x351afcu: goto label_351afc;
        case 0x351b00u: goto label_351b00;
        case 0x351b04u: goto label_351b04;
        case 0x351b08u: goto label_351b08;
        case 0x351b0cu: goto label_351b0c;
        case 0x351b10u: goto label_351b10;
        case 0x351b14u: goto label_351b14;
        case 0x351b18u: goto label_351b18;
        case 0x351b1cu: goto label_351b1c;
        case 0x351b20u: goto label_351b20;
        case 0x351b24u: goto label_351b24;
        case 0x351b28u: goto label_351b28;
        case 0x351b2cu: goto label_351b2c;
        case 0x351b30u: goto label_351b30;
        case 0x351b34u: goto label_351b34;
        case 0x351b38u: goto label_351b38;
        case 0x351b3cu: goto label_351b3c;
        case 0x351b40u: goto label_351b40;
        case 0x351b44u: goto label_351b44;
        case 0x351b48u: goto label_351b48;
        case 0x351b4cu: goto label_351b4c;
        case 0x351b50u: goto label_351b50;
        case 0x351b54u: goto label_351b54;
        case 0x351b58u: goto label_351b58;
        case 0x351b5cu: goto label_351b5c;
        case 0x351b60u: goto label_351b60;
        case 0x351b64u: goto label_351b64;
        case 0x351b68u: goto label_351b68;
        case 0x351b6cu: goto label_351b6c;
        default: break;
    }

    ctx->pc = 0x351ab0u;

label_351ab0:
    // 0x351ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x351ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_351ab4:
    // 0x351ab4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x351ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_351ab8:
    // 0x351ab8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x351ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351abc:
    // 0x351abc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x351abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_351ac0:
    // 0x351ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x351ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351ac4:
    // 0x351ac4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x351ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_351ac8:
    // 0x351ac8: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x351ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_351acc:
    // 0x351acc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x351accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_351ad0:
    // 0x351ad0: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x351ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351ad4:
    // 0x351ad4: 0x1000000a  b           . + 4 + (0xA << 2)
label_351ad8:
    if (ctx->pc == 0x351AD8u) {
        ctx->pc = 0x351AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AD4u;
        // 0x351ad8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351ADCu;
        goto label_351adc;
    }
    ctx->pc = 0x351AD4u;
    {
        const bool branch_taken_0x351ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AD4u;
        // 0x351ad8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ad4) {
            ctx->pc = 0x351B00u;
            goto label_351b00;
        }
    }
    ctx->pc = 0x351ADCu;
label_351adc:
    // 0x351adc: 0x0  nop
    ctx->pc = 0x351adcu;
    // NOP
label_351ae0:
    // 0x351ae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x351ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_351ae4:
    // 0x351ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x351ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351ae8:
    // 0x351ae8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x351ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_351aec:
    // 0x351aec: 0x40f809  jalr        $v0
label_351af0:
    if (ctx->pc == 0x351AF0u) {
        ctx->pc = 0x351AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AECu;
        // 0x351af0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351AF4u;
        goto label_351af4;
    }
    ctx->pc = 0x351AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351AF4u);
        ctx->pc = 0x351AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AECu;
        // 0x351af0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351AECu, 0x351AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351AF4u;
label_351af4:
    // 0x351af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x351af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351af8:
    // 0x351af8: 0xc0d46dc  jal         func_351B70
label_351afc:
    if (ctx->pc == 0x351AFCu) {
        ctx->pc = 0x351AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AF8u;
        // 0x351afc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B00u;
        goto label_351b00;
    }
    ctx->pc = 0x351AF8u;
    SET_GPR_U32(ctx, 31, 0x351B00u);
    ctx->pc = 0x351AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351AF8u;
    // 0x351afc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B70u, 0x351AF8u, 0x351B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351B00u;
label_351b00:
    // 0x351b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x351b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_351b04:
    // 0x351b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351b08:
    // 0x351b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351b0c:
    // 0x351b0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x351b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351b10:
    // 0x351b10: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x351b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_351b14:
    // 0x351b14: 0x60f809  jalr        $v1
label_351b18:
    if (ctx->pc == 0x351B18u) {
        ctx->pc = 0x351B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B14u;
        // 0x351b18: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B1Cu;
        goto label_351b1c;
    }
    ctx->pc = 0x351B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351B1Cu);
        ctx->pc = 0x351B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B14u;
        // 0x351b18: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351B14u, 0x351B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351B1Cu;
label_351b1c:
    // 0x351b1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x351b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_351b20:
    // 0x351b20: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_351b24:
    if (ctx->pc == 0x351B24u) {
        ctx->pc = 0x351B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B20u;
        // 0x351b24: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B28u;
        goto label_351b28;
    }
    ctx->pc = 0x351B20u;
    {
        const bool branch_taken_0x351b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x351b20) {
            ctx->pc = 0x351B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351B20u;
            // 0x351b24: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351B3Cu;
            goto label_351b3c;
        }
    }
    ctx->pc = 0x351B28u;
label_351b28:
    // 0x351b28: 0xc0da476  jal         func_3691D8
label_351b2c:
    if (ctx->pc == 0x351B2Cu) {
        ctx->pc = 0x351B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B28u;
        // 0x351b2c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B30u;
        goto label_351b30;
    }
    ctx->pc = 0x351B28u;
    SET_GPR_U32(ctx, 31, 0x351B30u);
    ctx->pc = 0x351B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351B28u;
    // 0x351b2c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x351B28u, 0x351B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351B30u;
label_351b30:
    // 0x351b30: 0x1052ffeb  beq         $v0, $s2, . + 4 + (-0x15 << 2)
label_351b34:
    if (ctx->pc == 0x351B34u) {
        ctx->pc = 0x351B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B30u;
        // 0x351b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B38u;
        goto label_351b38;
    }
    ctx->pc = 0x351B30u;
    {
        const bool branch_taken_0x351b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x351B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B30u;
        // 0x351b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b30) {
            ctx->pc = 0x351AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351ae0;
        }
    }
    ctx->pc = 0x351B38u;
label_351b38:
    // 0x351b38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x351b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_351b3c:
    // 0x351b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351b40:
    // 0x351b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351b44:
    // 0x351b44: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x351b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_351b48:
    // 0x351b48: 0x40f809  jalr        $v0
label_351b4c:
    if (ctx->pc == 0x351B4Cu) {
        ctx->pc = 0x351B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B48u;
        // 0x351b4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B50u;
        goto label_351b50;
    }
    ctx->pc = 0x351B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351B50u);
        ctx->pc = 0x351B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B48u;
        // 0x351b4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351B48u, 0x351B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351B50u;
label_351b50:
    // 0x351b50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x351b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_351b54:
    // 0x351b54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x351b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_351b58:
    // 0x351b58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x351b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_351b5c:
    // 0x351b5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x351b5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_351b60:
    // 0x351b60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x351b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_351b64:
    // 0x351b64: 0x3e00008  jr          $ra
label_351b68:
    if (ctx->pc == 0x351B68u) {
        ctx->pc = 0x351B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B64u;
        // 0x351b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B6Cu;
        goto label_351b6c;
    }
    ctx->pc = 0x351B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B64u;
        // 0x351b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351B6Cu;
label_351b6c:
    // 0x351b6c: 0x0  nop
    ctx->pc = 0x351b6cu;
    // NOP
    ctx->pc = 0x351b70u;
}
