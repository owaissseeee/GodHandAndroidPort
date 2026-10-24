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

// Function: func_003509E8
// Address: 0x3509e8 - 0x350a50
void func_003509E8_0x3509e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003509E8_0x3509e8");
#endif

    switch (ctx->pc) {
        case 0x350a18u: goto label_350a18;
        default: break;
    }

    ctx->pc = 0x3509e8u;

    // 0x3509e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3509e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3509ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3509ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3509f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3509f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3509f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3509f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3509f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3509f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3509fc: 0x8e300a68  lw          $s0, 0xA68($s1)
    ctx->pc = 0x3509fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x350a00: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x350a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x350a04: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x350a04u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x350a08: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x350a08u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x350a0c: 0x50282a  slt         $a1, $v0, $s0
    ctx->pc = 0x350a0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x350a10: 0xc0d5542  jal         func_355508
    ctx->pc = 0x350A10u;
    SET_GPR_U32(ctx, 31, 0x350A18u);
    ctx->pc = 0x350A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350A10u;
    // 0x350a14: 0x45800b  movn        $s0, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355508u, 0x350A10u, 0x350A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350A18u;
label_350a18:
    // 0x350a18: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x350a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x350a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x350a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350a24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350A24u;
    {
        const bool branch_taken_0x350a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x350A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A24u;
        // 0x350a28: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a24) {
            ctx->pc = 0x350A38u;
            goto label_350a38;
        }
    }
    ctx->pc = 0x350A2Cu;
    // 0x350a2c: 0x8e220968  lw          $v0, 0x968($s1)
    ctx->pc = 0x350a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
    // 0x350a30: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x350a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x350a34: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x350a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_350a38:
    // 0x350a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350a40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x350a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x350a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350a48: 0x3e00008  jr          $ra
    ctx->pc = 0x350A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A48u;
        // 0x350a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350A50u;
}
