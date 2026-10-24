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

// Function: _sceCd_Poff_Intr
// Address: 0x3987c0 - 0x398818
void _sceCd_Poff_Intr_0x3987c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_Poff_Intr_0x3987c0");
#endif

    switch (ctx->pc) {
        case 0x3987c0u: goto label_3987c0;
        case 0x3987c4u: goto label_3987c4;
        case 0x3987c8u: goto label_3987c8;
        case 0x3987ccu: goto label_3987cc;
        case 0x3987d0u: goto label_3987d0;
        case 0x3987d4u: goto label_3987d4;
        case 0x3987d8u: goto label_3987d8;
        case 0x3987dcu: goto label_3987dc;
        case 0x3987e0u: goto label_3987e0;
        case 0x3987e4u: goto label_3987e4;
        case 0x3987e8u: goto label_3987e8;
        case 0x3987ecu: goto label_3987ec;
        case 0x3987f0u: goto label_3987f0;
        case 0x3987f4u: goto label_3987f4;
        case 0x3987f8u: goto label_3987f8;
        case 0x3987fcu: goto label_3987fc;
        case 0x398800u: goto label_398800;
        case 0x398804u: goto label_398804;
        case 0x398808u: goto label_398808;
        case 0x39880cu: goto label_39880c;
        case 0x398810u: goto label_398810;
        case 0x398814u: goto label_398814;
        default: break;
    }

    ctx->pc = 0x3987c0u;

label_3987c0:
    // 0x3987c0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3987c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3987c4:
    // 0x3987c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3987c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3987c8:
    // 0x3987c8: 0x8c45c3c8  lw          $a1, -0x3C38($v0)
    ctx->pc = 0x3987c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951880)));
label_3987cc:
    // 0x3987cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3987ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3987d0:
    // 0x3987d0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3987d4:
    if (ctx->pc == 0x3987D4u) {
        ctx->pc = 0x3987D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987D0u;
        // 0x3987d4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987D8u;
        goto label_3987d8;
    }
    ctx->pc = 0x3987D0u;
    {
        const bool branch_taken_0x3987d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3987D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987D0u;
        // 0x3987d4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3987d0) {
            ctx->pc = 0x398804u;
            goto label_398804;
        }
    }
    ctx->pc = 0x3987D8u;
label_3987d8:
    // 0x3987d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3987d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3987dc:
    // 0x3987dc: 0x8c438664  lw          $v1, -0x799C($v0)
    ctx->pc = 0x3987dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936164)));
label_3987e0:
    // 0x3987e0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3987e4:
    if (ctx->pc == 0x3987E4u) {
        ctx->pc = 0x3987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987E0u;
        // 0x3987e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3987E8u;
        goto label_3987e8;
    }
    ctx->pc = 0x3987E0u;
    {
        const bool branch_taken_0x3987e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987E0u;
        // 0x3987e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3987e0) {
            ctx->pc = 0x398808u;
            goto label_398808;
        }
    }
    ctx->pc = 0x3987E8u;
label_3987e8:
    // 0x3987e8: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3987e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3987ec:
    // 0x3987ec: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3987ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3987f0:
    // 0x3987f0: 0x8c5cc3cc  lw          $gp, -0x3C34($v0)
    ctx->pc = 0x3987f0u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951884)));
label_3987f4:
    // 0x3987f4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3987f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
label_3987f8:
    // 0x3987f8: 0xa0f809  jalr        $a1
label_3987fc:
    if (ctx->pc == 0x3987FCu) {
        ctx->pc = 0x3987FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987F8u;
        // 0x3987fc: 0x8c64c3d0  lw          $a0, -0x3C30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398800u;
        goto label_398800;
    }
    ctx->pc = 0x3987F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x398800u);
        ctx->pc = 0x3987FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987F8u;
        // 0x3987fc: 0x8c64c3d0  lw          $a0, -0x3C30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951888)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3987F8u, 0x398800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398800u;
label_398800:
    // 0x398800: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x398800u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398804:
    // 0x398804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398808:
    // 0x398808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39880c:
    // 0x39880c: 0x3e00008  jr          $ra
label_398810:
    if (ctx->pc == 0x398810u) {
        ctx->pc = 0x398810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39880Cu;
        // 0x398810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398814u;
        goto label_398814;
    }
    ctx->pc = 0x39880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39880Cu;
        // 0x398810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39880Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398814u;
label_398814:
    // 0x398814: 0x0  nop
    ctx->pc = 0x398814u;
    // NOP
    ctx->pc = 0x398818u;
}
