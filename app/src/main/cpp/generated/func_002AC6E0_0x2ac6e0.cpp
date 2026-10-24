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

// Function: func_002AC6E0
// Address: 0x2ac6e0 - 0x2ac878
void func_002AC6E0_0x2ac6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC6E0_0x2ac6e0");
#endif

    switch (ctx->pc) {
        case 0x2ac758u: goto label_2ac758;
        case 0x2ac828u: goto label_2ac828;
        case 0x2ac844u: goto label_2ac844;
        default: break;
    }

    ctx->pc = 0x2ac6e0u;

    // 0x2ac6e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ac6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac6e8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2ac6ec: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2ac6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2ac6f0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2ac6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac6f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2ac6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2ac6f8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2ac6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2ac6fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ac6fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac700: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2ac700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2ac704: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ac704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac708: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2ac708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2ac70c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2ac70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2ac710: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ac710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ac714: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2ac714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2ac718: 0x4501004c  bc1t        . + 4 + (0x4C << 2)
    ctx->pc = 0x2AC718u;
    {
        const bool branch_taken_0x2ac718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC718u;
        // 0x2ac71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac718) {
            ctx->pc = 0x2AC84Cu;
            goto label_2ac84c;
        }
    }
    ctx->pc = 0x2AC720u;
    // 0x2ac720: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2ac720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2ac724: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ac724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac728: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2ac728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ac72c: 0x8446006e  lh          $a2, 0x6E($v0)
    ctx->pc = 0x2ac72cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 110)));
    // 0x2ac730: 0x24c5fffe  addiu       $a1, $a2, -0x2
    ctx->pc = 0x2ac730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2ac734: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2ac734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac738: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AC738u;
    {
        const bool branch_taken_0x2ac738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC738u;
        // 0x2ac73c: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac738) {
            ctx->pc = 0x2AC7C0u;
            goto label_2ac7c0;
        }
    }
    ctx->pc = 0x2AC740u;
    // 0x2ac740: 0xc4e0009c  lwc1        $f0, 0x9C($a3)
    ctx->pc = 0x2ac740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac744: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x2ac744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ac748: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ac748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac74c: 0x46006102  mul.s       $f4, $f12, $f0
    ctx->pc = 0x2ac74cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2ac750: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2ac750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ac754: 0x0  nop
    ctx->pc = 0x2ac754u;
    // NOP
label_2ac758:
    // 0x2ac758: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ac758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac75c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2ac75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ac760: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ac760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac764: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2ac764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac768: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ac768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ac76c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ac76cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ac770: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ac770u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ac774: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2ac774u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2ac778: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ac778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ac77c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ac77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ac780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac784: 0x0  nop
    ctx->pc = 0x2ac784u;
    // NOP
    // 0x2ac788: 0x0  nop
    ctx->pc = 0x2ac788u;
    // NOP
    // 0x2ac78c: 0x46000004  c1          0x4
    ctx->pc = 0x2ac78cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2ac790: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x2ac790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac798: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2ac798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac79c: 0x0  nop
    ctx->pc = 0x2ac79cu;
    // NOP
    // 0x2ac7a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC7A0u;
    {
        const bool branch_taken_0x2ac7a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7A0u;
        // 0x2ac7a4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7a0) {
            ctx->pc = 0x2AC7BCu;
            goto label_2ac7bc;
        }
    }
    ctx->pc = 0x2AC7A8u;
    // 0x2ac7a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ac7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ac7ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ac7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ac7b0: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x2ac7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac7b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2AC7B4u;
    {
        const bool branch_taken_0x2ac7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7B4u;
        // 0x2ac7b8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7b4) {
            ctx->pc = 0x2AC758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac758;
        }
    }
    ctx->pc = 0x2AC7BCu;
label_2ac7bc:
    // 0x2ac7bc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2ac7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ac7c0:
    // 0x2ac7c0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AC7C0u;
    {
        const bool branch_taken_0x2ac7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7C0u;
        // 0x2ac7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7c0) {
            ctx->pc = 0x2AC84Cu;
            goto label_2ac84c;
        }
    }
    ctx->pc = 0x2AC7C8u;
    // 0x2ac7c8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2ac7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2ac7cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ac7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ac7d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ac7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ac7d4: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2ac7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2ac7d8: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x2ac7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2ac7dc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ac7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7e0: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x2ac7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac7e4: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ac7e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ac7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ac7ec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ac7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ac7f0: 0x46142501  sub.s       $f20, $f4, $f20
    ctx->pc = 0x2ac7f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x2ac7f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ac7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ac7f8: 0xc60dfff8  lwc1        $f13, -0x8($s0)
    ctx->pc = 0x2ac7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ac7fc: 0x2612fff8  addiu       $s2, $s0, -0x8
    ctx->pc = 0x2ac7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x2ac800: 0xc60e0000  lwc1        $f14, 0x0($s0)
    ctx->pc = 0x2ac800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ac804: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x2ac804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2ac808: 0x0  nop
    ctx->pc = 0x2ac808u;
    // NOP
    // 0x2ac80c: 0x0  nop
    ctx->pc = 0x2ac80cu;
    // NOP
    // 0x2ac810: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2ac810u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2ac814: 0xc60f0008  lwc1        $f15, 0x8($s0)
    ctx->pc = 0x2ac814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2ac818: 0xc6100010  lwc1        $f16, 0x10($s0)
    ctx->pc = 0x2ac818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2ac81c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2ac81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ac820: 0xc0b8560  jal         func_2E1580
    ctx->pc = 0x2AC820u;
    SET_GPR_U32(ctx, 31, 0x2AC828u);
    ctx->pc = 0x2AC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC820u;
    // 0x2ac824: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1580u, 0x2AC820u, 0x2AC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC828u;
label_2ac828:
    // 0x2ac828: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2ac828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2ac82c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ac82cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ac830: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2ac830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ac834: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x2ac834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2ac838: 0xc66f0004  lwc1        $f15, 0x4($s3)
    ctx->pc = 0x2ac838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2ac83c: 0xc0b8560  jal         func_2E1580
    ctx->pc = 0x2AC83Cu;
    SET_GPR_U32(ctx, 31, 0x2AC844u);
    ctx->pc = 0x2AC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC83Cu;
    // 0x2ac840: 0xc6300004  lwc1        $f16, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1580u, 0x2AC83Cu, 0x2AC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC844u;
label_2ac844:
    // 0x2ac844: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2ac844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2ac848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac84c:
    // 0x2ac84c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2ac84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ac850: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2ac850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ac854: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2ac854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ac858: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2ac858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ac85c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2ac85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ac860: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2ac860u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ac864: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ac864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ac868: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2ac868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac86c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC86Cu;
        // 0x2ac870: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC874u;
    // 0x2ac874: 0x0  nop
    ctx->pc = 0x2ac874u;
    // NOP
    ctx->pc = 0x2ac878u;
}
