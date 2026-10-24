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

// Function: func_002BA6F8
// Address: 0x2ba6f8 - 0x2ba748
void func_002BA6F8_0x2ba6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA6F8_0x2ba6f8");
#endif

    switch (ctx->pc) {
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba734u: goto label_2ba734;
        default: break;
    }

    ctx->pc = 0x2ba6f8u;

    // 0x2ba6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba6fc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ba6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ba700: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba704: 0x8c626328  lw          $v0, 0x6328($v1)
    ctx->pc = 0x2ba704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786328u));
    // 0x2ba708: 0x24706328  addiu       $s0, $v1, 0x6328
    ctx->pc = 0x2ba708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25384));
    // 0x2ba70c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA70Cu;
    {
        const bool branch_taken_0x2ba70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA70Cu;
        // 0x2ba710: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba70c) {
            ctx->pc = 0x2BA734u;
            goto label_2ba734;
        }
    }
    ctx->pc = 0x2BA714u;
    // 0x2ba714: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BA714u;
    SET_GPR_U32(ctx, 31, 0x2BA71Cu);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BA714u, 0x2BA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA71Cu;
label_2ba71c:
    // 0x2ba71c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ba71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ba720: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2ba724: 0x24a5bdf8  addiu       $a1, $a1, -0x4208
    ctx->pc = 0x2ba724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950392));
    // 0x2ba728: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2ba728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2ba72c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BA72Cu;
    SET_GPR_U32(ctx, 31, 0x2BA734u);
    ctx->pc = 0x2BA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA72Cu;
    // 0x2ba730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BA72Cu, 0x2BA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA734u;
label_2ba734:
    // 0x2ba734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba73c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba740: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA740u;
        // 0x2ba744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA748u;
}
