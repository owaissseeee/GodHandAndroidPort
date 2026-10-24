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

// Function: cDamageManage_CreateDamageGive
// Address: 0x1fe0e8 - 0x1fe148
void cDamageManage_CreateDamageGive_0x1fe0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageManage_CreateDamageGive_0x1fe0e8");
#endif

    switch (ctx->pc) {
        case 0x1fe108u: goto label_1fe108;
        case 0x1fe120u: goto label_1fe120;
        default: break;
    }

    ctx->pc = 0x1fe0e8u;

    // 0x1fe0e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe0ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe0f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe0f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe0f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe100: 0xc07f878  jal         func_1FE1E0
    ctx->pc = 0x1FE100u;
    SET_GPR_U32(ctx, 31, 0x1FE108u);
    ctx->pc = 0x1FE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE100u;
    // 0x1fe104: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1E0u, 0x1FE100u, 0x1FE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE108u;
label_1fe108:
    // 0x1fe108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe10c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE10Cu;
    {
        const bool branch_taken_0x1fe10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE10Cu;
        // 0x1fe110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe10c) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FE114u;
    // 0x1fe114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe118: 0xc07f4b0  jal         func_1FD2C0
    ctx->pc = 0x1FE118u;
    SET_GPR_U32(ctx, 31, 0x1FE120u);
    ctx->pc = 0x1FE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE118u;
    // 0x1fe11c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2C0u, 0x1FE118u, 0x1FE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE120u;
label_1fe120:
    // 0x1fe120: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1fe120u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1fe124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE124u;
    {
        const bool branch_taken_0x1fe124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE124u;
        // 0x1fe128: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe124) {
            ctx->pc = 0x1FE130u;
            goto label_1fe130;
        }
    }
    ctx->pc = 0x1FE12Cu;
label_1fe12c:
    // 0x1fe12c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe130:
    // 0x1fe130: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe134: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe138: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe140: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE140u;
        // 0x1fe144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE148u;
}
