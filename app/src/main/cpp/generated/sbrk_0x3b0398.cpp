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

// Function: sbrk
// Address: 0x3b0398 - 0x3b0448
void sbrk_0x3b0398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sbrk_0x3b0398");
#endif

    switch (ctx->pc) {
        case 0x3b03c0u: goto label_3b03c0;
        case 0x3b03f0u: goto label_3b03f0;
        case 0x3b0404u: goto label_3b0404;
        default: break;
    }

    ctx->pc = 0x3b0398u;

    // 0x3b0398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b0398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b039c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b03a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b03a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b03a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b03a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b03ac: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x3b03acu;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x3b03b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b03b4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x3b03b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3b03b8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B03B8u;
    {
        const bool branch_taken_0x3b03b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03B8u;
        // 0x3b03bc: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b03b8) {
            ctx->pc = 0x3B03E4u;
            goto label_3b03e4;
        }
    }
    ctx->pc = 0x3B03C0u;
label_3b03c0:
    // 0x3b03c0: 0x42000039  di
    ctx->pc = 0x3b03c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3b03c4: 0x40f  sync.p
    ctx->pc = 0x3b03c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b03c8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3b03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3b03cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3b03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3b03d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b03d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B03D4u;
    {
        const bool branch_taken_0x3b03d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b03d4) {
            ctx->pc = 0x3B03C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b03c0;
        }
    }
    ctx->pc = 0x3B03DCu;
    // 0x3b03dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B03DCu;
    {
        const bool branch_taken_0x3b03dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B03E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03DCu;
        // 0x3b03e0: 0x8e42ae44  lw          $v0, -0x51BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b03dc) {
            ctx->pc = 0x3B03E8u;
            goto label_3b03e8;
        }
    }
    ctx->pc = 0x3B03E4u;
label_3b03e4:
    // 0x3b03e4: 0x8e42ae44  lw          $v0, -0x51BC($s2)
    ctx->pc = 0x3b03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946372)));
label_3b03e8:
    // 0x3b03e8: 0xc0ebf20  jal         func_3AFC80
    ctx->pc = 0x3B03E8u;
    SET_GPR_U32(ctx, 31, 0x3B03F0u);
    ctx->pc = 0x3B03ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B03E8u;
    // 0x3b03ec: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFC80u, 0x3B03E8u, 0x3B03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03F0u;
label_3b03f0:
    // 0x3b03f0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3b03f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3b03f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B03F4u;
    {
        const bool branch_taken_0x3b03f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03F4u;
        // 0x3b03f8: 0x8e42ae44  lw          $v0, -0x51BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b03f4) {
            ctx->pc = 0x3B0420u;
            goto label_3b0420;
        }
    }
    ctx->pc = 0x3B03FCu;
    // 0x3b03fc: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3B03FCu;
    SET_GPR_U32(ctx, 31, 0x3B0404u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3B03FCu, 0x3B0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0404u;
label_3b0404:
    // 0x3b0404: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b0408: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B0408u;
    {
        const bool branch_taken_0x3b0408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0408u;
        // 0x3b040c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0408) {
            ctx->pc = 0x3B0414u;
            goto label_3b0414;
        }
    }
    ctx->pc = 0x3B0410u;
    // 0x3b0410: 0x42000038  ei
    ctx->pc = 0x3b0410u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3b0414:
    // 0x3b0414: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b0414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3b0418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0418u;
    {
        const bool branch_taken_0x3b0418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0418u;
        // 0x3b041c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0418) {
            ctx->pc = 0x3B042Cu;
            goto label_3b042c;
        }
    }
    ctx->pc = 0x3B0420u;
label_3b0420:
    // 0x3b0420: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B0420u;
    {
        const bool branch_taken_0x3b0420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0420u;
        // 0x3b0424: 0xae50ae44  sw          $s0, -0x51BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294946372), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0420) {
            ctx->pc = 0x3B042Cu;
            goto label_3b042c;
        }
    }
    ctx->pc = 0x3B0428u;
    // 0x3b0428: 0x42000038  ei
    ctx->pc = 0x3b0428u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3b042c:
    // 0x3b042c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0430: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0434: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b043c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B043Cu;
        // 0x3b0440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B043Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0444u;
    // 0x3b0444: 0x0  nop
    ctx->pc = 0x3b0444u;
    // NOP
    ctx->pc = 0x3b0448u;
}
