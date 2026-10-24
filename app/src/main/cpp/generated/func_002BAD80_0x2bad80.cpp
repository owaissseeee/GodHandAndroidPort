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

// Function: func_002BAD80
// Address: 0x2bad80 - 0x2badf8
void func_002BAD80_0x2bad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAD80_0x2bad80");
#endif

    switch (ctx->pc) {
        case 0x2badc8u: goto label_2badc8;
        case 0x2baddcu: goto label_2baddc;
        default: break;
    }

    ctx->pc = 0x2bad80u;

    // 0x2bad80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bad80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bad84: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x2bad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x2bad88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bad8c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2bad8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2bad90: 0x24516388  addiu       $s1, $v0, 0x6388
    ctx->pc = 0x2bad90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25480));
    // 0x2bad94: 0x8c436388  lw          $v1, 0x6388($v0)
    ctx->pc = 0x2bad94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x786388u));
    // 0x2bad98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bad98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2bada0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BADA0u;
    {
        const bool branch_taken_0x2bada0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADA0u;
        // 0x2bada4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bada0) {
            ctx->pc = 0x2BADDCu;
            goto label_2baddc;
        }
    }
    ctx->pc = 0x2BADA8u;
    // 0x2bada8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2bada8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2badac: 0x8c620d60  lw          $v0, 0xD60($v1)
    ctx->pc = 0x2badacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D60u));
    // 0x2badb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BADB0u;
    {
        const bool branch_taken_0x2badb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADB0u;
        // 0x2badb4: 0x24700d60  addiu       $s0, $v1, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2badb0) {
            ctx->pc = 0x2BADC8u;
            goto label_2badc8;
        }
    }
    ctx->pc = 0x2BADB8u;
    // 0x2badb8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2badb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2badbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2badbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badc0: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2BADC0u;
    SET_GPR_U32(ctx, 31, 0x2BADC8u);
    ctx->pc = 0x2BADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADC0u;
    // 0x2badc4: 0x24a5be98  addiu       $a1, $a1, -0x4168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2BADC0u, 0x2BADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADC8u;
label_2badc8:
    // 0x2badc8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2badc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2badcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2badccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2badd0: 0x24a5beb8  addiu       $a1, $a1, -0x4148
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950584));
    // 0x2badd4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BADD4u;
    SET_GPR_U32(ctx, 31, 0x2BADDCu);
    ctx->pc = 0x2BADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADD4u;
    // 0x2badd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BADD4u, 0x2BADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADDCu;
label_2baddc:
    // 0x2baddc: 0x26426388  addiu       $v0, $s2, 0x6388
    ctx->pc = 0x2baddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25480));
    // 0x2bade0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bade0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bade4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bade4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bade8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2bade8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2badec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2badecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2badf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADF0u;
        // 0x2badf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BADF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BADF8u;
}
