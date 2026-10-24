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

// Function: func_00175558
// Address: 0x175558 - 0x1755a8
void func_00175558_0x175558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175558_0x175558");
#endif

    switch (ctx->pc) {
        case 0x17557cu: goto label_17557c;
        case 0x175594u: goto label_175594;
        default: break;
    }

    ctx->pc = 0x175558u;

    // 0x175558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17555c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17555cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x175560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175564: 0x8c6258c8  lw          $v0, 0x58C8($v1)
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7858C8u));
    // 0x175568: 0x247058c8  addiu       $s0, $v1, 0x58C8
    ctx->pc = 0x175568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22728));
    // 0x17556c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17556Cu;
    {
        const bool branch_taken_0x17556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17556Cu;
        // 0x175570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17556c) {
            ctx->pc = 0x175594u;
            goto label_175594;
        }
    }
    ctx->pc = 0x175574u;
    // 0x175574: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x175574u;
    SET_GPR_U32(ctx, 31, 0x17557Cu);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x175574u, 0x17557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17557Cu;
label_17557c:
    // 0x17557c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17557cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x175580: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x175580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x175584: 0x24a51188  addiu       $a1, $a1, 0x1188
    ctx->pc = 0x175584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4488));
    // 0x175588: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x175588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x17558c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17558Cu;
    SET_GPR_U32(ctx, 31, 0x175594u);
    ctx->pc = 0x175590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17558Cu;
    // 0x175590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17558Cu, 0x175594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175594u;
label_175594:
    // 0x175594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17559c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17559cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1755a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1755A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1755A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755A0u;
        // 0x1755a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1755A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1755A8u;
}
