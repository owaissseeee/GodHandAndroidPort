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

// Function: Arena_init
// Address: 0x2a9498 - 0x2a94f0
void Arena_init_0x2a9498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Arena_init_0x2a9498");
#endif

    switch (ctx->pc) {
        case 0x2a94d4u: goto label_2a94d4;
        default: break;
    }

    ctx->pc = 0x2a9498u;

    // 0x2a9498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a949c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a94a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a94a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a94a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a94a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a94a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a94ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A94ACu;
    {
        const bool branch_taken_0x2a94ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94ACu;
        // 0x2a94b0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94ac) {
            ctx->pc = 0x2A94BCu;
            goto label_2a94bc;
        }
    }
    ctx->pc = 0x2A94B4u;
    // 0x2a94b4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A94B4u;
    {
        const bool branch_taken_0x2a94b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a94b4) {
            ctx->pc = 0x2A94B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A94B4u;
            // 0x2a94b8: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94C8u;
            goto label_2a94c8;
        }
    }
    ctx->pc = 0x2A94BCu;
label_2a94bc:
    // 0x2a94bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a94c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A94C0u;
    {
        const bool branch_taken_0x2a94c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94C0u;
        // 0x2a94c4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94c0) {
            ctx->pc = 0x2A94D4u;
            goto label_2a94d4;
        }
    }
    ctx->pc = 0x2A94C8u;
label_2a94c8:
    // 0x2a94c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a94c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94cc: 0xc0aa53c  jal         func_2A94F0
    ctx->pc = 0x2A94CCu;
    SET_GPR_U32(ctx, 31, 0x2A94D4u);
    ctx->pc = 0x2A94D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A94CCu;
    // 0x2a94d0: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A94F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A94F0u, 0x2A94CCu, 0x2A94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94D4u;
label_2a94d4:
    // 0x2a94d4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2a94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2a94d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a94d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a94dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a94dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a94e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a94e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a94e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A94E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94E4u;
        // 0x2a94e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A94E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A94ECu;
    // 0x2a94ec: 0x0  nop
    ctx->pc = 0x2a94ecu;
    // NOP
    ctx->pc = 0x2a94f0u;
}
