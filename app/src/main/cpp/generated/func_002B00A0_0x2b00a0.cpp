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

// Function: func_002B00A0
// Address: 0x2b00a0 - 0x2b0208
void func_002B00A0_0x2b00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B00A0_0x2b00a0");
#endif

    switch (ctx->pc) {
        case 0x2b01c8u: goto label_2b01c8;
        case 0x2b01f8u: goto label_2b01f8;
        default: break;
    }

    ctx->pc = 0x2b00a0u;

    // 0x2b00a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b00a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b00a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b00a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2b00a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2b00ac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b00b0: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x2b00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x2b00b4: 0x84a40054  lh          $a0, 0x54($a1)
    ctx->pc = 0x2b00b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2b00b8: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2b00b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b00bc: 0x1464004f  bne         $v1, $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B00BCu;
    {
        const bool branch_taken_0x2b00bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00BCu;
        // 0x2b00c0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00bc) {
            ctx->pc = 0x2B01FCu;
            goto label_2b01fc;
        }
    }
    ctx->pc = 0x2B00C4u;
    // 0x2b00c4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b00c8: 0xc4a60088  lwc1        $f6, 0x88($a1)
    ctx->pc = 0x2b00c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b00cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b00ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b00d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B00D0u;
    {
        const bool branch_taken_0x2b00d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00D0u;
        // 0x2b00d4: 0xc4a3008c  lwc1        $f3, 0x8C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00d0) {
            ctx->pc = 0x2B00F4u;
            goto label_2b00f4;
        }
    }
    ctx->pc = 0x2B00D8u;
    // 0x2b00d8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2b00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b00dc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b00dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b00e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b00e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b00e4: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x2b00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b00e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b00e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b00ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b00ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b00f0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b00f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2b00f4:
    // 0x2b00f4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b00f8: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2b00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2b00fc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2b00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b0100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0104: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0104u;
    {
        const bool branch_taken_0x2b0104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0104) {
            ctx->pc = 0x2B0108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0104u;
            // 0x2b0108: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
            ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0120u;
            goto label_2b0120;
        }
    }
    ctx->pc = 0x2B010Cu;
    // 0x2b010c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2b010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2b0110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b0110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0114: 0x0  nop
    ctx->pc = 0x2b0114u;
    // NOP
    // 0x2b0118: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b0118u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b011c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2b011cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2b0120:
    // 0x2b0120: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x2b0120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x2b0124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b0124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0128: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b012c: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x2b012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x2b0130: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b0130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b0134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0138: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2b0138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2b013c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b0140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0144: 0x3c014208  lui         $at, 0x4208
    ctx->pc = 0x2b0144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16904 << 16));
    // 0x2b0148: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b0148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b014c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2b014cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b0150: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2b0150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2b0154: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2b0154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2b0158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b015c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2b015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b0160: 0x46040141  sub.s       $f5, $f0, $f4
    ctx->pc = 0x2b0160u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2b0164: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x2b0164u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x2b0168: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x2b0168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2b016c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2b016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2b0170: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2b0170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2b0174: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2b0174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2b0178: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x2b0178u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2b017c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x2b017cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b0180: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2b0180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b0184: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x2b0184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2b0188: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2b0188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2b018c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2b018cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b0190: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b0190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b0194: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b0194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2b0198: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x2b0198u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b019c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2b019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b01a0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2b01a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b01a4: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2b01a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2b01a8: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x2b01a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b01ac: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x2b01acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2b01b0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2b01b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b01b4: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x2b01b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2b01b8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x2b01b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b01bc: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2b01bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b01c0: 0xc0ab38a  jal         func_2ACE28
    ctx->pc = 0x2B01C0u;
    SET_GPR_U32(ctx, 31, 0x2B01C8u);
    ctx->pc = 0x2B01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01C0u;
    // 0x2b01c4: 0xe7a1007c  swc1        $f1, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE28u, 0x2B01C0u, 0x2B01C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01C8u;
label_2b01c8:
    // 0x2b01c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b01cc: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x2b01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x2b01d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2b01d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b01d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01d8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2b01d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b01dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b01e0: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x2b01e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x2b01e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b01e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b01e8: 0x24083b00  addiu       $t0, $zero, 0x3B00
    ctx->pc = 0x2b01e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2b01ec: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x2b01ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2b01f0: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x2B01F0u;
    SET_GPR_U32(ctx, 31, 0x2B01F8u);
    ctx->pc = 0x2B01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01F0u;
    // 0x2b01f4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x2B01F0u, 0x2B01F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01F8u;
label_2b01f8:
    // 0x2b01f8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2b01f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b01fc:
    // 0x2b01fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b01fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b0200: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0200u;
        // 0x2b0204: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0208u;
}
