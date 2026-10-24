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

// Function: func_0038C0D8
// Address: 0x38c0d8 - 0x38c128
void func_0038C0D8_0x38c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C0D8_0x38c0d8");
#endif

    switch (ctx->pc) {
        case 0x38c0fcu: goto label_38c0fc;
        case 0x38c114u: goto label_38c114;
        default: break;
    }

    ctx->pc = 0x38c0d8u;

    // 0x38c0d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38c0dc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x38c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x38c0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c0e4: 0x8c626758  lw          $v0, 0x6758($v1)
    ctx->pc = 0x38c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786758u));
    // 0x38c0e8: 0x24706758  addiu       $s0, $v1, 0x6758
    ctx->pc = 0x38c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26456));
    // 0x38c0ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38C0ECu;
    {
        const bool branch_taken_0x38c0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0ECu;
        // 0x38c0f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c0ec) {
            ctx->pc = 0x38C114u;
            goto label_38c114;
        }
    }
    ctx->pc = 0x38C0F4u;
    // 0x38c0f4: 0xc0e304a  jal         func_38C128
    ctx->pc = 0x38C0F4u;
    SET_GPR_U32(ctx, 31, 0x38C0FCu);
    ctx->pc = 0x38C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C128u, 0x38C0F4u, 0x38C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0FCu;
label_38c0fc:
    // 0x38c0fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x38c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x38c100: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x38c100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x38c104: 0x24a5d370  addiu       $a1, $a1, -0x2C90
    ctx->pc = 0x38c104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
    // 0x38c108: 0x24c60db8  addiu       $a2, $a2, 0xDB8
    ctx->pc = 0x38c108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3512));
    // 0x38c10c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x38C10Cu;
    SET_GPR_U32(ctx, 31, 0x38C114u);
    ctx->pc = 0x38C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C10Cu;
    // 0x38c110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x38C10Cu, 0x38C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C114u;
label_38c114:
    // 0x38c114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38c114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c120: 0x3e00008  jr          $ra
    ctx->pc = 0x38C120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C120u;
        // 0x38c124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C128u;
}
