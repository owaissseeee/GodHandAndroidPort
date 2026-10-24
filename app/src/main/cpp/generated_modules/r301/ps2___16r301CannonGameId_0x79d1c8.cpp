#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: __16r301CannonGameId
// Address: 0x79d1c8 - 0x79d238
void ps2___16r301CannonGameId_0x79d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___16r301CannonGameId_0x79d1c8");
#endif

    switch (ctx->pc) {
        case 0x79d1fcu: goto label_79d1fc;
        case 0x79d200u: goto label_79d200;
        case 0x79d20cu: goto label_79d20c;
        default: break;
    }

    ctx->pc = 0x79d1c8u;

    // 0x79d1c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79d1cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79d1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79d1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d1d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79d1d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79d1dc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x79d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x79d1e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79d1e4: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x79d1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79d1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d1ec: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x79d1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x79d1f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x79d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x79d1f4: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x79D1F4u;
    SET_GPR_U32(ctx, 31, 0x79D1FCu);
    ctx->pc = 0x79D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D1F4u;
    // 0x79d1f8: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x79D1F4u, 0x79D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D1FCu;
label_79d1fc:
    // 0x79d1fc: 0x0  nop
    ctx->pc = 0x79d1fcu;
    // NOP
label_79d200:
    // 0x79d200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d204: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x79D204u;
    SET_GPR_U32(ctx, 31, 0x79D20Cu);
    ctx->pc = 0x79D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D204u;
    // 0x79d208: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x79D204u, 0x79D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D20Cu;
label_79d20c:
    // 0x79d20c: 0x0  nop
    ctx->pc = 0x79d20cu;
    // NOP
    // 0x79d210: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79D210u;
    {
        const bool branch_taken_0x79d210 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x79D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D210u;
        // 0x79d214: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d210) {
            ctx->pc = 0x79D200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d200;
        }
    }
    ctx->pc = 0x79D218u;
    // 0x79d218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79d218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d21c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79d21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79d220: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79d220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79d224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d228: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79d228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d230: 0x3e00008  jr          $ra
    ctx->pc = 0x79D230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D230u;
        // 0x79d234: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D238u;
}
} // namespace gh_r301
