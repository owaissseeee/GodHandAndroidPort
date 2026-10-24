#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: SetTime__12PetitDevilIdbfT1
// Address: 0x7998e8 - 0x799af8
void SetTime__12PetitDevilIdbfT1_0x7998e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTime__12PetitDevilIdbfT1_0x7998e8");
#endif

    switch (ctx->pc) {
        case 0x7999b8u: goto label_7999b8;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999d0u: goto label_7999d0;
        case 0x799a30u: goto label_799a30;
        case 0x799a40u: goto label_799a40;
        case 0x799a50u: goto label_799a50;
        case 0x799a60u: goto label_799a60;
        case 0x799a70u: goto label_799a70;
        case 0x799a80u: goto label_799a80;
        case 0x799a90u: goto label_799a90;
        case 0x799aa0u: goto label_799aa0;
        case 0x799ab0u: goto label_799ab0;
        case 0x799ac0u: goto label_799ac0;
        default: break;
    }

    ctx->pc = 0x7998e8u;

    // 0x7998e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x7998ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7998ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7998f0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x7998f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x7998f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x7998f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x7998f8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7998f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7998fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x7998fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799900: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x799904: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x799904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x799908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79990c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799910: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799914: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799918: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79991c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799920: 0x4600a146  mov.s       $f5, $f20
    ctx->pc = 0x799920u;
    ctx->f[5] = FPU_MOV_S(ctx->f[20]);
    // 0x799924: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x799928: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x799928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79992c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x799930: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x799930u;
    {
        const bool branch_taken_0x799930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799930) {
            ctx->pc = 0x79993Cu;
            goto label_79993c;
        }
    }
    ctx->pc = 0x799938u;
    // 0x799938: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x799938u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_79993c:
    // 0x79993c: 0x3c0144e1  lui         $at, 0x44E1
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17633 << 16));
    // 0x799940: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799944: 0x26550ae0  addiu       $s5, $s2, 0xAE0
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2784));
    // 0x799948: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79994c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79994cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799954: 0x46032843  div.s       $f1, $f5, $f3
    ctx->pc = 0x799954u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[3]);
    // 0x799958: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x79995c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79995cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x799960: 0x26540b5c  addiu       $s4, $s2, 0xB5C
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2908));
    // 0x799964: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x799964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x799968: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x799968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x79996c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x79996cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799970: 0x0  nop
    ctx->pc = 0x799970u;
    // NOP
    // 0x799974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x799974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x799978: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x799978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x79997c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x79997cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x799980: 0x46022843  div.s       $f1, $f5, $f2
    ctx->pc = 0x799980u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[2]);
    // 0x799984: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x799984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x799988: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x799988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x79998c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x79998cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799990: 0x0  nop
    ctx->pc = 0x799990u;
    // NOP
    // 0x799994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x799994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x799998: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x799998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x79999c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x79999cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x7999a0: 0x46022883  div.s       $f2, $f5, $f2
    ctx->pc = 0x7999a0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[2]);
    // 0x7999a4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x7999a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x7999a8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7999a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7999ac: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x7999acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x7999b0: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x7999B0u;
    SET_GPR_U32(ctx, 31, 0x7999B8u);
    ctx->pc = 0x7999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B0u;
    // 0x7999b4: 0x26570bd8  addiu       $s7, $s2, 0xBD8 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 3032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x7999B0u, 0x7999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B8u;
label_7999b8:
    // 0x7999b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7999b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999bc: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x7999BCu;
    SET_GPR_U32(ctx, 31, 0x7999C4u);
    ctx->pc = 0x7999C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999BCu;
    // 0x7999c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x7999BCu, 0x7999C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7999c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c8: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x12c00028  beqz        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799A74u;
            goto label_799a74;
        }
    }
    ctx->pc = 0x7999D8u;
    // 0x7999d8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x7999dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7999dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7999e0: 0x0  nop
    ctx->pc = 0x7999e0u;
    // NOP
    // 0x7999e4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x7999e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7999e8: 0x0  nop
    ctx->pc = 0x7999e8u;
    // NOP
    // 0x7999ec: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x7999ECu;
    {
        const bool branch_taken_0x7999ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0x2410ff00  addiu       $s0, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ec) {
            ctx->pc = 0x799A74u;
            goto label_799a74;
        }
    }
    ctx->pc = 0x7999F4u;
    // 0x7999f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x7999f8: 0x3d08024  and         $s0, $fp, $s0
    ctx->pc = 0x7999f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 16));
    // 0x7999fc: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x799a00: 0x3610008a  ori         $s0, $s0, 0x8A
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)138);
    // 0x799a04: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x799a08: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x799a08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x799a0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x799a10: 0x36102600  ori         $s0, $s0, 0x2600
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9728);
    // 0x799a14: 0x26440a64  addiu       $a0, $s2, 0xA64
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2660));
    // 0x799a18: 0x3210268a  andi        $s0, $s0, 0x268A
    ctx->pc = 0x799a18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)9866);
    // 0x799a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a20: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x799a24: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x799a24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x799a28: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799A28u;
    SET_GPR_U32(ctx, 31, 0x799A30u);
    ctx->pc = 0x799A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A28u;
    // 0x799a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799A28u, 0x799A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A30u;
label_799a30:
    // 0x799a30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a38: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799A38u;
    SET_GPR_U32(ctx, 31, 0x799A40u);
    ctx->pc = 0x799A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A38u;
    // 0x799a3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799A38u, 0x799A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A40u;
label_799a40:
    // 0x799a40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a48: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x799a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a58: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799A58u;
    SET_GPR_U32(ctx, 31, 0x799A60u);
    ctx->pc = 0x799A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A58u;
    // 0x799a5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799A58u, 0x799A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a64: 0x26440c54  addiu       $a0, $s2, 0xC54
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3156));
    // 0x799a68: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x799A68u;
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799a74:
    // 0x799a74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a78: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a88: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799A88u;
    SET_GPR_U32(ctx, 31, 0x799A90u);
    ctx->pc = 0x799A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A88u;
    // 0x799a8c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799A88u, 0x799A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A90u;
label_799a90:
    // 0x799a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a98: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799A98u;
    SET_GPR_U32(ctx, 31, 0x799AA0u);
    ctx->pc = 0x799A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A98u;
    // 0x799a9c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799A98u, 0x799AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aa8: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799AA8u;
    SET_GPR_U32(ctx, 31, 0x799AB0u);
    ctx->pc = 0x799AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA8u;
    // 0x799aac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799AA8u, 0x799AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x799AB8u;
    SET_GPR_U32(ctx, 31, 0x799AC0u);
    ctx->pc = 0x799ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB8u;
    // 0x799abc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x799AB8u, 0x799AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC0u;
label_799ac0:
    // 0x799ac0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x799ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799ac4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x799ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799ac8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x799ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799acc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x799accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799ad0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x799ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799ad4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x799ad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799ad8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x799ad8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799adc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x799adcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799ae0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x799ae0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ae8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x799ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799aec: 0x3e00008  jr          $ra
    ctx->pc = 0x799AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AECu;
        // 0x799af0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AF4u;
    // 0x799af4: 0x0  nop
    ctx->pc = 0x799af4u;
    // NOP
    ctx->pc = 0x799af8u;
}
} // namespace gh_r040
