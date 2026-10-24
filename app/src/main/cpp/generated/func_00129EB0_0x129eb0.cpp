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

// Function: func_00129EB0
// Address: 0x129eb0 - 0x12a108
void func_00129EB0_0x129eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00129EB0_0x129eb0");
#endif

    switch (ctx->pc) {
        case 0x129f28u: goto label_129f28;
        case 0x129f78u: goto label_129f78;
        case 0x129f8cu: goto label_129f8c;
        case 0x129fa8u: goto label_129fa8;
        case 0x12a094u: goto label_12a094;
        case 0x12a0a4u: goto label_12a0a4;
        case 0x12a0ccu: goto label_12a0cc;
        default: break;
    }

    ctx->pc = 0x129eb0u;

    // 0x129eb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x129eb4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x129eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x129eb8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x129eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x129ebc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x129ebcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ec0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x129ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x129ec4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x129ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x129ec8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x129ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x129ecc: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x129eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x129ed0: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x129ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x129ed4: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x129ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x129ed8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x129ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x129edc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x129edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x129ee0: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x129ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x129ee4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x129ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x129ee8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x129ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x129eec: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x129eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x129ef0: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x129ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x129ef4: 0x8c7e0008  lw          $fp, 0x8($v1)
    ctx->pc = 0x129ef4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x129ef8: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x129ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x129efc: 0x125e0075  beq         $s2, $fp, . + 4 + (0x75 << 2)
    ctx->pc = 0x129EFCu;
    {
        const bool branch_taken_0x129efc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x129F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EFCu;
        // 0x129f00: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129efc) {
            ctx->pc = 0x12A0D4u;
            goto label_12a0d4;
        }
    }
    ctx->pc = 0x129F04u;
    // 0x129f04: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x129f08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x129f0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x129f10: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x129f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x129f14: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x129f14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129f18: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129f1c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x129f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129f20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f24: 0x0  nop
    ctx->pc = 0x129f24u;
    // NOP
label_129f28:
    // 0x129f28: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x129f28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129f2c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x129f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x129f30: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x129f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x129f34: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x129F34u;
    {
        const bool branch_taken_0x129f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F34u;
        // 0x129f38: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f34) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x129F3Cu;
    // 0x129f3c: 0x4600063  bltz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x129F3Cu;
    {
        const bool branch_taken_0x129f3c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x129f3c) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x129F44u;
    // 0x129f44: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x129f44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x129f48: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x129f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x129f4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129F4Cu;
    {
        const bool branch_taken_0x129f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F4Cu;
        // 0x129f50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f4c) {
            ctx->pc = 0x129F5Cu;
            goto label_129f5c;
        }
    }
    ctx->pc = 0x129F54u;
    // 0x129f54: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x129f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129f5c:
    // 0x129f5c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x129f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x129f60: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x129F60u;
    {
        const bool branch_taken_0x129f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F60u;
        // 0x129f64: 0x38620364  xori        $v0, $v1, 0x364 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f60) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x129F68u;
    // 0x129f68: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x129F68u;
    {
        const bool branch_taken_0x129f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F68u;
        // 0x129f6c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f68) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x129F70u;
    // 0x129f70: 0xc06c588  jal         func_1B1620
    ctx->pc = 0x129F70u;
    SET_GPR_U32(ctx, 31, 0x129F78u);
    ctx->pc = 0x129F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F70u;
    // 0x129f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1620u, 0x129F70u, 0x129F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F78u;
label_129f78:
    // 0x129f78: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x129F78u;
    {
        const bool branch_taken_0x129f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F78u;
        // 0x129f7c: 0x26f30080  addiu       $s3, $s7, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f78) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x129F80u;
    // 0x129f80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x129f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f84: 0xc051d5a  jal         func_147568
    ctx->pc = 0x129F84u;
    SET_GPR_U32(ctx, 31, 0x129F8Cu);
    ctx->pc = 0x129F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F84u;
    // 0x129f88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x129F84u, 0x129F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F8Cu;
label_129f8c:
    // 0x129f8c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x129f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x129f90: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x129f90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129f94: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x129f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129f98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x129f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x129f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fa0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x129FA0u;
    SET_GPR_U32(ctx, 31, 0x129FA8u);
    ctx->pc = 0x129FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FA0u;
    // 0x129fa4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x129FA0u, 0x129FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FA8u;
label_129fa8:
    // 0x129fa8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x129fa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129fac: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x129facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x129fb0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x129fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129fb4: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129FB4u;
    {
        const bool branch_taken_0x129fb4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x129FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FB4u;
        // 0x129fb8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fb4) {
            ctx->pc = 0x129FD0u;
            goto label_129fd0;
        }
    }
    ctx->pc = 0x129FBCu;
    // 0x129fbc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x129fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129fc0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x129fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129fc4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x129fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x129fc8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x129fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x129fcc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x129fccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_129fd0:
    // 0x129fd0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x129fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129fd4: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x129fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x129fd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x129fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x129fdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x129fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129fe0: 0x0  nop
    ctx->pc = 0x129fe0u;
    // NOP
    // 0x129fe4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x129fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129fe8: 0x0  nop
    ctx->pc = 0x129fe8u;
    // NOP
    // 0x129fec: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x129FECu;
    {
        const bool branch_taken_0x129fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129fec) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x129FF4u;
    // 0x129ff4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x129ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x129ff8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x129ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a000: 0x0  nop
    ctx->pc = 0x12a000u;
    // NOP
    // 0x12a004: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a008: 0x0  nop
    ctx->pc = 0x12a008u;
    // NOP
    // 0x12a00c: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x12A00Cu;
    {
        const bool branch_taken_0x12a00c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A00Cu;
        // 0x12a010: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a00c) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A014u;
    // 0x12a014: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x12a014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a018: 0x0  nop
    ctx->pc = 0x12a018u;
    // NOP
    // 0x12a01c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x12A01Cu;
    {
        const bool branch_taken_0x12a01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a01c) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A024u;
    // 0x12a024: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x12a024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x12a028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a02c: 0x0  nop
    ctx->pc = 0x12a02cu;
    // NOP
    // 0x12a030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a034: 0x0  nop
    ctx->pc = 0x12a034u;
    // NOP
    // 0x12a038: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x12A038u;
    {
        const bool branch_taken_0x12a038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A038u;
        // 0x12a03c: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a038) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A040u;
    // 0x12a040: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x12a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x12a044: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12a044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12a048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a04c: 0x0  nop
    ctx->pc = 0x12a04cu;
    // NOP
    // 0x12a050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a054: 0x0  nop
    ctx->pc = 0x12a054u;
    // NOP
    // 0x12a058: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x12A058u;
    {
        const bool branch_taken_0x12a058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a058) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A060u;
    // 0x12a060: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x12a060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x12a064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a068: 0x0  nop
    ctx->pc = 0x12a068u;
    // NOP
    // 0x12a06c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a070: 0x0  nop
    ctx->pc = 0x12a070u;
    // NOP
    // 0x12a074: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x12A074u;
    {
        const bool branch_taken_0x12a074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A074u;
        // 0x12a078: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a074) {
            ctx->pc = 0x12A0CCu;
            goto label_12a0cc;
        }
    }
    ctx->pc = 0x12A07Cu;
    // 0x12a07c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a080: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12a080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x12a084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a088: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x12a088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12a08c: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x12A08Cu;
    SET_GPR_U32(ctx, 31, 0x12A094u);
    ctx->pc = 0x12A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A08Cu;
    // 0x12a090: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x12A08Cu, 0x12A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A094u;
label_12a094:
    // 0x12a094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12a098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a09c: 0xc06c5d8  jal         func_1B1760
    ctx->pc = 0x12A09Cu;
    SET_GPR_U32(ctx, 31, 0x12A0A4u);
    ctx->pc = 0x12A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A09Cu;
    // 0x12a0a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1760u, 0x12A09Cu, 0x12A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0A4u;
label_12a0a4:
    // 0x12a0a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x12a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x12a0a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0ac: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x12a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x12a0b0: 0x24060119  addiu       $a2, $zero, 0x119
    ctx->pc = 0x12a0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x12a0b4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x12a0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12a0b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12a0bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12a0c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a0c4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x12A0C4u;
    SET_GPR_U32(ctx, 31, 0x12A0CCu);
    ctx->pc = 0x12A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A0C4u;
    // 0x12a0c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x12A0C4u, 0x12A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0CCu;
label_12a0cc:
    // 0x12a0cc: 0x165eff96  bne         $s2, $fp, . + 4 + (-0x6A << 2)
    ctx->pc = 0x12A0CCu;
    {
        const bool branch_taken_0x12a0cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        ctx->pc = 0x12A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0CCu;
        // 0x12a0d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0cc) {
            ctx->pc = 0x129F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f28;
        }
    }
    ctx->pc = 0x12A0D4u;
label_12a0d4:
    // 0x12a0d4: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x12a0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12a0d8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x12a0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12a0dc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x12a0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12a0e0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x12a0e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12a0e4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x12a0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12a0e8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x12a0e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a0ec: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x12a0ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a0f0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x12a0f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a0f4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x12a0f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a0f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a0fc: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x12a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a100: 0x3e00008  jr          $ra
    ctx->pc = 0x12A100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A100u;
        // 0x12a104: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A108u;
}
