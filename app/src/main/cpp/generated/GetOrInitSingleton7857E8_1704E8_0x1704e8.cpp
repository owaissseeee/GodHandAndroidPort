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

// Function: GetOrInitSingleton7857E8_1704E8
// Address: 0x1704e8 - 0x170538
void GetOrInitSingleton7857E8_1704E8_0x1704e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton7857E8_1704E8_0x1704e8");
#endif

    switch (ctx->pc) {
        case 0x17050cu: goto label_17050c;
        case 0x170524u: goto label_170524;
        default: break;
    }

    ctx->pc = 0x1704e8u;

    // 0x1704e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1704e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1704ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1704ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1704f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1704f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1704f4: 0x8c6257e8  lw          $v0, 0x57E8($v1)
    ctx->pc = 0x1704f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7857E8u));
    // 0x1704f8: 0x247057e8  addiu       $s0, $v1, 0x57E8
    ctx->pc = 0x1704f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22504));
    // 0x1704fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1704FCu;
    {
        const bool branch_taken_0x1704fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704FCu;
        // 0x170500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704fc) {
            ctx->pc = 0x170524u;
            goto label_170524;
        }
    }
    ctx->pc = 0x170504u;
    // 0x170504: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x170504u;
    SET_GPR_U32(ctx, 31, 0x17050Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x170504u, 0x17050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17050Cu;
label_17050c:
    // 0x17050c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x170510: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x170510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x170514: 0x24a505c8  addiu       $a1, $a1, 0x5C8
    ctx->pc = 0x170514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1480));
    // 0x170518: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x17051c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17051Cu;
    SET_GPR_U32(ctx, 31, 0x170524u);
    ctx->pc = 0x170520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17051Cu;
    // 0x170520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17051Cu, 0x170524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170524u;
label_170524:
    // 0x170524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17052c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17052cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170530: 0x3e00008  jr          $ra
    ctx->pc = 0x170530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170530u;
        // 0x170534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170538u;
}
