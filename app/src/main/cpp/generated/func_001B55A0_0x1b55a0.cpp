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

// Function: func_001B55A0
// Address: 0x1b55a0 - 0x1b5650
void func_001B55A0_0x1b55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B55A0_0x1b55a0");
#endif

    switch (ctx->pc) {
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55e4u: goto label_1b55e4;
        case 0x1b5600u: goto label_1b5600;
        case 0x1b561cu: goto label_1b561c;
        default: break;
    }

    ctx->pc = 0x1b55a0u;

    // 0x1b55a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b55a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b55a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b55a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b55a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b55a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b55ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b55acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55b0: 0x8e05064c  lw          $a1, 0x64C($s0)
    ctx->pc = 0x1b55b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1612)));
    // 0x1b55b4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B55B4u;
    {
        const bool branch_taken_0x1b55b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b55b4) {
            ctx->pc = 0x1B55B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B55B4u;
            // 0x1b55b8: 0x8e050650  lw          $a1, 0x650($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B55D0u;
            goto label_1b55d0;
        }
    }
    ctx->pc = 0x1B55BCu;
    // 0x1b55bc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1b55bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1b55c0: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x1B55C0u;
    SET_GPR_U32(ctx, 31, 0x1B55C8u);
    ctx->pc = 0x1B55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55C0u;
    // 0x1b55c4: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1B55C0u, 0x1B55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55C8u;
label_1b55c8:
    // 0x1b55c8: 0xae00064c  sw          $zero, 0x64C($s0)
    ctx->pc = 0x1b55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1612), GPR_U32(ctx, 0));
    // 0x1b55cc: 0x8e050650  lw          $a1, 0x650($s0)
    ctx->pc = 0x1b55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
label_1b55d0:
    // 0x1b55d0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B55D0u;
    {
        const bool branch_taken_0x1b55d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b55d0) {
            ctx->pc = 0x1B55D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B55D0u;
            // 0x1b55d4: 0x8e050654  lw          $a1, 0x654($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B55ECu;
            goto label_1b55ec;
        }
    }
    ctx->pc = 0x1B55D8u;
    // 0x1b55d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b55dc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1B55DCu;
    SET_GPR_U32(ctx, 31, 0x1B55E4u);
    ctx->pc = 0x1B55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55DCu;
    // 0x1b55e0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1B55DCu, 0x1B55E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55E4u;
label_1b55e4:
    // 0x1b55e4: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x1b55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
    // 0x1b55e8: 0x8e050654  lw          $a1, 0x654($s0)
    ctx->pc = 0x1b55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1620)));
label_1b55ec:
    // 0x1b55ec: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B55ECu;
    {
        const bool branch_taken_0x1b55ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b55ec) {
            ctx->pc = 0x1B55F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B55ECu;
            // 0x1b55f0: 0x8e050658  lw          $a1, 0x658($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5608u;
            goto label_1b5608;
        }
    }
    ctx->pc = 0x1B55F4u;
    // 0x1b55f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b55f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b55f8: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B55F8u;
    SET_GPR_U32(ctx, 31, 0x1B5600u);
    ctx->pc = 0x1B55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55F8u;
    // 0x1b55fc: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B55F8u, 0x1B5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5600u;
label_1b5600:
    // 0x1b5600: 0xae000654  sw          $zero, 0x654($s0)
    ctx->pc = 0x1b5600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 0));
    // 0x1b5604: 0x8e050658  lw          $a1, 0x658($s0)
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1b5608:
    // 0x1b5608: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5608u;
    {
        const bool branch_taken_0x1b5608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5608) {
            ctx->pc = 0x1B560Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5608u;
            // 0x1b560c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5624u;
            goto label_1b5624;
        }
    }
    ctx->pc = 0x1B5610u;
    // 0x1b5610: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b5610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b5614: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B5614u;
    SET_GPR_U32(ctx, 31, 0x1B561Cu);
    ctx->pc = 0x1B5618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5614u;
    // 0x1b5618: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B5614u, 0x1B561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B561Cu;
label_1b561c:
    // 0x1b561c: 0xae000658  sw          $zero, 0x658($s0)
    ctx->pc = 0x1b561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 0));
    // 0x1b5620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5624:
    // 0x1b5624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5628: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5628u;
        // 0x1b562c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5630u;
    // 0x1b5630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b5630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5634: 0x0  nop
    ctx->pc = 0x1b5634u;
    // NOP
    // 0x1b5638: 0x0  nop
    ctx->pc = 0x1b5638u;
    // NOP
    // 0x1b563c: 0x0  nop
    ctx->pc = 0x1b563cu;
    // NOP
    // 0x1b5640: 0x0  nop
    ctx->pc = 0x1b5640u;
    // NOP
    // 0x1b5644: 0x0  nop
    ctx->pc = 0x1b5644u;
    // NOP
    // 0x1b5648: 0x0  nop
    ctx->pc = 0x1b5648u;
    // NOP
    // 0x1b564c: 0x0  nop
    ctx->pc = 0x1b564cu;
    // NOP
    ctx->pc = 0x1b5650u;
}
