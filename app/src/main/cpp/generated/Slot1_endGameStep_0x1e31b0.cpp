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

// Function: Slot1_endGameStep
// Address: 0x1e31b0 - 0x1e3218
void Slot1_endGameStep_0x1e31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_endGameStep_0x1e31b0");
#endif

    switch (ctx->pc) {
        case 0x1e31ecu: goto label_1e31ec;
        default: break;
    }

    ctx->pc = 0x1e31b0u;

    // 0x1e31b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e31b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e31b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e31b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e31bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e31bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e31c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E31C4u;
    {
        const bool branch_taken_0x1e31c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31C4u;
        // 0x1e31c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31c4) {
            ctx->pc = 0x1E31DCu;
            goto label_1e31dc;
        }
    }
    ctx->pc = 0x1E31CCu;
    // 0x1e31cc: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E31CCu;
    {
        const bool branch_taken_0x1e31cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e31cc) {
            ctx->pc = 0x1E31D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E31CCu;
            // 0x1e31d0: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E31FCu;
            goto label_1e31fc;
        }
    }
    ctx->pc = 0x1E31D4u;
    // 0x1e31d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E31D4u;
    {
        const bool branch_taken_0x1e31d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31D4u;
        // 0x1e31d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e31d4) {
            ctx->pc = 0x1E3208u;
            goto label_1e3208;
        }
    }
    ctx->pc = 0x1E31DCu;
label_1e31dc:
    // 0x1e31dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e31e0: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1e31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1e31e4: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1E31E4u;
    SET_GPR_U32(ctx, 31, 0x1E31ECu);
    ctx->pc = 0x1E31E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31E4u;
    // 0x1e31e8: 0x24841ae0  addiu       $a0, $a0, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1E31E4u, 0x1E31ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E31ECu;
label_1e31ec:
    // 0x1e31ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e31f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e31f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e31f8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1e31fc:
    // 0x1e31fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e31fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e3200: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e3200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1e3204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3208:
    // 0x1e3208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e320c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E320Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E320Cu;
        // 0x1e3210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E320Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3214u;
    // 0x1e3214: 0x0  nop
    ctx->pc = 0x1e3214u;
    // NOP
    ctx->pc = 0x1e3218u;
}
