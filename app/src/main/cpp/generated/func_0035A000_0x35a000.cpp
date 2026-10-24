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

// Function: func_0035A000
// Address: 0x35a000 - 0x35a050
void func_0035A000_0x35a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A000_0x35a000");
#endif

    switch (ctx->pc) {
        case 0x35a024u: goto label_35a024;
        default: break;
    }

    ctx->pc = 0x35a000u;

    // 0x35a000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a008: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35a008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a00c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a010: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a014: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a018: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35a01c: 0xc0d6828  jal         func_35A0A0
    ctx->pc = 0x35A01Cu;
    SET_GPR_U32(ctx, 31, 0x35A024u);
    ctx->pc = 0x35A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A01Cu;
    // 0x35a020: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A0A0u, 0x35A01Cu, 0x35A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A024u;
label_35a024:
    // 0x35a024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A024u;
    {
        const bool branch_taken_0x35a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A024u;
        // 0x35a028: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a024) {
            ctx->pc = 0x35A034u;
            goto label_35a034;
        }
    }
    ctx->pc = 0x35A02Cu;
    // 0x35a02c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x35a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x35a030: 0xac510a0c  sw          $s1, 0xA0C($v0)
    ctx->pc = 0x35a030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2572), GPR_U32(ctx, 17));
label_35a034:
    // 0x35a034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a03c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a03cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a040: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a044: 0x3e00008  jr          $ra
    ctx->pc = 0x35A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A044u;
        // 0x35a048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A04Cu;
    // 0x35a04c: 0x0  nop
    ctx->pc = 0x35a04cu;
    // NOP
    ctx->pc = 0x35a050u;
}
