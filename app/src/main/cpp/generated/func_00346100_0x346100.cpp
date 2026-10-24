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

// Function: func_00346100
// Address: 0x346100 - 0x346158
void func_00346100_0x346100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346100_0x346100");
#endif

    switch (ctx->pc) {
        case 0x346120u: goto label_346120;
        case 0x346130u: goto label_346130;
        case 0x346138u: goto label_346138;
        default: break;
    }

    ctx->pc = 0x346100u;

    // 0x346100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34610c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346114: 0x8e1101c8  lw          $s1, 0x1C8($s0)
    ctx->pc = 0x346114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x346118: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x346118u;
    SET_GPR_U32(ctx, 31, 0x346120u);
    ctx->pc = 0x34611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346118u;
    // 0x34611c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x346118u, 0x346120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346120u;
label_346120:
    // 0x346120: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x346120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x346124: 0xdc258140  ld          $a1, -0x7EC0($at)
    ctx->pc = 0x346124u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x458140u));
    // 0x346128: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x346128u;
    SET_GPR_U32(ctx, 31, 0x346130u);
    ctx->pc = 0x34612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346128u;
    // 0x34612c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x346128u, 0x346130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346130u;
label_346130:
    // 0x346130: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x346130u;
    SET_GPR_U32(ctx, 31, 0x346138u);
    ctx->pc = 0x346134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346130u;
    // 0x346134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x346130u, 0x346138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346138u;
label_346138:
    // 0x346138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34613c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34613cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34614c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34614cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346150: 0x80d19fa  j           func_3467E8
    ctx->pc = 0x346150u;
    ctx->pc = 0x346154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346150u;
    // 0x346154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3467E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3467E8u, 0x346150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346158u;
}
