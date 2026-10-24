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

// Function: func_00344E88
// Address: 0x344e88 - 0x344f18
void func_00344E88_0x344e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344E88_0x344e88");
#endif

    switch (ctx->pc) {
        case 0x344ea4u: goto label_344ea4;
        case 0x344ed8u: goto label_344ed8;
        case 0x344ee0u: goto label_344ee0;
        default: break;
    }

    ctx->pc = 0x344e88u;

    // 0x344e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344e9c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x344E9Cu;
    SET_GPR_U32(ctx, 31, 0x344EA4u);
    ctx->pc = 0x344EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E9Cu;
    // 0x344ea0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x344E9Cu, 0x344EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EA4u;
label_344ea4:
    // 0x344ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ea8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x344ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344eac: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x344EACu;
    {
        const bool branch_taken_0x344eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x344EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344EACu;
        // 0x344eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344eac) {
            ctx->pc = 0x344ED0u;
            goto label_344ed0;
        }
    }
    ctx->pc = 0x344EB4u;
    // 0x344eb4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x344eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344ec0: 0x24847918  addiu       $a0, $a0, 0x7918
    ctx->pc = 0x344ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31000));
    // 0x344ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344ec8: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x344EC8u;
    ctx->pc = 0x344ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EC8u;
    // 0x344ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x344EC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344ED0u;
label_344ed0:
    // 0x344ed0: 0xc0d122c  jal         func_3448B0
    ctx->pc = 0x344ED0u;
    SET_GPR_U32(ctx, 31, 0x344ED8u);
    ctx->pc = 0x3448B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448B0u, 0x344ED0u, 0x344ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344ED8u;
label_344ed8:
    // 0x344ed8: 0xc0d19be  jal         func_3466F8
    ctx->pc = 0x344ED8u;
    SET_GPR_U32(ctx, 31, 0x344EE0u);
    ctx->pc = 0x344EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344ED8u;
    // 0x344edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466F8u, 0x344ED8u, 0x344EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344EE0u;
label_344ee0:
    // 0x344ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x344ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x344ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344eec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344ef4: 0x80d645a  j           func_359168
    ctx->pc = 0x344EF4u;
    ctx->pc = 0x344EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344EF4u;
    // 0x344ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359168u, 0x344EF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344EFCu;
    // 0x344efc: 0x0  nop
    ctx->pc = 0x344efcu;
    // NOP
    // 0x344f00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x344f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x344f04: 0x0  nop
    ctx->pc = 0x344f04u;
    // NOP
    // 0x344f08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x344f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x344f0c: 0x0  nop
    ctx->pc = 0x344f0cu;
    // NOP
    // 0x344f10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x344f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x344f14: 0x0  nop
    ctx->pc = 0x344f14u;
    // NOP
    ctx->pc = 0x344f18u;
}
