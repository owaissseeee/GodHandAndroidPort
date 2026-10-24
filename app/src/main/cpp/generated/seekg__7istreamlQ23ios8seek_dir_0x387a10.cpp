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

// Function: seekg__7istreamlQ23ios8seek_dir
// Address: 0x387a10 - 0x387a60
void seekg__7istreamlQ23ios8seek_dir_0x387a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("seekg__7istreamlQ23ios8seek_dir_0x387a10");
#endif

    switch (ctx->pc) {
        case 0x387a30u: goto label_387a30;
        default: break;
    }

    ctx->pc = 0x387a10u;

    // 0x387a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387a14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x387a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x387a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x387a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387a28: 0xc0e38fc  jal         func_38E3F0
    ctx->pc = 0x387A28u;
    SET_GPR_U32(ctx, 31, 0x387A30u);
    ctx->pc = 0x387A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A28u;
    // 0x387a2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E3F0u, 0x387A28u, 0x387A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A30u;
label_387a30:
    // 0x387a30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x387a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387a34: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x387A34u;
    {
        const bool branch_taken_0x387a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x387A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A34u;
        // 0x387a38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a34) {
            ctx->pc = 0x387A50u;
            goto label_387a50;
        }
    }
    ctx->pc = 0x387A3Cu;
    // 0x387a3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387a40: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387a44: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x387a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x387a48: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x387a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x387a4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387a50:
    // 0x387a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387a58: 0x3e00008  jr          $ra
    ctx->pc = 0x387A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A58u;
        // 0x387a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387A60u;
}
