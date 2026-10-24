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

// Function: func_0027D0E8
// Address: 0x27d0e8 - 0x27d148
void func_0027D0E8_0x27d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027D0E8_0x27d0e8");
#endif

    switch (ctx->pc) {
        case 0x27d114u: goto label_27d114;
        default: break;
    }

    ctx->pc = 0x27d0e8u;

    // 0x27d0e8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x27d0ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d0f0: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x27d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x27d0f4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x27d0f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27d0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d100: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27d100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x27d104: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27D104u;
    {
        const bool branch_taken_0x27d104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D104u;
        // 0x27d108: 0x24507a80  addiu       $s0, $v0, 0x7A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d104) {
            ctx->pc = 0x27D130u;
            goto label_27d130;
        }
    }
    ctx->pc = 0x27D10Cu;
    // 0x27d10c: 0xc0a9d12  jal         func_2A7448
    ctx->pc = 0x27D10Cu;
    SET_GPR_U32(ctx, 31, 0x27D114u);
    ctx->pc = 0x2A7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7448u, 0x27D10Cu, 0x27D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D114u;
label_27d114:
    // 0x27d114: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D114u;
    {
        const bool branch_taken_0x27d114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d114) {
            ctx->pc = 0x27D118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D114u;
            // 0x27d118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D134u;
            goto label_27d134;
        }
    }
    ctx->pc = 0x27D11Cu;
    // 0x27d11c: 0x8e02ffac  lw          $v0, -0x54($s0)
    ctx->pc = 0x27d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967212)));
    // 0x27d120: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27d120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27d124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27d124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27d128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D128u;
    {
        const bool branch_taken_0x27d128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D128u;
        // 0x27d12c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d128) {
            ctx->pc = 0x27D134u;
            goto label_27d134;
        }
    }
    ctx->pc = 0x27D130u;
label_27d130:
    // 0x27d130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d134:
    // 0x27d134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27d134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D13Cu;
        // 0x27d140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D144u;
    // 0x27d144: 0x0  nop
    ctx->pc = 0x27d144u;
    // NOP
    ctx->pc = 0x27d148u;
}
