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

// Function: IdDrawObj_transDual
// Address: 0x1678b8 - 0x167908
void IdDrawObj_transDual_0x1678b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdDrawObj_transDual_0x1678b8");
#endif

    switch (ctx->pc) {
        case 0x1678ecu: goto label_1678ec;
        case 0x1678f4u: goto label_1678f4;
        default: break;
    }

    ctx->pc = 0x1678b8u;

    // 0x1678b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1678b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1678bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1678bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1678c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1678c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1678c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1678c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678c8: 0x8203005a  lb          $v1, 0x5A($s0)
    ctx->pc = 0x1678c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x1678cc: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1678CCu;
    {
        const bool branch_taken_0x1678cc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1678D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678CCu;
        // 0x1678d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678cc) {
            ctx->pc = 0x1678ECu;
            goto label_1678ec;
        }
    }
    ctx->pc = 0x1678D4u;
    // 0x1678d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1678D4u;
    {
        const bool branch_taken_0x1678d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1678D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678D4u;
        // 0x1678d8: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678d4) {
            ctx->pc = 0x1678ECu;
            goto label_1678ec;
        }
    }
    ctx->pc = 0x1678DCu;
    // 0x1678dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1678DCu;
    {
        const bool branch_taken_0x1678dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678dc) {
            ctx->pc = 0x1678ECu;
            goto label_1678ec;
        }
    }
    ctx->pc = 0x1678E4u;
    // 0x1678e4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1678E4u;
    SET_GPR_U32(ctx, 31, 0x1678ECu);
    ctx->pc = 0x1678E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678E4u;
    // 0x1678e8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1678E4u, 0x1678ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678ECu;
label_1678ec:
    // 0x1678ec: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1678ECu;
    SET_GPR_U32(ctx, 31, 0x1678F4u);
    ctx->pc = 0x1678F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678ECu;
    // 0x1678f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1678ECu, 0x1678F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678F4u;
label_1678f4:
    // 0x1678f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1678f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1678f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1678f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1678fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1678FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678FCu;
        // 0x167900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1678FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167904u;
    // 0x167904: 0x0  nop
    ctx->pc = 0x167904u;
    // NOP
    ctx->pc = 0x167908u;
}
