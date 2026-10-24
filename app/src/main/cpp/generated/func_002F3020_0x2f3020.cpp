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

// Function: func_002F3020
// Address: 0x2f3020 - 0x2f3070
void func_002F3020_0x2f3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F3020_0x2f3020");
#endif

    ctx->pc = 0x2f3020u;

    // 0x2f3020: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x2f3020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2f3024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3028: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f3028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f302c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f302cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3030: 0xc4a0013c  lwc1        $f0, 0x13C($a1)
    ctx->pc = 0x2f3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3034: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2f3034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2f3038: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2f3038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2f303c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f303cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f3040: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f3040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3044: 0x8c860220  lw          $a2, 0x220($a0)
    ctx->pc = 0x2f3044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x2f3048: 0xe48002b8  swc1        $f0, 0x2B8($a0)
    ctx->pc = 0x2f3048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
    // 0x2f304c: 0xc4a10140  lwc1        $f1, 0x140($a1)
    ctx->pc = 0x2f304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3050: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2f3050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2f3054: 0xe48202bc  swc1        $f2, 0x2BC($a0)
    ctx->pc = 0x2f3054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
    // 0x2f3058: 0x90a3018c  lbu         $v1, 0x18C($a1)
    ctx->pc = 0x2f3058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x2f305c: 0xac8602b4  sw          $a2, 0x2B4($a0)
    ctx->pc = 0x2f305cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 6));
    // 0x2f3060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f3064: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3064u;
        // 0x2f3068: 0xac8302b0  sw          $v1, 0x2B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F306Cu;
    // 0x2f306c: 0x0  nop
    ctx->pc = 0x2f306cu;
    // NOP
    ctx->pc = 0x2f3070u;
}
