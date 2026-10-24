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

// Function: cOmb0_SetCollision
// Address: 0x1b35d0 - 0x1b3628
void cOmb0_SetCollision_0x1b35d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmb0_SetCollision_0x1b35d0");
#endif

    switch (ctx->pc) {
        case 0x1b361cu: goto label_1b361c;
        default: break;
    }

    ctx->pc = 0x1b35d0u;

    // 0x1b35d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b35d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b35d4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1b35d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1b35d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b35d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b35dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b35dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b35e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b35e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b35e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b35e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b35e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b35ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b35ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35f0: 0xa082062c  sb          $v0, 0x62C($a0)
    ctx->pc = 0x1b35f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1580), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b35f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1b35f8: 0x24642fc0  addiu       $a0, $v1, 0x2FC0
    ctx->pc = 0x1b35f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12224));
    // 0x1b35fc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b35fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3600: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1b3600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1b3604: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3608: 0x24a60080  addiu       $a2, $a1, 0x80
    ctx->pc = 0x1b3608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1b360c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b360cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b3610: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b3610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3614: 0xc04d220  jal         func_134880
    ctx->pc = 0x1B3614u;
    SET_GPR_U32(ctx, 31, 0x1B361Cu);
    ctx->pc = 0x1B3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3614u;
    // 0x1b3618: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x1B3614u, 0x1B361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B361Cu;
label_1b361c:
    // 0x1b361c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b361cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3620: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3620u;
        // 0x1b3624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3628u;
}
