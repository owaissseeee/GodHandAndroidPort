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

// Function: GetBInstance_193948
// Address: 0x193948 - 0x193998
void GetBInstance_193948_0x193948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBInstance_193948_0x193948");
#endif

    switch (ctx->pc) {
        case 0x19396cu: goto label_19396c;
        case 0x193984u: goto label_193984;
        default: break;
    }

    ctx->pc = 0x193948u;

    // 0x193948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19394c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x193950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193954: 0x8c625c88  lw          $v0, 0x5C88($v1)
    ctx->pc = 0x193954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C88u));
    // 0x193958: 0x24705c88  addiu       $s0, $v1, 0x5C88
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23688));
    // 0x19395c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19395Cu;
    {
        const bool branch_taken_0x19395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19395Cu;
        // 0x193960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19395c) {
            ctx->pc = 0x193984u;
            goto label_193984;
        }
    }
    ctx->pc = 0x193964u;
    // 0x193964: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x193964u;
    SET_GPR_U32(ctx, 31, 0x19396Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x193964u, 0x19396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19396Cu;
label_19396c:
    // 0x19396c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19396cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x193970: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x193970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x193974: 0x24a54948  addiu       $a1, $a1, 0x4948
    ctx->pc = 0x193974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18760));
    // 0x193978: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19397c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19397Cu;
    SET_GPR_U32(ctx, 31, 0x193984u);
    ctx->pc = 0x193980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19397Cu;
    // 0x193980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19397Cu, 0x193984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193984u;
label_193984:
    // 0x193984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19398c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19398cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193990: 0x3e00008  jr          $ra
    ctx->pc = 0x193990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193990u;
        // 0x193994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193998u;
}
