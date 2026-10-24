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

// Function: cOm71_SetMotionRun
// Address: 0x1b1f58 - 0x1b1fe0
void cOm71_SetMotionRun_0x1b1f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm71_SetMotionRun_0x1b1f58");
#endif

    switch (ctx->pc) {
        case 0x1b1f9cu: goto label_1b1f9c;
        case 0x1b1fd0u: goto label_1b1fd0;
        default: break;
    }

    ctx->pc = 0x1b1f58u;

    // 0x1b1f58: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b1f5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b1f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1f64: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x1b1f64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1b1f68: 0x24030305  addiu       $v1, $zero, 0x305
    ctx->pc = 0x1b1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x1b1f6c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1F6Cu;
    {
        const bool branch_taken_0x1b1f6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F6Cu;
        // 0x1b1f70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f6c) {
            ctx->pc = 0x1B1FA4u;
            goto label_1b1fa4;
        }
    }
    ctx->pc = 0x1B1F74u;
    // 0x1b1f74: 0x8ca20304  lw          $v0, 0x304($a1)
    ctx->pc = 0x1b1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 772)));
    // 0x1b1f78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b1f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f84: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b1f88: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b1f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f94: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1B1F94u;
    SET_GPR_U32(ctx, 31, 0x1B1F9Cu);
    ctx->pc = 0x1B1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F94u;
    // 0x1b1f98: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1B1F94u, 0x1B1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F9Cu;
label_1b1f9c:
    // 0x1b1f9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B1F9Cu;
    {
        const bool branch_taken_0x1b1f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F9Cu;
        // 0x1b1fa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f9c) {
            ctx->pc = 0x1B1FD4u;
            goto label_1b1fd4;
        }
    }
    ctx->pc = 0x1B1FA4u;
label_1b1fa4:
    // 0x1b1fa4: 0x8ca20304  lw          $v0, 0x304($a1)
    ctx->pc = 0x1b1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 772)));
    // 0x1b1fa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b1fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1fb0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b1fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1fb4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1b1fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b1fb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fbc: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b1fc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b1fc8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC8u;
    // 0x1b1fcc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1B1FC8u, 0x1B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FD0u;
label_1b1fd0:
    // 0x1b1fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1fd4:
    // 0x1b1fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FD4u;
        // 0x1b1fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1FDCu;
    // 0x1b1fdc: 0x0  nop
    ctx->pc = 0x1b1fdcu;
    // NOP
    ctx->pc = 0x1b1fe0u;
}
