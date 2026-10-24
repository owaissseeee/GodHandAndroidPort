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

// Function: cOmDoor2_setOpenType
// Address: 0x1bdda0 - 0x1bde00
void cOmDoor2_setOpenType_0x1bdda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor2_setOpenType_0x1bdda0");
#endif

    switch (ctx->pc) {
        case 0x1bddd8u: goto label_1bddd8;
        case 0x1bdde4u: goto label_1bdde4;
        default: break;
    }

    ctx->pc = 0x1bdda0u;

    // 0x1bdda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bdda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bdda4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bdda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bddac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bddacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bddb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bddb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddb8: 0x8e020778  lw          $v0, 0x778($s0)
    ctx->pc = 0x1bddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1912)));
    // 0x1bddbc: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDDBCu;
    {
        const bool branch_taken_0x1bddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDBCu;
        // 0x1bddc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddbc) {
            ctx->pc = 0x1BDDECu;
            goto label_1bddec;
        }
    }
    ctx->pc = 0x1BDDC4u;
    // 0x1bddc4: 0x92030774  lbu         $v1, 0x774($s0)
    ctx->pc = 0x1bddc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1908)));
    // 0x1bddc8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDDC8u;
    {
        const bool branch_taken_0x1bddc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bddc8) {
            ctx->pc = 0x1BDDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDDC8u;
            // 0x1bddcc: 0xae110778  sw          $s1, 0x778($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1912), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDDECu;
            goto label_1bddec;
        }
    }
    ctx->pc = 0x1BDDD0u;
    // 0x1bddd0: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x1BDDD0u;
    SET_GPR_U32(ctx, 31, 0x1BDDD8u);
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x1BDDD0u, 0x1BDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDD8u;
label_1bddd8:
    // 0x1bddd8: 0xae110778  sw          $s1, 0x778($s0)
    ctx->pc = 0x1bddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1912), GPR_U32(ctx, 17));
    // 0x1bdddc: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x1BDDDCu;
    SET_GPR_U32(ctx, 31, 0x1BDDE4u);
    ctx->pc = 0x1BDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDDCu;
    // 0x1bdde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x1BDDDCu, 0x1BDDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE4u;
label_1bdde4:
    // 0x1bdde4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDDE4u;
    {
        const bool branch_taken_0x1bdde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDE4u;
        // 0x1bdde8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdde4) {
            ctx->pc = 0x1BDDF0u;
            goto label_1bddf0;
        }
    }
    ctx->pc = 0x1BDDECu;
label_1bddec:
    // 0x1bddec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bddecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bddf0:
    // 0x1bddf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bddf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bddf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDF8u;
        // 0x1bddfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE00u;
}
