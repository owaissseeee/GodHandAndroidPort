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

// Function: func_00186948
// Address: 0x186948 - 0x186998
void func_00186948_0x186948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186948_0x186948");
#endif

    switch (ctx->pc) {
        case 0x18696cu: goto label_18696c;
        case 0x186984u: goto label_186984;
        default: break;
    }

    ctx->pc = 0x186948u;

    // 0x186948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18694c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x186950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186954: 0x8c625ad8  lw          $v0, 0x5AD8($v1)
    ctx->pc = 0x186954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785AD8u));
    // 0x186958: 0x24705ad8  addiu       $s0, $v1, 0x5AD8
    ctx->pc = 0x186958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23256));
    // 0x18695c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18695Cu;
    {
        const bool branch_taken_0x18695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18695Cu;
        // 0x186960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18695c) {
            ctx->pc = 0x186984u;
            goto label_186984;
        }
    }
    ctx->pc = 0x186964u;
    // 0x186964: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x186964u;
    SET_GPR_U32(ctx, 31, 0x18696Cu);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x186964u, 0x18696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18696Cu;
label_18696c:
    // 0x18696c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18696cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x186970: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x186970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x186974: 0x24a53040  addiu       $a1, $a1, 0x3040
    ctx->pc = 0x186974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12352));
    // 0x186978: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x186978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x18697c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18697Cu;
    SET_GPR_U32(ctx, 31, 0x186984u);
    ctx->pc = 0x186980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18697Cu;
    // 0x186980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18697Cu, 0x186984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186984u;
label_186984:
    // 0x186984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18698c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18698cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186990: 0x3e00008  jr          $ra
    ctx->pc = 0x186990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186990u;
        // 0x186994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186998u;
}
