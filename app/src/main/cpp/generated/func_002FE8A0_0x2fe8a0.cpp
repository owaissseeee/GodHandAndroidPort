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

// Function: func_002FE8A0
// Address: 0x2fe8a0 - 0x2feb18
void func_002FE8A0_0x2fe8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FE8A0_0x2fe8a0");
#endif

    switch (ctx->pc) {
        case 0x2fe974u: goto label_2fe974;
        case 0x2fe988u: goto label_2fe988;
        case 0x2fe990u: goto label_2fe990;
        case 0x2fe9a0u: goto label_2fe9a0;
        default: break;
    }

    ctx->pc = 0x2fe8a0u;

    // 0x2fe8a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2fe8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2fe8a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fe8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8a8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2fe8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2fe8ac: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2fe8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2fe8b0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2fe8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fe8b4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2fe8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2fe8b8: 0x24b10030  addiu       $s1, $a1, 0x30
    ctx->pc = 0x2fe8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2fe8bc: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2fe8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2fe8c0: 0x3c12000f  lui         $s2, 0xF
    ctx->pc = 0x2fe8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15 << 16));
    // 0x2fe8c4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2fe8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2fe8c8: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2fe8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fe8cc: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2fe8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2fe8d0: 0x3414fec0  ori         $s4, $zero, 0xFEC0
    ctx->pc = 0x2fe8d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65216);
    // 0x2fe8d4: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2fe8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2fe8d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2fe8d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8dc: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2fe8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2fe8e0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2fe8e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8e4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2fe8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2fe8e8: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x2fe8e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2fe8ec: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2fe8ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2fe8f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2fe8f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe8f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2fe8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2fe8f8: 0x3652ff00  ori         $s2, $s2, 0xFF00
    ctx->pc = 0x2fe8f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65280);
    // 0x2fe8fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fe8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe900: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2fe900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2fe904: 0xc4400214  lwc1        $f0, 0x214($v0)
    ctx->pc = 0x2fe904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe908: 0xc4430218  lwc1        $f3, 0x218($v0)
    ctx->pc = 0x2fe908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe90c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2fe90cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2fe910: 0xc4420210  lwc1        $f2, 0x210($v0)
    ctx->pc = 0x2fe910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe914: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2fe914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2fe918: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x2fe918u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2fe91c: 0x46001947  neg.s       $f5, $f3
    ctx->pc = 0x2fe91cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[3]);
    // 0x2fe920: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x2fe920u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2fe924: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fe924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2fe928: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2fe928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2fe92c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fe92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fe930: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x2fe930u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fe934: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2fe934u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2fe938: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2fe938u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fe93c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fe93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fe940: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2fe940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fe944: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2fe944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2fe948: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2fe948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2fe94c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fe94cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fe950: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2fe950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fe954: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2fe954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fe958: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2fe958u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2fe95c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2fe95cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2fe960: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2fe960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fe964: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2fe964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fe968: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2fe968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2fe96c: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2FE96Cu;
    SET_GPR_U32(ctx, 31, 0x2FE974u);
    ctx->pc = 0x2FE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE96Cu;
    // 0x2fe970: 0xe7a4001c  swc1        $f4, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2FE96Cu, 0x2FE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE974u;
label_2fe974:
    // 0x2fe974: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2fe974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2fe978: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fe978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fe97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe980: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2FE980u;
    SET_GPR_U32(ctx, 31, 0x2FE988u);
    ctx->pc = 0x2FE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE980u;
    // 0x2fe984: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2FE980u, 0x2FE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE988u;
label_2fe988:
    // 0x2fe988: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2fe988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fe98c: 0x0  nop
    ctx->pc = 0x2fe98cu;
    // NOP
label_2fe990:
    // 0x2fe990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe994: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2fe994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fe998: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE998u;
    SET_GPR_U32(ctx, 31, 0x2FE9A0u);
    ctx->pc = 0x2FE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE998u;
    // 0x2fe99c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE998u, 0x2FE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9A0u;
label_2fe9a0:
    // 0x2fe9a0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2fe9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe9a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fe9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2fe9a8: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2fe9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2fe9ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2fe9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2fe9b0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2fe9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe9b4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2fe9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2fe9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe9bc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2fe9bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2fe9c0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fe9c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2fe9c4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2fe9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2fe9c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fe9c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fe9cc: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2fe9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2fe9d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fe9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fe9d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fe9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fe9d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2fe9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2fe9dc: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2fe9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fe9e0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2fe9e4: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x2fe9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x2fe9e8: 0x24e3ff60  addiu       $v1, $a3, -0xA0
    ctx->pc = 0x2fe9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967136));
    // 0x2fe9ec: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2fe9ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2fe9f0: 0x8ca26b80  lw          $v0, 0x6B80($a1)
    ctx->pc = 0x2fe9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27520)));
    // 0x2fe9f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fe9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fe9f8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2fe9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fe9fc: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2FE9FCu;
    {
        const bool branch_taken_0x2fe9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9FCu;
        // 0x2fea00: 0xae260004  sw          $a2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9fc) {
            ctx->pc = 0x2FEAB8u;
            goto label_2feab8;
        }
    }
    ctx->pc = 0x2FEA04u;
    // 0x2fea04: 0x24c2ff60  addiu       $v0, $a2, -0xA0
    ctx->pc = 0x2fea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967136));
    // 0x2fea08: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2fea08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fea0c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FEA0Cu;
    {
        const bool branch_taken_0x2fea0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA0Cu;
        // 0x2fea10: 0x3c08003c  lui         $t0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea0c) {
            ctx->pc = 0x2FEAB8u;
            goto label_2feab8;
        }
    }
    ctx->pc = 0x2FEA14u;
    // 0x2fea14: 0x8ca56b80  lw          $a1, 0x6B80($a1)
    ctx->pc = 0x2fea14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27520)));
    // 0x2fea18: 0x8d031180  lw          $v1, 0x1180($t0)
    ctx->pc = 0x2fea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4480)));
    // 0x2fea1c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2fea1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2fea20: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2fea20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2fea24: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2fea24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2fea28: 0x8d04118c  lw          $a0, 0x118C($t0)
    ctx->pc = 0x2fea28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2fea2c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2fea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2fea30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fea34: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x2fea34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x2fea38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fea38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fea3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2fea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2fea40: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2fea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2fea44: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2fea44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fea48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2fea48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fea4c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2fea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fea50: 0x86202a  slt         $a0, $a0, $a2
    ctx->pc = 0x2fea50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2fea54: 0xc5282a  slt         $a1, $a2, $a1
    ctx->pc = 0x2fea54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fea58: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2fea58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2fea5c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2fea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fea60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2fea64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fea64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fea68: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2fea68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fea6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fea6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fea70: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2fea70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2fea74: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x2fea74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2fea78: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2fea78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2fea7c: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x2fea7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2fea80: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x2fea80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
    // 0x2fea84: 0x2c5b021  addu        $s6, $s6, $a1
    ctx->pc = 0x2fea84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2fea88: 0x2a4a821  addu        $s5, $s5, $a0
    ctx->pc = 0x2fea88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2fea8c: 0x661ffc0  bgez        $s3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2FEA8Cu;
    {
        const bool branch_taken_0x2fea8c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x2FEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA8Cu;
        // 0x2fea90: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea8c) {
            ctx->pc = 0x2FE990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe990;
        }
    }
    ctx->pc = 0x2FEA94u;
    // 0x2fea94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fea98: 0x50c20011  beql        $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FEA98u;
    {
        const bool branch_taken_0x2fea98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fea98) {
            ctx->pc = 0x2FEA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEA98u;
            // 0x2fea9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEAE0u;
            goto label_2feae0;
        }
    }
    ctx->pc = 0x2FEAA0u;
    // 0x2feaa0: 0x53c2000f  beql        $fp, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FEAA0u;
    {
        const bool branch_taken_0x2feaa0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x2feaa0) {
            ctx->pc = 0x2FEAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEAA0u;
            // 0x2feaa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEAE0u;
            goto label_2feae0;
        }
    }
    ctx->pc = 0x2FEAA8u;
    // 0x2feaa8: 0x52c2000d  beql        $s6, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FEAA8u;
    {
        const bool branch_taken_0x2feaa8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2feaa8) {
            ctx->pc = 0x2FEAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEAA8u;
            // 0x2feaac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEAE0u;
            goto label_2feae0;
        }
    }
    ctx->pc = 0x2FEAB0u;
    // 0x2feab0: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEAB0u;
    {
        const bool branch_taken_0x2feab0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAB0u;
        // 0x2feab4: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feab0) {
            ctx->pc = 0x2FEAC0u;
            goto label_2feac0;
        }
    }
    ctx->pc = 0x2FEAB8u;
label_2feab8:
    // 0x2feab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEAB8u;
    {
        const bool branch_taken_0x2feab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAB8u;
        // 0x2feabc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feab8) {
            ctx->pc = 0x2FEAE0u;
            goto label_2feae0;
        }
    }
    ctx->pc = 0x2FEAC0u;
label_2feac0:
    // 0x2feac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2feac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2feac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2feac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feac8: 0x2483b7a8  addiu       $v1, $a0, -0x4858
    ctx->pc = 0x2feac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948776));
    // 0x2feacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2feaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fead0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2fead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2fead4: 0xe480b7a8  swc1        $f0, -0x4858($a0)
    ctx->pc = 0x2fead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294948776), bits); }
    // 0x2fead8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2fead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2feadc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2feadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2feae0:
    // 0x2feae0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2feae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2feae4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2feae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2feae8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2feae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2feaec: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2feaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2feaf0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2feaf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2feaf4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2feaf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2feaf8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2feaf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2feafc: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2feafcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2feb00: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2feb00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2feb04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2feb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2feb08: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2feb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2feb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB0Cu;
        // 0x2feb10: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEB14u;
    // 0x2feb14: 0x0  nop
    ctx->pc = 0x2feb14u;
    // NOP
    ctx->pc = 0x2feb18u;
}
