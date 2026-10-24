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

// Function: func_001A6AF8
// Address: 0x1a6af8 - 0x1a6cd8
void func_001A6AF8_0x1a6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6AF8_0x1a6af8");
#endif

    switch (ctx->pc) {
        case 0x1a6b7cu: goto label_1a6b7c;
        case 0x1a6b8cu: goto label_1a6b8c;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6be0u: goto label_1a6be0;
        case 0x1a6bf0u: goto label_1a6bf0;
        case 0x1a6c08u: goto label_1a6c08;
        case 0x1a6c20u: goto label_1a6c20;
        case 0x1a6c48u: goto label_1a6c48;
        case 0x1a6c70u: goto label_1a6c70;
        case 0x1a6c7cu: goto label_1a6c7c;
        case 0x1a6cb0u: goto label_1a6cb0;
        case 0x1a6cbcu: goto label_1a6cbc;
        default: break;
    }

    ctx->pc = 0x1a6af8u;

    // 0x1a6af8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a6afc: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x1a6b00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a6b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a6b04: 0x24e87a78  addiu       $t0, $a3, 0x7A78
    ctx->pc = 0x1a6b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 31352));
    // 0x1a6b08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a6b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a6b0c: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x1a6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x1a6b10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a6b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a6b14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6b18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a6b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a6b1c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1a6b20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6b24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6b28: 0x8ce57a78  lw          $a1, 0x7A78($a3)
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A78u));
    // 0x1a6b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b30: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1a6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x747A80u));
    // 0x1a6b34: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x1a6b38: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1a6b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a6b3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6b40: 0xace57a78  sw          $a1, 0x7A78($a3)
    ctx->pc = 0x1a6b40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 31352), GPR_U32(ctx, 5));
    // 0x1a6b44: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1a6b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a6b48: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x1a6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x1a6b4c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a6b50: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x1a6b54: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1a6b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a6b58: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x1a6b5c: 0x24c673f8  addiu       $a2, $a2, 0x73F8
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29688));
    // 0x1a6b60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6b68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a6b6c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1a6b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b70: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x1a6b70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    // 0x1a6b74: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x1A6B74u;
    SET_GPR_U32(ctx, 31, 0x1A6B7Cu);
    ctx->pc = 0x1A6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B74u;
    // 0x1a6b78: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x1A6B74u, 0x1A6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B7Cu;
label_1a6b7c:
    // 0x1a6b7c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x1a6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x1a6b80: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a6b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6b84: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1A6B84u;
    SET_GPR_U32(ctx, 31, 0x1A6B8Cu);
    ctx->pc = 0x1A6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B84u;
    // 0x1a6b88: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1A6B84u, 0x1A6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B8Cu;
label_1a6b8c:
    // 0x1a6b8c: 0x92420606  lbu         $v0, 0x606($s2)
    ctx->pc = 0x1a6b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1542)));
    // 0x1a6b90: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A6B90u;
    {
        const bool branch_taken_0x1a6b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B90u;
        // 0x1a6b94: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b90) {
            ctx->pc = 0x1A6C4Cu;
            goto label_1a6c4c;
        }
    }
    ctx->pc = 0x1A6B98u;
    // 0x1a6b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6b9c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a6ba0: 0xa2430606  sb          $v1, 0x606($s2)
    ctx->pc = 0x1a6ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1542), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6ba4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x1a6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x1a6ba8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1A6BA8u;
    SET_GPR_U32(ctx, 31, 0x1A6BB0u);
    ctx->pc = 0x1A6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BA8u;
    // 0x1a6bac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1A6BA8u, 0x1A6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BB0u;
label_1a6bb0:
    // 0x1a6bb0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6bb4: 0x2444b000  addiu       $a0, $v0, -0x5000
    ctx->pc = 0x1a6bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x1a6bb8: 0xc441b000  lwc1        $f1, -0x5000($v0)
    ctx->pc = 0x1a6bb8u;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6bbc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1a6bbcu;
    { uint32_t bits = FAST_READ32(0x5CB004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6bc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a6bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6bc4: 0x0  nop
    ctx->pc = 0x1a6bc4u;
    // NOP
    // 0x1a6bc8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1A6BC8u;
    {
        const bool branch_taken_0x1a6bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BC8u;
        // 0x1a6bcc: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bc8) {
            ctx->pc = 0x1A6BF8u;
            goto label_1a6bf8;
        }
    }
    ctx->pc = 0x1A6BD0u;
    // 0x1a6bd0: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x1a6bd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a6bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6bd8: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x1A6BD8u;
    SET_GPR_U32(ctx, 31, 0x1A6BE0u);
    ctx->pc = 0x1A6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BD8u;
    // 0x1a6bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x1A6BD8u, 0x1A6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BE0u;
label_1a6be0:
    // 0x1a6be0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x1a6be4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1a6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a6be8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1A6BE8u;
    SET_GPR_U32(ctx, 31, 0x1A6BF0u);
    ctx->pc = 0x1A6BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BE8u;
    // 0x1a6bec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1A6BE8u, 0x1A6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BF0u;
label_1a6bf0:
    // 0x1a6bf0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6BF0u;
    {
        const bool branch_taken_0x1a6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BF0u;
        // 0x1a6bf4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bf0) {
            ctx->pc = 0x1A6C4Cu;
            goto label_1a6c4c;
        }
    }
    ctx->pc = 0x1A6BF8u;
label_1a6bf8:
    // 0x1a6bf8: 0x241103e8  addiu       $s1, $zero, 0x3E8
    ctx->pc = 0x1a6bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1a6bfc: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1a6c00: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1A6C00u;
    SET_GPR_U32(ctx, 31, 0x1A6C08u);
    ctx->pc = 0x1A6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C00u;
    // 0x1a6c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1A6C00u, 0x1A6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C08u;
label_1a6c08:
    // 0x1a6c08: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x1a6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x1a6c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c10: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1a6c10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1a6c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c18: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1A6C18u;
    SET_GPR_U32(ctx, 31, 0x1A6C20u);
    ctx->pc = 0x1A6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C18u;
    // 0x1a6c1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1A6C18u, 0x1A6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C20u;
label_1a6c20:
    // 0x1a6c20: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1a6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1a6c24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a6c24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6c28: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a6c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a6c2c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1a6c30: 0x864702ac  lh          $a3, 0x2AC($s2)
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
    // 0x1a6c34: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x1a6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1a6c38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a6c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c40: 0xc04f8be  jal         func_13E2F8
    ctx->pc = 0x1A6C40u;
    SET_GPR_U32(ctx, 31, 0x1A6C48u);
    ctx->pc = 0x1A6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C40u;
    // 0x1a6c44: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2F8u, 0x1A6C40u, 0x1A6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C48u;
label_1a6c48:
    // 0x1a6c48: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1a6c4c:
    // 0x1a6c4c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1a6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1a6c50: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1a6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1a6c54: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1a6c54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1a6c58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a6c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a6c5c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6C5Cu;
    {
        const bool branch_taken_0x1a6c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c5c) {
            ctx->pc = 0x1A6C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6C5Cu;
            // 0x1a6c60: 0x8e430250  lw          $v1, 0x250($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6C90u;
            goto label_1a6c90;
        }
    }
    ctx->pc = 0x1A6C64u;
    // 0x1a6c64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6c68: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x1a6c6c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_1a6c70:
    // 0x1a6c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6c74: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1A6C74u;
    SET_GPR_U32(ctx, 31, 0x1A6C7Cu);
    ctx->pc = 0x1A6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C74u;
    // 0x1a6c78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1A6C74u, 0x1A6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C7Cu;
label_1a6c7c:
    // 0x1a6c7c: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x1a6c7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1a6c80: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1a6c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1a6c84: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A6C84u;
    {
        const bool branch_taken_0x1a6c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C84u;
        // 0x1a6c88: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c84) {
            ctx->pc = 0x1A6C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6c70;
        }
    }
    ctx->pc = 0x1A6C8Cu;
    // 0x1a6c8c: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x1a6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_1a6c90:
    // 0x1a6c90: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1a6c94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6c98: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6c9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a6c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6ca0: 0xa2440604  sb          $a0, 0x604($s2)
    ctx->pc = 0x1a6ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1540), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6ca4: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x1a6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
    // 0x1a6ca8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1A6CA8u;
    SET_GPR_U32(ctx, 31, 0x1A6CB0u);
    ctx->pc = 0x1A6CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CA8u;
    // 0x1a6cac: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1A6CA8u, 0x1A6CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CB0u;
label_1a6cb0:
    // 0x1a6cb0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x1a6cb4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x1A6CB4u;
    SET_GPR_U32(ctx, 31, 0x1A6CBCu);
    ctx->pc = 0x1A6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CB4u;
    // 0x1a6cb8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x1A6CB4u, 0x1A6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CBCu;
label_1a6cbc:
    // 0x1a6cbc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a6cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6cc0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6cc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a6cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6cc8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD0u;
        // 0x1a6cd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CD8u;
}
