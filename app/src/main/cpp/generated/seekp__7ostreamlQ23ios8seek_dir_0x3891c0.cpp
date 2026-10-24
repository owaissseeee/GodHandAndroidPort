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

// Function: seekp__7ostreamlQ23ios8seek_dir
// Address: 0x3891c0 - 0x389210
void seekp__7ostreamlQ23ios8seek_dir_0x3891c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("seekp__7ostreamlQ23ios8seek_dir_0x3891c0");
#endif

    switch (ctx->pc) {
        case 0x3891e0u: goto label_3891e0;
        default: break;
    }

    ctx->pc = 0x3891c0u;

    // 0x3891c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3891c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3891c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3891c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3891c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3891c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3891cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3891ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3891d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3891d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3891d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3891d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3891d8: 0xc0e38fc  jal         func_38E3F0
    ctx->pc = 0x3891D8u;
    SET_GPR_U32(ctx, 31, 0x3891E0u);
    ctx->pc = 0x3891DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3891D8u;
    // 0x3891dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E3F0u, 0x3891D8u, 0x3891E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891E0u;
label_3891e0:
    // 0x3891e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3891e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3891e4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3891E4u;
    {
        const bool branch_taken_0x3891e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3891E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891E4u;
        // 0x3891e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891e4) {
            ctx->pc = 0x389200u;
            goto label_389200;
        }
    }
    ctx->pc = 0x3891ECu;
    // 0x3891ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3891ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3891f0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3891f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3891f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3891f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3891f8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x3891f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x3891fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3891fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389200:
    // 0x389200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389208: 0x3e00008  jr          $ra
    ctx->pc = 0x389208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389208u;
        // 0x38920c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389210u;
}
