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

// Function: func_00148F50
// Address: 0x148f50 - 0x1490b0
void func_00148F50_0x148f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148F50_0x148f50");
#endif

    switch (ctx->pc) {
        case 0x148fa0u: goto label_148fa0;
        case 0x148fc8u: goto label_148fc8;
        case 0x1490a0u: goto label_1490a0;
        default: break;
    }

    ctx->pc = 0x148f50u;

    // 0x148f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148f54: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x148f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x148f58: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x148f58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x148f5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x148f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148f64: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x148f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f68: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
    // 0x148f6c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x148f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x148f70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x148f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x148f74: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x148f74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x148f78: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148f7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x148f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f80: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x148f80u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x148f84: 0x46007046  mov.s       $f1, $f14
    ctx->pc = 0x148f84u;
    ctx->f[1] = FPU_MOV_S(ctx->f[14]);
    // 0x148f88: 0x94a9000a  lhu         $t1, 0xA($a1)
    ctx->pc = 0x148f88u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x148f8c: 0x11200039  beqz        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x148F8Cu;
    {
        const bool branch_taken_0x148f8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F8Cu;
        // 0x148f90: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f8c) {
            ctx->pc = 0x149074u;
            goto label_149074;
        }
    }
    ctx->pc = 0x148F94u;
    // 0x148f94: 0x24aa0020  addiu       $t2, $a1, 0x20
    ctx->pc = 0x148f94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x148f98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148f9c: 0x0  nop
    ctx->pc = 0x148f9cu;
    // NOP
label_148fa0:
    // 0x148fa0: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x148fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148fa4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x148fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x148fa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x148fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148fac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x148fb0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x148fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x148fb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148fb8: 0x94670014  lhu         $a3, 0x14($v1)
    ctx->pc = 0x148fb8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x148fbc: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x148FBCu;
    {
        const bool branch_taken_0x148fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x148FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FBCu;
        // 0x148fc0: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fbc) {
            ctx->pc = 0x149064u;
            goto label_149064;
        }
    }
    ctx->pc = 0x148FC4u;
    // 0x148fc4: 0x0  nop
    ctx->pc = 0x148fc4u;
    // NOP
label_148fc8:
    // 0x148fc8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x148fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148fd0: 0x0  nop
    ctx->pc = 0x148fd0u;
    // NOP
    // 0x148fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x148fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148fd8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x148fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148fdc: 0x0  nop
    ctx->pc = 0x148fdcu;
    // NOP
    // 0x148fe0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x148FE0u;
    {
        const bool branch_taken_0x148fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148fe0) {
            ctx->pc = 0x148FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148FE0u;
            // 0x148fe4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x148FE8u;
            goto label_148fe8;
        }
    }
    ctx->pc = 0x148FE8u;
label_148fe8:
    // 0x148fe8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x148fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148fec: 0x0  nop
    ctx->pc = 0x148fecu;
    // NOP
    // 0x148ff0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x148FF0u;
    {
        const bool branch_taken_0x148ff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x148ff0) {
            ctx->pc = 0x148FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148FF0u;
            // 0x148ff4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x148FF8u;
            goto label_148ff8;
        }
    }
    ctx->pc = 0x148FF8u;
label_148ff8:
    // 0x148ff8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x148ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149000: 0x0  nop
    ctx->pc = 0x149000u;
    // NOP
    // 0x149004: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x149004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x149008: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x149008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14900c: 0x0  nop
    ctx->pc = 0x14900cu;
    // NOP
    // 0x149010: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149010u;
    {
        const bool branch_taken_0x149010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149010) {
            ctx->pc = 0x149014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149010u;
            // 0x149014: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
            ctx->f[14] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149018u;
            goto label_149018;
        }
    }
    ctx->pc = 0x149018u;
label_149018:
    // 0x149018: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x149018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14901c: 0x0  nop
    ctx->pc = 0x14901cu;
    // NOP
    // 0x149020: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149020u;
    {
        const bool branch_taken_0x149020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149020) {
            ctx->pc = 0x149024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149020u;
            // 0x149024: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
            ctx->f[15] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149028u;
            goto label_149028;
        }
    }
    ctx->pc = 0x149028u;
label_149028:
    // 0x149028: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14902c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14902cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149030: 0x0  nop
    ctx->pc = 0x149030u;
    // NOP
    // 0x149034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x149034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x149038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x149038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14903c: 0x0  nop
    ctx->pc = 0x14903cu;
    // NOP
    // 0x149040: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149040u;
    {
        const bool branch_taken_0x149040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149040) {
            ctx->pc = 0x149044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149040u;
            // 0x149044: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149048u;
            goto label_149048;
        }
    }
    ctx->pc = 0x149048u;
label_149048:
    // 0x149048: 0x46008834  c.lt.s      $f17, $f0
    ctx->pc = 0x149048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14904c: 0x0  nop
    ctx->pc = 0x14904cu;
    // NOP
    // 0x149050: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x149050u;
    {
        const bool branch_taken_0x149050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149050) {
            ctx->pc = 0x149054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149050u;
            // 0x149054: 0x46000446  mov.s       $f17, $f0 (Delay Slot)
            ctx->f[17] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149058u;
            goto label_149058;
        }
    }
    ctx->pc = 0x149058u;
label_149058:
    // 0x149058: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x149058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x14905c: 0x14e0ffda  bnez        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x14905Cu;
    {
        const bool branch_taken_0x14905c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x149060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14905Cu;
        // 0x149060: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14905c) {
            ctx->pc = 0x148FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148fc8;
        }
    }
    ctx->pc = 0x149064u;
label_149064:
    // 0x149064: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x149064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149068: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x149068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x14906c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x14906Cu;
    {
        const bool branch_taken_0x14906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14906Cu;
        // 0x149070: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14906c) {
            ctx->pc = 0x148FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148fa0;
        }
    }
    ctx->pc = 0x149074u;
label_149074:
    // 0x149074: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x149074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x149078: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x149078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x14907c: 0x0  nop
    ctx->pc = 0x14907cu;
    // NOP
    // 0x149080: 0x46108c43  div.s       $f17, $f17, $f16
    ctx->pc = 0x149080u;
    ctx->f[17] = ps2FpuDivide(ctx->fcr31, ctx->f[17], ctx->f[16]);
    // 0x149084: 0x46106303  div.s       $f12, $f12, $f16
    ctx->pc = 0x149084u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[16]);
    // 0x149088: 0x46106b43  div.s       $f13, $f13, $f16
    ctx->pc = 0x149088u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[16]);
    // 0x14908c: 0x46107383  div.s       $f14, $f14, $f16
    ctx->pc = 0x14908cu;
    ctx->f[14] = ps2FpuDivide(ctx->fcr31, ctx->f[14], ctx->f[16]);
    // 0x149090: 0x46107bc3  div.s       $f15, $f15, $f16
    ctx->pc = 0x149090u;
    ctx->f[15] = ps2FpuDivide(ctx->fcr31, ctx->f[15], ctx->f[16]);
    // 0x149094: 0x46100c03  div.s       $f16, $f1, $f16
    ctx->pc = 0x149094u;
    ctx->f[16] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[16]);
    // 0x149098: 0xc07e2a2  jal         func_1F8A88
    ctx->pc = 0x149098u;
    SET_GPR_U32(ctx, 31, 0x1490A0u);
    ctx->pc = 0x1F8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A88u, 0x149098u, 0x1490A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490A0u;
label_1490a0:
    // 0x1490a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1490a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1490a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1490A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490A4u;
        // 0x1490a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1490A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1490ACu;
    // 0x1490ac: 0x0  nop
    ctx->pc = 0x1490acu;
    // NOP
    ctx->pc = 0x1490b0u;
}
