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

// Function: func_00327890
// Address: 0x327890 - 0x3278e8
void func_00327890_0x327890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327890_0x327890");
#endif

    switch (ctx->pc) {
        case 0x3278a8u: goto label_3278a8;
        case 0x3278ccu: goto label_3278cc;
        default: break;
    }

    ctx->pc = 0x327890u;

    // 0x327890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32789c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3278a0: 0xc0cf3e6  jal         func_33CF98
    ctx->pc = 0x3278A0u;
    SET_GPR_U32(ctx, 31, 0x3278A8u);
    ctx->pc = 0x3278A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3278A0u;
    // 0x3278a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF98u, 0x3278A0u, 0x3278A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278A8u;
label_3278a8:
    // 0x3278a8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3278A8u;
    {
        const bool branch_taken_0x3278a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278A8u;
        // 0x3278ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278a8) {
            ctx->pc = 0x3278D8u;
            goto label_3278d8;
        }
    }
    ctx->pc = 0x3278B0u;
    // 0x3278b0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3278b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3278b4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3278b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3278b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3278b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3278bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3278BCu;
    {
        const bool branch_taken_0x3278bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278bc) {
            ctx->pc = 0x3278C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3278BCu;
            // 0x3278c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3278D8u;
            goto label_3278d8;
        }
    }
    ctx->pc = 0x3278C4u;
    // 0x3278c4: 0xc0cf3e8  jal         func_33CFA0
    ctx->pc = 0x3278C4u;
    SET_GPR_U32(ctx, 31, 0x3278CCu);
    ctx->pc = 0x3278C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3278C4u;
    // 0x3278c8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFA0u, 0x3278C4u, 0x3278CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278CCu;
label_3278cc:
    // 0x3278cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3278CCu;
    {
        const bool branch_taken_0x3278cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278CCu;
        // 0x3278d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278cc) {
            ctx->pc = 0x3278DCu;
            goto label_3278dc;
        }
    }
    ctx->pc = 0x3278D4u;
    // 0x3278d4: 0x0  nop
    ctx->pc = 0x3278d4u;
    // NOP
label_3278d8:
    // 0x3278d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3278d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3278dc:
    // 0x3278dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3278dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3278e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3278E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3278E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278E0u;
        // 0x3278e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3278E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3278E8u;
}
