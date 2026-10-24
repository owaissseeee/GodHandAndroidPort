#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CEBE0
// Address: 0x7cebe0 - 0x7cec48
void func_007CEBE0_0x7cebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CEBE0_0x7cebe0");
#endif

    switch (ctx->pc) {
        case 0x7cebf8u: goto label_7cebf8;
        case 0x7cec04u: goto label_7cec04;
        case 0x7cec34u: goto label_7cec34;
        default: break;
    }

    ctx->pc = 0x7cebe0u;

    // 0x7cebe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cebe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cebe8: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7cebe8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7cebec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7cebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7cebf0: 0xc0ebee4  jal         func_3AFB90
    ctx->pc = 0x7CEBF0u;
    SET_GPR_U32(ctx, 31, 0x7CEBF8u);
    ctx->pc = 0x7CEBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEBF0u;
    // 0x7cebf4: 0x26102f80  addiu       $s0, $s0, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB90u, 0x7CEBF0u, 0x7CEBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEBF8u;
label_7cebf8:
    // 0x7cebf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cebfc: 0xc0eccda  jal         func_3B3368
    ctx->pc = 0x7CEBFCu;
    SET_GPR_U32(ctx, 31, 0x7CEC04u);
    ctx->pc = 0x7CEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEBFCu;
    // 0x7cec00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3368u, 0x7CEBFCu, 0x7CEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEC04u;
label_7cec04:
    // 0x7cec04: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cec04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cec08: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cec08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cec0c: 0x3c07007d  lui         $a3, 0x7D
    ctx->pc = 0x7cec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
    // 0x7cec10: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x7cec10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x7cec14: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x7cec14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cec18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7cec18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cec1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7cec1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cec20: 0x24c6f018  addiu       $a2, $a2, -0xFE8
    ctx->pc = 0x7cec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963224));
    // 0x7cec24: 0x24e73000  addiu       $a3, $a3, 0x3000
    ctx->pc = 0x7cec24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12288));
    // 0x7cec28: 0x24842f98  addiu       $a0, $a0, 0x2F98
    ctx->pc = 0x7cec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12184));
    // 0x7cec2c: 0xc0ecd00  jal         func_3B3400
    ctx->pc = 0x7CEC2Cu;
    SET_GPR_U32(ctx, 31, 0x7CEC34u);
    ctx->pc = 0x7CEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEC2Cu;
    // 0x7cec30: 0x34a50400  ori         $a1, $a1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3400u, 0x7CEC2Cu, 0x7CEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEC34u;
label_7cec34:
    // 0x7cec34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cec38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cec38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cec3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cec3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cec40: 0x80ece06  j           func_3B3818
    ctx->pc = 0x7CEC40u;
    ctx->pc = 0x7CEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEC40u;
    // 0x7cec44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3818u, 0x7CEC40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CEC48u;
}
} // namespace gh_mcport
