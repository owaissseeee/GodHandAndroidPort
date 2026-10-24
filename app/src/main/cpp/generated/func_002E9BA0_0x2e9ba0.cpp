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

// Function: func_002E9BA0
// Address: 0x2e9ba0 - 0x2e9c30
void func_002E9BA0_0x2e9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E9BA0_0x2e9ba0");
#endif

    ctx->pc = 0x2e9ba0u;

    // 0x2e9ba0: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x2e9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x2e9ba4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x2e9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x2e9ba8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e9bac: 0x8c860110  lw          $a2, 0x110($a0)
    ctx->pc = 0x2e9bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2e9bb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e9bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9bb4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2e9bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9bb8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2e9bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2e9bbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e9bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9bc0: 0xac83011c  sw          $v1, 0x11C($a0)
    ctx->pc = 0x2e9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 3));
    // 0x2e9bc4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2e9bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2e9bc8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e9bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9bcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e9bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e9bd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e9bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9bd8: 0xc4c00144  lwc1        $f0, 0x144($a2)
    ctx->pc = 0x2e9bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9bdc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2e9bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2e9be0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e9be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e9be4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e9be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e9be8: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x2e9be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x2e9bec: 0xc4c10150  lwc1        $f1, 0x150($a2)
    ctx->pc = 0x2e9becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9bf0: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x2e9bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x2e9bf4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e9bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e9bf8: 0xe48102bc  swc1        $f1, 0x2BC($a0)
    ctx->pc = 0x2e9bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
    // 0x2e9bfc: 0xc4c0013c  lwc1        $f0, 0x13C($a2)
    ctx->pc = 0x2e9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9c00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e9c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e9c04: 0xe48002c8  swc1        $f0, 0x2C8($a0)
    ctx->pc = 0x2e9c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 712), bits); }
    // 0x2e9c08: 0xc4c10140  lwc1        $f1, 0x140($a2)
    ctx->pc = 0x2e9c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9c0c: 0xe48102d0  swc1        $f1, 0x2D0($a0)
    ctx->pc = 0x2e9c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x2e9c10: 0x90c5016c  lbu         $a1, 0x16C($a2)
    ctx->pc = 0x2e9c10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 364)));
    // 0x2e9c14: 0xa08502cc  sb          $a1, 0x2CC($a0)
    ctx->pc = 0x2e9c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 716), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e9c18: 0x90c30170  lbu         $v1, 0x170($a2)
    ctx->pc = 0x2e9c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 368)));
    // 0x2e9c1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e9c20: 0xa08302ce  sb          $v1, 0x2CE($a0)
    ctx->pc = 0x2e9c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 718), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C24u;
        // 0x2e9c28: 0xa0e0b644  sb          $zero, -0x49BC($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4294948420), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9C2Cu;
    // 0x2e9c2c: 0x0  nop
    ctx->pc = 0x2e9c2cu;
    // NOP
    ctx->pc = 0x2e9c30u;
}
