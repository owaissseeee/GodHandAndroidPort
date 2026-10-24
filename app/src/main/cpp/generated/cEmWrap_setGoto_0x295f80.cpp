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

// Function: cEmWrap_setGoto
// Address: 0x295f80 - 0x296018
void cEmWrap_setGoto_0x295f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setGoto_0x295f80");
#endif

    switch (ctx->pc) {
        case 0x295fb4u: goto label_295fb4;
        case 0x295fd8u: goto label_295fd8;
        case 0x295ff8u: goto label_295ff8;
        default: break;
    }

    ctx->pc = 0x295f80u;

    // 0x295f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295f84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x295f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x295f88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x295f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x295f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295f94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x295f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x295f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x295f9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x295f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fa0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x295fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x295fa4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x295fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295fac: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295FACu;
    SET_GPR_U32(ctx, 31, 0x295FB4u);
    ctx->pc = 0x295FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FACu;
    // 0x295fb0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295FACu, 0x295FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FB4u;
label_295fb4:
    // 0x295fb4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x295FB4u;
    {
        const bool branch_taken_0x295fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295fb4) {
            ctx->pc = 0x295FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295FB4u;
            // 0x295fb8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FFCu;
            goto label_295ffc;
        }
    }
    ctx->pc = 0x295FBCu;
    // 0x295fbc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x295fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295fc0: 0x8462054a  lh          $v0, 0x54A($v1)
    ctx->pc = 0x295fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1354)));
    // 0x295fc4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x295FC4u;
    {
        const bool branch_taken_0x295fc4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x295FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FC4u;
        // 0x295fc8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fc4) {
            ctx->pc = 0x295FF8u;
            goto label_295ff8;
        }
    }
    ctx->pc = 0x295FCCu;
    // 0x295fcc: 0x8c6504ac  lw          $a1, 0x4AC($v1)
    ctx->pc = 0x295fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1196)));
    // 0x295fd0: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x295FD0u;
    SET_GPR_U32(ctx, 31, 0x295FD8u);
    ctx->pc = 0x295FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FD0u;
    // 0x295fd4: 0x2484a870  addiu       $a0, $a0, -0x5790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x295FD0u, 0x295FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FD8u;
label_295fd8:
    // 0x295fd8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x295FD8u;
    {
        const bool branch_taken_0x295fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295fd8) {
            ctx->pc = 0x295FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295FD8u;
            // 0x295fdc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295FFCu;
            goto label_295ffc;
        }
    }
    ctx->pc = 0x295FE0u;
    // 0x295fe0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fe8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x295fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x295fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ff0: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x295FF0u;
    SET_GPR_U32(ctx, 31, 0x295FF8u);
    ctx->pc = 0x295FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FF0u;
    // 0x295ff4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x295FF0u, 0x295FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FF8u;
label_295ff8:
    // 0x295ff8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x295ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_295ffc:
    // 0x295ffc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x295ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296004: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x296004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29600c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x29600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296010: 0x3e00008  jr          $ra
    ctx->pc = 0x296010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296010u;
        // 0x296014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296018u;
}
