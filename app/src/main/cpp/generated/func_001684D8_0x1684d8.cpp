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

// Function: func_001684D8
// Address: 0x1684d8 - 0x168528
void func_001684D8_0x1684d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001684D8_0x1684d8");
#endif

    switch (ctx->pc) {
        case 0x1684fcu: goto label_1684fc;
        case 0x168514u: goto label_168514;
        default: break;
    }

    ctx->pc = 0x1684d8u;

    // 0x1684d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1684d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1684dc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1684e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1684e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1684e4: 0x8c625758  lw          $v0, 0x5758($v1)
    ctx->pc = 0x1684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785758u));
    // 0x1684e8: 0x24705758  addiu       $s0, $v1, 0x5758
    ctx->pc = 0x1684e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22360));
    // 0x1684ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1684ECu;
    {
        const bool branch_taken_0x1684ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1684F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684ECu;
        // 0x1684f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684ec) {
            ctx->pc = 0x168514u;
            goto label_168514;
        }
    }
    ctx->pc = 0x1684F4u;
    // 0x1684f4: 0xc05858a  jal         func_161628
    ctx->pc = 0x1684F4u;
    SET_GPR_U32(ctx, 31, 0x1684FCu);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x1684F4u, 0x1684FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684FCu;
label_1684fc:
    // 0x1684fc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x168500: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x168504: 0x24a5fca0  addiu       $a1, $a1, -0x360
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966432));
    // 0x168508: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x168508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x16850c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16850Cu;
    SET_GPR_U32(ctx, 31, 0x168514u);
    ctx->pc = 0x168510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16850Cu;
    // 0x168510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16850Cu, 0x168514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168514u;
label_168514:
    // 0x168514: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16851c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16851cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168520: 0x3e00008  jr          $ra
    ctx->pc = 0x168520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168520u;
        // 0x168524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168528u;
}
