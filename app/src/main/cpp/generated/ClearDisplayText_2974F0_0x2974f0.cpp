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

// Function: ClearDisplayText_2974F0
// Address: 0x2974f0 - 0x297540
void ClearDisplayText_2974F0_0x2974f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearDisplayText_2974F0_0x2974f0");
#endif

    switch (ctx->pc) {
        case 0x29751cu: goto label_29751c;
        default: break;
    }

    ctx->pc = 0x2974f0u;

    // 0x2974f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2974f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2974f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2974f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2974f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2974f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2974fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2974fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297500: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x297500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297504: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x297504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x297508: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x297508u;
    {
        const bool branch_taken_0x297508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297508u;
        // 0x29750c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297508) {
            ctx->pc = 0x29752Cu;
            goto label_29752c;
        }
    }
    ctx->pc = 0x297510u;
    // 0x297510: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x297510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x297514: 0xc0afa2c  jal         func_2BE8B0
    ctx->pc = 0x297514u;
    SET_GPR_U32(ctx, 31, 0x29751Cu);
    ctx->pc = 0x297518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297514u;
    // 0x297518: 0x24848640  addiu       $a0, $a0, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE8B0u, 0x297514u, 0x29751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29751Cu;
label_29751c:
    // 0x29751c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297520: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x297520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x297524: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x297524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x297528: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x297528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29752c:
    // 0x29752c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29752cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297534: 0x3e00008  jr          $ra
    ctx->pc = 0x297534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297534u;
        // 0x297538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29753Cu;
    // 0x29753c: 0x0  nop
    ctx->pc = 0x29753cu;
    // NOP
    ctx->pc = 0x297540u;
}
