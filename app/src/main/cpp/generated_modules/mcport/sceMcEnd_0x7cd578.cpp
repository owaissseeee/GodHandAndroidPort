#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcEnd
// Address: 0x7cd578 - 0x7cd628
void sceMcEnd_0x7cd578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcEnd_0x7cd578");
#endif

    switch (ctx->pc) {
        case 0x7cd5acu: goto label_7cd5ac;
        case 0x7cd5c0u: goto label_7cd5c0;
        case 0x7cd5c8u: goto label_7cd5c8;
        case 0x7cd5e4u: goto label_7cd5e4;
        case 0x7cd5ecu: goto label_7cd5ec;
        case 0x7cd5f4u: goto label_7cd5f4;
        case 0x7cd608u: goto label_7cd608;
        default: break;
    }

    ctx->pc = 0x7cd578u;

    // 0x7cd578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cd578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cd57c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cd57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cd580: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cd580u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cd584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7cd584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7cd588: 0x8e4207b4  lw          $v0, 0x7B4($s2)
    ctx->pc = 0x7cd588u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D07B4u));
    // 0x7cd58c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cd58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cd590: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x7CD590u;
    {
        const bool branch_taken_0x7cd590 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CD594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD590u;
        // 0x7cd594: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd590) {
            ctx->pc = 0x7CD608u;
            goto label_7cd608;
        }
    }
    ctx->pc = 0x7CD598u;
    // 0x7cd598: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7cd598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7cd59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd5a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7cd5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd5a4: 0xc1f377e  jal         func_7CDDF8
    ctx->pc = 0x7CD5A4u;
    SET_GPR_U32(ctx, 31, 0x7CD5ACu);
    ctx->pc = 0x7CD5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD5A4u;
    // 0x7cd5a8: 0x3c11007d  lui         $s1, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDDF8u, 0x7CD5A4u, 0x7CD5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD5ACu;
label_7cd5ac:
    // 0x7cd5ac: 0x8e2407bc  lw          $a0, 0x7BC($s1)
    ctx->pc = 0x7cd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1980)));
    // 0x7cd5b0: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7CD5B0u;
    {
        const bool branch_taken_0x7cd5b0 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x7cd5b0) {
            ctx->pc = 0x7CD5ECu;
            goto label_7cd5ec;
        }
    }
    ctx->pc = 0x7CD5B8u;
    // 0x7cd5b8: 0xc0ebebc  jal         func_3AFAF0
    ctx->pc = 0x7CD5B8u;
    SET_GPR_U32(ctx, 31, 0x7CD5C0u);
    ctx->pc = 0x7CD5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD5B8u;
    // 0x7cd5bc: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAF0u, 0x7CD5B8u, 0x7CD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD5C0u;
label_7cd5c0:
    // 0x7cd5c0: 0xc0ebeac  jal         func_3AFAB0
    ctx->pc = 0x7CD5C0u;
    SET_GPR_U32(ctx, 31, 0x7CD5C8u);
    ctx->pc = 0x7CD5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD5C0u;
    // 0x7cd5c4: 0x8e2407bc  lw          $a0, 0x7BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1980)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAB0u, 0x7CD5C0u, 0x7CD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD5C8u;
label_7cd5c8:
    // 0x7cd5c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7cd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7cd5cc: 0x26102f80  addiu       $s0, $s0, 0x2F80
    ctx->pc = 0x7cd5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12160));
    // 0x7cd5d0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cd5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cd5d4: 0xae2207bc  sw          $v0, 0x7BC($s1)
    ctx->pc = 0x7cd5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1980), GPR_U32(ctx, 2));
    // 0x7cd5d8: 0x24842f98  addiu       $a0, $a0, 0x2F98
    ctx->pc = 0x7cd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12184));
    // 0x7cd5dc: 0xc0ecd34  jal         func_3B34D0
    ctx->pc = 0x7CD5DCu;
    SET_GPR_U32(ctx, 31, 0x7CD5E4u);
    ctx->pc = 0x7CD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD5DCu;
    // 0x7cd5e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B34D0u, 0x7CD5DCu, 0x7CD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD5E4u;
label_7cd5e4:
    // 0x7cd5e4: 0xc0ecd5a  jal         func_3B3568
    ctx->pc = 0x7CD5E4u;
    SET_GPR_U32(ctx, 31, 0x7CD5ECu);
    ctx->pc = 0x7CD5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD5E4u;
    // 0x7cd5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3568u, 0x7CD5E4u, 0x7CD5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD5ECu;
label_7cd5ec:
    // 0x7cd5ec: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD5ECu;
    SET_GPR_U32(ctx, 31, 0x7CD5F4u);
    ctx->pc = 0x7CD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD5ECu;
    // 0x7cd5f0: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD5ECu, 0x7CD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD5F4u;
label_7cd5f4:
    // 0x7cd5f4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd5f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7cd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7cd5fc: 0x8c6407b8  lw          $a0, 0x7B8($v1)
    ctx->pc = 0x7cd5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7D07B8u));
    // 0x7cd600: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD600u;
    SET_GPR_U32(ctx, 31, 0x7CD608u);
    ctx->pc = 0x7CD604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD600u;
    // 0x7cd604: 0xae4207b4  sw          $v0, 0x7B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD600u, 0x7CD608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD608u;
label_7cd608:
    // 0x7cd608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7cd608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cd610: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cd610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cd614: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cd614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cd618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cd618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cd61c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD61Cu;
        // 0x7cd620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD624u;
    // 0x7cd624: 0x0  nop
    ctx->pc = 0x7cd624u;
    // NOP
    ctx->pc = 0x7cd628u;
}
} // namespace gh_mcport
