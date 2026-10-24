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

// Function: sftrn_BuildVideo
// Address: 0x35bfe0 - 0x35c080
void sftrn_BuildVideo_0x35bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_BuildVideo_0x35bfe0");
#endif

    switch (ctx->pc) {
        case 0x35c004u: goto label_35c004;
        case 0x35c014u: goto label_35c014;
        case 0x35c030u: goto label_35c030;
        case 0x35c040u: goto label_35c040;
        default: break;
    }

    ctx->pc = 0x35bfe0u;

    // 0x35bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bfe4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x35bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bfe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bfec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35bfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35bff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35bff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35bffc: 0xc0d7080  jal         func_35C200
    ctx->pc = 0x35BFFCu;
    SET_GPR_U32(ctx, 31, 0x35C004u);
    ctx->pc = 0x35C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFFCu;
    // 0x35c000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35BFFCu, 0x35C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C004u;
label_35c004:
    // 0x35c004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c00c: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35C00Cu;
    SET_GPR_U32(ctx, 31, 0x35C014u);
    ctx->pc = 0x35C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C00Cu;
    // 0x35c010: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35C00Cu, 0x35C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C014u;
label_35c014:
    // 0x35c014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c018: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35c01c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c020: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35C020u;
    {
        const bool branch_taken_0x35c020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C020u;
        // 0x35c024: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c020) {
            ctx->pc = 0x35C060u;
            goto label_35c060;
        }
    }
    ctx->pc = 0x35C028u;
    // 0x35c028: 0xc0d7080  jal         func_35C200
    ctx->pc = 0x35C028u;
    SET_GPR_U32(ctx, 31, 0x35C030u);
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C028u, 0x35C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C030u;
label_35c030:
    // 0x35c030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c034: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c038: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35C038u;
    SET_GPR_U32(ctx, 31, 0x35C040u);
    ctx->pc = 0x35C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C038u;
    // 0x35c03c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35C038u, 0x35C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C040u;
label_35c040:
    // 0x35c040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c048: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35c04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c050: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x35c050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35c054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c058: 0x80d7080  j           func_35C200
    ctx->pc = 0x35C058u;
    ctx->pc = 0x35C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C058u;
    // 0x35c05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C058u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C060u;
label_35c060:
    // 0x35c060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c068: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c06c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c070: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x35c070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35c074: 0x80d7080  j           func_35C200
    ctx->pc = 0x35C074u;
    ctx->pc = 0x35C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C074u;
    // 0x35c078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C074u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C07Cu;
    // 0x35c07c: 0x0  nop
    ctx->pc = 0x35c07cu;
    // NOP
    ctx->pc = 0x35c080u;
}
