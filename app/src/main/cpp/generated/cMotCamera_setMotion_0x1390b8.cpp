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

// Function: cMotCamera_setMotion
// Address: 0x1390b8 - 0x139180
void cMotCamera_setMotion_0x1390b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMotCamera_setMotion_0x1390b8");
#endif

    switch (ctx->pc) {
        case 0x139150u: goto label_139150;
        default: break;
    }

    ctx->pc = 0x1390b8u;

    // 0x1390b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1390b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1390bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1390bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1390c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1390c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1390c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1390c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1390c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1390c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1390cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1390ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1390d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1390d4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1390d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390d8: 0xae0503a4  sw          $a1, 0x3A4($s0)
    ctx->pc = 0x1390d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 5));
    // 0x1390dc: 0xae0603ac  sw          $a2, 0x3AC($s0)
    ctx->pc = 0x1390dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 6));
    // 0x1390e0: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x1390e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x1390e4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1390E4u;
    {
        const bool branch_taken_0x1390e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390E4u;
        // 0x1390e8: 0xe60002b4  swc1        $f0, 0x2B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390e4) {
            ctx->pc = 0x1390FCu;
            goto label_1390fc;
        }
    }
    ctx->pc = 0x1390ECu;
    // 0x1390ec: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1390ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1390f0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1390f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1390f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1390F4u;
    {
        const bool branch_taken_0x1390f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1390F4u;
        // 0x1390f8: 0x260203b0  addiu       $v0, $s0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390f4) {
            ctx->pc = 0x139110u;
            goto label_139110;
        }
    }
    ctx->pc = 0x1390FCu;
label_1390fc:
    // 0x1390fc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1390fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x139100: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x139100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x139104: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x139104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x139108: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x139108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13910c: 0x260203b0  addiu       $v0, $s0, 0x3B0
    ctx->pc = 0x13910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_139110:
    // 0x139110: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x139110u;
    {
        const bool branch_taken_0x139110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x139114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139110u;
        // 0x139114: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139110) {
            ctx->pc = 0x13912Cu;
            goto label_13912c;
        }
    }
    ctx->pc = 0x139118u;
    // 0x139118: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x139118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13911c: 0xe60003b0  swc1        $f0, 0x3B0($s0)
    ctx->pc = 0x13911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
    // 0x139120: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x139120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x139124: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139128: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13912c:
    // 0x13912c: 0xa608027a  sh          $t0, 0x27A($s0)
    ctx->pc = 0x13912cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 634), (uint16_t)GPR_U32(ctx, 8));
    // 0x139130: 0x260203c0  addiu       $v0, $s0, 0x3C0
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x139134: 0xae0003e4  sw          $zero, 0x3E4($s0)
    ctx->pc = 0x139134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 0));
    // 0x139138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13913c: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x13913cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x139140: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x139140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139144: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x139144u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x139148: 0xc04e08e  jal         func_138238
    ctx->pc = 0x139148u;
    SET_GPR_U32(ctx, 31, 0x139150u);
    ctx->pc = 0x13914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139148u;
    // 0x13914c: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138238u, 0x139148u, 0x139150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139150u;
label_139150:
    // 0x139150: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x139150u;
    {
        const bool branch_taken_0x139150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x139150) {
            ctx->pc = 0x139154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139150u;
            // 0x139154: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139168u;
            goto label_139168;
        }
    }
    ctx->pc = 0x139158u;
    // 0x139158: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x13915c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x139160: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x139160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x139164: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x139164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_139168:
    // 0x139168: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x139168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13916c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13916cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139170: 0x3e00008  jr          $ra
    ctx->pc = 0x139170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139170u;
        // 0x139174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139178u;
    // 0x139178: 0x0  nop
    ctx->pc = 0x139178u;
    // NOP
    // 0x13917c: 0x0  nop
    ctx->pc = 0x13917cu;
    // NOP
    ctx->pc = 0x139180u;
}
