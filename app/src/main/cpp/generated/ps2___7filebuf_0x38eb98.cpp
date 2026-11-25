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

// Function: __7filebuf
// Address: 0x38eb98 - 0x38ec08
void ps2___7filebuf_0x38eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7filebuf_0x38eb98");
#endif

    if (__builtin_expect(ctx->pc != 0x38eb98u, 0)) {
        switch (ctx->pc) {
            case 0x38ebb0u: goto label_38ebb0;
            case 0x38ebc4u: goto label_38ebc4;
            case 0x38ebccu: goto label_38ebcc;
            case 0x38ebd4u: goto label_38ebd4;
            case 0x38ebe8u: goto label_38ebe8;
            case 0x38ebf8u: goto label_38ebf8;
            default: break;
        }
    }


    // 0x38eb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38eb9c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38eba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38eba8: 0xc0e2cea  jal         func_38B3A8
    SET_GPR_U32(ctx, 31, 0x38EBB0u);
    ctx->pc = 0x38EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBA8u;
    // 0x38ebac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ps2___9streambufi_0x38b3a8, 0x38b3a8u, 0x38ebb0u)) {
        return;
    }
    ctx->pc = 0x38EBB0u;
label_38ebb0:
    // 0x38ebb0: 0x3c030046  lui         $v1, 0x46
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x38ebb4: 0x2463d220  addiu       $v1, $v1, -0x2DE0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955552));
    // 0x38ebb8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebbc: 0xc0e49c6  jal         func_392718
    SET_GPR_U32(ctx, 31, 0x38EBC4u);
    ctx->pc = 0x38EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBBCu;
    // 0x38ebc0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ps2__IO_file_init_0x392718, 0x392718u, 0x38ebc4u)) {
        return;
    }
    ctx->pc = 0x38EBC4u;
label_38ebc4:
    // 0x38ebc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38EBC4u;
    {
        const bool branch_taken_0x38ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBC4u;
        // 0x38ebc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebc4) {
            ctx->pc = 0x38EBD4u;
            goto label_38ebd4;
        }
    }
    ctx->pc = 0x38EBCCu;
label_38ebcc:
    // 0x38ebcc: 0xc0c8386  jal         func_320E18
    ctx->pc = 0x38EBCCu;
    SET_GPR_U32(ctx, 31, 0x38EBD4u);
    if (!runtime->callDirectStatic(rdram, ctx, &ps2___throw_0x320e18, 0x320e18u, 0x38ebd4u)) {
        return;
    }
    ctx->pc = 0x38EBD4u;
label_38ebd4:
    // 0x38ebd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38EBD4u;
    {
        const bool branch_taken_0x38ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBD4u;
        // 0x38ebd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebd4) {
            ctx->pc = 0x38EBF8u;
            goto label_38ebf8;
        }
    }
    // 0x38ebdc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebe0: 0xc0e2cf8  jal         func_38B3E0
    SET_GPR_U32(ctx, 31, 0x38EBE8u);
    ctx->pc = 0x38EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBE0u;
    // 0x38ebe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ps2____9streambuf_0x38b3e0, 0x38b3e0u, 0x38ebe8u)) {
        return;
    }
    ctx->pc = 0x38EBE8u;
label_38ebe8:
    // 0x38ebe8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x38EBE8u;
    {
        const bool branch_taken_0x38ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ebe8) {
            ctx->pc = 0x38EBCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ebcc;
        }
    }
    // 0x38ebf0: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x38EBF0u;
    SET_GPR_U32(ctx, 31, 0x38EBF8u);
    if (!runtime->callDirectStatic(rdram, ctx, &terminate_0x3211e0, 0x3211e0u, 0x38ebf8u)) {
        return;
    }
    ctx->pc = 0x38EBF8u;
label_38ebf8:
    // 0x38ebf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ebf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ebfc: 0x3e00008  jr          $ra
    ctx->pc = 0x38EBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBFCu;
        // 0x38ec00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x38ec04: 0x0  nop
    // NOP
    ctx->pc = 0x38ec08u;
}