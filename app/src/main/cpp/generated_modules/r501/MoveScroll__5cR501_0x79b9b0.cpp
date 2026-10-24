#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: MoveScroll__5cR501
// Address: 0x79b9b0 - 0x79bcd0
void MoveScroll__5cR501_0x79b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveScroll__5cR501_0x79b9b0");
#endif

    switch (ctx->pc) {
        case 0x79b9e0u: goto label_79b9e0;
        case 0x79ba18u: goto label_79ba18;
        case 0x79ba48u: goto label_79ba48;
        case 0x79ba98u: goto label_79ba98;
        case 0x79bb18u: goto label_79bb18;
        case 0x79bb5cu: goto label_79bb5c;
        case 0x79bbb0u: goto label_79bbb0;
        case 0x79bc30u: goto label_79bc30;
        default: break;
    }

    ctx->pc = 0x79b9b0u;

    // 0x79b9b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79b9b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b9b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79b9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79b9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79b9c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79b9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79b9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b9cc: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x79b9ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x79b9d0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x79b9d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x79b9d4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x79b9d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x79b9d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B9D8u;
    SET_GPR_U32(ctx, 31, 0x79B9E0u);
    ctx->pc = 0x79B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9D8u;
    // 0x79b9dc: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B9D8u, 0x79B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9E0u;
label_79b9e0:
    // 0x79b9e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79b9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9e4: 0xc60c02e4  lwc1        $f12, 0x2E4($s0)
    ctx->pc = 0x79b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79b9e8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79b9e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x79b9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79b9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79b9f0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x79b9f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x79b9f4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x79b9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x79b9f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79b9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79b9fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79b9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79ba00: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x79ba04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79ba04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79ba08: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79ba08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79ba0c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x79ba0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x79ba10: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x79BA10u;
    SET_GPR_U32(ctx, 31, 0x79BA18u);
    ctx->pc = 0x79BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA10u;
    // 0x79ba14: 0x46166301  sub.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79BA10u, 0x79BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA18u;
label_79ba18:
    // 0x79ba18: 0xc60c02e4  lwc1        $f12, 0x2E4($s0)
    ctx->pc = 0x79ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79ba1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x79ba1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x79ba20: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79ba20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79ba24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ba24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba28: 0x0  nop
    ctx->pc = 0x79ba28u;
    // NOP
    // 0x79ba2c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x79ba2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x79ba30: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79ba30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x79ba34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79ba34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79ba38: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x79ba38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x79ba3c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x79ba3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x79ba40: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x79BA40u;
    SET_GPR_U32(ctx, 31, 0x79BA48u);
    ctx->pc = 0x79BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA40u;
    // 0x79ba44: 0x46166301  sub.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x79BA40u, 0x79BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA48u;
label_79ba48:
    // 0x79ba48: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x79ba48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x79ba4c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79ba4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79ba50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ba50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba54: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x79ba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x79ba58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79ba58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79ba5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79ba5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79ba60: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x79ba60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x79ba64: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x79ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x79ba68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x79ba68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x79ba6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x79BA6Cu;
    {
        const bool branch_taken_0x79ba6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA6Cu;
        // 0x79ba70: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba6c) {
            ctx->pc = 0x79BA78u;
            goto label_79ba78;
        }
    }
    ctx->pc = 0x79BA74u;
    // 0x79ba74: 0xe4540080  swc1        $f20, 0x80($v0)
    ctx->pc = 0x79ba74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_79ba78:
    // 0x79ba78: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x79ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x79ba7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ba7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba80: 0x26030280  addiu       $v1, $s0, 0x280
    ctx->pc = 0x79ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x79ba84: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x79ba84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x79ba88: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BA88u;
    {
        const bool branch_taken_0x79ba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA88u;
        // 0x79ba8c: 0x261302b8  addiu       $s3, $s0, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba88) {
            ctx->pc = 0x79BAD8u;
            goto label_79bad8;
        }
    }
    ctx->pc = 0x79BA90u;
    // 0x79ba90: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79ba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba94: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x79ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_79ba98:
    // 0x79ba98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ba98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ba9c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x79ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x79baa0: 0x28e5000a  slti        $a1, $a3, 0xA
    ctx->pc = 0x79baa0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x79baa4: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x79baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x79baa8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x79baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79baac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79baacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79bab0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x79bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bab4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x79bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x79bab8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x79bab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x79babc: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x79babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x79bac0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x79bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79bac4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BAC4u;
    {
        const bool branch_taken_0x79bac4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAC4u;
        // 0x79bac8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bac4) {
            ctx->pc = 0x79BAD8u;
            goto label_79bad8;
        }
    }
    ctx->pc = 0x79BACCu;
    // 0x79bacc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x79baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bad0: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x79BAD0u;
    {
        const bool branch_taken_0x79bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bad0) {
            ctx->pc = 0x79BAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAD0u;
            // 0x79bad4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba98;
        }
    }
    ctx->pc = 0x79BAD8u;
label_79bad8:
    // 0x79bad8: 0x8e42aff0  lw          $v0, -0x5010($s2)
    ctx->pc = 0x79bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946800)));
    // 0x79badc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79badcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x79bae0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79bae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79bae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bae8: 0xc44c0224  lwc1        $f12, 0x224($v0)
    ctx->pc = 0x79bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79baec: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x79baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x79baf0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79baf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79baf4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x79baf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x79baf8: 0x3c01c389  lui         $at, 0xC389
    ctx->pc = 0x79baf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50057 << 16));
    // 0x79bafc: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79bafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79bb00: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79bb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79bb04: 0x3c014389  lui         $at, 0x4389
    ctx->pc = 0x79bb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17289 << 16));
    // 0x79bb08: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79bb08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79bb0c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79bb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79bb10: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x79BB10u;
    SET_GPR_U32(ctx, 31, 0x79BB18u);
    ctx->pc = 0x79BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB10u;
    // 0x79bb14: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79BB10u, 0x79BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB18u;
label_79bb18:
    // 0x79bb18: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x79bb18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x79bb1c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x79bb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bb20: 0x0  nop
    ctx->pc = 0x79bb20u;
    // NOP
    // 0x79bb24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x79BB24u;
    {
        const bool branch_taken_0x79bb24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB24u;
        // 0x79bb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb24) {
            ctx->pc = 0x79BB30u;
            goto label_79bb30;
        }
    }
    ctx->pc = 0x79BB2Cu;
    // 0x79bb2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79bb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb30:
    // 0x79bb30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79bb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79bb34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BB34u;
    {
        const bool branch_taken_0x79bb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0x8e42aff0  lw          $v0, -0x5010($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb34) {
            ctx->pc = 0x79BB4Cu;
            goto label_79bb4c;
        }
    }
    ctx->pc = 0x79BB3Cu;
    // 0x79bb3c: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x79bb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x79bb40: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79bb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79bb44: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x79bb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x79bb48: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79bb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79bb4c:
    // 0x79bb4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x79bb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bb50: 0xc44c0224  lwc1        $f12, 0x224($v0)
    ctx->pc = 0x79bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79bb54: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x79BB54u;
    SET_GPR_U32(ctx, 31, 0x79BB5Cu);
    ctx->pc = 0x79BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB54u;
    // 0x79bb58: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x79BB54u, 0x79BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB5Cu;
label_79bb5c:
    // 0x79bb5c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x79bb5cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x79bb60: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x79bb60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bb64: 0x0  nop
    ctx->pc = 0x79bb64u;
    // NOP
    // 0x79bb68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x79BB68u;
    {
        const bool branch_taken_0x79bb68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB68u;
        // 0x79bb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb68) {
            ctx->pc = 0x79BB74u;
            goto label_79bb74;
        }
    }
    ctx->pc = 0x79BB70u;
    // 0x79bb70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79bb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79bb74:
    // 0x79bb74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79bb78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BB78u;
    {
        const bool branch_taken_0x79bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bb78) {
            ctx->pc = 0x79BB94u;
            goto label_79bb94;
        }
    }
    ctx->pc = 0x79BB80u;
    // 0x79bb80: 0x3c0142fa  lui         $at, 0x42FA
    ctx->pc = 0x79bb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x79bb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bb88: 0x0  nop
    ctx->pc = 0x79bb88u;
    // NOP
    // 0x79bb8c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x79bb8cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x79bb90: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x79bb90u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_79bb94:
    // 0x79bb94: 0x3c014409  lui         $at, 0x4409
    ctx->pc = 0x79bb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17417 << 16));
    // 0x79bb98: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x79bb98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x79bb9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bba0: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x79bba0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bba4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79bba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bba8: 0xc6020394  lwc1        $f2, 0x394($s0)
    ctx->pc = 0x79bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79bbac: 0x0  nop
    ctx->pc = 0x79bbacu;
    // NOP
label_79bbb0:
    // 0x79bbb0: 0x0  nop
    ctx->pc = 0x79bbb0u;
    // NOP
    // 0x79bbb4: 0x0  nop
    ctx->pc = 0x79bbb4u;
    // NOP
    // 0x79bbb8: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x79bbb8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x79bbbc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79bbbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x79bbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79bbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79bbc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x79bbc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79bbc8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x79bbc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x79bbcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x79bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79bbd0: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x79bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x79bbd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79bbd8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79bbd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79bbdc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x79bbdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bbe0: 0x0  nop
    ctx->pc = 0x79bbe0u;
    // NOP
    // 0x79bbe4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBE4u;
    {
        const bool branch_taken_0x79bbe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79bbe4) {
            ctx->pc = 0x79BBF4u;
            goto label_79bbf4;
        }
    }
    ctx->pc = 0x79BBECu;
    // 0x79bbec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79BBECu;
    {
        const bool branch_taken_0x79bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBECu;
        // 0x79bbf0: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bbec) {
            ctx->pc = 0x79BC04u;
            goto label_79bc04;
        }
    }
    ctx->pc = 0x79BBF4u;
label_79bbf4:
    // 0x79bbf4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x79bbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79bbf8: 0x0  nop
    ctx->pc = 0x79bbf8u;
    // NOP
    // 0x79bbfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79BBFCu;
    {
        const bool branch_taken_0x79bbfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79bbfc) {
            ctx->pc = 0x79BC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BBFCu;
            // 0x79bc00: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC04u;
            goto label_79bc04;
        }
    }
    ctx->pc = 0x79BC04u;
label_79bc04:
    // 0x79bc04: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x79bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x79bc08: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x79bc08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79bc0c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x79bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x79bc10: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x79bc10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79bc18: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x79BC18u;
    {
        const bool branch_taken_0x79bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC18u;
        // 0x79bc1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc18) {
            ctx->pc = 0x79BC90u;
            goto label_79bc90;
        }
    }
    ctx->pc = 0x79BC20u;
    // 0x79bc20: 0x3c0c0074  lui         $t4, 0x74
    ctx->pc = 0x79bc20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)116 << 16));
    // 0x79bc24: 0x3c0b4000  lui         $t3, 0x4000
    ctx->pc = 0x79bc24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16384 << 16));
    // 0x79bc28: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x79bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x79bc2c: 0x0  nop
    ctx->pc = 0x79bc2cu;
    // NOP
label_79bc30:
    // 0x79bc30: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x79bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x79bc34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79bc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79bc38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x79bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x79bc3c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x79bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x79bc40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x79bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79bc44: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x79bc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x79bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x79bc4c: 0x28e80010  slti        $t0, $a3, 0x10
    ctx->pc = 0x79bc4cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x79bc50: 0x8ca400f0  lw          $a0, 0xF0($a1)
    ctx->pc = 0x79bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x79bc54: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x79bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x79bc58: 0x8d827a8c  lw          $v0, 0x7A8C($t4)
    ctx->pc = 0x79bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 31372)));
    // 0x79bc5c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x79bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x79bc60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BC60u;
    {
        const bool branch_taken_0x79bc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC60u;
        // 0x79bc64: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc60) {
            ctx->pc = 0x79BC74u;
            goto label_79bc74;
        }
    }
    ctx->pc = 0x79BC68u;
    // 0x79bc68: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x79bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x79bc6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79BC6Cu;
    {
        const bool branch_taken_0x79bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC6Cu;
        // 0x79bc70: 0xe4540004  swc1        $f20, 0x4($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc6c) {
            ctx->pc = 0x79BC7Cu;
            goto label_79bc7c;
        }
    }
    ctx->pc = 0x79BC74u;
label_79bc74:
    // 0x79bc74: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x79bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x79bc78: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_79bc7c:
    // 0x79bc7c: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BC7Cu;
    {
        const bool branch_taken_0x79bc7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bc7c) {
            ctx->pc = 0x79BC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC7Cu;
            // 0x79bc80: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC94u;
            goto label_79bc94;
        }
    }
    ctx->pc = 0x79BC84u;
    // 0x79bc84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79bc88: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79BC88u;
    {
        const bool branch_taken_0x79bc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC88u;
        // 0x79bc8c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc88) {
            ctx->pc = 0x79BC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc30;
        }
    }
    ctx->pc = 0x79BC90u;
label_79bc90:
    // 0x79bc90: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x79bc90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_79bc94:
    // 0x79bc94: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x79bc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x79bc98: 0x5440ffc5  bnel        $v0, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x79BC98u;
    {
        const bool branch_taken_0x79bc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bc98) {
            ctx->pc = 0x79BC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC98u;
            // 0x79bc9c: 0xc6020394  lwc1        $f2, 0x394($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bbb0;
        }
    }
    ctx->pc = 0x79BCA0u;
    // 0x79bca0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79bca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79bca4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79bca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79bca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bcac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79bcacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bcb4: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x79bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x79bcb8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x79bcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79bcbc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x79bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79bcc0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x79bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x79BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCC4u;
        // 0x79bcc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BCCCu;
    // 0x79bccc: 0x0  nop
    ctx->pc = 0x79bcccu;
    // NOP
    ctx->pc = 0x79bcd0u;
}
} // namespace gh_r501
