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

// Function: GetSingleton786098_1B3680
// Address: 0x1b3680 - 0x1b36e0
void GetSingleton786098_1B3680_0x1b3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786098_1B3680_0x1b3680");
#endif

    switch (ctx->pc) {
        case 0x1b36a4u: goto label_1b36a4;
        case 0x1b36bcu: goto label_1b36bc;
        default: break;
    }

    ctx->pc = 0x1b3680u;

    // 0x1b3680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3684: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b3688: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b368c: 0x8c626098  lw          $v0, 0x6098($v1)
    ctx->pc = 0x1b368cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786098u));
    // 0x1b3690: 0x24706098  addiu       $s0, $v1, 0x6098
    ctx->pc = 0x1b3690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24728));
    // 0x1b3694: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3694u;
    {
        const bool branch_taken_0x1b3694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3694u;
        // 0x1b3698: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3694) {
            ctx->pc = 0x1B36BCu;
            goto label_1b36bc;
        }
    }
    ctx->pc = 0x1B369Cu;
    // 0x1b369c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B369Cu;
    SET_GPR_U32(ctx, 31, 0x1B36A4u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B369Cu, 0x1B36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36A4u;
label_1b36a4:
    // 0x1b36a4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b36a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b36a8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b36ac: 0x24a58638  addiu       $a1, $a1, -0x79C8
    ctx->pc = 0x1b36acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936120));
    // 0x1b36b0: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b36b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b36b4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B36B4u;
    SET_GPR_U32(ctx, 31, 0x1B36BCu);
    ctx->pc = 0x1B36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36B4u;
    // 0x1b36b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B36B4u, 0x1B36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36BCu;
label_1b36bc:
    // 0x1b36bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b36bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b36c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b36c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b36c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b36c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B36C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36C8u;
        // 0x1b36cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B36C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B36D0u;
    // 0x1b36d0: 0x0  nop
    ctx->pc = 0x1b36d0u;
    // NOP
    // 0x1b36d4: 0x0  nop
    ctx->pc = 0x1b36d4u;
    // NOP
    // 0x1b36d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b36d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b36dc: 0x0  nop
    ctx->pc = 0x1b36dcu;
    // NOP
    ctx->pc = 0x1b36e0u;
}
