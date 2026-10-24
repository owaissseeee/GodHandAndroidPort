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

// Function: func_00160B90
// Address: 0x160b90 - 0x160c48
void func_00160B90_0x160b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00160B90_0x160b90");
#endif

    switch (ctx->pc) {
        case 0x160b90u: goto label_160b90;
        case 0x160b94u: goto label_160b94;
        case 0x160b98u: goto label_160b98;
        case 0x160b9cu: goto label_160b9c;
        case 0x160ba0u: goto label_160ba0;
        case 0x160ba4u: goto label_160ba4;
        case 0x160ba8u: goto label_160ba8;
        case 0x160bacu: goto label_160bac;
        case 0x160bb0u: goto label_160bb0;
        case 0x160bb4u: goto label_160bb4;
        case 0x160bb8u: goto label_160bb8;
        case 0x160bbcu: goto label_160bbc;
        case 0x160bc0u: goto label_160bc0;
        case 0x160bc4u: goto label_160bc4;
        case 0x160bc8u: goto label_160bc8;
        case 0x160bccu: goto label_160bcc;
        case 0x160bd0u: goto label_160bd0;
        case 0x160bd4u: goto label_160bd4;
        case 0x160bd8u: goto label_160bd8;
        case 0x160bdcu: goto label_160bdc;
        case 0x160be0u: goto label_160be0;
        case 0x160be4u: goto label_160be4;
        case 0x160be8u: goto label_160be8;
        case 0x160becu: goto label_160bec;
        case 0x160bf0u: goto label_160bf0;
        case 0x160bf4u: goto label_160bf4;
        case 0x160bf8u: goto label_160bf8;
        case 0x160bfcu: goto label_160bfc;
        case 0x160c00u: goto label_160c00;
        case 0x160c04u: goto label_160c04;
        case 0x160c08u: goto label_160c08;
        case 0x160c0cu: goto label_160c0c;
        case 0x160c10u: goto label_160c10;
        case 0x160c14u: goto label_160c14;
        case 0x160c18u: goto label_160c18;
        case 0x160c1cu: goto label_160c1c;
        case 0x160c20u: goto label_160c20;
        case 0x160c24u: goto label_160c24;
        case 0x160c28u: goto label_160c28;
        case 0x160c2cu: goto label_160c2c;
        case 0x160c30u: goto label_160c30;
        case 0x160c34u: goto label_160c34;
        case 0x160c38u: goto label_160c38;
        case 0x160c3cu: goto label_160c3c;
        case 0x160c40u: goto label_160c40;
        case 0x160c44u: goto label_160c44;
        default: break;
    }

    ctx->pc = 0x160b90u;

label_160b90:
    // 0x160b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_160b94:
    // 0x160b94: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_160b98:
    // 0x160b98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_160b9c:
    // 0x160b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160ba0:
    // 0x160ba0: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_160ba4:
    // 0x160ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_160ba8:
    // 0x160ba8: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
label_160bac:
    if (ctx->pc == 0x160BACu) {
        ctx->pc = 0x160BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BA8u;
        // 0x160bac: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BB0u;
        goto label_160bb0;
    }
    ctx->pc = 0x160BA8u;
    {
        const bool branch_taken_0x160ba8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x160BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BA8u;
        // 0x160bac: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ba8) {
            ctx->pc = 0x160C34u;
            goto label_160c34;
        }
    }
    ctx->pc = 0x160BB0u;
label_160bb0:
    // 0x160bb0: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x160bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_160bb4:
    // 0x160bb4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x160bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_160bb8:
    // 0x160bb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x160bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_160bbc:
    // 0x160bbc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_160bc0:
    if (ctx->pc == 0x160BC0u) {
        ctx->pc = 0x160BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BBCu;
        // 0x160bc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BC4u;
        goto label_160bc4;
    }
    ctx->pc = 0x160BBCu;
    {
        const bool branch_taken_0x160bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160bbc) {
            ctx->pc = 0x160BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160BBCu;
            // 0x160bc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C38u;
            goto label_160c38;
        }
    }
    ctx->pc = 0x160BC4u;
label_160bc4:
    // 0x160bc4: 0xc058354  jal         func_160D50
label_160bc8:
    if (ctx->pc == 0x160BC8u) {
        ctx->pc = 0x160BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BC4u;
        // 0x160bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BCCu;
        goto label_160bcc;
    }
    ctx->pc = 0x160BC4u;
    SET_GPR_U32(ctx, 31, 0x160BCCu);
    ctx->pc = 0x160BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BC4u;
    // 0x160bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D50u, 0x160BC4u, 0x160BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BCCu;
label_160bcc:
    // 0x160bcc: 0xc0584a2  jal         func_161288
label_160bd0:
    if (ctx->pc == 0x160BD0u) {
        ctx->pc = 0x160BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BCCu;
        // 0x160bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BD4u;
        goto label_160bd4;
    }
    ctx->pc = 0x160BCCu;
    SET_GPR_U32(ctx, 31, 0x160BD4u);
    ctx->pc = 0x160BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BCCu;
    // 0x160bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161288u, 0x160BCCu, 0x160BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BD4u;
label_160bd4:
    // 0x160bd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160bd8:
    // 0x160bd8: 0x50a00017  beql        $a1, $zero, . + 4 + (0x17 << 2)
label_160bdc:
    if (ctx->pc == 0x160BDCu) {
        ctx->pc = 0x160BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BD8u;
        // 0x160bdc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BE0u;
        goto label_160be0;
    }
    ctx->pc = 0x160BD8u;
    {
        const bool branch_taken_0x160bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bd8) {
            ctx->pc = 0x160BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160BD8u;
            // 0x160bdc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C38u;
            goto label_160c38;
        }
    }
    ctx->pc = 0x160BE0u;
label_160be0:
    // 0x160be0: 0x90a20059  lbu         $v0, 0x59($a1)
    ctx->pc = 0x160be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 89)));
label_160be4:
    // 0x160be4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_160be8:
    if (ctx->pc == 0x160BE8u) {
        ctx->pc = 0x160BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BE4u;
        // 0x160be8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160BECu;
        goto label_160bec;
    }
    ctx->pc = 0x160BE4u;
    {
        const bool branch_taken_0x160be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160be4) {
            ctx->pc = 0x160BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160BE4u;
            // 0x160be8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C38u;
            goto label_160c38;
        }
    }
    ctx->pc = 0x160BECu;
label_160bec:
    // 0x160bec: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x160becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_160bf0:
    // 0x160bf0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x160bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_160bf4:
    // 0x160bf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_160bf8:
    // 0x160bf8: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x160bf8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_160bfc:
    // 0x160bfc: 0x2c83000e  sltiu       $v1, $a0, 0xE
    ctx->pc = 0x160bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_160c00:
    // 0x160c00: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_160c04:
    if (ctx->pc == 0x160C04u) {
        ctx->pc = 0x160C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C00u;
        // 0x160c04: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C08u;
        goto label_160c08;
    }
    ctx->pc = 0x160C00u;
    {
        const bool branch_taken_0x160c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C00u;
        // 0x160c04: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c00) {
            ctx->pc = 0x160C34u;
            goto label_160c34;
        }
    }
    ctx->pc = 0x160C08u;
label_160c08:
    // 0x160c08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_160c0c:
    // 0x160c0c: 0x2442f140  addiu       $v0, $v0, -0xEC0
    ctx->pc = 0x160c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
label_160c10:
    // 0x160c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_160c14:
    // 0x160c14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x160c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_160c18:
    // 0x160c18: 0x800008  jr          $a0
label_160c1c:
    if (ctx->pc == 0x160C1Cu) {
        ctx->pc = 0x160C20u;
        goto label_160c20;
    }
    ctx->pc = 0x160C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160C20u: goto label_160c20;
            case 0x160C34u: goto label_160c34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160C18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x160C20u;
label_160c20:
    // 0x160c20: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_160c24:
    // 0x160c24: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_160c28:
    // 0x160c28: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x160c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_160c2c:
    // 0x160c2c: 0x60f809  jalr        $v1
label_160c30:
    if (ctx->pc == 0x160C30u) {
        ctx->pc = 0x160C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C2Cu;
        // 0x160c30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C34u;
        goto label_160c34;
    }
    ctx->pc = 0x160C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x160C34u);
        ctx->pc = 0x160C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C2Cu;
        // 0x160c30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160C2Cu, 0x160C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160C34u;
label_160c34:
    // 0x160c34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160c38:
    // 0x160c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160c3c:
    // 0x160c3c: 0x3e00008  jr          $ra
label_160c40:
    if (ctx->pc == 0x160C40u) {
        ctx->pc = 0x160C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C3Cu;
        // 0x160c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C44u;
        goto label_160c44;
    }
    ctx->pc = 0x160C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C3Cu;
        // 0x160c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160C44u;
label_160c44:
    // 0x160c44: 0x0  nop
    ctx->pc = 0x160c44u;
    // NOP
    ctx->pc = 0x160c48u;
}
