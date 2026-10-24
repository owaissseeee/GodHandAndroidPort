#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: End__7cMcLoad
// Address: 0x7c1178 - 0x7c11d0
void End__7cMcLoad_0x7c1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End__7cMcLoad_0x7c1178");
#endif

    switch (ctx->pc) {
        case 0x7c11a0u: goto label_7c11a0;
        case 0x7c11b4u: goto label_7c11b4;
        case 0x7c11bcu: goto label_7c11bc;
        default: break;
    }

    ctx->pc = 0x7c1178u;

    // 0x7c1178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c117c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c1180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c1184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c1184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1188: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x7c1188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x7c118c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C118Cu;
    {
        const bool branch_taken_0x7c118c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c118c) {
            ctx->pc = 0x7C1190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C118Cu;
            // 0x7c1190: 0x8e0500f8  lw          $a1, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C11A4u;
            goto label_7c11a4;
        }
    }
    ctx->pc = 0x7C1194u;
    // 0x7c1194: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x7c1194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x7c1198: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C1198u;
    SET_GPR_U32(ctx, 31, 0x7C11A0u);
    ctx->pc = 0x7C119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1198u;
    // 0x7c119c: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C1198u, 0x7C11A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C11A0u;
label_7c11a0:
    // 0x7c11a0: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x7c11a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_7c11a4:
    // 0x7c11a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C11A4u;
    {
        const bool branch_taken_0x7c11a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C11A4u;
        // 0x7c11a8: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c11a4) {
            ctx->pc = 0x7C11B4u;
            goto label_7c11b4;
        }
    }
    ctx->pc = 0x7C11ACu;
    // 0x7c11ac: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7C11ACu;
    SET_GPR_U32(ctx, 31, 0x7C11B4u);
    ctx->pc = 0x7C11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C11ACu;
    // 0x7c11b0: 0x24844220  addiu       $a0, $a0, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7C11ACu, 0x7C11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C11B4u;
label_7c11b4:
    // 0x7c11b4: 0xc1f1cc0  jal         func_7C7300
    ctx->pc = 0x7C11B4u;
    SET_GPR_U32(ctx, 31, 0x7C11BCu);
    ctx->pc = 0x7C11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C11B4u;
    // 0x7c11b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7300u, 0x7C11B4u, 0x7C11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C11BCu;
label_7c11bc:
    // 0x7c11bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c11bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c11c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c11c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c11c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C11C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C11C4u;
        // 0x7c11c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C11C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C11CCu;
    // 0x7c11cc: 0x0  nop
    ctx->pc = 0x7c11ccu;
    // NOP
    ctx->pc = 0x7c11d0u;
}
} // namespace gh_mcport
