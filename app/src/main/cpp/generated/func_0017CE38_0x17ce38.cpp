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

// Function: func_0017CE38
// Address: 0x17ce38 - 0x17d078
void func_0017CE38_0x17ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017CE38_0x17ce38");
#endif

    switch (ctx->pc) {
        case 0x17cf08u: goto label_17cf08;
        case 0x17cf28u: goto label_17cf28;
        case 0x17cf3cu: goto label_17cf3c;
        case 0x17cf50u: goto label_17cf50;
        case 0x17cf64u: goto label_17cf64;
        case 0x17cf78u: goto label_17cf78;
        case 0x17cfe8u: goto label_17cfe8;
        case 0x17cff4u: goto label_17cff4;
        case 0x17d000u: goto label_17d000;
        case 0x17d010u: goto label_17d010;
        case 0x17d01cu: goto label_17d01c;
        case 0x17d028u: goto label_17d028;
        case 0x17d050u: goto label_17d050;
        default: break;
    }

    ctx->pc = 0x17ce38u;

    // 0x17ce38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17ce3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ce3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce40: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x17ce44: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17ce48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17ce48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x17ce50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17ce50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce54: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17ce58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17ce5c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x17ce5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17ce60: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17ce60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17ce64: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x17ce64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17ce68: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CE68u;
    {
        const bool branch_taken_0x17ce68 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE68u;
        // 0x17ce6c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce68) {
            ctx->pc = 0x17CE74u;
            goto label_17ce74;
        }
    }
    ctx->pc = 0x17CE70u;
    // 0x17ce70: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17ce70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17ce74:
    // 0x17ce74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ce78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CE78u;
    {
        const bool branch_taken_0x17ce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE78u;
        // 0x17ce7c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce78) {
            ctx->pc = 0x17CE90u;
            goto label_17ce90;
        }
    }
    ctx->pc = 0x17CE80u;
    // 0x17ce80: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17ce84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ce88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CE88u;
    {
        const bool branch_taken_0x17ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE88u;
        // 0x17ce8c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce88) {
            ctx->pc = 0x17CE94u;
            goto label_17ce94;
        }
    }
    ctx->pc = 0x17CE90u;
label_17ce90:
    // 0x17ce90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17ce90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ce94:
    // 0x17ce94: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x17ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17ce98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ce98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17cea0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x17cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17cea4: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x17cea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17cea8: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CEA8u;
    {
        const bool branch_taken_0x17cea8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEA8u;
        // 0x17ceac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cea8) {
            ctx->pc = 0x17CEB8u;
            goto label_17ceb8;
        }
    }
    ctx->pc = 0x17CEB0u;
    // 0x17ceb0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17ceb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17ceb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17ceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ceb8:
    // 0x17ceb8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17cebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CEBCu;
    {
        const bool branch_taken_0x17cebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEBCu;
        // 0x17cec0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cebc) {
            ctx->pc = 0x17CED4u;
            goto label_17ced4;
        }
    }
    ctx->pc = 0x17CEC4u;
    // 0x17cec4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17cec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cecc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CECCu;
    {
        const bool branch_taken_0x17cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CECCu;
        // 0x17ced0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cecc) {
            ctx->pc = 0x17CED8u;
            goto label_17ced8;
        }
    }
    ctx->pc = 0x17CED4u;
label_17ced4:
    // 0x17ced4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17ced4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ced8:
    // 0x17ced8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17cedc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17cee0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x17cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x17cee4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x17cee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17cee8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17ceec: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x17ceecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17cef0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x17cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x17cef4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17cef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17cef8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17cef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17cefc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17cefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17cf00: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17CF00u;
    SET_GPR_U32(ctx, 31, 0x17CF08u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17CF00u, 0x17CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF08u;
label_17cf08:
    // 0x17cf08: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x17cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17cf0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17cf10: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17cf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17cf14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17cf14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17cf18: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x17cf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x17cf1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cf1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf20: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x17CF20u;
    SET_GPR_U32(ctx, 31, 0x17CF28u);
    ctx->pc = 0x17CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF20u;
    // 0x17cf24: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x17CF20u, 0x17CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF28u;
label_17cf28:
    // 0x17cf28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17cf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17cf2c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x17cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cf30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf34: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17CF34u;
    SET_GPR_U32(ctx, 31, 0x17CF3Cu);
    ctx->pc = 0x17CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF34u;
    // 0x17cf38: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17CF34u, 0x17CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF3Cu;
label_17cf3c:
    // 0x17cf3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17cf3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x17cf40: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x17cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cf44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf48: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17CF48u;
    SET_GPR_U32(ctx, 31, 0x17CF50u);
    ctx->pc = 0x17CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF48u;
    // 0x17cf4c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17CF48u, 0x17CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF50u;
label_17cf50:
    // 0x17cf50: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x17cf50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17cf54: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x17cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cf58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf5c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17CF5Cu;
    SET_GPR_U32(ctx, 31, 0x17CF64u);
    ctx->pc = 0x17CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF5Cu;
    // 0x17cf60: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17CF5Cu, 0x17CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF64u;
label_17cf64:
    // 0x17cf64: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x17cf64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17cf68: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x17cf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cf6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf70: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x17CF70u;
    SET_GPR_U32(ctx, 31, 0x17CF78u);
    ctx->pc = 0x17CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF70u;
    // 0x17cf74: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x17CF70u, 0x17CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF78u;
label_17cf78:
    // 0x17cf78: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x17cf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x17cf7c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cf80: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x17cf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x17cf84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cf84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17cf88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17cf8c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17cf90: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CF90u;
    {
        const bool branch_taken_0x17cf90 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x17CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF90u;
        // 0x17cf94: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf90) {
            ctx->pc = 0x17CF9Cu;
            goto label_17cf9c;
        }
    }
    ctx->pc = 0x17CF98u;
    // 0x17cf98: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x17cf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17cf9c:
    // 0x17cf9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cfa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CFA0u;
    {
        const bool branch_taken_0x17cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFA0u;
        // 0x17cfa4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfa0) {
            ctx->pc = 0x17CFB8u;
            goto label_17cfb8;
        }
    }
    ctx->pc = 0x17CFA8u;
    // 0x17cfa8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x17cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x17cfac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cfb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CFB0u;
    {
        const bool branch_taken_0x17cfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFB0u;
        // 0x17cfb4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfb0) {
            ctx->pc = 0x17CFBCu;
            goto label_17cfbc;
        }
    }
    ctx->pc = 0x17CFB8u;
label_17cfb8:
    // 0x17cfb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cfbc:
    // 0x17cfbc: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x17cfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17cfc0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x17cfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17cfc4: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x17cfc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17cfc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cfcc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x17cfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x17cfd0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17cfd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17cfd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17cfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17cfd8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x17cfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17cfdc: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x17cfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x17cfe0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x17CFE0u;
    SET_GPR_U32(ctx, 31, 0x17CFE8u);
    ctx->pc = 0x17CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFE0u;
    // 0x17cfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17CFE0u, 0x17CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFE8u;
label_17cfe8:
    // 0x17cfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfec: 0xc05ce66  jal         func_173998
    ctx->pc = 0x17CFECu;
    SET_GPR_U32(ctx, 31, 0x17CFF4u);
    ctx->pc = 0x17CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFECu;
    // 0x17cff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x17CFECu, 0x17CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFF4u;
label_17cff4:
    // 0x17cff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cff8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x17CFF8u;
    SET_GPR_U32(ctx, 31, 0x17D000u);
    ctx->pc = 0x17CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFF8u;
    // 0x17cffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x17CFF8u, 0x17D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D000u;
label_17d000:
    // 0x17d000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17d004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d008: 0xc051f22  jal         func_147C88
    ctx->pc = 0x17D008u;
    SET_GPR_U32(ctx, 31, 0x17D010u);
    ctx->pc = 0x17D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D008u;
    // 0x17d00c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x17D008u, 0x17D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D010u;
label_17d010:
    // 0x17d010: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17d010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d014: 0xc05ce42  jal         func_173908
    ctx->pc = 0x17D014u;
    SET_GPR_U32(ctx, 31, 0x17D01Cu);
    ctx->pc = 0x17D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D014u;
    // 0x17d018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x17D014u, 0x17D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D01Cu;
label_17d01c:
    // 0x17d01c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d020: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x17D020u;
    SET_GPR_U32(ctx, 31, 0x17D028u);
    ctx->pc = 0x17D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D020u;
    // 0x17d024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x17D020u, 0x17D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D028u;
label_17d028:
    // 0x17d028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17d028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17d02c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d030: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17d034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17d038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d03c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17d03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17d040: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17d040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x17d044: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17d048: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x17D048u;
    SET_GPR_U32(ctx, 31, 0x17D050u);
    ctx->pc = 0x17D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D048u;
    // 0x17d04c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x17D048u, 0x17D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D050u;
label_17d050:
    // 0x17d050: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x17d050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x17d054: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x17d054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d058: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x17d058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d05c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x17d05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d060: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17d060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d068: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x17d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17d06c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x17d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d070: 0x3e00008  jr          $ra
    ctx->pc = 0x17D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D070u;
        // 0x17d074: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D078u;
}
