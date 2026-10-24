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

// Function: cDvd_ReadToBuffer
// Address: 0x200b88 - 0x200cb0
void cDvd_ReadToBuffer_0x200b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_ReadToBuffer_0x200b88");
#endif

    switch (ctx->pc) {
        case 0x200becu: goto label_200bec;
        case 0x200c0cu: goto label_200c0c;
        case 0x200c44u: goto label_200c44;
        case 0x200c80u: goto label_200c80;
        default: break;
    }

    ctx->pc = 0x200b88u;

    // 0x200b88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x200b8c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x200b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x200b90: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x200b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x200b94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x200b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x200b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x200b9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ba0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x200ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x200ba4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ba8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x200ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x200bac: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x200bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bb0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x200bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x200bb4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x200bb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bb8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x200bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x200bbc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x200bbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bc0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x200bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x200bc4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x200bc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bc8: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x200bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x200bcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200BCCu;
    {
        const bool branch_taken_0x200bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BCCu;
        // 0x200bd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bcc) {
            ctx->pc = 0x200BE4u;
            goto label_200be4;
        }
    }
    ctx->pc = 0x200BD4u;
    // 0x200bd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200bd8: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x200bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x200bdc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x200bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x200be0: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x200be0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_200be4:
    // 0x200be4: 0xc0805ea  jal         func_2017A8
    ctx->pc = 0x200BE4u;
    SET_GPR_U32(ctx, 31, 0x200BECu);
    ctx->pc = 0x200BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BE4u;
    // 0x200be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2017A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2017A8u, 0x200BE4u, 0x200BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BECu;
label_200bec:
    // 0x200bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bf0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x200BF0u;
    {
        const bool branch_taken_0x200bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BF0u;
        // 0x200bf4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bf0) {
            ctx->pc = 0x200C28u;
            goto label_200c28;
        }
    }
    ctx->pc = 0x200BF8u;
    // 0x200bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x200bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bfc: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x200bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x200c00: 0x26060078  addiu       $a2, $s0, 0x78
    ctx->pc = 0x200c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x200c04: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x200C04u;
    SET_GPR_U32(ctx, 31, 0x200C0Cu);
    ctx->pc = 0x200C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C04u;
    // 0x200c08: 0x2607000c  addiu       $a3, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x200C04u, 0x200C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C0Cu;
label_200c0c:
    // 0x200c0c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x200c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x200c10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x200c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x200c14: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x200c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x200c18: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x200c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x200c1c: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x200c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x200c20: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200C20u;
    {
        const bool branch_taken_0x200c20 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x200C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C20u;
        // 0x200c24: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c20) {
            ctx->pc = 0x200C30u;
            goto label_200c30;
        }
    }
    ctx->pc = 0x200C28u;
label_200c28:
    // 0x200c28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x200C28u;
    {
        const bool branch_taken_0x200c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C28u;
        // 0x200c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c28) {
            ctx->pc = 0x200C84u;
            goto label_200c84;
        }
    }
    ctx->pc = 0x200C30u;
label_200c30:
    // 0x200c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200c34: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x200C34u;
    {
        const bool branch_taken_0x200c34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C34u;
        // 0x200c38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c34) {
            ctx->pc = 0x200C4Cu;
            goto label_200c4c;
        }
    }
    ctx->pc = 0x200C3Cu;
    // 0x200c3c: 0xc0805e2  jal         func_201788
    ctx->pc = 0x200C3Cu;
    SET_GPR_U32(ctx, 31, 0x200C44u);
    ctx->pc = 0x200C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C3Cu;
    // 0x200c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201788u, 0x200C3Cu, 0x200C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C44u;
label_200c44:
    // 0x200c44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200C44u;
    {
        const bool branch_taken_0x200c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C44u;
        // 0x200c48: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c44) {
            ctx->pc = 0x200C50u;
            goto label_200c50;
        }
    }
    ctx->pc = 0x200C4Cu;
label_200c4c:
    // 0x200c4c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x200c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_200c50:
    // 0x200c50: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x200c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
    // 0x200c54: 0xae16006c  sw          $s6, 0x6C($s0)
    ctx->pc = 0x200c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 22));
    // 0x200c58: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x200C58u;
    {
        const bool branch_taken_0x200c58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C58u;
        // 0x200c5c: 0xae170070  sw          $s7, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c58) {
            ctx->pc = 0x200C6Cu;
            goto label_200c6c;
        }
    }
    ctx->pc = 0x200C60u;
    // 0x200c60: 0x26a207ff  addiu       $v0, $s5, 0x7FF
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2047));
    // 0x200c64: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x200c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x200c68: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x200c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_200c6c:
    // 0x200c6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x200c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x200c70: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200C70u;
    {
        const bool branch_taken_0x200c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c70) {
            ctx->pc = 0x200C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C70u;
            // 0x200c74: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C84u;
            goto label_200c84;
        }
    }
    ctx->pc = 0x200C78u;
    // 0x200c78: 0xc0804a4  jal         func_201290
    ctx->pc = 0x200C78u;
    SET_GPR_U32(ctx, 31, 0x200C80u);
    ctx->pc = 0x200C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C78u;
    // 0x200c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x200C78u, 0x200C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C80u;
label_200c80:
    // 0x200c80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200c84:
    // 0x200c84: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x200c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200c88: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x200c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200c8c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x200c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200c90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x200c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200c94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x200c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200c98: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x200c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200c9c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x200c9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200ca0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x200ca0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x200CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA8u;
        // 0x200cac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200CB0u;
}
