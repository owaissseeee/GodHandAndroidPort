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

// Function: cHeatSys_Initialize
// Address: 0x2a9908 - 0x2a9978
void cHeatSys_Initialize_0x2a9908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_Initialize_0x2a9908");
#endif

    switch (ctx->pc) {
        case 0x2a994cu: goto label_2a994c;
        case 0x2a9958u: goto label_2a9958;
        case 0x2a9964u: goto label_2a9964;
        default: break;
    }

    ctx->pc = 0x2a9908u;

    // 0x2a9908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a990c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a990cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9914: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a9914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9918: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x2a9918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x2a991c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2a991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2a9920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a9920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a9924: 0x2610b000  addiu       $s0, $s0, -0x5000
    ctx->pc = 0x2a9924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946816));
    // 0x2a9928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a992c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9930: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a9930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2a9934: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a9934u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9938: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a9938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a993c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a993cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a9940: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a9940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a9944: 0xc0aa6fc  jal         func_2A9BF0
    ctx->pc = 0x2A9944u;
    SET_GPR_U32(ctx, 31, 0x2A994Cu);
    ctx->pc = 0x2A9948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9944u;
    // 0x2a9948: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BF0u, 0x2A9944u, 0x2A994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A994Cu;
label_2a994c:
    // 0x2a994c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a994cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a9950: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x2A9950u;
    SET_GPR_U32(ctx, 31, 0x2A9958u);
    ctx->pc = 0x2A9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9950u;
    // 0x2a9954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x2A9950u, 0x2A9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9958u;
label_2a9958:
    // 0x2a9958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a995c: 0xc0aa724  jal         func_2A9C90
    ctx->pc = 0x2A995Cu;
    SET_GPR_U32(ctx, 31, 0x2A9964u);
    ctx->pc = 0x2A9960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A995Cu;
    // 0x2a9960: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C90u, 0x2A995Cu, 0x2A9964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9964u;
label_2a9964:
    // 0x2a9964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a996c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9970: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9970u;
        // 0x2a9974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9978u;
}
