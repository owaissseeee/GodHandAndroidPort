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

// Function: func_0036C2F0
// Address: 0x36c2f0 - 0x36c3b8
void func_0036C2F0_0x36c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C2F0_0x36c2f0");
#endif

    switch (ctx->pc) {
        case 0x36c30cu: goto label_36c30c;
        case 0x36c324u: goto label_36c324;
        case 0x36c32cu: goto label_36c32c;
        case 0x36c334u: goto label_36c334;
        case 0x36c360u: goto label_36c360;
        case 0x36c378u: goto label_36c378;
        case 0x36c394u: goto label_36c394;
        default: break;
    }

    ctx->pc = 0x36c2f0u;

    // 0x36c2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c2f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c304: 0xc0db020  jal         func_36C080
    ctx->pc = 0x36C304u;
    SET_GPR_U32(ctx, 31, 0x36C30Cu);
    ctx->pc = 0x36C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C304u;
    // 0x36c308: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C080u, 0x36C304u, 0x36C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C30Cu;
label_36c30c:
    // 0x36c30c: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x36c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x36c310: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x36c310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x36c314: 0x24a56ce8  addiu       $a1, $a1, 0x6CE8
    ctx->pc = 0x36c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27880));
    // 0x36c318: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x36c318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36c31c: 0xc0db5ac  jal         func_36D6B0
    ctx->pc = 0x36C31Cu;
    SET_GPR_U32(ctx, 31, 0x36C324u);
    ctx->pc = 0x36C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C31Cu;
    // 0x36c320: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D6B0u, 0x36C31Cu, 0x36C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C324u;
label_36c324:
    // 0x36c324: 0xc0da7a0  jal         func_369E80
    ctx->pc = 0x36C324u;
    SET_GPR_U32(ctx, 31, 0x36C32Cu);
    ctx->pc = 0x36C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C324u;
    // 0x36c328: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369E80u, 0x36C324u, 0x36C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C32Cu;
label_36c32c:
    // 0x36c32c: 0xc0db05c  jal         func_36C170
    ctx->pc = 0x36C32Cu;
    SET_GPR_U32(ctx, 31, 0x36C334u);
    ctx->pc = 0x36C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C32Cu;
    // 0x36c330: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C170u, 0x36C32Cu, 0x36C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C334u;
label_36c334:
    // 0x36c334: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x36c334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x36c338: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x36c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x36c33c: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x36c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x36c340: 0xae0203a8  sw          $v0, 0x3A8($s0)
    ctx->pc = 0x36c340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 2));
    // 0x36c344: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x36c344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x36c348: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x36c348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x36c34c: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x36c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x36c350: 0xae000368  sw          $zero, 0x368($s0)
    ctx->pc = 0x36c350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x36c354: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x36c354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x36c358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36c358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c35c: 0x0  nop
    ctx->pc = 0x36c35cu;
    // NOP
label_36c360:
    // 0x36c360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36c360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36c364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c36c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36c36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c370: 0xc0da8e0  jal         func_36A380
    ctx->pc = 0x36C370u;
    SET_GPR_U32(ctx, 31, 0x36C378u);
    ctx->pc = 0x36C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C370u;
    // 0x36c374: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A380u, 0x36C370u, 0x36C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C378u;
label_36c378:
    // 0x36c378: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x36c378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36c37c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36C37Cu;
    {
        const bool branch_taken_0x36c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C37Cu;
        // 0x36c380: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c37c) {
            ctx->pc = 0x36C360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c360;
        }
    }
    ctx->pc = 0x36C384u;
    // 0x36c384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c38c: 0xc0da8ea  jal         func_36A3A8
    ctx->pc = 0x36C38Cu;
    SET_GPR_U32(ctx, 31, 0x36C394u);
    ctx->pc = 0x36C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C38Cu;
    // 0x36c390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x36C38Cu, 0x36C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C394u;
label_36c394:
    // 0x36c394: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x36c394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
    // 0x36c398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36c398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c39c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3a0: 0xae030188  sw          $v1, 0x188($s0)
    ctx->pc = 0x36c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    // 0x36c3a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c3a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c3a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3B0u;
        // 0x36c3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3B8u;
}
