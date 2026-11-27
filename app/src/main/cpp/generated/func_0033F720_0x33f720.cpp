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

// Function: func_0033F720
// Address: 0x33f720 - 0x33f7b8
void func_0033F720_0x33f720(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F720_0x33f720");
#endif

    if (__builtin_expect(ctx->pc != 0x33f720u, 0)) {
        switch (ctx->pc) {
            case 0x33f738u: goto label_33f738;
            case 0x33f778u: goto label_33f778;
            case 0x33f788u: goto label_33f788;
            case 0x33f790u: goto label_33f790;
            case 0x33f798u: goto label_33f798;
            case 0x33f7a0u: goto label_33f7a0;
            case 0x33f7a8u: goto label_33f7a8;
            default: break;
        }
    }


    // 0x33f720: 0x3c02003f  lui         $v0, 0x3F
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33f724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f728: 0x8c44b848  lw          $a0, -0x47B8($v0)
    ctx->pc = 0x33f728u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB848u));
    // 0x33f72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f730: 0xc0cfe14  jal         func_33F850
    ctx->pc = 0x33F730u;
    SET_GPR_U32(ctx, 31, 0x33F738u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033F850_0x33f850, 0x33f850u, 0x33f738u)) {
        return;
    }
label_33f738:
    // 0x33f738: 0x40182d  daddu       $v1, $v0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f73c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f740: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33F740u;
    {
        const bool branch_taken_0x33f740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F740u;
        // 0x33f744: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f740) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    // 0x33f748: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33F748u;
    {
        const bool branch_taken_0x33f748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F748u;
        // 0x33f74c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f748) {
            ctx->pc = 0x33F7ACu;
            goto label_33f7ac;
        }
    }
    // 0x33f750: 0x24020002  addiu       $v0, $zero, 0x2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f754: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33F754u;
    {
        const bool branch_taken_0x33f754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F754u;
        // 0x33f758: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f754) {
            ctx->pc = 0x33F770u;
            goto label_33f770;
        }
    }
    // 0x33f75c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F75Cu;
    {
        const bool branch_taken_0x33f75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F75Cu;
        // 0x33f760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f75c) {
            ctx->pc = 0x33F780u;
            goto label_33f780;
        }
    }
    // 0x33f764: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33F764u;
    {
        const bool branch_taken_0x33f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f764) {
            ctx->pc = 0x33F7B0u;
            goto label_33f7b0;
        }
    }
    // 0x33f76c: 0x0  nop
    // NOP
label_33f770:
    // 0x33f770: 0xc0cef46  jal         func_33BD18
    ctx->pc = 0x33F770u;
    SET_GPR_U32(ctx, 31, 0x33F778u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33BC48_33BD18_0x33bd18, 0x33bd18u, 0x33f778u)) {
        return;
    }
label_33f778:
    // 0x33f778: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33F778u;
    {
        const bool branch_taken_0x33f778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F778u;
        // 0x33f77c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f778) {
            ctx->pc = 0x33F7ACu;
            goto label_33f7ac;
        }
    }
label_33f780:
    // 0x33f780: 0xc0cef46  jal         func_33BD18
    ctx->pc = 0x33F780u;
    SET_GPR_U32(ctx, 31, 0x33F788u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33BC48_33BD18_0x33bd18, 0x33bd18u, 0x33f788u)) {
        return;
    }
label_33f788:
    // 0x33f788: 0xc0cef4c  jal         func_33BD30
    ctx->pc = 0x33F788u;
    SET_GPR_U32(ctx, 31, 0x33F790u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33BC48_33BD30_0x33bd30, 0x33bd30u, 0x33f790u)) {
        return;
    }
label_33f790:
    // 0x33f790: 0xc0cef52  jal         func_33BD48
    ctx->pc = 0x33F790u;
    SET_GPR_U32(ctx, 31, 0x33F798u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33BC48_33BD48_0x33bd48, 0x33bd48u, 0x33f798u)) {
        return;
    }
label_33f798:
    // 0x33f798: 0xc0cef58  jal         func_33BD60
    ctx->pc = 0x33F798u;
    SET_GPR_U32(ctx, 31, 0x33F7A0u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33BC48_33BD60_0x33bd60, 0x33bd60u, 0x33f7a0u)) {
        return;
    }
label_33f7a0:
    // 0x33f7a0: 0xc0cef64  jal         func_33BD90
    ctx->pc = 0x33F7A0u;
    SET_GPR_U32(ctx, 31, 0x33F7A8u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33BC48_33BD90_0x33bd90, 0x33bd90u, 0x33f7a8u)) {
        return;
    }
label_33f7a8:
    // 0x33f7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f7ac:
    // 0x33f7ac: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f7b0:
    // 0x33f7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7B0u;
        // 0x33f7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F7B8u;
}