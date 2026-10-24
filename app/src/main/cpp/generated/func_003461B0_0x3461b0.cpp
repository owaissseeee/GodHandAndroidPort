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

// Function: func_003461B0
// Address: 0x3461b0 - 0x346228
void func_003461B0_0x3461b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003461B0_0x3461b0");
#endif

    switch (ctx->pc) {
        case 0x3461d0u: goto label_3461d0;
        case 0x3461f0u: goto label_3461f0;
        default: break;
    }

    ctx->pc = 0x3461b0u;

    // 0x3461b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3461b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3461b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3461b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3461b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3461b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3461bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3461c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3461c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3461c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3461c8: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3461C8u;
    SET_GPR_U32(ctx, 31, 0x3461D0u);
    ctx->pc = 0x3461CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3461C8u;
    // 0x3461cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3461C8u, 0x3461D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3461D0u;
label_3461d0:
    // 0x3461d0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3461d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3461d4: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x3461d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x3461d8: 0x24848148  addiu       $a0, $a0, -0x7EB8
    ctx->pc = 0x3461d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934856));
    // 0x3461dc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3461dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3461e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3461E0u;
    {
        const bool branch_taken_0x3461e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3461E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461E0u;
        // 0x3461e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3461e0) {
            ctx->pc = 0x346210u;
            goto label_346210;
        }
    }
    ctx->pc = 0x3461E8u;
    // 0x3461e8: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3461E8u;
    SET_GPR_U32(ctx, 31, 0x3461F0u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3461E8u, 0x3461F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3461F0u;
label_3461f0:
    // 0x3461f0: 0x8e0601a8  lw          $a2, 0x1A8($s0)
    ctx->pc = 0x3461f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x3461f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3461f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3461f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3461fc: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x3461fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x346200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346208: 0x80e9768  j           func_3A5DA0
    ctx->pc = 0x346208u;
    ctx->pc = 0x34620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346208u;
    // 0x34620c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x346208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346210u;
label_346210:
    // 0x346210: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x346210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x346214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34621c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34621cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346220: 0x80e95f1  j           func_3A57C4
    ctx->pc = 0x346220u;
    ctx->pc = 0x346224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346220u;
    // 0x346224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x346220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346228u;
}
