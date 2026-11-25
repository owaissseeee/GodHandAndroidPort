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

// Function: cSnd_update
// Address: 0x2ca470 - 0x2ca518
void cSnd_update_0x2ca470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_update_0x2ca470");
#endif

    if (__builtin_expect(ctx->pc != 0x2ca470u, 0)) {
        switch (ctx->pc) {
            case 0x2ca490u: goto label_2ca490;
            case 0x2ca49cu: goto label_2ca49c;
            case 0x2ca4a4u: goto label_2ca4a4;
            case 0x2ca4acu: goto label_2ca4ac;
            case 0x2ca4b4u: goto label_2ca4b4;
            case 0x2ca4bcu: goto label_2ca4bc;
            case 0x2ca4c4u: goto label_2ca4c4;
            case 0x2ca4d0u: goto label_2ca4d0;
            case 0x2ca4f0u: goto label_2ca4f0;
            default: break;
        }
    }


    // 0x2ca470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca474: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ca474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ca478: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca47c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ca47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ca480: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ca480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ca484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca488: 0xc0b2bca  jal         func_2CAF28
    SET_GPR_U32(ctx, 31, 0x2CA490u);
    ctx->pc = 0x2CA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA488u;
    // 0x2ca48c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CAF28_0x2caf28, 0x2caf28u, 0x2ca490u)) {
        return;
    }
    ctx->pc = 0x2CA490u;
label_2ca490:
    // 0x2ca490: 0x26300140  addiu       $s0, $s1, 0x140
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2ca494: 0xc0b424e  jal         func_2D0938
    SET_GPR_U32(ctx, 31, 0x2CA49Cu);
    ctx->pc = 0x2CA498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA494u;
    // 0x2ca498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_BgmControl_0x2d0938, 0x2d0938u, 0x2ca49cu)) {
        return;
    }
    ctx->pc = 0x2CA49Cu;
label_2ca49c:
    // 0x2ca49c: 0xc0c9776  jal         func_325DD8
    ctx->pc = 0x2CA49Cu;
    SET_GPR_U32(ctx, 31, 0x2CA4A4u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33F690_325DD8_0x325dd8, 0x325dd8u, 0x2ca4a4u)) {
        return;
    }
    ctx->pc = 0x2CA4A4u;
label_2ca4a4:
    // 0x2ca4a4: 0xc0b2976  jal         func_2CA5D8
    SET_GPR_U32(ctx, 31, 0x2CA4ACu);
    ctx->pc = 0x2CA4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4A4u;
    // 0x2ca4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_flushPendingSe_0x2ca5d8, 0x2ca5d8u, 0x2ca4acu)) {
        return;
    }
    ctx->pc = 0x2CA4ACu;
label_2ca4ac:
    // 0x2ca4ac: 0xc0dd4e0  jal         func_375380
    ctx->pc = 0x2CA4ACu;
    SET_GPR_U32(ctx, 31, 0x2CA4B4u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00375380_0x375380, 0x375380u, 0x2ca4b4u)) {
        return;
    }
    ctx->pc = 0x2CA4B4u;
label_2ca4b4:
    // 0x2ca4b4: 0xc0dd540  jal         func_375500
    ctx->pc = 0x2CA4B4u;
    SET_GPR_U32(ctx, 31, 0x2CA4BCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00375500_0x375500, 0x375500u, 0x2ca4bcu)) {
        return;
    }
    ctx->pc = 0x2CA4BCu;
label_2ca4bc:
    // 0x2ca4bc: 0xc0b2956  jal         func_2CA558
    SET_GPR_U32(ctx, 31, 0x2CA4C4u);
    ctx->pc = 0x2CA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4BCu;
    // 0x2ca4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_updateLoads_0x2ca558, 0x2ca558u, 0x2ca4c4u)) {
        return;
    }
    ctx->pc = 0x2CA4C4u;
label_2ca4c4:
    // 0x2ca4c4: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2ca4c8: 0xc0b4b8e  jal         func_2D2E38
    SET_GPR_U32(ctx, 31, 0x2CA4D0u);
    ctx->pc = 0x2CA4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4C8u;
    // 0x2ca4cc: 0x24843a40  addiu       $a0, $a0, 0x3A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14912));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Ring_stepToAccepted_0x2d2e38, 0x2d2e38u, 0x2ca4d0u)) {
        return;
    }
    ctx->pc = 0x2CA4D0u;
label_2ca4d0:
    // 0x2ca4d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca4d4: 0x26520001  addiu       $s2, $s2, 0x1
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ca4d8: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4dc: 0x24060005  addiu       $a2, $zero, 0x5
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ca4e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA4E0u;
    {
        const bool branch_taken_0x2ca4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4E0u;
        // 0x2ca4e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4e0) {
            ctx->pc = 0x2CA4F4u;
            goto label_2ca4f4;
        }
    }
    // 0x2ca4e8: 0xc0b2f08  jal         func_2CBC20
    ctx->pc = 0x2CA4E8u;
    SET_GPR_U32(ctx, 31, 0x2CA4F0u);
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeFadeOut_0x2cbc20, 0x2cbc20u, 0x2ca4f0u)) {
        return;
    }
    ctx->pc = 0x2CA4F0u;
label_2ca4f0:
    // 0x2ca4f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ca4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ca4f4:
    // 0x2ca4f4: 0x2e420008  sltiu       $v0, $s2, 0x8
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ca4f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CA4F8u;
    {
        const bool branch_taken_0x2ca4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4F8u;
        // 0x2ca4fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4f8) {
            ctx->pc = 0x2CA4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca4d0;
        }
    }
    // 0x2ca500: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ca500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ca504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca508: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ca508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca510: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA510u;
        // 0x2ca514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA518u;
}