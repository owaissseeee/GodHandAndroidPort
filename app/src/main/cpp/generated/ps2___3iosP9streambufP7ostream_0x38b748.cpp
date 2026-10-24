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

// Function: __3iosP9streambufP7ostream
// Address: 0x38b748 - 0x38b7a8
void ps2___3iosP9streambufP7ostream_0x38b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___3iosP9streambufP7ostream_0x38b748");
#endif

    ctx->pc = 0x38b748u;

    // 0x38b748: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38b74c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x38b74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b750: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x38b750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x38b754: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38b754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b758: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B758u;
    {
        const bool branch_taken_0x38b758 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B758u;
        // 0x38b75c: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b758) {
            ctx->pc = 0x38B76Cu;
            goto label_38b76c;
        }
    }
    ctx->pc = 0x38B760u;
    // 0x38b760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38b764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38B764u;
    {
        const bool branch_taken_0x38b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B764u;
        // 0x38b768: 0xa0e2001a  sb          $v0, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b764) {
            ctx->pc = 0x38B770u;
            goto label_38b770;
        }
    }
    ctx->pc = 0x38B76Cu;
label_38b76c:
    // 0x38b76c: 0xa0e0001a  sb          $zero, 0x1A($a3)
    ctx->pc = 0x38b76cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 0));
label_38b770:
    // 0x38b770: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38b774: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x38b774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38b778: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38b778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38b77c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x38b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x38b780: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x38b780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x38b784: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x38b784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b788: 0xa4e30018  sh          $v1, 0x18($a3)
    ctx->pc = 0x38b788u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x38b78c: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x38b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x38b790: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x38b790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x38b794: 0xa0e0001b  sb          $zero, 0x1B($a3)
    ctx->pc = 0x38b794u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x38b798: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x38b798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x38b79c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B79Cu;
        // 0x38b7a0: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B7A4u;
    // 0x38b7a4: 0x0  nop
    ctx->pc = 0x38b7a4u;
    // NOP
    ctx->pc = 0x38b7a8u;
}
