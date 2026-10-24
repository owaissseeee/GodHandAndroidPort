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

// Function: func_0035DF78
// Address: 0x35df78 - 0x35dfe0
void func_0035DF78_0x35df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035DF78_0x35df78");
#endif

    switch (ctx->pc) {
        case 0x35dfa4u: goto label_35dfa4;
        default: break;
    }

    ctx->pc = 0x35df78u;

    // 0x35df78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35df78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35df7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35df80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35df80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35df88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35df8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35df8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35df94: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35df94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35df98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x35df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35df9c: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35DF9Cu;
    SET_GPR_U32(ctx, 31, 0x35DFA4u);
    ctx->pc = 0x35DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF9Cu;
    // 0x35dfa0: 0x245100b0  addiu       $s1, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35DF9Cu, 0x35DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFA4u;
label_35dfa4:
    // 0x35dfa4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35DFA4u;
    {
        const bool branch_taken_0x35dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dfa4) {
            ctx->pc = 0x35DFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DFA4u;
            // 0x35dfa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DFCCu;
            goto label_35dfcc;
        }
    }
    ctx->pc = 0x35DFACu;
    // 0x35dfac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x35dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35dfb0: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x35dfb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x35dfb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35DFB4u;
    {
        const bool branch_taken_0x35dfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFB4u;
        // 0x35dfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dfb4) {
            ctx->pc = 0x35DFC8u;
            goto label_35dfc8;
        }
    }
    ctx->pc = 0x35DFBCu;
    // 0x35dfbc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x35dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35dfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dfc4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35dfc8:
    // 0x35dfc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35dfc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35dfcc:
    // 0x35dfcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35dfccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35dfd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35dfd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dfd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35dfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35dfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x35DFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DFD8u;
        // 0x35dfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DFE0u;
}
