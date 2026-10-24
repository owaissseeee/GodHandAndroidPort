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

// Function: func_00307B28
// Address: 0x307b28 - 0x3089f0
void func_00307B28_0x307b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307B28_0x307b28");
#endif

    switch (ctx->pc) {
        case 0x307b80u: goto label_307b80;
        case 0x307b88u: goto label_307b88;
        case 0x307b90u: goto label_307b90;
        case 0x307bc8u: goto label_307bc8;
        case 0x307bf4u: goto label_307bf4;
        case 0x307c8cu: goto label_307c8c;
        case 0x307cb0u: goto label_307cb0;
        case 0x307d40u: goto label_307d40;
        case 0x307dfcu: goto label_307dfc;
        case 0x307e10u: goto label_307e10;
        case 0x307eecu: goto label_307eec;
        case 0x307efcu: goto label_307efc;
        case 0x30821cu: goto label_30821c;
        case 0x308244u: goto label_308244;
        case 0x3082ccu: goto label_3082cc;
        case 0x308560u: goto label_308560;
        case 0x3085acu: goto label_3085ac;
        case 0x3085c8u: goto label_3085c8;
        case 0x3085ecu: goto label_3085ec;
        case 0x308608u: goto label_308608;
        case 0x308630u: goto label_308630;
        case 0x308640u: goto label_308640;
        case 0x308650u: goto label_308650;
        case 0x3086b0u: goto label_3086b0;
        case 0x3086d8u: goto label_3086d8;
        case 0x308818u: goto label_308818;
        case 0x308830u: goto label_308830;
        case 0x3088c8u: goto label_3088c8;
        case 0x308988u: goto label_308988;
        default: break;
    }

    ctx->pc = 0x307b28u;

    // 0x307b28: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x307b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x307b2c: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x307b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x307b30: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x307b30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x307b34: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x307b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x307b38: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x307b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x307b3c: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x307b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x307b40: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x307b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x307b44: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x307b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
    // 0x307b48: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x307b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
    // 0x307b4c: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x307b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x307b50: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x307b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
    // 0x307b54: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x307b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
    // 0x307b58: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x307b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
    // 0x307b5c: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x307b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
    // 0x307b60: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x307b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x307b64: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x307b64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x307b68: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x307b68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x307b6c: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x307b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x307b70: 0x14600390  bnez        $v1, . + 4 + (0x390 << 2)
    ctx->pc = 0x307B70u;
    {
        const bool branch_taken_0x307b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x307B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B70u;
        // 0x307b74: 0xafa40168  sw          $a0, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b70) {
            ctx->pc = 0x3089B4u;
            goto label_3089b4;
        }
    }
    ctx->pc = 0x307B78u;
    // 0x307b78: 0xc0c22f0  jal         func_308BC0
    ctx->pc = 0x307B78u;
    SET_GPR_U32(ctx, 31, 0x307B80u);
    ctx->pc = 0x307B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B78u;
    // 0x307b7c: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308BC0u, 0x307B78u, 0x307B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B80u;
label_307b80:
    // 0x307b80: 0xc0c2350  jal         func_308D40
    ctx->pc = 0x307B80u;
    SET_GPR_U32(ctx, 31, 0x307B88u);
    ctx->pc = 0x307B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B80u;
    // 0x307b84: 0x8fa40168  lw          $a0, 0x168($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D40u, 0x307B80u, 0x307B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B88u;
label_307b88:
    // 0x307b88: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x307B88u;
    SET_GPR_U32(ctx, 31, 0x307B90u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x307B88u, 0x307B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B90u;
label_307b90:
    // 0x307b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b94: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x307b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x307b98: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x307b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x307b9c: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x307b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x307ba0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x307ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x307ba4: 0x27b700f0  addiu       $s7, $sp, 0xF0
    ctx->pc = 0x307ba4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x307ba8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x307ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x307bac: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x307bacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x307bb0: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x307bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x307bb4: 0x27b50100  addiu       $s5, $sp, 0x100
    ctx->pc = 0x307bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x307bb8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x307bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x307bbc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x307bbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307bc0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x307bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x307bc4: 0x0  nop
    ctx->pc = 0x307bc4u;
    // NOP
label_307bc8:
    // 0x307bc8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x307bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x307bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x307bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x307bd0: 0x0  nop
    ctx->pc = 0x307bd0u;
    // NOP
    // 0x307bd4: 0x0  nop
    ctx->pc = 0x307bd4u;
    // NOP
    // 0x307bd8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x307BD8u;
    {
        const bool branch_taken_0x307bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x307BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BD8u;
        // 0x307bdc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bd8) {
            ctx->pc = 0x307BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307bc8;
        }
    }
    ctx->pc = 0x307BE0u;
    // 0x307be0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x307be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x307be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x307be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307be8: 0x24503050  addiu       $s0, $v0, 0x3050
    ctx->pc = 0x307be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x307bec: 0xc04e3e2  jal         func_138F88
    ctx->pc = 0x307BECu;
    SET_GPR_U32(ctx, 31, 0x307BF4u);
    ctx->pc = 0x307BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307BECu;
    // 0x307bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F88u, 0x307BECu, 0x307BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BF4u;
label_307bf4:
    // 0x307bf4: 0x10400169  beqz        $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x307BF4u;
    {
        const bool branch_taken_0x307bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BF4u;
        // 0x307bf8: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bf4) {
            ctx->pc = 0x30819Cu;
            goto label_30819c;
        }
    }
    ctx->pc = 0x307BFCu;
    // 0x307bfc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x307bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x307c00: 0x12c20008  beq         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x307C00u;
    {
        const bool branch_taken_0x307c00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x307C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C00u;
        // 0x307c04: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c00) {
            ctx->pc = 0x307C24u;
            goto label_307c24;
        }
    }
    ctx->pc = 0x307C08u;
    // 0x307c08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x307c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307c0c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x307c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x307c10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x307c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307c14: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x307c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x307c18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x307c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307c1c: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x307c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x307c20: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x307c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307c24:
    // 0x307c24: 0x26020210  addiu       $v0, $s0, 0x210
    ctx->pc = 0x307c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x307c28: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x307c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x307c2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x307c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x307c30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307c34: 0x0  nop
    ctx->pc = 0x307c34u;
    // NOP
    // 0x307c38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x307c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x307c3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x307c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x307c40: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x307c40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307c44: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x307c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307c48: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x307c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307c4c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x307c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x307c50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x307c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x307c54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307c58: 0x0  nop
    ctx->pc = 0x307c58u;
    // NOP
    // 0x307c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x307c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x307c60: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x307c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x307c64: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x307c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x307c68: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x307c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x307c6c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x307c6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307c70: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x307c70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307c74: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x307c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307c78: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x307c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307c7c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x307c7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x307c80: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x307c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307c84: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x307C84u;
    SET_GPR_U32(ctx, 31, 0x307C8Cu);
    ctx->pc = 0x307C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C84u;
    // 0x307c88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x307C84u, 0x307C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C8Cu;
label_307c8c:
    // 0x307c8c: 0x0  nop
    ctx->pc = 0x307c8cu;
    // NOP
    // 0x307c90: 0x0  nop
    ctx->pc = 0x307c90u;
    // NOP
    // 0x307c94: 0x46000504  c1          0x504
    ctx->pc = 0x307c94u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x307c98: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x307c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307c9c: 0x0  nop
    ctx->pc = 0x307c9cu;
    // NOP
    // 0x307ca0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x307CA0u;
    {
        const bool branch_taken_0x307ca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x307ca0) {
            ctx->pc = 0x307CB4u;
            goto label_307cb4;
        }
    }
    ctx->pc = 0x307CA8u;
    // 0x307ca8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x307CA8u;
    SET_GPR_U32(ctx, 31, 0x307CB0u);
    ctx->pc = 0x307CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CA8u;
    // 0x307cac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x307CA8u, 0x307CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CB0u;
label_307cb0:
    // 0x307cb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x307cb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_307cb4:
    // 0x307cb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x307cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x307cb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x307cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x307cbc: 0x0  nop
    ctx->pc = 0x307cbcu;
    // NOP
    // 0x307cc0: 0x4614a803  div.s       $f0, $f21, $f20
    ctx->pc = 0x307cc0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[20]);
    // 0x307cc4: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x307cc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x307cc8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x307cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307ccc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307cccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307cd0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307cd4: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x307cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307cd8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x307cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x307cdc: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x307cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x307ce0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x307ce0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x307ce4: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x307ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307ce8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x307ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307cec: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x307cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307cf0: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x307cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x307cf4: 0xc7a70118  lwc1        $f7, 0x118($sp)
    ctx->pc = 0x307cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x307cf8: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x307cf8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x307cfc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x307cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307d00: 0xc7a50110  lwc1        $f5, 0x110($sp)
    ctx->pc = 0x307d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x307d04: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x307d04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x307d08: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x307d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x307d0c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x307d0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x307d10: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x307d10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x307d14: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x307d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x307d18: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x307d18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x307d1c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x307d1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x307d20: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x307d20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x307d24: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x307d24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x307d28: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x307d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x307d2c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x307d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x307d30: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x307d30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x307d34: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x307d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x307d38: 0xc04078a  jal         func_101E28
    ctx->pc = 0x307D38u;
    SET_GPR_U32(ctx, 31, 0x307D40u);
    ctx->pc = 0x307D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307D38u;
    // 0x307d3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x307D38u, 0x307D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D40u;
label_307d40:
    // 0x307d40: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x307d40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x307d44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x307d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307d48: 0x0  nop
    ctx->pc = 0x307d48u;
    // NOP
    // 0x307d4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x307d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307d50: 0x0  nop
    ctx->pc = 0x307d50u;
    // NOP
    // 0x307d54: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x307D54u;
    {
        const bool branch_taken_0x307d54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D54u;
        // 0x307d58: 0xc7a30100  lwc1        $f3, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d54) {
            ctx->pc = 0x307D90u;
            goto label_307d90;
        }
    }
    ctx->pc = 0x307D5Cu;
    // 0x307d5c: 0x0  nop
    ctx->pc = 0x307d5cu;
    // NOP
    // 0x307d60: 0x0  nop
    ctx->pc = 0x307d60u;
    // NOP
    // 0x307d64: 0x4601a883  div.s       $f2, $f21, $f1
    ctx->pc = 0x307d64u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[1]);
    // 0x307d68: 0xc7a40104  lwc1        $f4, 0x104($sp)
    ctx->pc = 0x307d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x307d6c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x307d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307d70: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x307d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307d74: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x307d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x307d78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x307d78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x307d7c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x307d7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x307d80: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x307d80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x307d84: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x307d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x307d88: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x307d88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x307d8c: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x307d8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_307d90:
    // 0x307d90: 0x27b30120  addiu       $s3, $sp, 0x120
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x307d94: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x307d94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307d98: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x307d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307d9c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x307d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307da0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x307da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x307da4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x307da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307da8: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x307da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307dac: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x307dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x307db0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x307db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x307db4: 0x10560007  beq         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x307DB4u;
    {
        const bool branch_taken_0x307db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x307DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307DB4u;
        // 0x307db8: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307db4) {
            ctx->pc = 0x307DD4u;
            goto label_307dd4;
        }
    }
    ctx->pc = 0x307DBCu;
    // 0x307dbc: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x307dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307dc0: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x307dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307dc4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x307dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307dc8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x307dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x307dcc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x307dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x307dd0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x307dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_307dd4:
    // 0x307dd4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x307dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x307dd8: 0x2463d8b0  addiu       $v1, $v1, -0x2750
    ctx->pc = 0x307dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
    // 0x307ddc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x307ddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x307de0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x307de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307de4: 0x3c01bea0  lui         $at, 0xBEA0
    ctx->pc = 0x307de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48800 << 16));
    // 0x307de8: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x307de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x307dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x307decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307df0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x307df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307df4: 0xc0567f2  jal         func_159FC8
    ctx->pc = 0x307DF4u;
    SET_GPR_U32(ctx, 31, 0x307DFCu);
    ctx->pc = 0x307DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307DF4u;
    // 0x307df8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC8u, 0x307DF4u, 0x307DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307DFCu;
label_307dfc:
    // 0x307dfc: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x307dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x307e00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x307e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e08: 0xc056b68  jal         func_15ADA0
    ctx->pc = 0x307E08u;
    SET_GPR_U32(ctx, 31, 0x307E10u);
    ctx->pc = 0x307E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E08u;
    // 0x307e0c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADA0u, 0x307E08u, 0x307E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E10u;
label_307e10:
    // 0x307e10: 0x27b10150  addiu       $s1, $sp, 0x150
    ctx->pc = 0x307e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x307e14: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x307e14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307e18: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e1c: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307e20: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x307e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307e24: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307e24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307e28: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307e2c: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e30: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x307e30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307e34: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x307e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e38: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x307e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x307e3c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x307e3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x307e40: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e44: 0x3c013f36  lui         $at, 0x3F36
    ctx->pc = 0x307e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16182 << 16));
    // 0x307e48: 0x3421db6e  ori         $at, $at, 0xDB6E
    ctx->pc = 0x307e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56174);
    // 0x307e4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x307e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x307e50: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307e54: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x307e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307e58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307e58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307e5c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307e60: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e64: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x307e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307e68: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x307e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e6c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x307e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307e70: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e74: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307e78: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x307e78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307e7c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x307e7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307e80: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e84: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x307e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307e88: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x307e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307e8c: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x307e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307e90: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x307e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x307e94: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x307e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307e98: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x307e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307e9c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x307e9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x307ea0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x307ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x307ea4: 0x10560007  beq         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x307EA4u;
    {
        const bool branch_taken_0x307ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x307EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EA4u;
        // 0x307ea8: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ea4) {
            ctx->pc = 0x307EC4u;
            goto label_307ec4;
        }
    }
    ctx->pc = 0x307EACu;
    // 0x307eac: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x307eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307eb0: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x307eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307eb4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x307eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307eb8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x307eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x307ebc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x307ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x307ec0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x307ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_307ec4:
    // 0x307ec4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x307ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x307ec8: 0x24a5d8b0  addiu       $a1, $a1, -0x2750
    ctx->pc = 0x307ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957232));
    // 0x307ecc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x307eccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x307ed0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x307ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307ed4: 0x3c013ea0  lui         $at, 0x3EA0
    ctx->pc = 0x307ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16032 << 16));
    // 0x307ed8: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x307ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x307edc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x307edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x307ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x307ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ee4: 0xc0567f2  jal         func_159FC8
    ctx->pc = 0x307EE4u;
    SET_GPR_U32(ctx, 31, 0x307EECu);
    ctx->pc = 0x307EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EE4u;
    // 0x307ee8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC8u, 0x307EE4u, 0x307EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EECu;
label_307eec:
    // 0x307eec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x307eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ef0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x307ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ef4: 0xc056b68  jal         func_15ADA0
    ctx->pc = 0x307EF4u;
    SET_GPR_U32(ctx, 31, 0x307EFCu);
    ctx->pc = 0x307EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307EF4u;
    // 0x307ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADA0u, 0x307EF4u, 0x307EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307EFCu;
label_307efc:
    // 0x307efc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x307efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307f00: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f04: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307f08: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x307f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307f0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307f10: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307f14: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f18: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x307f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307f1c: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x307f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f20: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x307f20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x307f24: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f28: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307f2c: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x307f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307f30: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307f30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307f34: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307f38: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f3c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x307f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307f40: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x307f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f44: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x307f44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307f48: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f4c: 0xdba40150  lqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x307f50: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x307f50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307f54: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x307f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307f58: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x307f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f5c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x307f5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307f60: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x307f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f64: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x307f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307f68: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x307f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307f6c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x307f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307f70: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x307f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x307f74: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x307f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x307f78: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x307f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x307f7c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x307f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x307f80: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x307f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x307f84: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x307f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x307f88: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x307f88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x307f8c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307f90: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307f90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x307f94: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x307f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307f98: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307f98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307f9c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307fa0: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fa4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x307fa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307fa8: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x307fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fac: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x307facu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x307fb0: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fb4: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x307fb8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x307fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x307fbc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x307fbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x307fc0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x307fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307fc4: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fc8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x307fc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307fcc: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x307fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fd0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x307fd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x307fd4: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fd8: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x307fdc: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x307fdcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307fe0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x307fe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x307fe4: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x307fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307fe8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x307fe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307fec: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x307fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x307ff0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x307ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307ff4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x307ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307ff8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x307ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307ffc: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x307ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x308000: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x308000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x308004: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x308004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x308008: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x308008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x30800c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x30800cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x308010: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x308010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x308014: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x308014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x308018: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30801c: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30801cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x308020: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x308020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308024: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308024u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308028: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30802c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308030: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x308030u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308034: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x308034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308038: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x308038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30803c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308040: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308040u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x308044: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x308044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308048: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308048u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30804c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x30804cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308050: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308054: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x308054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308058: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x308058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30805c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x30805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x308060: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x308060u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308064: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308068: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308068u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30806c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x30806cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308070: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x308070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308074: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308078: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x308078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30807c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x30807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308080: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x308080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308084: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x308084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308088: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x308088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30808c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x30808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x308090: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x308090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x308094: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x308094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x308098: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x308098u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x30809c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080a0: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x3080a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3080a4: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x3080a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3080a8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3080a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3080ac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3080acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3080b0: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x3080b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080b4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x3080b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3080b8: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x3080b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080bc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x3080bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3080c0: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x3080c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080c4: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x3080c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3080c8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x3080c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3080cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3080ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3080d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3080d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3080d4: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x3080d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080d8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x3080d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3080dc: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x3080dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080e0: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x3080e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3080e4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x3080e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3080e8: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x3080e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3080ec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3080ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3080f0: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x3080f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x3080f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3080f8: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3080f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3080fc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3080fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308100: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x308100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308104: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x308104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308108: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x308108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x30810c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x30810cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x308110: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x308110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x308114: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x308114u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x308118: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30811c: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30811cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x308120: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x308120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308124: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308124u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308128: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30812c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308130: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x308130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308134: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x308134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308138: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x308138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30813c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30813cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308140: 0xdba40140  lqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x308144: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x308144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308148: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308148u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30814c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x30814cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308150: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x308150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308154: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x308154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308158: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x308158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30815c: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x30815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x308160: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x308160u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308164: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x308164u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308168: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x308168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30816c: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x30816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308170: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x308170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308174: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308178: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x308178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30817c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308180: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x308180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308184: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x308184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308188: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x308188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x30818c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x30818cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x308190: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x308190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x308194: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x308194u;
    {
        const bool branch_taken_0x308194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308194u;
        // 0x308198: 0xe7a100c8  swc1        $f1, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x308194) {
            ctx->pc = 0x30854Cu;
            goto label_30854c;
        }
    }
    ctx->pc = 0x30819Cu;
label_30819c:
    // 0x30819c: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x30819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
    // 0x3081a0: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x3081a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x3081a4: 0x12c20009  beq         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3081A4u;
    {
        const bool branch_taken_0x3081a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3081A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081A4u;
        // 0x3081a8: 0x8fa5017c  lw          $a1, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081a4) {
            ctx->pc = 0x3081CCu;
            goto label_3081cc;
        }
    }
    ctx->pc = 0x3081ACu;
    // 0x3081ac: 0xc4600200  lwc1        $f0, 0x200($v1)
    ctx->pc = 0x3081acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3081b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3081b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3081b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3081b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3081b8: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x3081b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x3081bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3081bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3081c0: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x3081c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x3081c4: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x3081c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
    // 0x3081c8: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x3081c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_3081cc:
    // 0x3081cc: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x3081ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x3081d0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3081D0u;
    {
        const bool branch_taken_0x3081d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3081d0) {
            ctx->pc = 0x3081D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3081D0u;
            // 0x3081d4: 0x8c82aff0  lw          $v0, -0x5010($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3081F4u;
            goto label_3081f4;
        }
    }
    ctx->pc = 0x3081D8u;
    // 0x3081d8: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x3081d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3081dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3081dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3081e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3081e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3081e4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3081e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3081e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3081e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3081ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3081ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3081f0: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x3081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
label_3081f4:
    // 0x3081f4: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x3081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x3081f8: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x3081f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3081fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3081fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308200: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x308200u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x308204: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x308204u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308208: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x308208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30820c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x30820cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x308210: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x308210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308214: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x308214u;
    SET_GPR_U32(ctx, 31, 0x30821Cu);
    ctx->pc = 0x308218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308214u;
    // 0x308218: 0x8fa40170  lw          $a0, 0x170($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x308214u, 0x30821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30821Cu;
label_30821c:
    // 0x30821c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30821cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x308220: 0x0  nop
    ctx->pc = 0x308220u;
    // NOP
    // 0x308224: 0x0  nop
    ctx->pc = 0x308224u;
    // NOP
    // 0x308228: 0x460c0004  c1          0xC0004
    ctx->pc = 0x308228u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x30822c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x30822cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308230: 0x0  nop
    ctx->pc = 0x308230u;
    // NOP
    // 0x308234: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x308234u;
    {
        const bool branch_taken_0x308234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x308234) {
            ctx->pc = 0x308244u;
            goto label_308244;
        }
    }
    ctx->pc = 0x30823Cu;
    // 0x30823c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x30823Cu;
    SET_GPR_U32(ctx, 31, 0x308244u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x30823Cu, 0x308244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308244u;
label_308244:
    // 0x308244: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x308244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x308248: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x308248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30824c: 0x0  nop
    ctx->pc = 0x30824cu;
    // NOP
    // 0x308250: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x308250u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x308254: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x308254u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x308258: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x308258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30825c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x30825cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308260: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308264: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x308264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308268: 0x2662d8b0  addiu       $v0, $s3, -0x2750
    ctx->pc = 0x308268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957232));
    // 0x30826c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x30826cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308270: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x308270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308274: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x308274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308278: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x308278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30827c: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x30827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x308280: 0xc7a70108  lwc1        $f7, 0x108($sp)
    ctx->pc = 0x308280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x308284: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x308284u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x308288: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x308288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30828c: 0xc7a50100  lwc1        $f5, 0x100($sp)
    ctx->pc = 0x30828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x308290: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x308290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x308294: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x308294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x308298: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x308298u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x30829c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x30829cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3082a0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3082a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3082a4: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x3082a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x3082a8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3082a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3082ac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3082acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3082b0: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x3082b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3082b4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x3082b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3082b8: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x3082b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3082bc: 0xe6f4000c  swc1        $f20, 0xC($s7)
    ctx->pc = 0x3082bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x3082c0: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x3082c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3082c4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x3082C4u;
    SET_GPR_U32(ctx, 31, 0x3082CCu);
    ctx->pc = 0x3082C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082C4u;
    // 0x3082c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x3082C4u, 0x3082CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082CCu;
label_3082cc:
    // 0x3082cc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3082ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3082d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3082d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3082d4: 0x0  nop
    ctx->pc = 0x3082d4u;
    // NOP
    // 0x3082d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3082d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3082dc: 0x0  nop
    ctx->pc = 0x3082dcu;
    // NOP
    // 0x3082e0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3082E0u;
    {
        const bool branch_taken_0x3082e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3082E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082E0u;
        // 0x3082e4: 0xc7a300f0  lwc1        $f3, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082e0) {
            ctx->pc = 0x30831Cu;
            goto label_30831c;
        }
    }
    ctx->pc = 0x3082E8u;
    // 0x3082e8: 0x0  nop
    ctx->pc = 0x3082e8u;
    // NOP
    // 0x3082ec: 0x0  nop
    ctx->pc = 0x3082ecu;
    // NOP
    // 0x3082f0: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x3082f0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x3082f4: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x3082f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3082f8: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x3082f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3082fc: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3082fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308300: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x308300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x308304: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x308304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x308308: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x308308u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x30830c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x30830cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x308310: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x308310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x308314: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x308314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x308318: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x308318u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_30831c:
    // 0x30831c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x30831cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308320: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x308320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308324: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x308324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308328: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x308328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30832c: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x30832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308330: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x308330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x308334: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x308334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x308338: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x308338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30833c: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x30833cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x308340: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x308340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x308344: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x308344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x308348: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x308348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30834c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x30834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308350: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308350u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x308354: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x308354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308358: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308358u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30835c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x30835cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308360: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308364: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308368: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x308368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30836c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x30836cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x308370: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308374: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x308378: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x308378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30837c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x30837cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308380: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308384: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308388: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30838c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x30838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308390: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x308390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x308394: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308398: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308398u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30839c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x30839cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3083a0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3083a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3083a4: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3083a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3083a8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x3083a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3083ac: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x3083acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3083b0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x3083b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3083b4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x3083b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3083b8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x3083b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3083bc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3083bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3083c0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3083c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3083c4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3083c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3083c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3083c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3083cc: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3083ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3083d0: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3083d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3083d4: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x3083d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3083d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3083d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3083dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3083dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3083e0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3083e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3083e4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x3083e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3083e8: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x3083e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3083ec: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x3083ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3083f0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3083f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3083f4: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3083f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3083f8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x3083f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3083fc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3083fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308400: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308404: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308408: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30840c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x30840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308410: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x308410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x308414: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x308414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x308418: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x308418u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x30841c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x30841cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308420: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308424: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308424u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308428: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x308428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30842c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x30842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308430: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x308430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308434: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x308434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308438: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x308438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30843c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x30843cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x308440: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x308440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x308444: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x308444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308448: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30844c: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x30844cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x308450: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x308450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308454: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308454u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308458: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30845c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x30845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308460: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308464: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x308464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308468: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x308468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30846c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x30846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308470: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x308474: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x308474u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x308478: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x308478u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30847c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x30847cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308480: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308484: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308488: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x308488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30848c: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x30848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x308490: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x308490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308494: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308498: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30849c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x30849cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3084a0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3084a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3084a4: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3084a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3084a8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x3084a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3084ac: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x3084acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3084b0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x3084b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3084b4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x3084b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3084b8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x3084b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3084bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3084bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3084c0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3084c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3084c4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3084c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3084c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3084c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3084cc: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3084ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3084d0: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3084d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3084d4: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x3084d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3084d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3084d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3084dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3084dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3084e0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3084e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3084e4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x3084e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3084e8: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x3084e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3084ec: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x3084ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3084f0: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3084f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3084f4: 0xdba40110  lqc2        $vf4, 0x110($sp)
    ctx->pc = 0x3084f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3084f8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x3084f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3084fc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3084fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x308500: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x308500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308504: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308508: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30850c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x30850cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308510: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x308510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x308514: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x308514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308518: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x308518u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x30851c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x30851cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x308520: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x308520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x308524: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x308524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308528: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x308528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30852c: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x30852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308530: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x308530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308534: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x308534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308538: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x308538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30853c: 0xafa5016c  sw          $a1, 0x16C($sp)
    ctx->pc = 0x30853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 5));
    // 0x308540: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x308540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x308544: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x308544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x308548: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x308548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_30854c:
    // 0x30854c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x30854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x308550: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x308550u;
    {
        const bool branch_taken_0x308550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308550u;
        // 0x308554: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308550) {
            ctx->pc = 0x3088A8u;
            goto label_3088a8;
        }
    }
    ctx->pc = 0x308558u;
    // 0x308558: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x308558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x30855c: 0x0  nop
    ctx->pc = 0x30855cu;
    // NOP
label_308560:
    // 0x308560: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x308564: 0xafa40178  sw          $a0, 0x178($sp)
    ctx->pc = 0x308564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 4));
    // 0x308568: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x308568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x30856c: 0x8faa0170  lw          $t2, 0x170($sp)
    ctx->pc = 0x30856cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x308570: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x308570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x308574: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x308574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x308578: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x308578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x30857c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x30857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x308580: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x308580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x308584: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x308584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x308588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30858c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x30858cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x308590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x308590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308594: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x308594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x308598: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x308598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30859c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30859cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085a0: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x3085a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3085a4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x3085A4u;
    SET_GPR_U32(ctx, 31, 0x3085ACu);
    ctx->pc = 0x3085A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085A4u;
    // 0x3085a8: 0xafb00174  sw          $s0, 0x174($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x3085A4u, 0x3085ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085ACu;
label_3085ac:
    // 0x3085ac: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x3085ACu;
    {
        const bool branch_taken_0x3085ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085ACu;
        // 0x3085b0: 0x27b50164  addiu       $s5, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085ac) {
            ctx->pc = 0x3087D4u;
            goto label_3087d4;
        }
    }
    ctx->pc = 0x3085B4u;
    // 0x3085b4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x3085b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3085b8: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x3085B8u;
    {
        const bool branch_taken_0x3085b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085B8u;
        // 0x3085bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085b8) {
            ctx->pc = 0x3087D4u;
            goto label_3087d4;
        }
    }
    ctx->pc = 0x3085C0u;
    // 0x3085c0: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x3085c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3085c4: 0x0  nop
    ctx->pc = 0x3085c4u;
    // NOP
label_3085c8:
    // 0x3085c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3085c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3085cc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x3085ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x3085d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3085d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085d4: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x3085d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3085d8: 0x2464ae50  addiu       $a0, $v1, -0x51B0
    ctx->pc = 0x3085d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
    // 0x3085dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3085e0: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x3085e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3085e4: 0xc04ccee  jal         func_1333B8
    ctx->pc = 0x3085E4u;
    SET_GPR_U32(ctx, 31, 0x3085ECu);
    ctx->pc = 0x3085E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085E4u;
    // 0x3085e8: 0x94650008  lhu         $a1, 0x8($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1333B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333B8u, 0x3085E4u, 0x3085ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085ECu;
label_3085ec:
    // 0x3085ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3085ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3085f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3085f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085f4: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x3085f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3085f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3085F8u;
    {
        const bool branch_taken_0x3085f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3085FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3085F8u;
        // 0x3085fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3085f8) {
            ctx->pc = 0x308680u;
            goto label_308680;
        }
    }
    ctx->pc = 0x308600u;
    // 0x308600: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x308600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308604: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x308604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_308608:
    // 0x308608: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x308608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30860c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x30860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x308610: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x308610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x308614: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x308614u;
    {
        const bool branch_taken_0x308614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308614) {
            ctx->pc = 0x308618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308614u;
            // 0x308618: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30866Cu;
            goto label_30866c;
        }
    }
    ctx->pc = 0x30861Cu;
    // 0x30861c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x30861cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x308620: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x308620u;
    {
        const bool branch_taken_0x308620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308620u;
        // 0x308624: 0x8fa40168  lw          $a0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308620) {
            ctx->pc = 0x308668u;
            goto label_308668;
        }
    }
    ctx->pc = 0x308628u;
    // 0x308628: 0xc0c227c  jal         func_3089F0
    ctx->pc = 0x308628u;
    SET_GPR_U32(ctx, 31, 0x308630u);
    ctx->pc = 0x30862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308628u;
    // 0x30862c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3089F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3089F0u, 0x308628u, 0x308630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308630u;
label_308630:
    // 0x308630: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308630u;
    {
        const bool branch_taken_0x308630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308630u;
        // 0x308634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308630) {
            ctx->pc = 0x308668u;
            goto label_308668;
        }
    }
    ctx->pc = 0x308638u;
    // 0x308638: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x308638u;
    SET_GPR_U32(ctx, 31, 0x308640u);
    ctx->pc = 0x30863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308638u;
    // 0x30863c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x308638u, 0x308640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308640u;
label_308640:
    // 0x308640: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x308640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308644: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x308644u;
    {
        const bool branch_taken_0x308644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308644) {
            ctx->pc = 0x308648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308644u;
            // 0x308648: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30866Cu;
            goto label_30866c;
        }
    }
    ctx->pc = 0x30864Cu;
    // 0x30864c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x30864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_308650:
    // 0x308650: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x308650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x308654: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x308654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x308658: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x308658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
    // 0x30865c: 0x0  nop
    ctx->pc = 0x30865cu;
    // NOP
    // 0x308660: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x308660u;
    {
        const bool branch_taken_0x308660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308660) {
            ctx->pc = 0x308664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308660u;
            // 0x308664: 0x8c620380  lw          $v0, 0x380($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308650;
        }
    }
    ctx->pc = 0x308668u;
label_308668:
    // 0x308668: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x308668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30866c:
    // 0x30866c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308670: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x308670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x308674: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x308674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x308678: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x308678u;
    {
        const bool branch_taken_0x308678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308678u;
        // 0x30867c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308678) {
            ctx->pc = 0x308608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308608;
        }
    }
    ctx->pc = 0x308680u;
label_308680:
    // 0x308680: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x308680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x308684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308688: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x308688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30868c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308690: 0x9043000a  lbu         $v1, 0xA($v0)
    ctx->pc = 0x308690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x308694: 0x9044000b  lbu         $a0, 0xB($v0)
    ctx->pc = 0x308694u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x308698: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x308698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30869c: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x30869Cu;
    {
        const bool branch_taken_0x30869c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30869Cu;
        // 0x3086a0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30869c) {
            ctx->pc = 0x3087C0u;
            goto label_3087c0;
        }
    }
    ctx->pc = 0x3086A4u;
    // 0x3086a4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3086a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086a8: 0x3c0c0075  lui         $t4, 0x75
    ctx->pc = 0x3086a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)117 << 16));
    // 0x3086ac: 0x8d834c58  lw          $v1, 0x4C58($t4)
    ctx->pc = 0x3086acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
label_3086b0:
    // 0x3086b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3086b4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3086b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3086b8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3086b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3086bc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3086BCu;
    {
        const bool branch_taken_0x3086bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086BCu;
        // 0x3086c0: 0x24a90001  addiu       $t1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086bc) {
            ctx->pc = 0x3087A8u;
            goto label_3087a8;
        }
    }
    ctx->pc = 0x3086C4u;
    // 0x3086c4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3086c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3086c8: 0x3c0a0075  lui         $t2, 0x75
    ctx->pc = 0x3086c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)117 << 16));
    // 0x3086cc: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x3086ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3086d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3086d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3086d4: 0x0  nop
    ctx->pc = 0x3086d4u;
    // NOP
label_3086d8:
    // 0x3086d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3086d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3086dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086e0: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x3086e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x3086e4: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x3086e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3086e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3086E8u;
    {
        const bool branch_taken_0x3086e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3086ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086E8u;
        // 0x3086ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086e8) {
            ctx->pc = 0x3086F8u;
            goto label_3086f8;
        }
    }
    ctx->pc = 0x3086F0u;
    // 0x3086f0: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x3086f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x3086f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3086f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3086f8:
    // 0x3086f8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3086f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3086fc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3086FCu;
    {
        const bool branch_taken_0x3086fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3086fc) {
            ctx->pc = 0x308700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3086FCu;
            // 0x308700: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308768u;
            goto label_308768;
        }
    }
    ctx->pc = 0x308704u;
    // 0x308704: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x308704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x308708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308708u;
    {
        const bool branch_taken_0x308708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308708u;
        // 0x30870c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308708) {
            ctx->pc = 0x308718u;
            goto label_308718;
        }
    }
    ctx->pc = 0x308710u;
    // 0x308710: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308718:
    // 0x308718: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30871c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x30871Cu;
    {
        const bool branch_taken_0x30871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30871c) {
            ctx->pc = 0x308720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30871Cu;
            // 0x308720: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308768u;
            goto label_308768;
        }
    }
    ctx->pc = 0x308724u;
    // 0x308724: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308728u;
    {
        const bool branch_taken_0x308728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308728u;
        // 0x30872c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308728) {
            ctx->pc = 0x308738u;
            goto label_308738;
        }
    }
    ctx->pc = 0x308730u;
    // 0x308730: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308738:
    // 0x308738: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30873c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30873Cu;
    {
        const bool branch_taken_0x30873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30873c) {
            ctx->pc = 0x308740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30873Cu;
            // 0x308740: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308768u;
            goto label_308768;
        }
    }
    ctx->pc = 0x308744u;
    // 0x308744: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308748u;
    {
        const bool branch_taken_0x308748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308748u;
        // 0x30874c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308748) {
            ctx->pc = 0x308758u;
            goto label_308758;
        }
    }
    ctx->pc = 0x308750u;
    // 0x308750: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x308750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x308754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308758:
    // 0x308758: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30875c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30875Cu;
    {
        const bool branch_taken_0x30875c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30875Cu;
        // 0x308760: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30875c) {
            ctx->pc = 0x30876Cu;
            goto label_30876c;
        }
    }
    ctx->pc = 0x308764u;
    // 0x308764: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308768:
    // 0x308768: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x308768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_30876c:
    // 0x30876c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30876Cu;
    {
        const bool branch_taken_0x30876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30876Cu;
        // 0x308770: 0x8d434c58  lw          $v1, 0x4C58($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30876c) {
            ctx->pc = 0x308794u;
            goto label_308794;
        }
    }
    ctx->pc = 0x308774u;
    // 0x308774: 0xdca30538  ld          $v1, 0x538($a1)
    ctx->pc = 0x308774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1336)));
    // 0x308778: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x308778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30877c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30877Cu;
    {
        const bool branch_taken_0x30877c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30877Cu;
        // 0x308780: 0x8d434c58  lw          $v1, 0x4C58($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30877c) {
            ctx->pc = 0x308794u;
            goto label_308794;
        }
    }
    ctx->pc = 0x308784u;
    // 0x308784: 0x8ca205a0  lw          $v0, 0x5A0($a1)
    ctx->pc = 0x308784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1440)));
    // 0x308788: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x308788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x30878c: 0xaca205a0  sw          $v0, 0x5A0($a1)
    ctx->pc = 0x30878cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1440), GPR_U32(ctx, 2));
    // 0x308790: 0x8d434c58  lw          $v1, 0x4C58($t2)
    ctx->pc = 0x308790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19544)));
label_308794:
    // 0x308794: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x308794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x308798: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x308798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30879c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x30879cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3087a0: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3087A0u;
    {
        const bool branch_taken_0x3087a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3087a0) {
            ctx->pc = 0x3087A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3087A0u;
            // 0x3087a4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3086D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3086d8;
        }
    }
    ctx->pc = 0x3087A8u;
label_3087a8:
    // 0x3087a8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x3087a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3087ac: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3087acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087b0: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x3087b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x3087b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3087b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3087b8: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x3087B8u;
    {
        const bool branch_taken_0x3087b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3087BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087B8u;
        // 0x3087bc: 0x8d834c58  lw          $v1, 0x4C58($t4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087b8) {
            ctx->pc = 0x3086B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3086b0;
        }
    }
    ctx->pc = 0x3087C0u;
label_3087c0:
    // 0x3087c0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x3087c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3087c4: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3087c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3087c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3087cc: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x3087CCu;
    {
        const bool branch_taken_0x3087cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3087D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087CCu;
        // 0x3087d0: 0x8fa50170  lw          $a1, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087cc) {
            ctx->pc = 0x3085C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3085c8;
        }
    }
    ctx->pc = 0x3087D4u;
label_3087d4:
    // 0x3087d4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x3087d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x3087d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3087d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3087dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3087dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3087e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3087e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087e4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3087e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3087e8: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x3087e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3087ec: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x3087ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x3087f0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x3087f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x3087f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3087f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3087f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3087f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087fc: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x3087fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x308800: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x308800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x308804: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x308804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x308808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x308808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30880c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30880cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308810: 0xc04c784  jal         func_131E10
    ctx->pc = 0x308810u;
    SET_GPR_U32(ctx, 31, 0x308818u);
    ctx->pc = 0x308814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308810u;
    // 0x308814: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x308810u, 0x308818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308818u;
label_308818:
    // 0x308818: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x308818u;
    {
        const bool branch_taken_0x308818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308818u;
        // 0x30881c: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308818) {
            ctx->pc = 0x308894u;
            goto label_308894;
        }
    }
    ctx->pc = 0x308820u;
    // 0x308820: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x308820u;
    {
        const bool branch_taken_0x308820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308820u;
        // 0x308824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308820) {
            ctx->pc = 0x308894u;
            goto label_308894;
        }
    }
    ctx->pc = 0x308828u;
    // 0x308828: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x308828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30882c: 0x0  nop
    ctx->pc = 0x30882cu;
    // NOP
label_308830:
    // 0x308830: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x308830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308834: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x308834u;
    {
        const bool branch_taken_0x308834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x308838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308834u;
        // 0x308838: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308834) {
            ctx->pc = 0x308884u;
            goto label_308884;
        }
    }
    ctx->pc = 0x30883Cu;
    // 0x30883c: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x30883cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x308840: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308844: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308844u;
    {
        const bool branch_taken_0x308844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308844u;
        // 0x308848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308844) {
            ctx->pc = 0x308854u;
            goto label_308854;
        }
    }
    ctx->pc = 0x30884Cu;
    // 0x30884c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x30884cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x308850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308854:
    // 0x308854: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x308854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x308858: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308858u;
    {
        const bool branch_taken_0x308858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308858u;
        // 0x30885c: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308858) {
            ctx->pc = 0x308884u;
            goto label_308884;
        }
    }
    ctx->pc = 0x308860u;
    // 0x308860: 0x9c8205b8  lwu         $v0, 0x5B8($a0)
    ctx->pc = 0x308860u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x308864: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x308864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x308868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x308868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30886c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30886Cu;
    {
        const bool branch_taken_0x30886c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30886Cu;
        // 0x308870: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30886c) {
            ctx->pc = 0x308884u;
            goto label_308884;
        }
    }
    ctx->pc = 0x308874u;
    // 0x308874: 0x8c8205a0  lw          $v0, 0x5A0($a0)
    ctx->pc = 0x308874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x308878: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x308878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x30887c: 0xac8205a0  sw          $v0, 0x5A0($a0)
    ctx->pc = 0x30887cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
    // 0x308880: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x308880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_308884:
    // 0x308884: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x308884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x308888: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x308888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30888c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x30888Cu;
    {
        const bool branch_taken_0x30888c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30888Cu;
        // 0x308890: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30888c) {
            ctx->pc = 0x308830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308830;
        }
    }
    ctx->pc = 0x308894u;
label_308894:
    // 0x308894: 0x8fb00174  lw          $s0, 0x174($sp)
    ctx->pc = 0x308894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x308898: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x308898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x30889c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x30889cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3088a0: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x3088A0u;
    {
        const bool branch_taken_0x3088a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088A0u;
        // 0x3088a4: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088a0) {
            ctx->pc = 0x308560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308560;
        }
    }
    ctx->pc = 0x3088A8u;
label_3088a8:
    // 0x3088a8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3088a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3088ac: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x3088acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x3088b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3088b4: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x3088b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3088b8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3088b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3088bc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3088BCu;
    {
        const bool branch_taken_0x3088bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3088C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088BCu;
        // 0x3088c0: 0x7bb00210  lq          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088bc) {
            ctx->pc = 0x3089B8u;
            goto label_3089b8;
        }
    }
    ctx->pc = 0x3088C4u;
    // 0x3088c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3088c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3088c8:
    // 0x3088c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3088c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088cc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3088ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3088d0: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x3088d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x3088d4: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x3088d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3088d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3088D8u;
    {
        const bool branch_taken_0x3088d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088D8u;
        // 0x3088dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088d8) {
            ctx->pc = 0x3088E8u;
            goto label_3088e8;
        }
    }
    ctx->pc = 0x3088E0u;
    // 0x3088e0: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x3088e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x3088e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3088e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3088e8:
    // 0x3088e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3088e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3088ec: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3088ECu;
    {
        const bool branch_taken_0x3088ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3088ec) {
            ctx->pc = 0x3088F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3088ECu;
            // 0x3088f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308958u;
            goto label_308958;
        }
    }
    ctx->pc = 0x3088F4u;
    // 0x3088f4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x3088f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3088f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3088F8u;
    {
        const bool branch_taken_0x3088f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3088FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088F8u;
        // 0x3088fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088f8) {
            ctx->pc = 0x308908u;
            goto label_308908;
        }
    }
    ctx->pc = 0x308900u;
    // 0x308900: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308908:
    // 0x308908: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30890c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x30890Cu;
    {
        const bool branch_taken_0x30890c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30890c) {
            ctx->pc = 0x308910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30890Cu;
            // 0x308910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308958u;
            goto label_308958;
        }
    }
    ctx->pc = 0x308914u;
    // 0x308914: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x308914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x308918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308918u;
    {
        const bool branch_taken_0x308918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308918u;
        // 0x30891c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308918) {
            ctx->pc = 0x308928u;
            goto label_308928;
        }
    }
    ctx->pc = 0x308920u;
    // 0x308920: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308928:
    // 0x308928: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30892c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30892Cu;
    {
        const bool branch_taken_0x30892c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30892c) {
            ctx->pc = 0x308930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30892Cu;
            // 0x308930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308958u;
            goto label_308958;
        }
    }
    ctx->pc = 0x308934u;
    // 0x308934: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x308934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x308938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308938u;
    {
        const bool branch_taken_0x308938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308938u;
        // 0x30893c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308938) {
            ctx->pc = 0x308948u;
            goto label_308948;
        }
    }
    ctx->pc = 0x308940u;
    // 0x308940: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x308940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x308944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308948:
    // 0x308948: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x308948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30894c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30894Cu;
    {
        const bool branch_taken_0x30894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30894Cu;
        // 0x308950: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30894c) {
            ctx->pc = 0x30895Cu;
            goto label_30895c;
        }
    }
    ctx->pc = 0x308954u;
    // 0x308954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308958:
    // 0x308958: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x308958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_30895c:
    // 0x30895c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30895Cu;
    {
        const bool branch_taken_0x30895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30895Cu;
        // 0x308960: 0x3c050075  lui         $a1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30895c) {
            ctx->pc = 0x30899Cu;
            goto label_30899c;
        }
    }
    ctx->pc = 0x308964u;
    // 0x308964: 0x9e0205a0  lwu         $v0, 0x5A0($s0)
    ctx->pc = 0x308964u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x308968: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x308968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x30896c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x308970: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308970u;
    {
        const bool branch_taken_0x308970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308970u;
        // 0x308974: 0x8fa7016c  lw          $a3, 0x16C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308970) {
            ctx->pc = 0x30899Cu;
            goto label_30899c;
        }
    }
    ctx->pc = 0x308978u;
    // 0x308978: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x308978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x30897c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x30897cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x308980: 0xc07e4b0  jal         func_1F92C0
    ctx->pc = 0x308980u;
    SET_GPR_U32(ctx, 31, 0x308988u);
    ctx->pc = 0x308984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308980u;
    // 0x308984: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F92C0u, 0x308980u, 0x308988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308988u;
label_308988:
    // 0x308988: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308988u;
    {
        const bool branch_taken_0x308988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308988u;
        // 0x30898c: 0x3c050075  lui         $a1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308988) {
            ctx->pc = 0x30899Cu;
            goto label_30899c;
        }
    }
    ctx->pc = 0x308990u;
    // 0x308990: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x308990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x308994: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x308994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x308998: 0xae0205a0  sw          $v0, 0x5A0($s0)
    ctx->pc = 0x308998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
label_30899c:
    // 0x30899c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x30899cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3089a0: 0x8ca34c58  lw          $v1, 0x4C58($a1)
    ctx->pc = 0x3089a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 19544)));
    // 0x3089a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3089a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3089a8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3089a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3089ac: 0x5440ffc6  bnel        $v0, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3089ACu;
    {
        const bool branch_taken_0x3089ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3089ac) {
            ctx->pc = 0x3089B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3089ACu;
            // 0x3089b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3088C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3088c8;
        }
    }
    ctx->pc = 0x3089B4u;
label_3089b4:
    // 0x3089b4: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x3089b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_3089b8:
    // 0x3089b8: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x3089b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3089bc: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x3089bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x3089c0: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x3089c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3089c4: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x3089c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3089c8: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x3089c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3089cc: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x3089ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3089d0: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x3089d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3089d4: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x3089d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3089d8: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x3089d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3089dc: 0xc7b60230  lwc1        $f22, 0x230($sp)
    ctx->pc = 0x3089dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3089e0: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x3089e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3089e4: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x3089e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3089e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3089E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3089ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089E8u;
        // 0x3089ec: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3089E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3089F0u;
}
