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

// Function: SetUiIdWorkDispRange
// Address: 0x1e77b0 - 0x1e7848
void SetUiIdWorkDispRange_0x1e77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetUiIdWorkDispRange_0x1e77b0");
#endif

    switch (ctx->pc) {
        case 0x1e77d4u: goto label_1e77d4;
        case 0x1e77e4u: goto label_1e77e4;
        case 0x1e77f4u: goto label_1e77f4;
        case 0x1e7804u: goto label_1e7804;
        case 0x1e7814u: goto label_1e7814;
        case 0x1e7824u: goto label_1e7824;
        case 0x1e7834u: goto label_1e7834;
        default: break;
    }

    ctx->pc = 0x1e77b0u;

    // 0x1e77b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e77b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e77b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e77b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e77b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e77bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e77bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e77c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e77c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e77c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e77c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77cc: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E77CCu;
    SET_GPR_U32(ctx, 31, 0x1E77D4u);
    ctx->pc = 0x1E77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77CCu;
    // 0x1e77d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E77CCu, 0x1E77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77D4u;
label_1e77d4:
    // 0x1e77d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e77d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e77d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77dc: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E77DCu;
    SET_GPR_U32(ctx, 31, 0x1E77E4u);
    ctx->pc = 0x1E77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77DCu;
    // 0x1e77e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E77DCu, 0x1E77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77E4u;
label_1e77e4:
    // 0x1e77e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e77e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e77e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77ec: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E77ECu;
    SET_GPR_U32(ctx, 31, 0x1E77F4u);
    ctx->pc = 0x1E77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77ECu;
    // 0x1e77f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E77ECu, 0x1E77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77F4u;
label_1e77f4:
    // 0x1e77f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e77f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e77f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77fc: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E77FCu;
    SET_GPR_U32(ctx, 31, 0x1E7804u);
    ctx->pc = 0x1E7800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77FCu;
    // 0x1e7800: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E77FCu, 0x1E7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7804u;
label_1e7804:
    // 0x1e7804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7808: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e7808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e780c: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E780Cu;
    SET_GPR_U32(ctx, 31, 0x1E7814u);
    ctx->pc = 0x1E7810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E780Cu;
    // 0x1e7810: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E780Cu, 0x1E7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7814u;
label_1e7814:
    // 0x1e7814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7818: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e7818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e781c: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E781Cu;
    SET_GPR_U32(ctx, 31, 0x1E7824u);
    ctx->pc = 0x1E7820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E781Cu;
    // 0x1e7820: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E781Cu, 0x1E7824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7824u;
label_1e7824:
    // 0x1e7824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7828: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e7828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e782c: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E782Cu;
    SET_GPR_U32(ctx, 31, 0x1E7834u);
    ctx->pc = 0x1E7830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E782Cu;
    // 0x1e7830: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E782Cu, 0x1E7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7834u;
label_1e7834:
    // 0x1e7834: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e783c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e783cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7840: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7840u;
        // 0x1e7844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7848u;
}
