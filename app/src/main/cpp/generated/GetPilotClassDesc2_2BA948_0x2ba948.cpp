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

// Function: GetPilotClassDesc2_2BA948
// Address: 0x2ba948 - 0x2ba998
void GetPilotClassDesc2_2BA948_0x2ba948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPilotClassDesc2_2BA948_0x2ba948");
#endif

    switch (ctx->pc) {
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba984u: goto label_2ba984;
        default: break;
    }

    ctx->pc = 0x2ba948u;

    // 0x2ba948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba94c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ba94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ba950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba954: 0x8c626358  lw          $v0, 0x6358($v1)
    ctx->pc = 0x2ba954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786358u));
    // 0x2ba958: 0x24706358  addiu       $s0, $v1, 0x6358
    ctx->pc = 0x2ba958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25432));
    // 0x2ba95c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA95Cu;
    {
        const bool branch_taken_0x2ba95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA95Cu;
        // 0x2ba960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba95c) {
            ctx->pc = 0x2BA984u;
            goto label_2ba984;
        }
    }
    ctx->pc = 0x2BA964u;
    // 0x2ba964: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BA964u;
    SET_GPR_U32(ctx, 31, 0x2BA96Cu);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BA964u, 0x2BA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA96Cu;
label_2ba96c:
    // 0x2ba96c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ba96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ba970: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2ba970u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2ba974: 0x24a5be48  addiu       $a1, $a1, -0x41B8
    ctx->pc = 0x2ba974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950472));
    // 0x2ba978: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2ba978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2ba97c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BA97Cu;
    SET_GPR_U32(ctx, 31, 0x2BA984u);
    ctx->pc = 0x2BA980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA97Cu;
    // 0x2ba980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BA97Cu, 0x2BA984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA984u;
label_2ba984:
    // 0x2ba984: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba98c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba990: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA990u;
        // 0x2ba994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA998u;
}
