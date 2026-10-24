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

// Function: EmClothMove
// Address: 0x2df860 - 0x2df938
void EmClothMove_0x2df860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EmClothMove_0x2df860");
#endif

    switch (ctx->pc) {
        case 0x2df8b8u: goto label_2df8b8;
        case 0x2df8ecu: goto label_2df8ec;
        case 0x2df920u: goto label_2df920;
        default: break;
    }

    ctx->pc = 0x2df860u;

    // 0x2df860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2df860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2df864: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2df864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2df868: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2df868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2df86c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2df86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df870: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2df870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2df874: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2df874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df878: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2df878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2df87c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DF87Cu;
    {
        const bool branch_taken_0x2df87c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF87Cu;
        // 0x2df880: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df87c) {
            ctx->pc = 0x2DF920u;
            goto label_2df920;
        }
    }
    ctx->pc = 0x2DF884u;
    // 0x2df884: 0x52400027  beql        $s2, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DF884u;
    {
        const bool branch_taken_0x2df884 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df884) {
            ctx->pc = 0x2DF888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF884u;
            // 0x2df888: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF924u;
            goto label_2df924;
        }
    }
    ctx->pc = 0x2DF88Cu;
    // 0x2df88c: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2DF88Cu;
    {
        const bool branch_taken_0x2df88c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df88c) {
            ctx->pc = 0x2DF890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF88Cu;
            // 0x2df890: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF924u;
            goto label_2df924;
        }
    }
    ctx->pc = 0x2DF894u;
    // 0x2df894: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2df894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2df898: 0x28820275  slti        $v0, $a0, 0x275
    ctx->pc = 0x2df898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x2df89c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DF89Cu;
    {
        const bool branch_taken_0x2df89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF89Cu;
        // 0x2df8a0: 0x28820270  slti        $v0, $a0, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df89c) {
            ctx->pc = 0x2DF910u;
            goto label_2df910;
        }
    }
    ctx->pc = 0x2DF8A4u;
    // 0x2df8a4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DF8A4u;
    {
        const bool branch_taken_0x2df8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8A4u;
        // 0x2df8a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df8a4) {
            ctx->pc = 0x2DF914u;
            goto label_2df914;
        }
    }
    ctx->pc = 0x2DF8ACu;
    // 0x2df8ac: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x2df8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df8b0: 0xc051e62  jal         func_147988
    ctx->pc = 0x2DF8B0u;
    SET_GPR_U32(ctx, 31, 0x2DF8B8u);
    ctx->pc = 0x2DF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8B0u;
    // 0x2df8b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2DF8B0u, 0x2DF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8B8u;
label_2df8b8:
    // 0x2df8b8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2df8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2df8bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2df8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2df8c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df8c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2df8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df8c8: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x2df8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x2df8cc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2df8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2df8d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df8d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2df8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8d8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2df8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2df8dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2df8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2df8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2df8e4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DF8E4u;
    SET_GPR_U32(ctx, 31, 0x2DF8ECu);
    ctx->pc = 0x2DF8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF8E4u;
    // 0x2df8e8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DF8E4u, 0x2DF8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF8ECu;
label_2df8ec:
    // 0x2df8ec: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x2df8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2df8f0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2df8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2df8f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF8F4u;
    {
        const bool branch_taken_0x2df8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF8F4u;
        // 0x2df8f8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df8f4) {
            ctx->pc = 0x2DF910u;
            goto label_2df910;
        }
    }
    ctx->pc = 0x2DF8FCu;
    // 0x2df8fc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2df8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df900: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2df900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2df904: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2df904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2df908: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2df908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df90c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2df90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2df910:
    // 0x2df910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df914:
    // 0x2df914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2df914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df918: 0xc041004  jal         func_104010
    ctx->pc = 0x2DF918u;
    SET_GPR_U32(ctx, 31, 0x2DF920u);
    ctx->pc = 0x2DF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF918u;
    // 0x2df91c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104010u, 0x2DF918u, 0x2DF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF920u;
label_2df920:
    // 0x2df920: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2df920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2df924:
    // 0x2df924: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2df924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2df928: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2df928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df92c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2df92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df930: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF930u;
        // 0x2df934: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF938u;
}
