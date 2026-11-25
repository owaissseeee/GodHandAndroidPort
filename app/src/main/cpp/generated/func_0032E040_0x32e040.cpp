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

    if (__builtin_expect(ctx->pc != 0x32e040u, 0)) {
        switch (ctx->pc) {
            case 0x32e05cu: goto label_32e05c;
            case 0x32e064u: goto label_32e064;
            case 0x32e070u: goto label_32e070;
            case 0x32e078u: goto label_32e078;
            default: break;
        }
    }


    // 0x32e040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32e044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e048: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32e050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e054: 0xc0cff28  jal         func_33FCA0
    SET_GPR_U32(ctx, 31, 0x32E05Cu);
    ctx->pc = 0x32E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E054u;
    // 0x32e058: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_NoOp_FCA0_0x33fca0, 0x33fca0u, 0x32e05cu)) {
        return;
    }
    ctx->pc = 0x32E05Cu;
label_32e05c:
    // 0x32e05c: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32E05Cu;
    SET_GPR_U32(ctx, 31, 0x32E064u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_Tramp_0033B658_FC70_0x33fc70, 0x33fc70u, 0x32e064u)) {
        return;
    }
    ctx->pc = 0x32E064u;
label_32e064:
    // 0x32e064: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e068: 0xc0cb824  jal         func_32E090
    SET_GPR_U32(ctx, 31, 0x32E070u);
    ctx->pc = 0x32E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E068u;
    // 0x32e06c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032E090_0x32e090, 0x32e090u, 0x32e070u)) {
        return;
    }
    ctx->pc = 0x32E070u;
label_32e070:
    // 0x32e070: 0xc0cff22  jal         func_33FC88
    ctx->pc = 0x32E070u;
    SET_GPR_U32(ctx, 31, 0x32E078u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_Tramp_0033B670_FC88_0x33fc88, 0x33fc88u, 0x32e078u)) {
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
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E084u;
    // 0x32e088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32E084u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x32e08c: 0x0  nop
    // NOP
    ctx->pc = 0x32e090u;
}