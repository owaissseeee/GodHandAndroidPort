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

// Function: func_00345D58
// Address: 0x345d58 - 0x345df0
void func_00345D58_0x345d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345D58_0x345d58");
#endif

    switch (ctx->pc) {
        case 0x345d74u: goto label_345d74;
        case 0x345da8u: goto label_345da8;
        case 0x345db0u: goto label_345db0;
        case 0x345dd0u: goto label_345dd0;
        case 0x345dd8u: goto label_345dd8;
        default: break;
    }

    ctx->pc = 0x345d58u;

    // 0x345d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345d6c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x345D6Cu;
    SET_GPR_U32(ctx, 31, 0x345D74u);
    ctx->pc = 0x345D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D6Cu;
    // 0x345d70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x345D6Cu, 0x345D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D74u;
label_345d74:
    // 0x345d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345d78: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x345D78u;
    {
        const bool branch_taken_0x345d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x345D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D78u;
        // 0x345d7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d78) {
            ctx->pc = 0x345DA0u;
            goto label_345da0;
        }
    }
    ctx->pc = 0x345D80u;
    // 0x345d80: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x345d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x345d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345d8c: 0x24848038  addiu       $a0, $a0, -0x7FC8
    ctx->pc = 0x345d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934584));
    // 0x345d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345d94: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x345D94u;
    ctx->pc = 0x345D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D94u;
    // 0x345d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345D94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345D9Cu;
    // 0x345d9c: 0x0  nop
    ctx->pc = 0x345d9cu;
    // NOP
label_345da0:
    // 0x345da0: 0xc0d25fe  jal         func_3497F8
    ctx->pc = 0x345DA0u;
    SET_GPR_U32(ctx, 31, 0x345DA8u);
    ctx->pc = 0x3497F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497F8u, 0x345DA0u, 0x345DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DA8u;
label_345da8:
    // 0x345da8: 0xc0d177c  jal         func_345DF0
    ctx->pc = 0x345DA8u;
    SET_GPR_U32(ctx, 31, 0x345DB0u);
    ctx->pc = 0x345DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DA8u;
    // 0x345dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345DF0u, 0x345DA8u, 0x345DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DB0u;
label_345db0:
    // 0x345db0: 0xae1101bc  sw          $s1, 0x1BC($s0)
    ctx->pc = 0x345db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 17));
    // 0x345db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x345db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345db8: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x345db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x345dbc: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x345dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x345dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345dc4: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x345dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x345dc8: 0xc0d16f8  jal         func_345BE0
    ctx->pc = 0x345DC8u;
    SET_GPR_U32(ctx, 31, 0x345DD0u);
    ctx->pc = 0x345DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DC8u;
    // 0x345dcc: 0xae0001dc  sw          $zero, 0x1DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345BE0u, 0x345DC8u, 0x345DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DD0u;
label_345dd0:
    // 0x345dd0: 0xc0d25fe  jal         func_3497F8
    ctx->pc = 0x345DD0u;
    SET_GPR_U32(ctx, 31, 0x345DD8u);
    ctx->pc = 0x345DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DD0u;
    // 0x345dd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3497F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497F8u, 0x345DD0u, 0x345DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DD8u;
label_345dd8:
    // 0x345dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ddc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345de8: 0x80d0bfe  j           func_342FF8
    ctx->pc = 0x345DE8u;
    ctx->pc = 0x345DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DE8u;
    // 0x345dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342FF8u, 0x345DE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345DF0u;
}
