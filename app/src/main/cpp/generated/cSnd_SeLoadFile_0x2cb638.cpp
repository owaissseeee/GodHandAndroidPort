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

// Function: cSnd_SeLoadFile
// Address: 0x2cb638 - 0x2cb6a0
void cSnd_SeLoadFile_0x2cb638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeLoadFile_0x2cb638");
#endif

    switch (ctx->pc) {
        case 0x2cb664u: goto label_2cb664;
        case 0x2cb678u: goto label_2cb678;
        case 0x2cb688u: goto label_2cb688;
        default: break;
    }

    ctx->pc = 0x2cb638u;

    // 0x2cb638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb63c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cb63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cb640: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cb640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cb644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb648: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cb648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cb64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb650: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cb650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb654: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2cb654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2cb658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb65c: 0xc0e9536  jal         func_3A54D8
    ctx->pc = 0x2CB65Cu;
    SET_GPR_U32(ctx, 31, 0x2CB664u);
    ctx->pc = 0x2CB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB65Cu;
    // 0x2cb660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A54D8u, 0x2CB65Cu, 0x2CB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB664u;
label_2cb664:
    // 0x2cb664: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB664u;
    {
        const bool branch_taken_0x2cb664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb664) {
            ctx->pc = 0x2CB668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB664u;
            // 0x2cb668: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB66Cu;
            goto label_2cb66c;
        }
    }
    ctx->pc = 0x2CB66Cu;
label_2cb66c:
    // 0x2cb66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb670: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB670u;
    SET_GPR_U32(ctx, 31, 0x2CB678u);
    ctx->pc = 0x2CB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB670u;
    // 0x2cb674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB670u, 0x2CB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB678u;
label_2cb678:
    // 0x2cb678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb67c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cb67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb680: 0xc0b3d80  jal         func_2CF600
    ctx->pc = 0x2CB680u;
    SET_GPR_U32(ctx, 31, 0x2CB688u);
    ctx->pc = 0x2CB684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB680u;
    // 0x2cb684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF600u, 0x2CB680u, 0x2CB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB688u;
label_2cb688:
    // 0x2cb688: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cb688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb68c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cb68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb690: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cb690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb698: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB698u;
        // 0x2cb69c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB6A0u;
}
