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

// Function: func_00184E60
// Address: 0x184e60 - 0x184fe0
void func_00184E60_0x184e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00184E60_0x184e60");
#endif

    switch (ctx->pc) {
        case 0x184eecu: goto label_184eec;
        case 0x184f1cu: goto label_184f1c;
        case 0x184fb4u: goto label_184fb4;
        default: break;
    }

    ctx->pc = 0x184e60u;

    // 0x184e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e70: 0x86020624  lh          $v0, 0x624($s0)
    ctx->pc = 0x184e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x184e74: 0x86030632  lh          $v1, 0x632($s0)
    ctx->pc = 0x184e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1586)));
    // 0x184e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184e7c: 0x0  nop
    ctx->pc = 0x184e7cu;
    // NOP
    // 0x184e80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x184e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184e84: 0x92050658  lbu         $a1, 0x658($s0)
    ctx->pc = 0x184e84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1624)));
    // 0x184e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184e8c: 0x0  nop
    ctx->pc = 0x184e8cu;
    // NOP
    // 0x184e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184e94: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x184e94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x184e98: 0x0  nop
    ctx->pc = 0x184e98u;
    // NOP
    // 0x184e9c: 0x0  nop
    ctx->pc = 0x184e9cu;
    // NOP
    // 0x184ea0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184ea0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x184ea4: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x184EA4u;
    {
        const bool branch_taken_0x184ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EA4u;
        // 0x184ea8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ea4) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184EACu;
    // 0x184eac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x184eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x184eb0: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x184eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x184eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184eb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184ebc: 0x800008  jr          $a0
    ctx->pc = 0x184EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184EC4u: goto label_184ec4;
            case 0x184EF4u: goto label_184ef4;
            case 0x184F24u: goto label_184f24;
            case 0x184F48u: goto label_184f48;
            case 0x184F6Cu: goto label_184f6c;
            case 0x184F90u: goto label_184f90;
            case 0x184FC4u: goto label_184fc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184EBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x184EC4u;
label_184ec4:
    // 0x184ec4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x184ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x184ec8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x184ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x184ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ed0: 0x0  nop
    ctx->pc = 0x184ed0u;
    // NOP
    // 0x184ed4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184ed8: 0x0  nop
    ctx->pc = 0x184ed8u;
    // NOP
    // 0x184edc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x184EDCu;
    {
        const bool branch_taken_0x184edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EDCu;
        // 0x184ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184edc) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184EE4u;
    // 0x184ee4: 0xc0616f4  jal         func_185BD0
    ctx->pc = 0x184EE4u;
    SET_GPR_U32(ctx, 31, 0x184EECu);
    ctx->pc = 0x184EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184EE4u;
    // 0x184ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185BD0u, 0x184EE4u, 0x184EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EECu;
label_184eec:
    // 0x184eec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x184EECu;
    {
        const bool branch_taken_0x184eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EECu;
        // 0x184ef0: 0x92020658  lbu         $v0, 0x658($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184eec) {
            ctx->pc = 0x184FB8u;
            goto label_184fb8;
        }
    }
    ctx->pc = 0x184EF4u;
label_184ef4:
    // 0x184ef4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x184ef8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x184ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x184efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f00: 0x0  nop
    ctx->pc = 0x184f00u;
    // NOP
    // 0x184f04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f08: 0x0  nop
    ctx->pc = 0x184f08u;
    // NOP
    // 0x184f0c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x184F0Cu;
    {
        const bool branch_taken_0x184f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F0Cu;
        // 0x184f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f0c) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184F14u;
    // 0x184f14: 0xc0616f4  jal         func_185BD0
    ctx->pc = 0x184F14u;
    SET_GPR_U32(ctx, 31, 0x184F1Cu);
    ctx->pc = 0x184F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F14u;
    // 0x184f18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185BD0u, 0x184F14u, 0x184F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F1Cu;
label_184f1c:
    // 0x184f1c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x184F1Cu;
    {
        const bool branch_taken_0x184f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F1Cu;
        // 0x184f20: 0x92020658  lbu         $v0, 0x658($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f1c) {
            ctx->pc = 0x184FB8u;
            goto label_184fb8;
        }
    }
    ctx->pc = 0x184F24u;
label_184f24:
    // 0x184f24: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x184f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f2c: 0x0  nop
    ctx->pc = 0x184f2cu;
    // NOP
    // 0x184f30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184f30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f34: 0x0  nop
    ctx->pc = 0x184f34u;
    // NOP
    // 0x184f38: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x184F38u;
    {
        const bool branch_taken_0x184f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F38u;
        // 0x184f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f38) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184F40u;
    // 0x184f40: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x184F40u;
    {
        const bool branch_taken_0x184f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F40u;
        // 0x184f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f40) {
            ctx->pc = 0x184FACu;
            goto label_184fac;
        }
    }
    ctx->pc = 0x184F48u;
label_184f48:
    // 0x184f48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x184f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x184f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f50: 0x0  nop
    ctx->pc = 0x184f50u;
    // NOP
    // 0x184f54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f58: 0x0  nop
    ctx->pc = 0x184f58u;
    // NOP
    // 0x184f5c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x184F5Cu;
    {
        const bool branch_taken_0x184f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F5Cu;
        // 0x184f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f5c) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184F64u;
    // 0x184f64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x184F64u;
    {
        const bool branch_taken_0x184f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F64u;
        // 0x184f68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f64) {
            ctx->pc = 0x184FACu;
            goto label_184fac;
        }
    }
    ctx->pc = 0x184F6Cu;
label_184f6c:
    // 0x184f6c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x184f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f74: 0x0  nop
    ctx->pc = 0x184f74u;
    // NOP
    // 0x184f78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184f78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f7c: 0x0  nop
    ctx->pc = 0x184f7cu;
    // NOP
    // 0x184f80: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x184F80u;
    {
        const bool branch_taken_0x184f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F80u;
        // 0x184f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f80) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184F88u;
    // 0x184f88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184F88u;
    {
        const bool branch_taken_0x184f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F88u;
        // 0x184f8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f88) {
            ctx->pc = 0x184FACu;
            goto label_184fac;
        }
    }
    ctx->pc = 0x184F90u;
label_184f90:
    // 0x184f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184f94: 0x0  nop
    ctx->pc = 0x184f94u;
    // NOP
    // 0x184f98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184f9c: 0x0  nop
    ctx->pc = 0x184f9cu;
    // NOP
    // 0x184fa0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x184FA0u;
    {
        const bool branch_taken_0x184fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FA0u;
        // 0x184fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fa0) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184FA8u;
    // 0x184fa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x184fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184fac:
    // 0x184fac: 0xc06172e  jal         func_185CB8
    ctx->pc = 0x184FACu;
    SET_GPR_U32(ctx, 31, 0x184FB4u);
    ctx->pc = 0x185CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CB8u, 0x184FACu, 0x184FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FB4u;
label_184fb4:
    // 0x184fb4: 0x92020658  lbu         $v0, 0x658($s0)
    ctx->pc = 0x184fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1624)));
label_184fb8:
    // 0x184fb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184FBCu;
    {
        const bool branch_taken_0x184fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FBCu;
        // 0x184fc0: 0xa2020658  sb          $v0, 0x658($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1624), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fbc) {
            ctx->pc = 0x184FCCu;
            goto label_184fcc;
        }
    }
    ctx->pc = 0x184FC4u;
label_184fc4:
    // 0x184fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184fc8: 0xa202065f  sb          $v0, 0x65F($s0)
    ctx->pc = 0x184fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1631), (uint8_t)GPR_U32(ctx, 2));
label_184fcc:
    // 0x184fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x184FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184FDCu;
    // 0x184fdc: 0x0  nop
    ctx->pc = 0x184fdcu;
    // NOP
    ctx->pc = 0x184fe0u;
}
