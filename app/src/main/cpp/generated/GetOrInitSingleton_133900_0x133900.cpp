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

// Function: GetOrInitSingleton_133900
// Address: 0x133900 - 0x133948
void GetOrInitSingleton_133900_0x133900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton_133900_0x133900");
#endif

    switch (ctx->pc) {
        case 0x13392cu: goto label_13392c;
        default: break;
    }

    ctx->pc = 0x133900u;

    // 0x133900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133904: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x133904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x133908: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x133908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13390c: 0x8c620d08  lw          $v0, 0xD08($v1)
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D08u));
    // 0x133910: 0x24700d08  addiu       $s0, $v1, 0xD08
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3336));
    // 0x133914: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133914u;
    {
        const bool branch_taken_0x133914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133914u;
        // 0x133918: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133914) {
            ctx->pc = 0x13392Cu;
            goto label_13392c;
        }
    }
    ctx->pc = 0x13391Cu;
    // 0x13391c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13391cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x133920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133924: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x133924u;
    SET_GPR_U32(ctx, 31, 0x13392Cu);
    ctx->pc = 0x133928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133924u;
    // 0x133928: 0x24a5d618  addiu       $a1, $a1, -0x29E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x133924u, 0x13392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13392Cu;
label_13392c:
    // 0x13392c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13392cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133934: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x133934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133938: 0x3e00008  jr          $ra
    ctx->pc = 0x133938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133938u;
        // 0x13393c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133940u;
    // 0x133940: 0x0  nop
    ctx->pc = 0x133940u;
    // NOP
    // 0x133944: 0x0  nop
    ctx->pc = 0x133944u;
    // NOP
    ctx->pc = 0x133948u;
}
