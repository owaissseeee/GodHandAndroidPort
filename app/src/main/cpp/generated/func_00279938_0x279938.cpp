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

// Function: func_00279938
// Address: 0x279938 - 0x2799b8
void func_00279938_0x279938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279938_0x279938");
#endif

    switch (ctx->pc) {
        case 0x279954u: goto label_279954;
        case 0x279968u: goto label_279968;
        case 0x279980u: goto label_279980;
        case 0x2799a4u: goto label_2799a4;
        default: break;
    }

    ctx->pc = 0x279938u;

    // 0x279938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27993c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27993cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279940: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x279940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x279944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27994c: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x27994Cu;
    SET_GPR_U32(ctx, 31, 0x279954u);
    ctx->pc = 0x279950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27994Cu;
    // 0x279950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x27994Cu, 0x279954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279954u;
label_279954:
    // 0x279954: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x279954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x279958: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x279958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x27995c: 0x24a57d38  addiu       $a1, $a1, 0x7D38
    ctx->pc = 0x27995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32056));
    // 0x279960: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x279960u;
    SET_GPR_U32(ctx, 31, 0x279968u);
    ctx->pc = 0x279964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279960u;
    // 0x279964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x279960u, 0x279968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279968u;
label_279968:
    // 0x279968: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x279968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x27996c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x27996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x279970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279974: 0x24a57d40  addiu       $a1, $a1, 0x7D40
    ctx->pc = 0x279974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32064));
    // 0x279978: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x279978u;
    SET_GPR_U32(ctx, 31, 0x279980u);
    ctx->pc = 0x27997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279978u;
    // 0x27997c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x279978u, 0x279980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279980u;
label_279980:
    // 0x279980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279980u;
    {
        const bool branch_taken_0x279980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279980u;
        // 0x279984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279980) {
            ctx->pc = 0x279990u;
            goto label_279990;
        }
    }
    ctx->pc = 0x279988u;
    // 0x279988: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x279988u;
    {
        const bool branch_taken_0x279988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279988u;
        // 0x27998c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279988) {
            ctx->pc = 0x2799A4u;
            goto label_2799a4;
        }
    }
    ctx->pc = 0x279990u;
label_279990:
    // 0x279990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x279990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279994: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x279994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x279998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27999c: 0xc0525ce  jal         func_149738
    ctx->pc = 0x27999Cu;
    SET_GPR_U32(ctx, 31, 0x2799A4u);
    ctx->pc = 0x2799A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27999Cu;
    // 0x2799a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x27999Cu, 0x2799A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2799A4u;
label_2799a4:
    // 0x2799a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2799a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2799a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2799a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2799ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2799acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2799b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2799B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2799B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799B0u;
        // 0x2799b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2799B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2799B8u;
}
