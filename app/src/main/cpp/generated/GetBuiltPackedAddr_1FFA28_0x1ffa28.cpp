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

// Function: GetBuiltPackedAddr_1FFA28
// Address: 0x1ffa28 - 0x1ffa68
void GetBuiltPackedAddr_1FFA28_0x1ffa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBuiltPackedAddr_1FFA28_0x1ffa28");
#endif

    switch (ctx->pc) {
        case 0x1ffa3cu: goto label_1ffa3c;
        case 0x1ffa4cu: goto label_1ffa4c;
        default: break;
    }

    ctx->pc = 0x1ffa28u;

    // 0x1ffa28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffa2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ffa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ffa30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffa34: 0xc07fe9a  jal         func_1FFA68
    ctx->pc = 0x1FFA34u;
    SET_GPR_U32(ctx, 31, 0x1FFA3Cu);
    ctx->pc = 0x1FFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA34u;
    // 0x1ffa38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA68u, 0x1FFA34u, 0x1FFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA3Cu;
label_1ffa3c:
    // 0x1ffa3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFA3Cu;
    {
        const bool branch_taken_0x1ffa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA3Cu;
        // 0x1ffa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa3c) {
            ctx->pc = 0x1FFA54u;
            goto label_1ffa54;
        }
    }
    ctx->pc = 0x1FFA44u;
    // 0x1ffa44: 0xc07ff66  jal         func_1FFD98
    ctx->pc = 0x1FFA44u;
    SET_GPR_U32(ctx, 31, 0x1FFA4Cu);
    ctx->pc = 0x1FFA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA44u;
    // 0x1ffa48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFD98u, 0x1FFA44u, 0x1FFA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA4Cu;
label_1ffa4c:
    // 0x1ffa4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFA4Cu;
    {
        const bool branch_taken_0x1ffa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA4Cu;
        // 0x1ffa50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa4c) {
            ctx->pc = 0x1FFA5Cu;
            goto label_1ffa5c;
        }
    }
    ctx->pc = 0x1FFA54u;
label_1ffa54:
    // 0x1ffa54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffa54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ffa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffa5c:
    // 0x1ffa5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffa60: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA60u;
        // 0x1ffa64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFA68u;
}
