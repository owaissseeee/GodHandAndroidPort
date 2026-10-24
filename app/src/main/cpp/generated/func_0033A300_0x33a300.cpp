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

// Function: func_0033A300
// Address: 0x33a300 - 0x33a388
void func_0033A300_0x33a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A300_0x33a300");
#endif

    switch (ctx->pc) {
        case 0x33a370u: goto label_33a370;
        default: break;
    }

    ctx->pc = 0x33a300u;

    // 0x33a300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a30c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x33A30Cu;
    {
        const bool branch_taken_0x33a30c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A30Cu;
        // 0x33a310: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a30c) {
            ctx->pc = 0x33A338u;
            goto label_33a338;
        }
    }
    ctx->pc = 0x33A314u;
    // 0x33a314: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a318: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a320: 0x24845bc8  addiu       $a0, $a0, 0x5BC8
    ctx->pc = 0x33a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23496));
    // 0x33a324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a328: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x33a328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
    // 0x33a32c: 0x80ce812  j           func_33A048
    ctx->pc = 0x33A32Cu;
    ctx->pc = 0x33A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A32Cu;
    // 0x33a330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A32Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A334u;
    // 0x33a334: 0x0  nop
    ctx->pc = 0x33a334u;
    // NOP
label_33a338:
    // 0x33a338: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x33a338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33a33c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33A33Cu;
    {
        const bool branch_taken_0x33a33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A33Cu;
        // 0x33a340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a33c) {
            ctx->pc = 0x33A368u;
            goto label_33a368;
        }
    }
    ctx->pc = 0x33A344u;
    // 0x33a344: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a348: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a350: 0x24845bf8  addiu       $a0, $a0, 0x5BF8
    ctx->pc = 0x33a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23544));
    // 0x33a354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a358: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
    // 0x33a35c: 0x80ce812  j           func_33A048
    ctx->pc = 0x33A35Cu;
    ctx->pc = 0x33A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A35Cu;
    // 0x33a360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A35Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A364u;
    // 0x33a364: 0x0  nop
    ctx->pc = 0x33a364u;
    // NOP
label_33a368:
    // 0x33a368: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33A368u;
    SET_GPR_U32(ctx, 31, 0x33A370u);
    ctx->pc = 0x33A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A368u;
    // 0x33a36c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33A368u, 0x33A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A370u;
label_33a370:
    // 0x33a370: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x33a370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x33a374: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a37c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A37Cu;
        // 0x33a380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A384u;
    // 0x33a384: 0x0  nop
    ctx->pc = 0x33a384u;
    // NOP
    ctx->pc = 0x33a388u;
}
