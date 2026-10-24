#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: __do_global_dtors
// Address: 0x79b790 - 0x79b7e8
void ps2___do_global_dtors_0x79b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79b790");
#endif

    switch (ctx->pc) {
        case 0x79b790u: goto label_79b790;
        case 0x79b794u: goto label_79b794;
        case 0x79b798u: goto label_79b798;
        case 0x79b79cu: goto label_79b79c;
        case 0x79b7a0u: goto label_79b7a0;
        case 0x79b7a4u: goto label_79b7a4;
        case 0x79b7a8u: goto label_79b7a8;
        case 0x79b7acu: goto label_79b7ac;
        case 0x79b7b0u: goto label_79b7b0;
        case 0x79b7b4u: goto label_79b7b4;
        case 0x79b7b8u: goto label_79b7b8;
        case 0x79b7bcu: goto label_79b7bc;
        case 0x79b7c0u: goto label_79b7c0;
        case 0x79b7c4u: goto label_79b7c4;
        case 0x79b7c8u: goto label_79b7c8;
        case 0x79b7ccu: goto label_79b7cc;
        case 0x79b7d0u: goto label_79b7d0;
        case 0x79b7d4u: goto label_79b7d4;
        case 0x79b7d8u: goto label_79b7d8;
        case 0x79b7dcu: goto label_79b7dc;
        case 0x79b7e0u: goto label_79b7e0;
        case 0x79b7e4u: goto label_79b7e4;
        default: break;
    }

    ctx->pc = 0x79b790u;

label_79b790:
    // 0x79b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79b794:
    // 0x79b794: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79b798:
    // 0x79b798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79b79c:
    // 0x79b79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79b7a0:
    // 0x79b7a0: 0x8c82b980  lw          $v0, -0x4680($a0)
    ctx->pc = 0x79b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949248)));
label_79b7a4:
    // 0x79b7a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b7a8:
    // 0x79b7a8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79b7ac:
    if (ctx->pc == 0x79B7ACu) {
        ctx->pc = 0x79B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7A8u;
        // 0x79b7ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B7B0u;
        goto label_79b7b0;
    }
    ctx->pc = 0x79B7A8u;
    {
        const bool branch_taken_0x79b7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7A8u;
        // 0x79b7ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7a8) {
            ctx->pc = 0x79B7D4u;
            goto label_79b7d4;
        }
    }
    ctx->pc = 0x79B7B0u;
label_79b7b0:
    // 0x79b7b0: 0x8e02b980  lw          $v0, -0x4680($s0)
    ctx->pc = 0x79b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949248)));
label_79b7b4:
    // 0x79b7b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79b7b8:
    // 0x79b7b8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79b7bc:
    // 0x79b7bc: 0x60f809  jalr        $v1
label_79b7c0:
    if (ctx->pc == 0x79B7C0u) {
        ctx->pc = 0x79B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7BCu;
        // 0x79b7c0: 0xae02b980  sw          $v0, -0x4680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B7C4u;
        goto label_79b7c4;
    }
    ctx->pc = 0x79B7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79B7C4u);
        ctx->pc = 0x79B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7BCu;
        // 0x79b7c0: 0xae02b980  sw          $v0, -0x4680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294949248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B7BCu, 0x79B7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B7C4u;
label_79b7c4:
    // 0x79b7c4: 0x8e02b980  lw          $v0, -0x4680($s0)
    ctx->pc = 0x79b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949248)));
label_79b7c8:
    // 0x79b7c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79b7cc:
    // 0x79b7cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79b7d0:
    if (ctx->pc == 0x79B7D0u) {
        ctx->pc = 0x79B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7CCu;
        // 0x79b7d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B7D4u;
        goto label_79b7d4;
    }
    ctx->pc = 0x79B7CCu;
    {
        const bool branch_taken_0x79b7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7CCu;
        // 0x79b7d0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7cc) {
            ctx->pc = 0x79B7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7b8;
        }
    }
    ctx->pc = 0x79B7D4u;
label_79b7d4:
    // 0x79b7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79b7d8:
    // 0x79b7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79b7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b7dc:
    // 0x79b7dc: 0x3e00008  jr          $ra
label_79b7e0:
    if (ctx->pc == 0x79B7E0u) {
        ctx->pc = 0x79B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7DCu;
        // 0x79b7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B7E4u;
        goto label_79b7e4;
    }
    ctx->pc = 0x79B7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7DCu;
        // 0x79b7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B7E4u;
label_79b7e4:
    // 0x79b7e4: 0x0  nop
    ctx->pc = 0x79b7e4u;
    // NOP
    ctx->pc = 0x79b7e8u;
}
} // namespace gh_r601
