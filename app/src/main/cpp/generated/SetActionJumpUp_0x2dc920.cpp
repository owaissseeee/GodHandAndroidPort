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

// Function: SetActionJumpUp
// Address: 0x2dc920 - 0x2dca58
void SetActionJumpUp_0x2dc920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionJumpUp_0x2dc920");
#endif

    switch (ctx->pc) {
        case 0x2dc934u: goto label_2dc934;
        case 0x2dc950u: goto label_2dc950;
        case 0x2dc974u: goto label_2dc974;
        case 0x2dc994u: goto label_2dc994;
        case 0x2dc9b4u: goto label_2dc9b4;
        case 0x2dca44u: goto label_2dca44;
        default: break;
    }

    ctx->pc = 0x2dc920u;

    // 0x2dc920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dc920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dc924: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dc924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dc928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc92c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC92Cu;
    SET_GPR_U32(ctx, 31, 0x2DC934u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC92Cu, 0x2DC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC934u;
label_2dc934:
    // 0x2dc934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc938: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2dc938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2dc93c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc940: 0x58400041  blezl       $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DC940u;
    {
        const bool branch_taken_0x2dc940 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc940) {
            ctx->pc = 0x2DC944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC940u;
            // 0x2dc944: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DC948u;
    // 0x2dc948: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC948u;
    SET_GPR_U32(ctx, 31, 0x2DC950u);
    ctx->pc = 0x2DC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC948u;
    // 0x2dc94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC948u, 0x2DC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC950u;
label_2dc950:
    // 0x2dc950: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2DC950u;
    {
        const bool branch_taken_0x2dc950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc950) {
            ctx->pc = 0x2DC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC950u;
            // 0x2dc954: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DC958u;
    // 0x2dc958: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc95c: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc960: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc960u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc964: 0x5c600038  bgtzl       $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2DC964u;
    {
        const bool branch_taken_0x2dc964 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc964) {
            ctx->pc = 0x2DC968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC964u;
            // 0x2dc968: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DC96Cu;
    // 0x2dc96c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC96Cu;
    SET_GPR_U32(ctx, 31, 0x2DC974u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC96Cu, 0x2DC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC974u;
label_2dc974:
    // 0x2dc974: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2DC974u;
    {
        const bool branch_taken_0x2dc974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc974) {
            ctx->pc = 0x2DC978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC974u;
            // 0x2dc978: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DC97Cu;
    // 0x2dc97c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2dc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2dc980: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2dc980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2dc984: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x2dc984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x2dc988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dc988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc98c: 0xc0b0ad6  jal         func_2C2B58
    ctx->pc = 0x2DC98Cu;
    SET_GPR_U32(ctx, 31, 0x2DC994u);
    ctx->pc = 0x2DC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC98Cu;
    // 0x2dc990: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2B58u, 0x2DC98Cu, 0x2DC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC994u;
label_2dc994:
    // 0x2dc994: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DC994u;
    {
        const bool branch_taken_0x2dc994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc994) {
            ctx->pc = 0x2DC998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC994u;
            // 0x2dc998: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DC99Cu;
    // 0x2dc99c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x2dc99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc9a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2dc9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2dc9a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dc9a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2dc9a8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2dc9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dc9ac: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x2DC9ACu;
    SET_GPR_U32(ctx, 31, 0x2DC9B4u);
    ctx->pc = 0x2DC9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9ACu;
    // 0x2dc9b0: 0xc7ad0010  lwc1        $f13, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x2DC9ACu, 0x2DC9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC9B4u;
label_2dc9b4:
    // 0x2dc9b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2dc9b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2dc9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9bc: 0x0  nop
    ctx->pc = 0x2dc9bcu;
    // NOP
    // 0x2dc9c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9c4: 0x0  nop
    ctx->pc = 0x2dc9c4u;
    // NOP
    // 0x2dc9c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC9C8u;
    {
        const bool branch_taken_0x2dc9c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9C8u;
        // 0x2dc9cc: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9c8) {
            ctx->pc = 0x2DC9D4u;
            goto label_2dc9d4;
        }
    }
    ctx->pc = 0x2DC9D0u;
    // 0x2dc9d0: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2dc9d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2dc9d4:
    // 0x2dc9d4: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x2dc9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x2dc9d8: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x2dc9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
    // 0x2dc9dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9e0: 0x0  nop
    ctx->pc = 0x2dc9e0u;
    // NOP
    // 0x2dc9e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2dc9e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9e8: 0x0  nop
    ctx->pc = 0x2dc9e8u;
    // NOP
    // 0x2dc9ec: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x2DC9ECu;
    {
        const bool branch_taken_0x2dc9ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc9ec) {
            ctx->pc = 0x2DC9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC9ECu;
            // 0x2dc9f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DC9F4u;
    // 0x2dc9f4: 0x26020660  addiu       $v0, $s0, 0x660
    ctx->pc = 0x2dc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x2dc9f8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC9F8u;
    {
        const bool branch_taken_0x2dc9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9F8u;
        // 0x2dc9fc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc9f8) {
            ctx->pc = 0x2DCA14u;
            goto label_2dca14;
        }
    }
    ctx->pc = 0x2DCA00u;
    // 0x2dca00: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x2dca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x2dca04: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2dca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca08: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2dca08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dca0c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2dca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dca10: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2dca10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2dca14:
    // 0x2dca14: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2dca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dca18: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dca1c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dca20: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dca24: 0xe6000670  swc1        $f0, 0x670($s0)
    ctx->pc = 0x2dca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1648), bits); }
    // 0x2dca28: 0x2508ca58  addiu       $t0, $t0, -0x35A8
    ctx->pc = 0x2dca28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953560));
    // 0x2dca2c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dca30: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2dca30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dca34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dca34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dca38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca3c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DCA3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCA44u);
    ctx->pc = 0x2DCA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA3Cu;
    // 0x2dca40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DCA3Cu, 0x2DCA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA44u;
label_2dca44:
    // 0x2dca44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dca44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dca48:
    // 0x2dca48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA4Cu;
        // 0x2dca50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCA54u;
    // 0x2dca54: 0x0  nop
    ctx->pc = 0x2dca54u;
    // NOP
    ctx->pc = 0x2dca58u;
}
