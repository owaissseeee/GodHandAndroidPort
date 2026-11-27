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

// Function: func_00358968
// Address: 0x358968 - 0x3589c0
void func_00358968_0x358968(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358968_0x358968");
#endif

    if (__builtin_expect(ctx->pc != 0x358968u, 0)) {
        switch (ctx->pc) {
            case 0x35897cu: goto label_35897c;
            case 0x3589a8u: goto label_3589a8;
            default: break;
        }
    }


    // 0x358968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35896c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x358970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x358974: 0xc0d37b2  jal         func_34DEC8
    SET_GPR_U32(ctx, 31, 0x35897Cu);
    ctx->pc = 0x358978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358974u;
    // 0x358978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj34D8_SetGlobalEE0B8_IfField48_0x34dec8, 0x34dec8u, 0x35897cu)) {
        return;
    }
label_35897c:
    // 0x35897c: 0x3c05ff00  lui         $a1, 0xFF00
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358980: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358984: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358984u;
    {
        const bool branch_taken_0x358984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358984u;
        // 0x358988: 0x34a50133  ori         $a1, $a1, 0x133 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)307);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358984) {
            ctx->pc = 0x3589A0u;
            goto label_3589a0;
        }
    }
    // 0x35898c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35898cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358990: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358994: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358998: 0x80d375c  j           func_34DD70
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358998u;
    // 0x35899c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x358998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_3589a0:
    // 0x3589a0: 0xc0d6270  jal         func_3589C0
    ctx->pc = 0x3589A0u;
    SET_GPR_U32(ctx, 31, 0x3589A8u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003589C0_0x3589c0, 0x3589c0u, 0x3589a8u)) {
        return;
    }
label_3589a8:
    // 0x3589a8: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3589ac: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x3589acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x3589b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3589b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3589b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3589b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3589b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3589B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3589BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589B8u;
        // 0x3589bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3589B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3589C0u;
}