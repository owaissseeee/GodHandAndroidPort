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

// Function: func_003BA0C8
// Address: 0x3ba0c8 - 0x3ba148
void func_003BA0C8_0x3ba0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA0C8_0x3ba0c8");
#endif

    switch (ctx->pc) {
        case 0x3ba108u: goto label_3ba108;
        case 0x3ba118u: goto label_3ba118;
        case 0x3ba120u: goto label_3ba120;
        default: break;
    }

    ctx->pc = 0x3ba0c8u;

    // 0x3ba0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ba0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ba0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ba0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ba0d8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BA0D8u;
    {
        const bool branch_taken_0x3ba0d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0D8u;
        // 0x3ba0dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba0d8) {
            ctx->pc = 0x3BA100u;
            goto label_3ba100;
        }
    }
    ctx->pc = 0x3BA0E0u;
    // 0x3ba0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ba0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ba0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ba0ec: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x3ba0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
    // 0x3ba0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ba0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba0f4: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA0F4u;
    ctx->pc = 0x3BA0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA0F4u;
    // 0x3ba0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA0F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA0FCu;
    // 0x3ba0fc: 0x0  nop
    ctx->pc = 0x3ba0fcu;
    // NOP
label_3ba100:
    // 0x3ba100: 0xc0ee76c  jal         func_3B9DB0
    ctx->pc = 0x3BA100u;
    SET_GPR_U32(ctx, 31, 0x3BA108u);
    ctx->pc = 0x3BA104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA100u;
    // 0x3ba104: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DB0u, 0x3BA100u, 0x3BA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA108u;
label_3ba108:
    // 0x3ba108: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3ba108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3ba10c: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BA10Cu;
    {
        const bool branch_taken_0x3ba10c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3ba10c) {
            ctx->pc = 0x3BA110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA10Cu;
            // 0x3ba110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA134u;
            goto label_3ba134;
        }
    }
    ctx->pc = 0x3BA114u;
    // 0x3ba114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ba114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba118:
    // 0x3ba118: 0xc0ee852  jal         func_3BA148
    ctx->pc = 0x3BA118u;
    SET_GPR_U32(ctx, 31, 0x3BA120u);
    ctx->pc = 0x3BA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA118u;
    // 0x3ba11c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA148u, 0x3BA118u, 0x3BA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA120u;
label_3ba120:
    // 0x3ba120: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3ba120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3ba124: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3ba124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ba128: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BA128u;
    {
        const bool branch_taken_0x3ba128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA128u;
        // 0x3ba12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba128) {
            ctx->pc = 0x3BA118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba118;
        }
    }
    ctx->pc = 0x3BA130u;
    // 0x3ba130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ba130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba134:
    // 0x3ba134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ba134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ba138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ba138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba13c: 0x80ee772  j           func_3B9DC8
    ctx->pc = 0x3BA13Cu;
    ctx->pc = 0x3BA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA13Cu;
    // 0x3ba140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DC8u, 0x3BA13Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA144u;
    // 0x3ba144: 0x0  nop
    ctx->pc = 0x3ba144u;
    // NOP
    ctx->pc = 0x3ba148u;
}
