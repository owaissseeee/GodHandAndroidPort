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

// Function: SetTarget_1FD530
// Address: 0x1fd530 - 0x1fd580
void SetTarget_1FD530_0x1fd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTarget_1FD530_0x1fd530");
#endif

    switch (ctx->pc) {
        case 0x1fd55cu: goto label_1fd55c;
        default: break;
    }

    ctx->pc = 0x1fd530u;

    // 0x1fd530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd540: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1fd540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1fd544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD544u;
    {
        const bool branch_taken_0x1fd544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD544u;
        // 0x1fd548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd544) {
            ctx->pc = 0x1FD560u;
            goto label_1fd560;
        }
    }
    ctx->pc = 0x1FD54Cu;
    // 0x1fd54c: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1fd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1fd550: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x1fd550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fd554: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1FD554u;
    SET_GPR_U32(ctx, 31, 0x1FD55Cu);
    ctx->pc = 0x1FD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD554u;
    // 0x1fd558: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1FD554u, 0x1FD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD55Cu;
label_1fd55c:
    // 0x1fd55c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1fd560:
    // 0x1fd560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd56c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD56Cu;
        // 0x1fd570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD574u;
    // 0x1fd574: 0x0  nop
    ctx->pc = 0x1fd574u;
    // NOP
    // 0x1fd578: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fd578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd57c: 0x0  nop
    ctx->pc = 0x1fd57cu;
    // NOP
    ctx->pc = 0x1fd580u;
}
