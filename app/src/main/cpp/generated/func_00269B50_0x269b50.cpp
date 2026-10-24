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

// Function: func_00269B50
// Address: 0x269b50 - 0x26a018
void func_00269B50_0x269b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00269B50_0x269b50");
#endif

    switch (ctx->pc) {
        case 0x269c38u: goto label_269c38;
        case 0x269c54u: goto label_269c54;
        case 0x269c74u: goto label_269c74;
        case 0x269c88u: goto label_269c88;
        default: break;
    }

    ctx->pc = 0x269b50u;

    // 0x269b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x269b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x269b54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x269b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x269b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269b60: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x269b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x269b64: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x269b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x269b68: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x269b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x269b6c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x269b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x269b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269B70u;
    {
        const bool branch_taken_0x269b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B70u;
        // 0x269b74: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b70) {
            ctx->pc = 0x269B80u;
            goto label_269b80;
        }
    }
    ctx->pc = 0x269B78u;
    // 0x269b78: 0x50400122  beql        $v0, $zero, . + 4 + (0x122 << 2)
    ctx->pc = 0x269B78u;
    {
        const bool branch_taken_0x269b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269b78) {
            ctx->pc = 0x269B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269B78u;
            // 0x269b7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A004u;
            goto label_26a004;
        }
    }
    ctx->pc = 0x269B80u;
label_269b80:
    // 0x269b80: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x269b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x269b84: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269B84u;
    {
        const bool branch_taken_0x269b84 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x269b84) {
            ctx->pc = 0x269B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269B84u;
            // 0x269b88: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269BA8u;
            goto label_269ba8;
        }
    }
    ctx->pc = 0x269B8Cu;
    // 0x269b8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x269b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269b90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x269b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269b94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x269b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269b98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x269b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269b9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x269b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ba0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x269ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269ba4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x269ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_269ba8:
    // 0x269ba8: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x269ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x269bac: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x269bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x269bb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x269bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x269bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x269bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x269bb8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x269BB8u;
    {
        const bool branch_taken_0x269bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269bb8) {
            ctx->pc = 0x269BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269BB8u;
            // 0x269bbc: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269C24u;
            goto label_269c24;
        }
    }
    ctx->pc = 0x269BC0u;
    // 0x269bc0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x269bc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x269bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x269bc8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269bcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269BCCu;
    {
        const bool branch_taken_0x269bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BCCu;
        // 0x269bd0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bcc) {
            ctx->pc = 0x269BE0u;
            goto label_269be0;
        }
    }
    ctx->pc = 0x269BD4u;
    // 0x269bd4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269BD8u;
    {
        const bool branch_taken_0x269bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BD8u;
        // 0x269bdc: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bd8) {
            ctx->pc = 0x269BE4u;
            goto label_269be4;
        }
    }
    ctx->pc = 0x269BE0u;
label_269be0:
    // 0x269be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269be4:
    // 0x269be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269be8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x269BE8u;
    {
        const bool branch_taken_0x269be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269be8) {
            ctx->pc = 0x269C14u;
            goto label_269c14;
        }
    }
    ctx->pc = 0x269BF0u;
    // 0x269bf0: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x269bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x269bf4: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269BF4u;
    {
        const bool branch_taken_0x269bf4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x269bf4) {
            ctx->pc = 0x269C14u;
            goto label_269c14;
        }
    }
    ctx->pc = 0x269BFCu;
    // 0x269bfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x269bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x269c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269c04: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x269c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269c08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x269c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269c0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x269c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269c10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x269c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_269c14:
    // 0x269c14: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x269c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x269c18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x269c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x269c1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x269c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x269c20: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x269c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_269c24:
    // 0x269c24: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x269c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x269c28: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x269C28u;
    {
        const bool branch_taken_0x269c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c28) {
            ctx->pc = 0x269C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269C28u;
            // 0x269c2c: 0xc60e05a8  lwc1        $f14, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x269C5Cu;
            goto label_269c5c;
        }
    }
    ctx->pc = 0x269C30u;
    // 0x269c30: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x269C30u;
    SET_GPR_U32(ctx, 31, 0x269C38u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x269C30u, 0x269C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C38u;
label_269c38:
    // 0x269c38: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x269c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x269c3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x269c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269c40: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x269c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x269c44: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x269c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x269c48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x269c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x269c4c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x269C4Cu;
    SET_GPR_U32(ctx, 31, 0x269C54u);
    ctx->pc = 0x269C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C4Cu;
    // 0x269c50: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x269C4Cu, 0x269C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C54u;
label_269c54:
    // 0x269c54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269C54u;
    {
        const bool branch_taken_0x269c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C54u;
        // 0x269c58: 0xc60e05a8  lwc1        $f14, 0x5A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c54) {
            ctx->pc = 0x269C60u;
            goto label_269c60;
        }
    }
    ctx->pc = 0x269C5Cu;
label_269c5c:
    // 0x269c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_269c60:
    // 0x269c60: 0x0  nop
    ctx->pc = 0x269c60u;
    // NOP
    // 0x269c64: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x269c64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x269c68: 0xc60c16f4  lwc1        $f12, 0x16F4($s0)
    ctx->pc = 0x269c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x269c6c: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x269C6Cu;
    SET_GPR_U32(ctx, 31, 0x269C74u);
    ctx->pc = 0x269C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C6Cu;
    // 0x269c70: 0x460ea382  mul.s       $f14, $f20, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x269C6Cu, 0x269C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C74u;
label_269c74:
    // 0x269c74: 0xc60116f4  lwc1        $f1, 0x16F4($s0)
    ctx->pc = 0x269c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269c78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x269c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269c7c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x269c7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x269c80: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x269C80u;
    SET_GPR_U32(ctx, 31, 0x269C88u);
    ctx->pc = 0x269C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C80u;
    // 0x269c84: 0xe60116f4  swc1        $f1, 0x16F4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5876), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x269C80u, 0x269C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C88u;
label_269c88:
    // 0x269c88: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x269c8c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x269C8Cu;
    {
        const bool branch_taken_0x269c8c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x269C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C8Cu;
        // 0x269c90: 0xe60016f4  swc1        $f0, 0x16F4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5876), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c8c) {
            ctx->pc = 0x269C98u;
            goto label_269c98;
        }
    }
    ctx->pc = 0x269C94u;
    // 0x269c94: 0xae0016f4  sw          $zero, 0x16F4($s0)
    ctx->pc = 0x269c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5876), GPR_U32(ctx, 0));
label_269c98:
    // 0x269c98: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x269c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x269c9c: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x269c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x269ca0: 0x106200a0  beq         $v1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x269CA0u;
    {
        const bool branch_taken_0x269ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CA0u;
        // 0x269ca4: 0x2402026a  addiu       $v0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ca0) {
            ctx->pc = 0x269F24u;
            goto label_269f24;
        }
    }
    ctx->pc = 0x269CA8u;
    // 0x269ca8: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x269CA8u;
    {
        const bool branch_taken_0x269ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CA8u;
        // 0x269cac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ca8) {
            ctx->pc = 0x269FC0u;
            goto label_269fc0;
        }
    }
    ctx->pc = 0x269CB0u;
    // 0x269cb0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x269cb4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269cb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269CB8u;
    {
        const bool branch_taken_0x269cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CB8u;
        // 0x269cbc: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cb8) {
            ctx->pc = 0x269CCCu;
            goto label_269ccc;
        }
    }
    ctx->pc = 0x269CC0u;
    // 0x269cc0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269CC4u;
    {
        const bool branch_taken_0x269cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CC4u;
        // 0x269cc8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cc4) {
            ctx->pc = 0x269CD0u;
            goto label_269cd0;
        }
    }
    ctx->pc = 0x269CCCu;
label_269ccc:
    // 0x269ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269cd0:
    // 0x269cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269cd4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x269CD4u;
    {
        const bool branch_taken_0x269cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269cd4) {
            ctx->pc = 0x269CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269CD4u;
            // 0x269cd8: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269D00u;
            goto label_269d00;
        }
    }
    ctx->pc = 0x269CDCu;
    // 0x269cdc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269ce0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x269ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x269ce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x269ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269ce8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269cec: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269cf0: 0xc60016f4  lwc1        $f0, 0x16F4($s0)
    ctx->pc = 0x269cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269cf8: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x269cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x269cfc: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269d00:
    // 0x269d00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x269d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x269d04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269d08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269D08u;
    {
        const bool branch_taken_0x269d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D08u;
        // 0x269d0c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d08) {
            ctx->pc = 0x269D1Cu;
            goto label_269d1c;
        }
    }
    ctx->pc = 0x269D10u;
    // 0x269d10: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269d14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269D14u;
    {
        const bool branch_taken_0x269d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D14u;
        // 0x269d18: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d14) {
            ctx->pc = 0x269D20u;
            goto label_269d20;
        }
    }
    ctx->pc = 0x269D1Cu;
label_269d1c:
    // 0x269d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269d20:
    // 0x269d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d24: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x269D24u;
    {
        const bool branch_taken_0x269d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d24) {
            ctx->pc = 0x269D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D24u;
            // 0x269d28: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269D50u;
            goto label_269d50;
        }
    }
    ctx->pc = 0x269D2Cu;
    // 0x269d2c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269d30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x269d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x269d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x269d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269d38: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269d3c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269d40: 0xc60016f4  lwc1        $f0, 0x16F4($s0)
    ctx->pc = 0x269d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269d44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269d48: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x269d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x269d4c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269d4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269d50:
    // 0x269d50: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x269d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x269d54: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269d58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269D58u;
    {
        const bool branch_taken_0x269d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D58u;
        // 0x269d5c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d58) {
            ctx->pc = 0x269D6Cu;
            goto label_269d6c;
        }
    }
    ctx->pc = 0x269D60u;
    // 0x269d60: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269d64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269D64u;
    {
        const bool branch_taken_0x269d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D64u;
        // 0x269d68: 0x8c420068  lw          $v0, 0x68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d64) {
            ctx->pc = 0x269D70u;
            goto label_269d70;
        }
    }
    ctx->pc = 0x269D6Cu;
label_269d6c:
    // 0x269d6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269d70:
    // 0x269d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269d74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x269D74u;
    {
        const bool branch_taken_0x269d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d74) {
            ctx->pc = 0x269D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D74u;
            // 0x269d78: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269D90u;
            goto label_269d90;
        }
    }
    ctx->pc = 0x269D7Cu;
    // 0x269d7c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269d80: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269d84: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269d88: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269d8c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_269d90:
    // 0x269d90: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x269d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x269d94: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269D94u;
    {
        const bool branch_taken_0x269d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D94u;
        // 0x269d98: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d94) {
            ctx->pc = 0x269DA4u;
            goto label_269da4;
        }
    }
    ctx->pc = 0x269D9Cu;
    // 0x269d9c: 0x54620099  bnel        $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x269D9Cu;
    {
        const bool branch_taken_0x269d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269d9c) {
            ctx->pc = 0x269DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D9Cu;
            // 0x269da0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A004u;
            goto label_26a004;
        }
    }
    ctx->pc = 0x269DA4u;
label_269da4:
    // 0x269da4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x269da8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x269da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x269dac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269DB0u;
    {
        const bool branch_taken_0x269db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DB0u;
        // 0x269db4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269db0) {
            ctx->pc = 0x269DC4u;
            goto label_269dc4;
        }
    }
    ctx->pc = 0x269DB8u;
    // 0x269db8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269dbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269DBCu;
    {
        const bool branch_taken_0x269dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DBCu;
        // 0x269dc0: 0x8c420074  lw          $v0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dbc) {
            ctx->pc = 0x269DC8u;
            goto label_269dc8;
        }
    }
    ctx->pc = 0x269DC4u;
label_269dc4:
    // 0x269dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269dc8:
    // 0x269dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269dcc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x269DCCu;
    {
        const bool branch_taken_0x269dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269dcc) {
            ctx->pc = 0x269DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269DCCu;
            // 0x269dd0: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269DE8u;
            goto label_269de8;
        }
    }
    ctx->pc = 0x269DD4u;
    // 0x269dd4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269dd8: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269ddc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269de0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269de4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269de8:
    // 0x269de8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x269de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x269dec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269df0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269DF0u;
    {
        const bool branch_taken_0x269df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DF0u;
        // 0x269df4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269df0) {
            ctx->pc = 0x269E04u;
            goto label_269e04;
        }
    }
    ctx->pc = 0x269DF8u;
    // 0x269df8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269DFCu;
    {
        const bool branch_taken_0x269dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DFCu;
        // 0x269e00: 0x8c420078  lw          $v0, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dfc) {
            ctx->pc = 0x269E08u;
            goto label_269e08;
        }
    }
    ctx->pc = 0x269E04u;
label_269e04:
    // 0x269e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269e08:
    // 0x269e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x269E0Cu;
    {
        const bool branch_taken_0x269e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e0c) {
            ctx->pc = 0x269E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269E0Cu;
            // 0x269e10: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269E28u;
            goto label_269e28;
        }
    }
    ctx->pc = 0x269E14u;
    // 0x269e14: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269e18: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269e1c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269e20: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269e24: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269e28:
    // 0x269e28: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x269e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x269e2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269e30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269E30u;
    {
        const bool branch_taken_0x269e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E30u;
        // 0x269e34: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e30) {
            ctx->pc = 0x269E44u;
            goto label_269e44;
        }
    }
    ctx->pc = 0x269E38u;
    // 0x269e38: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269e3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269E3Cu;
    {
        const bool branch_taken_0x269e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E3Cu;
        // 0x269e40: 0x8c42007c  lw          $v0, 0x7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e3c) {
            ctx->pc = 0x269E48u;
            goto label_269e48;
        }
    }
    ctx->pc = 0x269E44u;
label_269e44:
    // 0x269e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269e48:
    // 0x269e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x269E4Cu;
    {
        const bool branch_taken_0x269e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e4c) {
            ctx->pc = 0x269E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269E4Cu;
            // 0x269e50: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269E68u;
            goto label_269e68;
        }
    }
    ctx->pc = 0x269E54u;
    // 0x269e54: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269e58: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269e5c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269e60: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269e64: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269e68:
    // 0x269e68: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x269e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x269e6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269E70u;
    {
        const bool branch_taken_0x269e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E70u;
        // 0x269e74: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e70) {
            ctx->pc = 0x269E84u;
            goto label_269e84;
        }
    }
    ctx->pc = 0x269E78u;
    // 0x269e78: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269e7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269E7Cu;
    {
        const bool branch_taken_0x269e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E7Cu;
        // 0x269e80: 0x8c420080  lw          $v0, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e7c) {
            ctx->pc = 0x269E88u;
            goto label_269e88;
        }
    }
    ctx->pc = 0x269E84u;
label_269e84:
    // 0x269e84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269e88:
    // 0x269e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x269E8Cu;
    {
        const bool branch_taken_0x269e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e8c) {
            ctx->pc = 0x269E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269E8Cu;
            // 0x269e90: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269E94u;
    // 0x269e94: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269e98: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269e9c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269ea0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269ea4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269ea8:
    // 0x269ea8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x269ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x269eac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269eb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269EB0u;
    {
        const bool branch_taken_0x269eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EB0u;
        // 0x269eb4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269eb0) {
            ctx->pc = 0x269EC4u;
            goto label_269ec4;
        }
    }
    ctx->pc = 0x269EB8u;
    // 0x269eb8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269ebc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269EBCu;
    {
        const bool branch_taken_0x269ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EBCu;
        // 0x269ec0: 0x8c420084  lw          $v0, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ebc) {
            ctx->pc = 0x269EC8u;
            goto label_269ec8;
        }
    }
    ctx->pc = 0x269EC4u;
label_269ec4:
    // 0x269ec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x269ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269ec8:
    // 0x269ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ecc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x269ECCu;
    {
        const bool branch_taken_0x269ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ecc) {
            ctx->pc = 0x269ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269ECCu;
            // 0x269ed0: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269EE8u;
            goto label_269ee8;
        }
    }
    ctx->pc = 0x269ED4u;
    // 0x269ed4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269ed8: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269edc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269ee0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269ee4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269ee8:
    // 0x269ee8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x269ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x269eec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269EF0u;
    {
        const bool branch_taken_0x269ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EF0u;
        // 0x269ef4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ef0) {
            ctx->pc = 0x269F04u;
            goto label_269f04;
        }
    }
    ctx->pc = 0x269EF8u;
    // 0x269ef8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269efc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269EFCu;
    {
        const bool branch_taken_0x269efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EFCu;
        // 0x269f00: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269efc) {
            ctx->pc = 0x269F08u;
            goto label_269f08;
        }
    }
    ctx->pc = 0x269F04u;
label_269f04:
    // 0x269f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x269f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269f08:
    // 0x269f08: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x269F08u;
    {
        const bool branch_taken_0x269f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F08u;
        // 0x269f0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f08) {
            ctx->pc = 0x26A004u;
            goto label_26a004;
        }
    }
    ctx->pc = 0x269F10u;
    // 0x269f10: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269f14: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x269f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x269f18: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269f1c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x269F1Cu;
    {
        const bool branch_taken_0x269f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F1Cu;
        // 0x269f20: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f1c) {
            ctx->pc = 0x26A004u;
            goto label_26a004;
        }
    }
    ctx->pc = 0x269F24u;
label_269f24:
    // 0x269f24: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x269f28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x269f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x269f2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269F30u;
    {
        const bool branch_taken_0x269f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F30u;
        // 0x269f34: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f30) {
            ctx->pc = 0x269F44u;
            goto label_269f44;
        }
    }
    ctx->pc = 0x269F38u;
    // 0x269f38: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269F3Cu;
    {
        const bool branch_taken_0x269f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F3Cu;
        // 0x269f40: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f3c) {
            ctx->pc = 0x269F48u;
            goto label_269f48;
        }
    }
    ctx->pc = 0x269F44u;
label_269f44:
    // 0x269f44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x269f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269f48:
    // 0x269f48: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x269F48u;
    {
        const bool branch_taken_0x269f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f48) {
            ctx->pc = 0x269F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269F48u;
            // 0x269f4c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269F74u;
            goto label_269f74;
        }
    }
    ctx->pc = 0x269F50u;
    // 0x269f50: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269f54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x269f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x269f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x269f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269f5c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269f60: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269f64: 0xc60016f4  lwc1        $f0, 0x16F4($s0)
    ctx->pc = 0x269f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269f6c: 0xe4800150  swc1        $f0, 0x150($a0)
    ctx->pc = 0x269f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x269f70: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_269f74:
    // 0x269f74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x269f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x269f78: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269f7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269F7Cu;
    {
        const bool branch_taken_0x269f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F7Cu;
        // 0x269f80: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f7c) {
            ctx->pc = 0x269F90u;
            goto label_269f90;
        }
    }
    ctx->pc = 0x269F84u;
    // 0x269f84: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269F88u;
    {
        const bool branch_taken_0x269f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F88u;
        // 0x269f8c: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f88) {
            ctx->pc = 0x269F94u;
            goto label_269f94;
        }
    }
    ctx->pc = 0x269F90u;
label_269f90:
    // 0x269f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x269f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269f94:
    // 0x269f94: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x269F94u;
    {
        const bool branch_taken_0x269f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f94) {
            ctx->pc = 0x269F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269F94u;
            // 0x269f98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A004u;
            goto label_26a004;
        }
    }
    ctx->pc = 0x269F9Cu;
    // 0x269f9c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x269f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x269fa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x269fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x269fa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x269fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269fa8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269fac: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x269facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x269fb0: 0xc60016f4  lwc1        $f0, 0x16F4($s0)
    ctx->pc = 0x269fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269fb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x269fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269fb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x269FB8u;
    {
        const bool branch_taken_0x269fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FB8u;
        // 0x269fbc: 0xe4800150  swc1        $f0, 0x150($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fb8) {
            ctx->pc = 0x26A000u;
            goto label_26a000;
        }
    }
    ctx->pc = 0x269FC0u;
label_269fc0:
    // 0x269fc0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x269fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x269fc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x269fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x269fc8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269fcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269FCCu;
    {
        const bool branch_taken_0x269fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FCCu;
        // 0x269fd0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fcc) {
            ctx->pc = 0x269FE0u;
            goto label_269fe0;
        }
    }
    ctx->pc = 0x269FD4u;
    // 0x269fd4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x269fd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269FD8u;
    {
        const bool branch_taken_0x269fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FD8u;
        // 0x269fdc: 0x8c430040  lw          $v1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fd8) {
            ctx->pc = 0x269FE4u;
            goto label_269fe4;
        }
    }
    ctx->pc = 0x269FE0u;
label_269fe0:
    // 0x269fe0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x269fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269fe4:
    // 0x269fe4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269FE4u;
    {
        const bool branch_taken_0x269fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fe4) {
            ctx->pc = 0x269FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269FE4u;
            // 0x269fe8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A004u;
            goto label_26a004;
        }
    }
    ctx->pc = 0x269FECu;
    // 0x269fec: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x269fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x269ff0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x269ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x269ff4: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x269ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x269ff8: 0xc60016f4  lwc1        $f0, 0x16F4($s0)
    ctx->pc = 0x269ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269ffc: 0xe4600150  swc1        $f0, 0x150($v1)
    ctx->pc = 0x269ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
label_26a000:
    // 0x26a000: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26a000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26a004:
    // 0x26a004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a008: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x26a008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a00c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A00Cu;
        // 0x26a010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A014u;
    // 0x26a014: 0x0  nop
    ctx->pc = 0x26a014u;
    // NOP
    ctx->pc = 0x26a018u;
}
