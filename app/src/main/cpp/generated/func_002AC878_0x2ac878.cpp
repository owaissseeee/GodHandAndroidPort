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

// Function: func_002AC878
// Address: 0x2ac878 - 0x2ac9b8
void func_002AC878_0x2ac878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC878_0x2ac878");
#endif

    switch (ctx->pc) {
        case 0x2ac8d0u: goto label_2ac8d0;
        default: break;
    }

    ctx->pc = 0x2ac878u;

    // 0x2ac878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ac884: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2ac884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac888: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2ac888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac88c: 0x0  nop
    ctx->pc = 0x2ac88cu;
    // NOP
    // 0x2ac890: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x2AC890u;
    {
        const bool branch_taken_0x2ac890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC890u;
        // 0x2ac894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac890) {
            ctx->pc = 0x2AC9B0u;
            goto label_2ac9b0;
        }
    }
    ctx->pc = 0x2AC898u;
    // 0x2ac898: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2ac898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2ac89c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ac89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac8a0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2ac8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ac8a4: 0x8449006e  lh          $t1, 0x6E($v0)
    ctx->pc = 0x2ac8a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 110)));
    // 0x2ac8a8: 0x2525fffe  addiu       $a1, $t1, -0x2
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
    // 0x2ac8ac: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x2ac8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac8b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AC8B0u;
    {
        const bool branch_taken_0x2ac8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8B0u;
        // 0x2ac8b4: 0x29220004  slti        $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8b0) {
            ctx->pc = 0x2AC938u;
            goto label_2ac938;
        }
    }
    ctx->pc = 0x2AC8B8u;
    // 0x2ac8b8: 0xc4e0009c  lwc1        $f0, 0x9C($a3)
    ctx->pc = 0x2ac8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8bc: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x2ac8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ac8c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ac8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac8c4: 0x46006102  mul.s       $f4, $f12, $f0
    ctx->pc = 0x2ac8c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2ac8c8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2ac8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ac8cc: 0x0  nop
    ctx->pc = 0x2ac8ccu;
    // NOP
label_2ac8d0:
    // 0x2ac8d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ac8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8d4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2ac8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ac8d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ac8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac8dc: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2ac8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac8e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ac8e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ac8e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ac8e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ac8e8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ac8e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ac8ec: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ac8ecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ac8f0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ac8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ac8f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ac8f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ac8f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac8fc: 0x0  nop
    ctx->pc = 0x2ac8fcu;
    // NOP
    // 0x2ac900: 0x0  nop
    ctx->pc = 0x2ac900u;
    // NOP
    // 0x2ac904: 0x46000004  c1          0x4
    ctx->pc = 0x2ac904u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2ac908: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x2ac908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac90c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac90cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac910: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2ac910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac914: 0x0  nop
    ctx->pc = 0x2ac914u;
    // NOP
    // 0x2ac918: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC918u;
    {
        const bool branch_taken_0x2ac918 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC918u;
        // 0x2ac91c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac918) {
            ctx->pc = 0x2AC934u;
            goto label_2ac934;
        }
    }
    ctx->pc = 0x2AC920u;
    // 0x2ac920: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ac920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ac924: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ac924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ac928: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x2ac928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac92c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2AC92Cu;
    {
        const bool branch_taken_0x2ac92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC92Cu;
        // 0x2ac930: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac92c) {
            ctx->pc = 0x2AC8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac8d0;
        }
    }
    ctx->pc = 0x2AC934u;
label_2ac934:
    // 0x2ac934: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x2ac934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ac938:
    // 0x2ac938: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2AC938u;
    {
        const bool branch_taken_0x2ac938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC938u;
        // 0x2ac93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac938) {
            ctx->pc = 0x2AC9B0u;
            goto label_2ac9b0;
        }
    }
    ctx->pc = 0x2AC940u;
    // 0x2ac940: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2ac940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2ac944: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2ac944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2ac948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac94c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2ac94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2ac950: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2ac950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2ac954: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ac954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac958: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2ac958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ac95c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x2ac95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2ac960: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2ac960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac968: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2ac968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2ac96c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2ac96cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2ac970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac974: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ac974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac978: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ac978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac97c: 0x0  nop
    ctx->pc = 0x2ac97cu;
    // NOP
    // 0x2ac980: 0x0  nop
    ctx->pc = 0x2ac980u;
    // NOP
    // 0x2ac984: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x2ac984u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[1]);
    // 0x2ac988: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ac988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ac98c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ac98cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ac990: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2ac990u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ac994: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2ac994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2ac998: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ac998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac99c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2ac99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ac9a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac9a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ac9a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ac9a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ac9a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac9ac: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2ac9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2ac9b0:
    // 0x2ac9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9B0u;
        // 0x2ac9b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC9B8u;
}
