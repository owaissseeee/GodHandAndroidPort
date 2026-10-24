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

// Function: func_003500E8
// Address: 0x3500e8 - 0x350138
void func_003500E8_0x3500e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003500E8_0x3500e8");
#endif

    switch (ctx->pc) {
        case 0x35010cu: goto label_35010c;
        default: break;
    }

    ctx->pc = 0x3500e8u;

    // 0x3500e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3500e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3500ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3500ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3500f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3500f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3500f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3500f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3500f8: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x3500f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x3500fc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3500FCu;
    {
        const bool branch_taken_0x3500fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500FCu;
        // 0x350100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500fc) {
            ctx->pc = 0x350124u;
            goto label_350124;
        }
    }
    ctx->pc = 0x350104u;
    // 0x350104: 0xc0d404e  jal         func_350138
    ctx->pc = 0x350104u;
    SET_GPR_U32(ctx, 31, 0x35010Cu);
    ctx->pc = 0x350138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350138u, 0x350104u, 0x35010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35010Cu;
label_35010c:
    // 0x35010c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35010Cu;
    {
        const bool branch_taken_0x35010c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x35010c) {
            ctx->pc = 0x350110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35010Cu;
            // 0x350110: 0x8e0236b0  lw          $v0, 0x36B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350120u;
            goto label_350120;
        }
    }
    ctx->pc = 0x350114u;
    // 0x350114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x350114u;
    {
        const bool branch_taken_0x350114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350114u;
        // 0x350118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350114) {
            ctx->pc = 0x350124u;
            goto label_350124;
        }
    }
    ctx->pc = 0x35011Cu;
    // 0x35011c: 0x0  nop
    ctx->pc = 0x35011cu;
    // NOP
label_350120:
    // 0x350120: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x350120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_350124:
    // 0x350124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x350128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35012c: 0x3e00008  jr          $ra
    ctx->pc = 0x35012Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35012Cu;
        // 0x350130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35012Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350134u;
    // 0x350134: 0x0  nop
    ctx->pc = 0x350134u;
    // NOP
    ctx->pc = 0x350138u;
}
