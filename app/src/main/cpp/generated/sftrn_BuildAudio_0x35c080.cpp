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

// Function: sftrn_BuildAudio
// Address: 0x35c080 - 0x35c120
void sftrn_BuildAudio_0x35c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_BuildAudio_0x35c080");
#endif

    switch (ctx->pc) {
        case 0x35c0a4u: goto label_35c0a4;
        case 0x35c0b4u: goto label_35c0b4;
        case 0x35c0d0u: goto label_35c0d0;
        case 0x35c0e0u: goto label_35c0e0;
        default: break;
    }

    ctx->pc = 0x35c080u;

    // 0x35c080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c084: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35c084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c08c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35c08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35c094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35c09c: 0xc0d7080  jal         func_35C200
    ctx->pc = 0x35C09Cu;
    SET_GPR_U32(ctx, 31, 0x35C0A4u);
    ctx->pc = 0x35C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C09Cu;
    // 0x35c0a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C09Cu, 0x35C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0A4u;
label_35c0a4:
    // 0x35c0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c0ac: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35C0ACu;
    SET_GPR_U32(ctx, 31, 0x35C0B4u);
    ctx->pc = 0x35C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0ACu;
    // 0x35c0b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35C0ACu, 0x35C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0B4u;
label_35c0b4:
    // 0x35c0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x35c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x35c0bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c0c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35C0C0u;
    {
        const bool branch_taken_0x35c0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C0C0u;
        // 0x35c0c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c0c0) {
            ctx->pc = 0x35C100u;
            goto label_35c100;
        }
    }
    ctx->pc = 0x35C0C8u;
    // 0x35c0c8: 0xc0d7080  jal         func_35C200
    ctx->pc = 0x35C0C8u;
    SET_GPR_U32(ctx, 31, 0x35C0D0u);
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C0C8u, 0x35C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0D0u;
label_35c0d0:
    // 0x35c0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35c0d8: 0xc0d7050  jal         func_35C140
    ctx->pc = 0x35C0D8u;
    SET_GPR_U32(ctx, 31, 0x35C0E0u);
    ctx->pc = 0x35C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0D8u;
    // 0x35c0dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C140u, 0x35C0D8u, 0x35C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0E0u;
label_35c0e0:
    // 0x35c0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c0e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35c0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c0f0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x35c0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35c0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c0f8: 0x80d7080  j           func_35C200
    ctx->pc = 0x35C0F8u;
    ctx->pc = 0x35C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0F8u;
    // 0x35c0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C0F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C100u;
label_35c100:
    // 0x35c100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c108: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c110: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x35c110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35c114: 0x80d7080  j           func_35C200
    ctx->pc = 0x35C114u;
    ctx->pc = 0x35C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C114u;
    // 0x35c118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C114u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C11Cu;
    // 0x35c11c: 0x0  nop
    ctx->pc = 0x35c11cu;
    // NOP
    ctx->pc = 0x35c120u;
}
