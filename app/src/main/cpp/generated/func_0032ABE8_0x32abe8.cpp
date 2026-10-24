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

// Function: func_0032ABE8
// Address: 0x32abe8 - 0x32ac48
void func_0032ABE8_0x32abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032ABE8_0x32abe8");
#endif

    switch (ctx->pc) {
        case 0x32ac14u: goto label_32ac14;
        case 0x32ac28u: goto label_32ac28;
        default: break;
    }

    ctx->pc = 0x32abe8u;

    // 0x32abe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32abec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32abecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32abf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32abf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32abf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32abf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32abf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32abfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ac00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32ac00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac04: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x32ac04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32ac08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32ac0c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AC0Cu;
    SET_GPR_U32(ctx, 31, 0x32AC14u);
    ctx->pc = 0x32AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC0Cu;
    // 0x32ac10: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AC0Cu, 0x32AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC14u;
label_32ac14:
    // 0x32ac14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32ac18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x32ac1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32ac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac20: 0xc0cab12  jal         func_32AC48
    ctx->pc = 0x32AC20u;
    SET_GPR_U32(ctx, 31, 0x32AC28u);
    ctx->pc = 0x32AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC20u;
    // 0x32ac24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AC48u, 0x32AC20u, 0x32AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC28u;
label_32ac28:
    // 0x32ac28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ac28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ac2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ac2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ac30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32ac30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ac34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32ac38: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32ac38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32ac3c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32AC3Cu;
    ctx->pc = 0x32AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC3Cu;
    // 0x32ac40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AC3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AC44u;
    // 0x32ac44: 0x0  nop
    ctx->pc = 0x32ac44u;
    // NOP
    ctx->pc = 0x32ac48u;
}
