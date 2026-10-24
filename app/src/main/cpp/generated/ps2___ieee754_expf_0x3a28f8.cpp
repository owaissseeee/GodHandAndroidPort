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

// Function: __ieee754_expf
// Address: 0x3a28f8 - 0x3a2bb0
void ps2___ieee754_expf_0x3a28f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_expf_0x3a28f8");
#endif

    ctx->pc = 0x3a28f8u;

    // 0x3a28f8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a28f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a28fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a28fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2900: 0x43fc2  srl         $a3, $a0, 31
    ctx->pc = 0x3a2900u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3a2904: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a2904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a2908: 0x3c0242b1  lui         $v0, 0x42B1
    ctx->pc = 0x3a2908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17073 << 16));
    // 0x3a290c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a2910: 0x34427217  ori         $v0, $v0, 0x7217
    ctx->pc = 0x3a2910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29207);
    // 0x3a2914: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a2914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a2918: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3a2918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3a291c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A291Cu;
    {
        const bool branch_taken_0x3a291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A291Cu;
        // 0x3a2920: 0x3c037f80  lui         $v1, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a291c) {
            ctx->pc = 0x3A29A0u;
            goto label_3a29a0;
        }
    }
    ctx->pc = 0x3A2924u;
    // 0x3a2924: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3a2924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3a2928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2928u;
    {
        const bool branch_taken_0x3a2928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2928) {
            ctx->pc = 0x3A2938u;
            goto label_3a2938;
        }
    }
    ctx->pc = 0x3A2930u;
    // 0x3a2930: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2930u;
        // 0x3a2934: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2938u;
label_3a2938:
    // 0x3a2938: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2938u;
    {
        const bool branch_taken_0x3a2938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2938) {
            ctx->pc = 0x3A2954u;
            goto label_3a2954;
        }
    }
    ctx->pc = 0x3A2940u;
    // 0x3a2940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2944: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A2944u;
    {
        const bool branch_taken_0x3a2944 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2944) {
            ctx->pc = 0x3A2948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2944u;
            // 0x3a2948: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A294Cu;
            goto label_3a294c;
        }
    }
    ctx->pc = 0x3A294Cu;
label_3a294c:
    // 0x3a294c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2954u;
label_3a2954:
    // 0x3a2954: 0x3c0142b1  lui         $at, 0x42B1
    ctx->pc = 0x3a2954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17073 << 16));
    // 0x3a2958: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3a2958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3a295c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a295cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2960: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3a2960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2964: 0x0  nop
    ctx->pc = 0x3a2964u;
    // NOP
    // 0x3a2968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2968u;
    {
        const bool branch_taken_0x3a2968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2968u;
        // 0x3a296c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2968) {
            ctx->pc = 0x3A2978u;
            goto label_3a2978;
        }
    }
    ctx->pc = 0x3A2970u;
    // 0x3a2970: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2970u;
        // 0x3a2974: 0xc440eb10  lwc1        $f0, -0x14F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2978u;
label_3a2978:
    // 0x3a2978: 0x3c01c2cf  lui         $at, 0xC2CF
    ctx->pc = 0x3a2978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49871 << 16));
    // 0x3a297c: 0x3421f1b5  ori         $at, $at, 0xF1B5
    ctx->pc = 0x3a297cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61877);
    // 0x3a2980: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2984: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3a2984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2988: 0x0  nop
    ctx->pc = 0x3a2988u;
    // NOP
    // 0x3a298c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A298Cu;
    {
        const bool branch_taken_0x3a298c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A298Cu;
        // 0x3a2990: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a298c) {
            ctx->pc = 0x3A29A4u;
            goto label_3a29a4;
        }
    }
    ctx->pc = 0x3A2994u;
    // 0x3a2994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2998: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A29A0u;
label_3a29a0:
    // 0x3a29a0: 0x3c023eb1  lui         $v0, 0x3EB1
    ctx->pc = 0x3a29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
label_3a29a4:
    // 0x3a29a4: 0x34427218  ori         $v0, $v0, 0x7218
    ctx->pc = 0x3a29a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29208);
    // 0x3a29a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3a29a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3a29ac: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A29ACu;
    {
        const bool branch_taken_0x3a29ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29ACu;
        // 0x3a29b0: 0x3c023f85  lui         $v0, 0x3F85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29ac) {
            ctx->pc = 0x3A2A54u;
            goto label_3a2a54;
        }
    }
    ctx->pc = 0x3A29B4u;
    // 0x3a29b4: 0x34421591  ori         $v0, $v0, 0x1591
    ctx->pc = 0x3a29b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5521);
    // 0x3a29b8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3a29b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3a29bc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A29BCu;
    {
        const bool branch_taken_0x3a29bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29BCu;
        // 0x3a29c0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29bc) {
            ctx->pc = 0x3A29FCu;
            goto label_3a29fc;
        }
    }
    ctx->pc = 0x3A29C4u;
    // 0x3a29c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a29c8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x3a29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3a29cc: 0x2442eae8  addiu       $v0, $v0, -0x1518
    ctx->pc = 0x3a29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
    // 0x3a29d0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3a29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3a29d4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3a29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a29d8: 0x2484eaf0  addiu       $a0, $a0, -0x1510
    ctx->pc = 0x3a29d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961904));
    // 0x3a29dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a29dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a29e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a29e4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a29e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a29e8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3a29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3a29ec: 0x460061c1  sub.s       $f7, $f12, $f0
    ctx->pc = 0x3a29ecu;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3a29f0: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x3a29f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3a29f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A29F4u;
    {
        const bool branch_taken_0x3a29f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A29F4u;
        // 0x3a29f8: 0xc4a60000  lwc1        $f6, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a29f4) {
            ctx->pc = 0x3A2A4Cu;
            goto label_3a2a4c;
        }
    }
    ctx->pc = 0x3A29FCu;
label_3a29fc:
    // 0x3a29fc: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x3a29fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x3a2a00: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x3a2a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x3a2a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2a08: 0x2442ead0  addiu       $v0, $v0, -0x1530
    ctx->pc = 0x3a2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x3a2a0c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3a2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3a2a10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a2a14: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a2a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a2a18: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3a2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a2a1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a2a20: 0xc441eae8  lwc1        $f1, -0x1518($v0)
    ctx->pc = 0x3a2a20u;
    { uint32_t bits = FAST_READ32(0x45EAE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2a24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a2a28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a2a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a2a2c: 0xc463eaf0  lwc1        $f3, -0x1510($v1)
    ctx->pc = 0x3a2a2cu;
    { uint32_t bits = FAST_READ32(0x45EAF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a2a30: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a2a34: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3a2a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3a2a38: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x3a2a38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a2a3c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3a2a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3a2a40: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x3a2a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3a2a44: 0x46032982  mul.s       $f6, $f5, $f3
    ctx->pc = 0x3a2a44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3a2a48: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x3a2a48u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_3a2a4c:
    // 0x3a2a4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A2A4Cu;
    {
        const bool branch_taken_0x3a2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A4Cu;
        // 0x3a2a50: 0x46063b01  sub.s       $f12, $f7, $f6 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a4c) {
            ctx->pc = 0x3A2A98u;
            goto label_3a2a98;
        }
    }
    ctx->pc = 0x3A2A54u;
label_3a2a54:
    // 0x3a2a54: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x3a2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x3a2a58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2a5c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3a2a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3a2a60: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3A2A60u;
    {
        const bool branch_taken_0x3a2a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2a60) {
            ctx->pc = 0x3A2A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2A60u;
            // 0x3a2a64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2A98u;
            goto label_3a2a98;
        }
    }
    ctx->pc = 0x3A2A68u;
    // 0x3a2a68: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a2a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a2a6c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a2a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a2a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2a74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a2a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2a78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2a7c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3a2a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a2a80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a2a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2a84: 0x0  nop
    ctx->pc = 0x3a2a84u;
    // NOP
    // 0x3a2a88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2A88u;
    {
        const bool branch_taken_0x3a2a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2a88) {
            ctx->pc = 0x3A2A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2A88u;
            // 0x3a2a8c: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2A9Cu;
            goto label_3a2a9c;
        }
    }
    ctx->pc = 0x3A2A90u;
    // 0x3a2a90: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A90u;
        // 0x3a2a94: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2A98u;
label_3a2a98:
    // 0x3a2a98: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x3a2a98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_3a2a9c:
    // 0x3a2a9c: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x3a2a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x3a2aa0: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x3a2aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x3a2aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2aa8: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x3a2aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x3a2aac: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x3a2aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x3a2ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2ab4: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x3a2ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x3a2ab8: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x3a2ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x3a2abc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2ac0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a2ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a2ac4: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x3a2ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x3a2ac8: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x3a2ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x3a2acc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a2accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a2ad0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x3a2ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x3a2ad4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a2ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a2ad8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a2ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a2adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a2adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a2ae0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a2ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a2ae4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a2ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a2ae8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a2ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a2aec: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a2aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a2af0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a2af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a2af4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3a2af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3a2af8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a2af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a2afc: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3A2AFCu;
    {
        const bool branch_taken_0x3a2afc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2AFCu;
        // 0x3a2b00: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2afc) {
            ctx->pc = 0x3A2B34u;
            goto label_3a2b34;
        }
    }
    ctx->pc = 0x3A2B04u;
    // 0x3a2b04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a2b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3a2b08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2b0c: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x3a2b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3a2b10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a2b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2b14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2b18: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3a2b18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3a2b1c: 0x0  nop
    ctx->pc = 0x3a2b1cu;
    // NOP
    // 0x3a2b20: 0x0  nop
    ctx->pc = 0x3a2b20u;
    // NOP
    // 0x3a2b24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3a2b24u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x3a2b28: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3a2b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3a2b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B2Cu;
        // 0x3a2b30: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2B34u;
label_3a2b34:
    // 0x3a2b34: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a2b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3a2b38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2b3c: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x3a2b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3a2b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a2b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2b44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a2b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2b48: 0x28c2ff83  slti        $v0, $a2, -0x7D
    ctx->pc = 0x3a2b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967171) ? 1 : 0);
    // 0x3a2b4c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a2b4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3a2b50: 0x0  nop
    ctx->pc = 0x3a2b50u;
    // NOP
    // 0x3a2b54: 0x0  nop
    ctx->pc = 0x3a2b54u;
    // NOP
    // 0x3a2b58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3a2b58u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x3a2b5c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x3a2b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x3a2b60: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x3a2b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x3a2b64: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3a2b64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3a2b68: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x3a2b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2b6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2B6Cu;
    {
        const bool branch_taken_0x3a2b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B6Cu;
        // 0x3a2b70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b6c) {
            ctx->pc = 0x3A2B88u;
            goto label_3a2b88;
        }
    }
    ctx->pc = 0x3A2B74u;
    // 0x3a2b74: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x3a2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x3a2b78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a2b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a2b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2b80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2B88u;
label_3a2b88:
    // 0x3a2b88: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x3a2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x3a2b8c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x3a2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x3a2b90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3a2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a2b94: 0x3c010d80  lui         $at, 0xD80
    ctx->pc = 0x3a2b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3456 << 16));
    // 0x3a2b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a2b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2ba0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3a2ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a2ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2BACu;
    // 0x3a2bac: 0x0  nop
    ctx->pc = 0x3a2bacu;
    // NOP
    ctx->pc = 0x3a2bb0u;
}
