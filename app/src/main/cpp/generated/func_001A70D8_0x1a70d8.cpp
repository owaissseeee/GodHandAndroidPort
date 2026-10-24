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

// Function: func_001A70D8
// Address: 0x1a70d8 - 0x1a7738
void func_001A70D8_0x1a70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A70D8_0x1a70d8");
#endif

    switch (ctx->pc) {
        case 0x1a714cu: goto label_1a714c;
        case 0x1a729cu: goto label_1a729c;
        case 0x1a72d0u: goto label_1a72d0;
        case 0x1a7360u: goto label_1a7360;
        case 0x1a7370u: goto label_1a7370;
        case 0x1a744cu: goto label_1a744c;
        case 0x1a7480u: goto label_1a7480;
        case 0x1a7510u: goto label_1a7510;
        case 0x1a7520u: goto label_1a7520;
        case 0x1a7598u: goto label_1a7598;
        case 0x1a769cu: goto label_1a769c;
        case 0x1a76a4u: goto label_1a76a4;
        default: break;
    }

    ctx->pc = 0x1a70d8u;

    // 0x1a70d8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1a70dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a70dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70e0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1a70e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1a70e4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1a70e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1a70e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a70e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70ec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a70ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1a70f0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1a70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1a70f4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1a70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1a70f8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1a70f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1a70fc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a70fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a7100: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x1a7100u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1a7104: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x1a7104u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1a7108: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x1a7108u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1a710c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1a710cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1a7110: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1a7110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1a7114: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a7114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a7118: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a7118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a711c: 0x0  nop
    ctx->pc = 0x1a711cu;
    // NOP
    // 0x1a7120: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1a7120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7124: 0x0  nop
    ctx->pc = 0x1a7124u;
    // NOP
    // 0x1a7128: 0x45010173  bc1t        . + 4 + (0x173 << 2)
    ctx->pc = 0x1A7128u;
    {
        const bool branch_taken_0x1a7128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7128u;
        // 0x1a712c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7128) {
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A7130u;
    // 0x1a7130: 0x26650600  addiu       $a1, $s3, 0x600
    ctx->pc = 0x1a7130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1536));
    // 0x1a7134: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1a7134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a7138: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a7138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a713c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7144: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1A7144u;
    SET_GPR_U32(ctx, 31, 0x1A714Cu);
    ctx->pc = 0x1A7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7144u;
    // 0x1a7148: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1A7144u, 0x1A714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A714Cu;
label_1a714c:
    // 0x1a714c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a714cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7150: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a7150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7154: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7158: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7158u;
    {
        const bool branch_taken_0x1a7158 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7158u;
        // 0x1a715c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7158) {
            ctx->pc = 0x1A7178u;
            goto label_1a7178;
        }
    }
    ctx->pc = 0x1A7160u;
    // 0x1a7160: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a7160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7164: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a7164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7168: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a7168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a716c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a716cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a7170: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a7170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a7174: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a7174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a7178:
    // 0x1a7178: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a7178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a717c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a717cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a7180: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a7180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7184: 0x4603a802  mul.s       $f0, $f21, $f3
    ctx->pc = 0x1a7184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1a7188: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a7188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a718c: 0x0  nop
    ctx->pc = 0x1a718cu;
    // NOP
    // 0x1a7190: 0x45030159  bc1tl       . + 4 + (0x159 << 2)
    ctx->pc = 0x1A7190u;
    {
        const bool branch_taken_0x1a7190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7190) {
            ctx->pc = 0x1A7194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7190u;
            // 0x1a7194: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A7198u;
    // 0x1a7198: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x1a7198u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x1a719c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a719cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a71a0: 0x0  nop
    ctx->pc = 0x1a71a0u;
    // NOP
    // 0x1a71a4: 0x45030154  bc1tl       . + 4 + (0x154 << 2)
    ctx->pc = 0x1A71A4u;
    {
        const bool branch_taken_0x1a71a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71a4) {
            ctx->pc = 0x1A71A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71A4u;
            // 0x1a71a8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A71ACu;
    // 0x1a71ac: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1a71acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1a71b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a71b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a71b4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a71b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a71b8: 0x4602a800  add.s       $f0, $f21, $f2
    ctx->pc = 0x1a71b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x1a71bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a71bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a71c0: 0x0  nop
    ctx->pc = 0x1a71c0u;
    // NOP
    // 0x1a71c4: 0x4503014c  bc1tl       . + 4 + (0x14C << 2)
    ctx->pc = 0x1A71C4u;
    {
        const bool branch_taken_0x1a71c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71c4) {
            ctx->pc = 0x1A71C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71C4u;
            // 0x1a71c8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A71CCu;
    // 0x1a71cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a71ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a71d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a71d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a71d4: 0x0  nop
    ctx->pc = 0x1a71d4u;
    // NOP
    // 0x1a71d8: 0x45030147  bc1tl       . + 4 + (0x147 << 2)
    ctx->pc = 0x1A71D8u;
    {
        const bool branch_taken_0x1a71d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71d8) {
            ctx->pc = 0x1A71DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71D8u;
            // 0x1a71dc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A71E0u;
    // 0x1a71e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a71e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a71e4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1a71e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a71e8: 0x0  nop
    ctx->pc = 0x1a71e8u;
    // NOP
    // 0x1a71ec: 0x45030142  bc1tl       . + 4 + (0x142 << 2)
    ctx->pc = 0x1A71ECu;
    {
        const bool branch_taken_0x1a71ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a71ec) {
            ctx->pc = 0x1A71F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71ECu;
            // 0x1a71f0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A71F4u;
    // 0x1a71f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a71f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a71f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a71f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a71fc: 0x0  nop
    ctx->pc = 0x1a71fcu;
    // NOP
    // 0x1a7200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a7200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7204: 0x0  nop
    ctx->pc = 0x1a7204u;
    // NOP
    // 0x1a7208: 0x4503013b  bc1tl       . + 4 + (0x13B << 2)
    ctx->pc = 0x1A7208u;
    {
        const bool branch_taken_0x1a7208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7208) {
            ctx->pc = 0x1A720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7208u;
            // 0x1a720c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76F8u;
            goto label_1a76f8;
        }
    }
    ctx->pc = 0x1A7210u;
    // 0x1a7210: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a7210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a7214: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1a7214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a7218: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1a7218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a721c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7220: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a7220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a7224: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x1a7224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x1a7228: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x1a7228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a722c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a722cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7230: 0x0  nop
    ctx->pc = 0x1a7230u;
    // NOP
    // 0x1a7234: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x1A7234u;
    {
        const bool branch_taken_0x1a7234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7234u;
        // 0x1a7238: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7234) {
            ctx->pc = 0x1A73B0u;
            goto label_1a73b0;
        }
    }
    ctx->pc = 0x1A723Cu;
    // 0x1a723c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x1a723cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a7240: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1a7240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a7244: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a7244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7248: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1a7248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a724c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a724cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a7250: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a7250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7254: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a7254u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7258: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1a7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a725c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7260: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1a7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7264: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1a7264u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a7268: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a7268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a726c: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x1a726cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a7270: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1a7270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a7274: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x1a7274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1a7278: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a7278u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a727c: 0x0  nop
    ctx->pc = 0x1a727cu;
    // NOP
    // 0x1a7280: 0x0  nop
    ctx->pc = 0x1a7280u;
    // NOP
    // 0x1a7284: 0x46020004  c1          0x20004
    ctx->pc = 0x1a7284u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x1a7288: 0x0  nop
    ctx->pc = 0x1a7288u;
    // NOP
    // 0x1a728c: 0x0  nop
    ctx->pc = 0x1a728cu;
    // NOP
    // 0x1a7290: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x1a7290u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1a7294: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x1A7294u;
    SET_GPR_U32(ctx, 31, 0x1A729Cu);
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x1A7294u, 0x1A729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A729Cu;
label_1a729c:
    // 0x1a729c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1a729cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1a72a0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1a72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a72a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a72a8: 0x46000e01  sub.s       $f24, $f1, $f0
    ctx->pc = 0x1a72a8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a72ac: 0x4614c034  c.lt.s      $f24, $f20
    ctx->pc = 0x1a72acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a72b0: 0x0  nop
    ctx->pc = 0x1a72b0u;
    // NOP
    // 0x1a72b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A72B4u;
    {
        const bool branch_taken_0x1a72b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72B4u;
        // 0x1a72b8: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72b4) {
            ctx->pc = 0x1A72C0u;
            goto label_1a72c0;
        }
    }
    ctx->pc = 0x1A72BCu;
    // 0x1a72bc: 0x4600c007  neg.s       $f0, $f24
    ctx->pc = 0x1a72bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
label_1a72c0:
    // 0x1a72c0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1a72c0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1a72c4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1a72c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a72c8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1A72C8u;
    SET_GPR_U32(ctx, 31, 0x1A72D0u);
    ctx->pc = 0x1A72CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72C8u;
    // 0x1a72cc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1A72C8u, 0x1A72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72D0u;
label_1a72d0:
    // 0x1a72d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a72d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a72d4: 0x0  nop
    ctx->pc = 0x1a72d4u;
    // NOP
    // 0x1a72d8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1A72D8u;
    {
        const bool branch_taken_0x1a72d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72D8u;
        // 0x1a72dc: 0xc7a40070  lwc1        $f4, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72d8) {
            ctx->pc = 0x1A731Cu;
            goto label_1a731c;
        }
    }
    ctx->pc = 0x1A72E0u;
    // 0x1a72e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a72e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a72e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a72e8: 0x0  nop
    ctx->pc = 0x1a72e8u;
    // NOP
    // 0x1a72ec: 0x0  nop
    ctx->pc = 0x1a72ecu;
    // NOP
    // 0x1a72f0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a72f0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1a72f4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1a72f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a72f8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1a72f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a72fc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7300: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1a7300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1a7304: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1a7304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a7308: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a7308u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a730c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1a730cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a7310: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1a7310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a7314: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1a7314u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a7318: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1a7318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a731c:
    // 0x1a731c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a731cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7320: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1a7320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7324: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a7324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7328: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a7328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a732c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1a732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7330: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a7330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a7334: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1a7334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1a7338: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1a7338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a733c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1a733cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7340: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1a7340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a7344: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a7344u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a7348: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a7348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a734c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1a734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7350: 0x4600bb07  neg.s       $f12, $f23
    ctx->pc = 0x1a7350u;
    ctx->f[12] = FPU_NEG_S(ctx->f[23]);
    // 0x1a7354: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7358: 0xc051e62  jal         func_147988
    ctx->pc = 0x1A7358u;
    SET_GPR_U32(ctx, 31, 0x1A7360u);
    ctx->pc = 0x1A735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7358u;
    // 0x1a735c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1A7358u, 0x1A7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7360u;
label_1a7360:
    // 0x1a7360: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a7360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7368: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1A7368u;
    SET_GPR_U32(ctx, 31, 0x1A7370u);
    ctx->pc = 0x1A736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7368u;
    // 0x1a736c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1A7368u, 0x1A7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7370u;
label_1a7370:
    // 0x1a7370: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7374: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a7374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7378: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a737c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a737cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7380: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1a7380u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7384: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a7384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a7388: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a738c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a738cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7390: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1a7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7394: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a7394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7398: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a739c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1a739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a73a0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a73a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a73a4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a73a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a73a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A73A8u;
    {
        const bool branch_taken_0x1a73a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73A8u;
        // 0x1a73ac: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73a8) {
            ctx->pc = 0x1A73C0u;
            goto label_1a73c0;
        }
    }
    ctx->pc = 0x1A73B0u;
label_1a73b0:
    // 0x1a73b0: 0x4615a800  add.s       $f0, $f21, $f21
    ctx->pc = 0x1a73b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x1a73b4: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x1a73b4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
    // 0x1a73b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a73b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a73bc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a73bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a73c0:
    // 0x1a73c0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a73c4: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x1a73c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x1a73c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a73c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a73cc: 0x46151041  sub.s       $f1, $f2, $f21
    ctx->pc = 0x1a73ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x1a73d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a73d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a73d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a73d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a73d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a73dc: 0x0  nop
    ctx->pc = 0x1a73dcu;
    // NOP
    // 0x1a73e0: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x1A73E0u;
    {
        const bool branch_taken_0x1a73e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73E0u;
        // 0x1a73e4: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73e0) {
            ctx->pc = 0x1A7560u;
            goto label_1a7560;
        }
    }
    ctx->pc = 0x1A73E8u;
    // 0x1a73e8: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x1a73e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a73ec: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1a73ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a73f0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1a73f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a73f4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1a73f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a73f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a73f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a73fc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a73fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7400: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a7400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7404: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1a7404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7408: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a740c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1a740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7410: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x1a7410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a7414: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a7414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a7418: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x1a7418u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a741c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1a741cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a7420: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1a7420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1a7424: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1a7424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1a7428: 0x0  nop
    ctx->pc = 0x1a7428u;
    // NOP
    // 0x1a742c: 0x0  nop
    ctx->pc = 0x1a742cu;
    // NOP
    // 0x1a7430: 0x46020004  c1          0x20004
    ctx->pc = 0x1a7430u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x1a7434: 0x0  nop
    ctx->pc = 0x1a7434u;
    // NOP
    // 0x1a7438: 0x0  nop
    ctx->pc = 0x1a7438u;
    // NOP
    // 0x1a743c: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x1a743cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1a7440: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a7440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a7444: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x1A7444u;
    SET_GPR_U32(ctx, 31, 0x1A744Cu);
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x1A7444u, 0x1A744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A744Cu;
label_1a744c:
    // 0x1a744c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1a744cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1a7450: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a7450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7454: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7458: 0x46000d81  sub.s       $f22, $f1, $f0
    ctx->pc = 0x1a7458u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a745c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x1a745cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7460: 0x0  nop
    ctx->pc = 0x1a7460u;
    // NOP
    // 0x1a7464: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7464u;
    {
        const bool branch_taken_0x1a7464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7464u;
        // 0x1a7468: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7464) {
            ctx->pc = 0x1A7470u;
            goto label_1a7470;
        }
    }
    ctx->pc = 0x1A746Cu;
    // 0x1a746c: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x1a746cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_1a7470:
    // 0x1a7470: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1a7470u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1a7474: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1a7474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a7478: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1A7478u;
    SET_GPR_U32(ctx, 31, 0x1A7480u);
    ctx->pc = 0x1A747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7478u;
    // 0x1a747c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1A7478u, 0x1A7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7480u;
label_1a7480:
    // 0x1a7480: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a7480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7484: 0x0  nop
    ctx->pc = 0x1a7484u;
    // NOP
    // 0x1a7488: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7488u;
    {
        const bool branch_taken_0x1a7488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7488u;
        // 0x1a748c: 0xc7a40070  lwc1        $f4, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7488) {
            ctx->pc = 0x1A74CCu;
            goto label_1a74cc;
        }
    }
    ctx->pc = 0x1A7490u;
    // 0x1a7490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7494: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a7494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7498: 0x0  nop
    ctx->pc = 0x1a7498u;
    // NOP
    // 0x1a749c: 0x0  nop
    ctx->pc = 0x1a749cu;
    // NOP
    // 0x1a74a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a74a0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1a74a4: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1a74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a74a8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1a74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a74ac: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a74b0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1a74b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1a74b4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1a74b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a74b8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1a74b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a74bc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1a74bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a74c0: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1a74c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a74c4: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1a74c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a74c8: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1a74c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a74cc:
    // 0x1a74cc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a74ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a74d0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1a74d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a74d4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a74d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a74d8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a74dc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1a74dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a74e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a74e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a74e4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1a74e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1a74e8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1a74e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1a74ec: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1a74ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a74f0: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1a74f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a74f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a74f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a74f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a74f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a74fc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1a74fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7500: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7504: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1a7504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1a7508: 0xc051e62  jal         func_147988
    ctx->pc = 0x1A7508u;
    SET_GPR_U32(ctx, 31, 0x1A7510u);
    ctx->pc = 0x1A750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7508u;
    // 0x1a750c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1A7508u, 0x1A7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7510u;
label_1a7510:
    // 0x1a7510: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7518: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1A7518u;
    SET_GPR_U32(ctx, 31, 0x1A7520u);
    ctx->pc = 0x1A751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7518u;
    // 0x1a751c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1A7518u, 0x1A7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7520u;
label_1a7520:
    // 0x1a7520: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1a7520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a7524: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a7524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7528: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a7528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a752c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a752cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7530: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1a7530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7534: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a7534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a7538: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1a7538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a753c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a753cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7540: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1a7540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a7544: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1a7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7548: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1a7548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a754c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1a754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7550: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a7550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a7554: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1a7554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a7558: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7558u;
    {
        const bool branch_taken_0x1a7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7558u;
        // 0x1a755c: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7558) {
            ctx->pc = 0x1A7570u;
            goto label_1a7570;
        }
    }
    ctx->pc = 0x1A7560u;
label_1a7560:
    // 0x1a7560: 0x4615a800  add.s       $f0, $f21, $f21
    ctx->pc = 0x1a7560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x1a7564: 0xc7b60024  lwc1        $f22, 0x24($sp)
    ctx->pc = 0x1a7564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a7568: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1a7568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a756c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a7570:
    // 0x1a7570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7578: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a757c: 0x3c01c0f0  lui         $at, 0xC0F0
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49392 << 16));
    // 0x1a7580: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a7580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a7584: 0x267106c8  addiu       $s1, $s3, 0x6C8
    ctx->pc = 0x1a7584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1736));
    // 0x1a7588: 0x0  nop
    ctx->pc = 0x1a7588u;
    // NOP
    // 0x1a758c: 0x0  nop
    ctx->pc = 0x1a758cu;
    // NOP
    // 0x1a7590: 0x46150643  div.s       $f25, $f0, $f21
    ctx->pc = 0x1a7590u;
    ctx->f[25] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x1a7594: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1a7594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1a7598:
    // 0x1a7598: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1a7598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1a759c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a759cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75a0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A75A0u;
    {
        const bool branch_taken_0x1a75a0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1A75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75A0u;
        // 0x1a75a4: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75a0) {
            ctx->pc = 0x1A75ACu;
            goto label_1a75ac;
        }
    }
    ctx->pc = 0x1A75A8u;
    // 0x1a75a8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1a75a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a75ac:
    // 0x1a75ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a75acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a75b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A75B0u;
    {
        const bool branch_taken_0x1a75b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75B0u;
        // 0x1a75b4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75b0) {
            ctx->pc = 0x1A75C8u;
            goto label_1a75c8;
        }
    }
    ctx->pc = 0x1A75B8u;
    // 0x1a75b8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1a75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1a75bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a75c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A75C0u;
    {
        const bool branch_taken_0x1a75c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75C0u;
        // 0x1a75c4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75c0) {
            ctx->pc = 0x1A75CCu;
            goto label_1a75cc;
        }
    }
    ctx->pc = 0x1A75C8u;
label_1a75c8:
    // 0x1a75c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a75cc:
    // 0x1a75cc: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A75CCu;
    {
        const bool branch_taken_0x1a75cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75CCu;
        // 0x1a75d0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75cc) {
            ctx->pc = 0x1A76D8u;
            goto label_1a76d8;
        }
    }
    ctx->pc = 0x1A75D4u;
    // 0x1a75d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a75d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a75d8: 0x0  nop
    ctx->pc = 0x1a75d8u;
    // NOP
    // 0x1a75dc: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1A75DCu;
    {
        const bool branch_taken_0x1a75dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75DCu;
        // 0x1a75e0: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75dc) {
            ctx->pc = 0x1A763Cu;
            goto label_1a763c;
        }
    }
    ctx->pc = 0x1A75E4u;
    // 0x1a75e4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1a75e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a75e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a75ec: 0x0  nop
    ctx->pc = 0x1a75ecu;
    // NOP
    // 0x1a75f0: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x1a75f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1a75f4: 0x46171034  c.lt.s      $f2, $f23
    ctx->pc = 0x1a75f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a75f8: 0x0  nop
    ctx->pc = 0x1a75f8u;
    // NOP
    // 0x1a75fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A75FCu;
    {
        const bool branch_taken_0x1a75fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75FCu;
        // 0x1a7600: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75fc) {
            ctx->pc = 0x1A7608u;
            goto label_1a7608;
        }
    }
    ctx->pc = 0x1A7604u;
    // 0x1a7604: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x1a7604u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_1a7608:
    // 0x1a7608: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1a7608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a760c: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a7610: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a7610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a7614: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7618: 0x0  nop
    ctx->pc = 0x1a7618u;
    // NOP
    // 0x1a761c: 0x0  nop
    ctx->pc = 0x1a761cu;
    // NOP
    // 0x1a7620: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x1a7620u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[24]);
    // 0x1a7624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a7624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7628: 0x0  nop
    ctx->pc = 0x1a7628u;
    // NOP
    // 0x1a762c: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
    ctx->pc = 0x1A762Cu;
    {
        const bool branch_taken_0x1a762c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a762c) {
            ctx->pc = 0x1A7630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A762Cu;
            // 0x1a7630: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A76D8u;
            goto label_1a76d8;
        }
    }
    ctx->pc = 0x1A7634u;
    // 0x1a7634: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A7634u;
    {
        const bool branch_taken_0x1a7634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7634) {
            ctx->pc = 0x1A76D8u;
            goto label_1a76d8;
        }
    }
    ctx->pc = 0x1A763Cu;
label_1a763c:
    // 0x1a763c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a763cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7640: 0x0  nop
    ctx->pc = 0x1a7640u;
    // NOP
    // 0x1a7644: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7644u;
    {
        const bool branch_taken_0x1a7644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7644u;
        // 0x1a7648: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7644) {
            ctx->pc = 0x1A7690u;
            goto label_1a7690;
        }
    }
    ctx->pc = 0x1A764Cu;
    // 0x1a764c: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x1a7650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7654: 0x0  nop
    ctx->pc = 0x1a7654u;
    // NOP
    // 0x1a7658: 0x46140081  sub.s       $f2, $f0, $f20
    ctx->pc = 0x1a7658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1a765c: 0x46171034  c.lt.s      $f2, $f23
    ctx->pc = 0x1a765cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7660: 0x0  nop
    ctx->pc = 0x1a7660u;
    // NOP
    // 0x1a7664: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7664u;
    {
        const bool branch_taken_0x1a7664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7664u;
        // 0x1a7668: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7664) {
            ctx->pc = 0x1A7670u;
            goto label_1a7670;
        }
    }
    ctx->pc = 0x1A766Cu;
    // 0x1a766c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x1a766cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_1a7670:
    // 0x1a7670: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1a7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7674: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a7678: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a7678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a767c: 0x0  nop
    ctx->pc = 0x1a767cu;
    // NOP
    // 0x1a7680: 0x0  nop
    ctx->pc = 0x1a7680u;
    // NOP
    // 0x1a7684: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x1a7684u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[22]);
    // 0x1a7688: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A7688u;
    {
        const bool branch_taken_0x1a7688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7688u;
        // 0x1a768c: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7688) {
            ctx->pc = 0x1A76B8u;
            goto label_1a76b8;
        }
    }
    ctx->pc = 0x1A7690u;
label_1a7690:
    // 0x1a7690: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x1a7690u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1a7694: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x1A7694u;
    SET_GPR_U32(ctx, 31, 0x1A769Cu);
    ctx->pc = 0x1A7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7694u;
    // 0x1a7698: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x1A7694u, 0x1A769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A769Cu;
label_1a769c:
    // 0x1a769c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1A769Cu;
    SET_GPR_U32(ctx, 31, 0x1A76A4u);
    ctx->pc = 0x1A76A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A769Cu;
    // 0x1a76a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1A769Cu, 0x1A76A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76A4u;
label_1a76a4:
    // 0x1a76a4: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x1a76a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a76a8: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a76ac: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a76b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a76b4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a76b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a76b8:
    // 0x1a76b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a76b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a76bc: 0x0  nop
    ctx->pc = 0x1a76bcu;
    // NOP
    // 0x1a76c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A76C0u;
    {
        const bool branch_taken_0x1a76c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a76c0) {
            ctx->pc = 0x1A76D8u;
            goto label_1a76d8;
        }
    }
    ctx->pc = 0x1A76C8u;
    // 0x1a76c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a76c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a76cc: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a76d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a76d4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a76d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a76d8:
    // 0x1a76d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a76dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a76dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a76e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a76e4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1a76e8: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x1a76e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a76ec: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1A76ECu;
    {
        const bool branch_taken_0x1a76ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76ECu;
        // 0x1a76f0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76ec) {
            ctx->pc = 0x1A7598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7598;
        }
    }
    ctx->pc = 0x1A76F4u;
    // 0x1a76f4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1a76f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a76f8:
    // 0x1a76f8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1a76f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a76fc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1a76fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a7700: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1a7700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7704: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a7704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7708: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x1a7708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a770c: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x1a770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a7710: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x1a7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a7714: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x1a7714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a7718: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1a7718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a771c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1a771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7720: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7720u;
        // 0x1a7724: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7728u;
    // 0x1a7728: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a7728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a772c: 0x0  nop
    ctx->pc = 0x1a772cu;
    // NOP
    // 0x1a7730: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a7730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7734: 0x0  nop
    ctx->pc = 0x1a7734u;
    // NOP
    ctx->pc = 0x1a7738u;
}
