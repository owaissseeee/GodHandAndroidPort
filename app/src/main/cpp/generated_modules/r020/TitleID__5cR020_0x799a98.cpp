#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: TitleID__5cR020
// Address: 0x799a98 - 0x799e40
void TitleID__5cR020_0x799a98(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleID__5cR020_0x799a98");
#endif

    if (__builtin_expect(ctx->pc != 0x799a98u, 0)) {
        switch (ctx->pc) {
            case 0x799b14u: goto label_799b14;
            case 0x799b30u: goto label_799b30;
            case 0x799b58u: goto label_799b58;
            case 0x799b74u: goto label_799b74;
            case 0x799ba4u: goto label_799ba4;
            case 0x799bb8u: goto label_799bb8;
            case 0x799bdcu: goto label_799bdc;
            case 0x799c00u: goto label_799c00;
            case 0x799c10u: goto label_799c10;
            case 0x799c34u: goto label_799c34;
            case 0x799c44u: goto label_799c44;
            case 0x799c68u: goto label_799c68;
            case 0x799c78u: goto label_799c78;
            case 0x799c94u: goto label_799c94;
            case 0x799ca4u: goto label_799ca4;
            case 0x799cc0u: goto label_799cc0;
            case 0x799cd0u: goto label_799cd0;
            case 0x799cecu: goto label_799cec;
            case 0x799cfcu: goto label_799cfc;
            case 0x799d18u: goto label_799d18;
            case 0x799d28u: goto label_799d28;
            case 0x799d44u: goto label_799d44;
            case 0x799d54u: goto label_799d54;
            case 0x799d70u: goto label_799d70;
            case 0x799d80u: goto label_799d80;
            case 0x799dd8u: goto label_799dd8;
            case 0x799df4u: goto label_799df4;
            case 0x799e14u: goto label_799e14;
            case 0x799e1cu: goto label_799e1c;
            default: break;
        }
    }



    // 0x799a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799a9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799aa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799aa4: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ab0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x799ab0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x799ab4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x799ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x799ab8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x799ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x799abc: 0x30620001  andi        $v0, $v1, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x799ac0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x799AC0u;
    {
        const bool branch_taken_0x799ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC0u;
        // 0x799ac4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac0) {
            ctx->pc = 0x799B40u;
            goto label_799b40;
        }
    }
    // 0x799ac8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x799ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799acc: 0x3c014060  lui         $at, 0x4060
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x799ad0: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799ad4: 0x3c014320  lui         $at, 0x4320
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x799ad8: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x799ae0: 0x46001034  c.lt.s      $f2, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799ae4: 0x0  nop
    // NOP
    // 0x799ae8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x799AE8u;
    {
        const bool branch_taken_0x799ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE8u;
        // 0x799aec: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae8) {
            ctx->pc = 0x799B00u;
            goto label_799b00;
        }
    }
    // 0x799af0: 0x3c0141a0  lui         $at, 0x41A0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x799af4: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799af8: 0x0  nop
    // NOP
    // 0x799afc: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x799afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_799b00:
    // 0x799b00: 0x26220080  addiu       $v0, $s1, 0x80
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x799b04: 0x24050005  addiu       $a1, $zero, 0x5
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799b08: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b0c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799B14u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B0Cu;
    // 0x799b10: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799B14u)) {
        return;
    }
label_799b14:
    // 0x799b14: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x799b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799b18: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b1c: 0x3c013c8e  lui         $at, 0x3C8E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x799b20: 0x3421fa35  ori         $at, $at, 0xFA35
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x799b24: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b28: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799B30u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B28u;
    // 0x799b2c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799B30u)) {
        return;
    }
label_799b30:
    // 0x799b30: 0x3c0142c0  lui         $at, 0x42C0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x799b34: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799b38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x799B38u;
    {
        const bool branch_taken_0x799b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B38u;
        // 0x799b3c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b38) {
            ctx->pc = 0x799B84u;
            goto label_799b84;
        }
    }
label_799b40:
    // 0x799b40: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x799B40u;
    {
        const bool branch_taken_0x799b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B40u;
        // 0x799b44: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b40) {
            ctx->pc = 0x799B94u;
            goto label_799b94;
        }
    }
    // 0x799b48: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799b4c: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b50: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799B58u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B50u;
    // 0x799b54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799B58u)) {
        return;
    }
label_799b58:
    // 0x799b58: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x799b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799b5c: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b60: 0x3c013c8e  lui         $at, 0x3C8E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x799b64: 0x3421fa35  ori         $at, $at, 0xFA35
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x799b68: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799b6c: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799B74u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B6Cu;
    // 0x799b70: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799B74u)) {
        return;
    }
label_799b74:
    // 0x799b74: 0x3c014340  lui         $at, 0x4340
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17216 << 16));
    // 0x799b78: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799b7c: 0x0  nop
    // NOP
    // 0x799b80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_799b84:
    // 0x799b84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799b88: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799b8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799B8Cu;
    {
        const bool branch_taken_0x799b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b8c) {
            ctx->pc = 0x799BACu;
            goto label_799bac;
        }
    }
label_799b94:
    // 0x799b94: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799b98: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b9c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799BA4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B9Cu;
    // 0x799ba0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799BA4u)) {
        return;
    }
label_799ba4:
    // 0x799ba4: 0x240300ff  addiu       $v1, $zero, 0xFF
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x799ba8: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x799ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
label_799bac:
    // 0x799bac: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bb0: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799BB8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BB0u;
    // 0x799bb4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799BB8u)) {
        return;
    }
label_799bb8:
    // 0x799bb8: 0x3c013c8e  lui         $at, 0x3C8E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x799bbc: 0x3421fa35  ori         $at, $at, 0xFA35
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x799bc0: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799bc4: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x799bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799bc8: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bcc: 0x3c014300  lui         $at, 0x4300
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x799bd0: 0x4481a800  mtc1        $at, $f21
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799bd4: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799BDCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BD4u;
    // 0x799bd8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799BDCu)) {
        return;
    }
label_799bdc:
    // 0x799bdc: 0x3c0142c0  lui         $at, 0x42C0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x799be0: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799be4: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799be8: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799bec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x799bf0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799bf4: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799bf8: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799C00u);
    ctx->pc = 0x799BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BF8u;
    // 0x799bfc: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799C00u)) {
        return;
    }
label_799c00:
    // 0x799c00: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x799c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799c04: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c08: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799C10u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C08u;
    // 0x799c0c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799C10u)) {
        return;
    }
label_799c10:
    // 0x799c10: 0x3c014340  lui         $at, 0x4340
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17216 << 16));
    // 0x799c14: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799c18: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c1c: 0x24050007  addiu       $a1, $zero, 0x7
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x799c24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799c28: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799c2c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799C34u);
    ctx->pc = 0x799C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C2Cu;
    // 0x799c30: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799C34u)) {
        return;
    }
label_799c34:
    // 0x799c34: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x799c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799c38: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c3c: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799C44u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C3Cu;
    // 0x799c40: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799C44u)) {
        return;
    }
label_799c44:
    // 0x799c44: 0x3c014320  lui         $at, 0x4320
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x799c48: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799c4c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c50: 0x24050021  addiu       $a1, $zero, 0x21
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x799c54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x799c58: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799c5c: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799c60: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799C68u);
    ctx->pc = 0x799C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C60u;
    // 0x799c64: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799C68u)) {
        return;
    }
label_799c68:
    // 0x799c68: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x799c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799c6c: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c70: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799C78u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C70u;
    // 0x799c74: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799C78u)) {
        return;
    }
label_799c78:
    // 0x799c78: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799c7c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c80: 0x24050024  addiu       $a1, $zero, 0x24
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799c84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799c88: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799c8c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799C94u);
    ctx->pc = 0x799C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C8Cu;
    // 0x799c90: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799C94u)) {
        return;
    }
label_799c94:
    // 0x799c94: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x799c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799c98: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c9c: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799CA4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C9Cu;
    // 0x799ca0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799CA4u)) {
        return;
    }
label_799ca4:
    // 0x799ca4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799ca8: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cac: 0x24050027  addiu       $a1, $zero, 0x27
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x799cb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799cb4: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799cb8: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799CC0u);
    ctx->pc = 0x799CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB8u;
    // 0x799cbc: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799CC0u)) {
        return;
    }
label_799cc0:
    // 0x799cc0: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x799cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799cc4: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cc8: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799CD0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC8u;
    // 0x799ccc: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799CD0u)) {
        return;
    }
label_799cd0:
    // 0x799cd0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799cd4: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cd8: 0x2405000c  addiu       $a1, $zero, 0xC
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799cdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799ce0: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799ce4: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799CECu);
    ctx->pc = 0x799CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE4u;
    // 0x799ce8: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799CECu)) {
        return;
    }
label_799cec:
    // 0x799cec: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x799cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799cf0: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cf4: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799CFCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CF4u;
    // 0x799cf8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799CFCu)) {
        return;
    }
label_799cfc:
    // 0x799cfc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799d00: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d04: 0x24050031  addiu       $a1, $zero, 0x31
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x799d08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799d0c: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799d10: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799D18u);
    ctx->pc = 0x799D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D10u;
    // 0x799d14: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799D18u)) {
        return;
    }
label_799d18:
    // 0x799d18: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x799d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799d1c: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d20: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799D28u)) {
        return;
    }
label_799d28:
    // 0x799d28: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799d2c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d30: 0x24050034  addiu       $a1, $zero, 0x34
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x799d34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799d38: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799d3c: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799D44u);
    ctx->pc = 0x799D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D3Cu;
    // 0x799d40: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799D44u)) {
        return;
    }
label_799d44:
    // 0x799d44: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x799d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799d48: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d4c: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799D54u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D4Cu;
    // 0x799d50: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799D54u)) {
        return;
    }
label_799d54:
    // 0x799d54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799d58: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d5c: 0x24050037  addiu       $a1, $zero, 0x37
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x799d60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799d64: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799d68: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799D70u);
    ctx->pc = 0x799D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D68u;
    // 0x799d6c: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799D70u)) {
        return;
    }
label_799d70:
    // 0x799d70: 0xc62c0048  lwc1        $f12, 0x48($s1)
    ctx->pc = 0x799d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799d74: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d78: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799D80u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D78u;
    // 0x799d7c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799D80u)) {
        return;
    }
label_799d80:
    // 0x799d80: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799d84: 0x24040004  addiu       $a0, $zero, 0x4
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799d88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799d8c: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799d90: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x799d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x799d94: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x799d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x799d98: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D98u;
            // 0x799d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DD0u;
            goto label_799dd0;
        }
    }
    // 0x799da0: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x799da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799da4: 0x3c014000  lui         $at, 0x4000
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799da8: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799dac: 0x3c014334  lui         $at, 0x4334
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x799db0: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799db4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x799db8: 0x46001034  c.lt.s      $f2, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799dbc: 0x0  nop
    // NOP
    // 0x799dc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x799DC0u;
    {
        const bool branch_taken_0x799dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DC0u;
        // 0x799dc4: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dc0) {
            ctx->pc = 0x799DCCu;
            goto label_799dcc;
        }
    }
    // 0x799dc8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x799dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_799dcc:
    // 0x799dcc: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799dd0:
    // 0x799dd0: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x799DD8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD0u;
    // 0x799dd4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2AA410u, 0x799DD8u)) {
        return;
    }
label_799dd8:
    // 0x799dd8: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x799dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799ddc: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799de0: 0x3c013c8e  lui         $at, 0x3C8E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x799de4: 0x3421fa35  ori         $at, $at, 0xFA35
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x799de8: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799dec: 0xc07dfbc  jal         func_1F7EF0
    SET_GPR_U32(ctx, 31, 0x799DF4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DECu;
    // 0x799df0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->callDirectStatic(rdram, ctx, &capVu0Sin_0x1f7ef0, 0x1F7EF0u, 0x799DF4u)) {
        return;
    }
label_799df4:
    // 0x799df4: 0x3c01437f  lui         $at, 0x437F
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x799df8: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799dfc: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x799e04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x799e08: 0x44020800  mfc1        $v0, $f1
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x799e0c: 0xc0aaa90  jal         func_2AAA40
    SET_GPR_U32(ctx, 31, 0x799E14u);
    ctx->pc = 0x799E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E0Cu;
    // 0x799e10: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_move_0x2aaa40, 0x2AAA40u, 0x799E14u)) {
        return;
    }
label_799e14:
    // 0x799e14: 0xc0aab0a  jal         func_2AAC28
    SET_GPR_U32(ctx, 31, 0x799E1Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E14u;
    // 0x799e18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_trans_0x2aac28, 0x2AAC28u, 0x799E1Cu)) {
        return;
    }
label_799e1c:
    // 0x799e1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799e24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799e2c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x799e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799e30: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x799e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799e34: 0x3e00008  jr          $ra
    ctx->pc = 0x799E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E34u;
        // 0x799e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x799e3c: 0x0  nop
    // NOP
    ctx->pc = 0x799e40u;
}
} // namespace gh_r020
