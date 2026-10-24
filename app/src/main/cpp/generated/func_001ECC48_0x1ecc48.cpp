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

// Function: func_001ECC48
// Address: 0x1ecc48 - 0x1ece30
void func_001ECC48_0x1ecc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ECC48_0x1ecc48");
#endif

    switch (ctx->pc) {
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecd40u: goto label_1ecd40;
        case 0x1ecdecu: goto label_1ecdec;
        case 0x1ece0cu: goto label_1ece0c;
        default: break;
    }

    ctx->pc = 0x1ecc48u;

    // 0x1ecc48: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1ecc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc50: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1ecc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1ecc54: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1ecc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ecc58: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1ecc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1ecc5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ecc5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc60: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1ecc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1ecc64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecc68: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1ecc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1ecc6c: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1ecc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ecc70: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1ecc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1ecc74: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1ecc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ecc78: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ecc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ecc7c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1ecc7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc80: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1ecc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1ecc84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ecc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ecc88: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1ecc88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1ecc8c: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1ecc8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ecc90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ecc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecc94: 0x0  nop
    ctx->pc = 0x1ecc94u;
    // NOP
label_1ecc98:
    // 0x1ecc98: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1ecc98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ecc9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ecc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ecca0: 0x0  nop
    ctx->pc = 0x1ecca0u;
    // NOP
    // 0x1ecca4: 0x0  nop
    ctx->pc = 0x1ecca4u;
    // NOP
    // 0x1ecca8: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECCA8u;
    {
        const bool branch_taken_0x1ecca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ECCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCA8u;
        // 0x1eccac: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecca8) {
            ctx->pc = 0x1ECC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecc98;
        }
    }
    ctx->pc = 0x1ECCB0u;
    // 0x1eccb0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1eccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eccb4: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1eccb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eccb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1eccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1eccbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eccbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eccc0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1eccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1eccc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eccc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1eccc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ecccc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1eccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eccd0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1eccd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1eccd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eccd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eccd8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1eccd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1eccdc: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1eccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1ecce0: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1ecce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ecce4: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1ecce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1ecce8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1ecce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1eccec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eccf0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1eccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eccf4: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1eccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1eccf8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1eccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eccfc: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1ecd00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ecd00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ecd04: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1ecd04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ecd08: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x1ecd08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ecd0c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ecd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1ecd10: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1ecd10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1ecd14: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1ecd14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ecd18: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1ecd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1ecd1c: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1ecd1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ecd20: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1ecd20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1ecd24: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ecd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecd28: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1ecd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecd2c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1ecd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ecd30: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ecd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ecd34: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1ecd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ecd38: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x1ECD38u;
    SET_GPR_U32(ctx, 31, 0x1ECD40u);
    ctx->pc = 0x1ECD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD38u;
    // 0x1ecd3c: 0xe7a200b8  swc1        $f2, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x1ECD38u, 0x1ECD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD40u;
label_1ecd40:
    // 0x1ecd40: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1ecd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecd44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ecd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd48: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ecd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecd4c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1ecd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1ecd50: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1ecd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ecd54: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x1ecd54u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x1ecd58: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1ecd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1ecd5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ecd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ecd60: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1ecd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1ecd64: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x1ecd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x1ecd68: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1ecd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ecd6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd70: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1ecd70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ecd74: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1ecd74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1ecd78: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1ecd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1ecd7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ecd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecd80: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ecd80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1ecd84: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x1ecd84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x1ecd88: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1ecd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1ecd8c: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x1ecd8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ecd90: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1ecd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1ecd94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ecd94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd98: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1ecd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1ecd9c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ecd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecda0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1ecda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecda4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1ecda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ecda8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1ecda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1ecdac: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1ecdacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1ecdb0: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1ecdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1ecdb4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ecdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecdb8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1ecdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecdbc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1ecdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ecdc0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1ecdc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ecdc4: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1ecdc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1ecdc8: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1ecdcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ecdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecdd0: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x1ecdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x1ecdd4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ecdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1ecdd8: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1ecdd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ecddc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ecddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ecde0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ecde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ecde4: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x1ECDE4u;
    SET_GPR_U32(ctx, 31, 0x1ECDECu);
    ctx->pc = 0x1ECDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDE4u;
    // 0x1ecde8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x1ECDE4u, 0x1ECDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDECu;
label_1ecdec:
    // 0x1ecdec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ecdecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdf0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECDF0u;
    {
        const bool branch_taken_0x1ecdf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecdf0) {
            ctx->pc = 0x1ECE04u;
            goto label_1ece04;
        }
    }
    ctx->pc = 0x1ECDF8u;
    // 0x1ecdf8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1ecdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1ecdfc: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1ecdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x1ece00: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x1ece00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_1ece04:
    // 0x1ece04: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1ECE04u;
    SET_GPR_U32(ctx, 31, 0x1ECE0Cu);
    ctx->pc = 0x1ECE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE04u;
    // 0x1ece08: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1ECE04u, 0x1ECE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE0Cu;
label_1ece0c:
    // 0x1ece0c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1ece0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ece10: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1ece10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ece14: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1ece14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ece18: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1ece18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ece1c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1ece1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ece20: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1ece20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ece24: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1ece24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ece28: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE28u;
        // 0x1ece2c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECE30u;
}
