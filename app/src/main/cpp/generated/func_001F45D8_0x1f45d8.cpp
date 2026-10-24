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

// Function: func_001F45D8
// Address: 0x1f45d8 - 0x1f4648
void func_001F45D8_0x1f45d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F45D8_0x1f45d8");
#endif

    switch (ctx->pc) {
        case 0x1f460cu: goto label_1f460c;
        case 0x1f4610u: goto label_1f4610;
        case 0x1f461cu: goto label_1f461c;
        default: break;
    }

    ctx->pc = 0x1f45d8u;

    // 0x1f45d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f45dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f45dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f45e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f45e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f45e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f45e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f45e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f45e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f45ec: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1f45ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1f45f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f45f4: 0x2412006e  addiu       $s2, $zero, 0x6E
    ctx->pc = 0x1f45f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1f45f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f45f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f45fc: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1f45fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1f4600: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f4600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1f4604: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1F4604u;
    SET_GPR_U32(ctx, 31, 0x1F460Cu);
    ctx->pc = 0x1F4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4604u;
    // 0x1f4608: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1F4604u, 0x1F460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F460Cu;
label_1f460c:
    // 0x1f460c: 0x0  nop
    ctx->pc = 0x1f460cu;
    // NOP
label_1f4610:
    // 0x1f4610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4614: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1F4614u;
    SET_GPR_U32(ctx, 31, 0x1F461Cu);
    ctx->pc = 0x1F4618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4614u;
    // 0x1f4618: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1F4614u, 0x1F461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F461Cu;
label_1f461c:
    // 0x1f461c: 0x0  nop
    ctx->pc = 0x1f461cu;
    // NOP
    // 0x1f4620: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F4620u;
    {
        const bool branch_taken_0x1f4620 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1F4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4620u;
        // 0x1f4624: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4620) {
            ctx->pc = 0x1F4610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4610;
        }
    }
    ctx->pc = 0x1F4628u;
    // 0x1f4628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f4628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f462c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f462cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4630: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f4630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4638: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f4638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f463c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f463cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4640: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4640u;
        // 0x1f4644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4648u;
}
