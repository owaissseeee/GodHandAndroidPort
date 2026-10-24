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

// Function: func_0032E040
// Address: 0x32e040 - 0x32e090
void func_0032E040_0x32e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E040_0x32e040");
#endif

    switch (ctx->pc) {
        case 0x32e05cu: goto label_32e05c;
        case 0x32e064u: goto label_32e064;
        case 0x32e070u: goto label_32e070;
        case 0x32e078u: goto label_32e078;
        default: break;
    }

    ctx->pc = 0x32e040u;

    // 0x32e040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32e044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32e050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e054: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32E054u;
    SET_GPR_U32(ctx, 31, 0x32E05Cu);
    ctx->pc = 0x32E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E054u;
    // 0x32e058: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32E054u, 0x32E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E05Cu;
label_32e05c:
    // 0x32e05c: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32E05Cu;
    SET_GPR_U32(ctx, 31, 0x32E064u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32E05Cu, 0x32E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E064u;
label_32e064:
    // 0x32e064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e068: 0xc0cb824  jal         func_32E090
    ctx->pc = 0x32E068u;
    SET_GPR_U32(ctx, 31, 0x32E070u);
    ctx->pc = 0x32E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E068u;
    // 0x32e06c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E090u, 0x32E068u, 0x32E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E070u;
label_32e070:
    // 0x32e070: 0xc0cff22  jal         func_33FC88
    ctx->pc = 0x32E070u;
    SET_GPR_U32(ctx, 31, 0x32E078u);
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32E070u, 0x32E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E078u;
label_32e078:
    // 0x32e078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e084: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32E084u;
    ctx->pc = 0x32E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E084u;
    // 0x32e088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32E084u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E08Cu;
    // 0x32e08c: 0x0  nop
    ctx->pc = 0x32e08cu;
    // NOP
    ctx->pc = 0x32e090u;
}
