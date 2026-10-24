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

// Function: func_0030CAA0
// Address: 0x30caa0 - 0x30cb30
void func_0030CAA0_0x30caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030CAA0_0x30caa0");
#endif

    switch (ctx->pc) {
        case 0x30caccu: goto label_30cacc;
        case 0x30cadcu: goto label_30cadc;
        case 0x30caf8u: goto label_30caf8;
        case 0x30cb08u: goto label_30cb08;
        case 0x30cb18u: goto label_30cb18;
        case 0x30cb20u: goto label_30cb20;
        default: break;
    }

    ctx->pc = 0x30caa0u;

    // 0x30caa0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30caa4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30caa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30caa8: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x30caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x30caac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30caacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30cab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30cab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30cab8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30cabc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CABCu;
    {
        const bool branch_taken_0x30cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CABCu;
        // 0x30cac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cabc) {
            ctx->pc = 0x30CAD4u;
            goto label_30cad4;
        }
    }
    ctx->pc = 0x30CAC4u;
    // 0x30cac4: 0xc0c2e1c  jal         func_30B870
    ctx->pc = 0x30CAC4u;
    SET_GPR_U32(ctx, 31, 0x30CACCu);
    ctx->pc = 0x30CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAC4u;
    // 0x30cac8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B870u, 0x30CAC4u, 0x30CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CACCu;
label_30cacc:
    // 0x30cacc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30CACCu;
    {
        const bool branch_taken_0x30cacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CACCu;
        // 0x30cad0: 0x8e027a24  lw          $v0, 0x7A24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cacc) {
            ctx->pc = 0x30CAE0u;
            goto label_30cae0;
        }
    }
    ctx->pc = 0x30CAD4u;
label_30cad4:
    // 0x30cad4: 0xc0c2e1c  jal         func_30B870
    ctx->pc = 0x30CAD4u;
    SET_GPR_U32(ctx, 31, 0x30CADCu);
    ctx->pc = 0x30CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAD4u;
    // 0x30cad8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B870u, 0x30CAD4u, 0x30CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CADCu;
label_30cadc:
    // 0x30cadc: 0x8e027a24  lw          $v0, 0x7A24($s0)
    ctx->pc = 0x30cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31268)));
label_30cae0:
    // 0x30cae0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x30cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x30cae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30cae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CAE8u;
    {
        const bool branch_taken_0x30cae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cae8) {
            ctx->pc = 0x30CB00u;
            goto label_30cb00;
        }
    }
    ctx->pc = 0x30CAF0u;
    // 0x30caf0: 0xc0ebfd4  jal         func_3AFF50
    ctx->pc = 0x30CAF0u;
    SET_GPR_U32(ctx, 31, 0x30CAF8u);
    ctx->pc = 0x30CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAF0u;
    // 0x30caf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF50u, 0x30CAF0u, 0x30CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAF8u;
label_30caf8:
    // 0x30caf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30CAF8u;
    {
        const bool branch_taken_0x30caf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CAF8u;
        // 0x30cafc: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30caf8) {
            ctx->pc = 0x30CB0Cu;
            goto label_30cb0c;
        }
    }
    ctx->pc = 0x30CB00u;
label_30cb00:
    // 0x30cb00: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x30CB00u;
    SET_GPR_U32(ctx, 31, 0x30CB08u);
    ctx->pc = 0x30CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB00u;
    // 0x30cb04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x30CB00u, 0x30CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB08u;
label_30cb08:
    // 0x30cb08: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x30cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_30cb0c:
    // 0x30cb0c: 0x248476c0  addiu       $a0, $a0, 0x76C0
    ctx->pc = 0x30cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30400));
    // 0x30cb10: 0xc0e5910  jal         func_396440
    ctx->pc = 0x30CB10u;
    SET_GPR_U32(ctx, 31, 0x30CB18u);
    ctx->pc = 0x30CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB10u;
    // 0x30cb14: 0x8c85fff0  lw          $a1, -0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396440u, 0x30CB10u, 0x30CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB18u;
label_30cb18:
    // 0x30cb18: 0xc0c32cc  jal         func_30CB30
    ctx->pc = 0x30CB18u;
    SET_GPR_U32(ctx, 31, 0x30CB20u);
    ctx->pc = 0x30CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CB30u, 0x30CB18u, 0x30CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB20u;
label_30cb20:
    // 0x30cb20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30cb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30cb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cb28: 0x3e00008  jr          $ra
    ctx->pc = 0x30CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB28u;
        // 0x30cb2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CB30u;
}
