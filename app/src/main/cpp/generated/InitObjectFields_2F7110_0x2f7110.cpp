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

// Function: InitObjectFields_2F7110
// Address: 0x2f7110 - 0x2f7178
void InitObjectFields_2F7110_0x2f7110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectFields_2F7110_0x2f7110");
#endif

    switch (ctx->pc) {
        case 0x2f7124u: goto label_2f7124;
        default: break;
    }

    ctx->pc = 0x2f7110u;

    // 0x2f7110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f7118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f711c: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2F711Cu;
    SET_GPR_U32(ctx, 31, 0x2F7124u);
    ctx->pc = 0x2F7120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F711Cu;
    // 0x2f7120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2F711Cu, 0x2F7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7124u;
label_2f7124:
    // 0x2f7124: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f712c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f7130: 0x2442f6d8  addiu       $v0, $v0, -0x928
    ctx->pc = 0x2f7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964952));
    // 0x2f7134: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x2f7134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x2f7138: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f7138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f713c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f713cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f7140: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2f7140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x2f7144: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2f7144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2f7148: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2f7148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2f714c: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x2f714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x2f7150: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x2f7150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x2f7154: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x2f7154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x2f7158: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x2f7158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x2f715c: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x2f715cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x2f7160: 0xfa0002f0  sqc2        $vf0, 0x2F0($s0)
    ctx->pc = 0x2f7160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f7164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f7164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f716c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f716cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7170: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7170u;
        // 0x2f7174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7178u;
}
