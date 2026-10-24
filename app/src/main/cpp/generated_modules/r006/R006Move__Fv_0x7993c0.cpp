#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: R006Move__Fv
// Address: 0x7993c0 - 0x799498
void R006Move__Fv_0x7993c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R006Move__Fv_0x7993c0");
#endif

    switch (ctx->pc) {
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f4u: goto label_7993f4;
        case 0x799420u: goto label_799420;
        case 0x799438u: goto label_799438;
        case 0x79944cu: goto label_79944c;
        case 0x799470u: goto label_799470;
        case 0x799488u: goto label_799488;
        default: break;
    }

    ctx->pc = 0x7993c0u;

    // 0x7993c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7993c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7993c8: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x7993cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7993d0: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x799454u;
            goto label_799454;
        }
    }
    ctx->pc = 0x7993D8u;
    // 0x7993d8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x7993dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7993dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7993e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7993ECu;
    SET_GPR_U32(ctx, 31, 0x7993F4u);
    ctx->pc = 0x7993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ECu;
    // 0x7993f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7993ECu, 0x7993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7993f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7993f8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7993f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7993fc: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799400: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799408: 0x8e04ab00  lw          $a0, -0x5500($s0)
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79AB00u));
    // 0x79940c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799410: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799414: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799418: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x248415f0  addiu       $a0, $a0, 0x15F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x799424: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799428: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79942c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x9445048c  lhu         $a1, 0x48C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79943c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x79943Cu;
    {
        const bool branch_taken_0x79943c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79943c) {
            ctx->pc = 0x799440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79943Cu;
            // 0x799440: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    ctx->pc = 0x799444u;
    // 0x799444: 0xc077f54  jal         func_1DFD50
    ctx->pc = 0x799444u;
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->pc = 0x799448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799444u;
    // 0x799448: 0x8e04ab00  lw          $a0, -0x5500($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD50u, 0x799444u, 0x79944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79944Cu;
label_79944c:
    // 0x79944c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799458: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79945c: 0x8e02ab00  lw          $v0, -0x5500($s0)
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AB00u));
    // 0x799460: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799468: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x94450f30  lhu         $a1, 0xF30($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3888)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x799470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x799474: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799474u;
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799474) {
            ctx->pc = 0x799478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799474u;
            // 0x799478: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    ctx->pc = 0x79947Cu;
    // 0x79947c: 0x8e04ab00  lw          $a0, -0x5500($s0)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945536)));
    // 0x799480: 0xc079238  jal         func_1E48E0
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x24840b60  addiu       $a0, $a0, 0xB60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E48E0u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79948c:
    // 0x79948c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799490: 0x3e00008  jr          $ra
    ctx->pc = 0x799490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799498u;
}
} // namespace gh_r006
