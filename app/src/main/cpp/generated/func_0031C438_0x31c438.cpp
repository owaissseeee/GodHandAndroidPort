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

// Function: func_0031C438
// Address: 0x31c438 - 0x31c4e0
void func_0031C438_0x31c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C438_0x31c438");
#endif

    switch (ctx->pc) {
        case 0x31c450u: goto label_31c450;
        case 0x31c4bcu: goto label_31c4bc;
        case 0x31c4c8u: goto label_31c4c8;
        default: break;
    }

    ctx->pc = 0x31c438u;

    // 0x31c438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c43c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31c440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c448: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x31C448u;
    SET_GPR_U32(ctx, 31, 0x31C450u);
    ctx->pc = 0x31C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C448u;
    // 0x31c44c: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x31C448u, 0x31C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C450u;
label_31c450:
    // 0x31c450: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x31c450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x31c454: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x31c454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x31c458: 0xc4a05880  lwc1        $f0, 0x5880($a1)
    ctx->pc = 0x31c458u;
    { uint32_t bits = FAST_READ32(0x755880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c45c: 0x24b05880  addiu       $s0, $a1, 0x5880
    ctx->pc = 0x31c45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 22656));
    // 0x31c460: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x31c460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x31c464: 0x2631b000  addiu       $s1, $s1, -0x5000
    ctx->pc = 0x31c464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946816));
    // 0x31c468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c46c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31c46cu;
    { uint32_t bits = FAST_READ32(0x755884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c470: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x31c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x31c474: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x31c474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x31c478: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x31c478u;
    { uint32_t bits = FAST_READ32(0x755888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c47c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x31c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x31c480: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x31c480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x31c484: 0xc4a05880  lwc1        $f0, 0x5880($a1)
    ctx->pc = 0x31c484u;
    { uint32_t bits = FAST_READ32(0x755880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c488: 0xe4400490  swc1        $f0, 0x490($v0)
    ctx->pc = 0x31c488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1168), bits); }
    // 0x31c48c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x31c48cu;
    { uint32_t bits = FAST_READ32(0x755884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c490: 0xe4410494  swc1        $f1, 0x494($v0)
    ctx->pc = 0x31c490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1172), bits); }
    // 0x31c494: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31c494u;
    { uint32_t bits = FAST_READ32(0x755888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c498: 0xe4400498  swc1        $f0, 0x498($v0)
    ctx->pc = 0x31c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1176), bits); }
    // 0x31c49c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x31c49cu;
    { uint32_t bits = FAST_READ32(0x75588Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c4a0: 0xe4410100  swc1        $f1, 0x100($v0)
    ctx->pc = 0x31c4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x31c4a4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x31c4a4u;
    { uint32_t bits = FAST_READ32(0x755890u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c4a8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x31c4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x31c4ac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x31c4acu;
    { uint32_t bits = FAST_READ32(0x755894u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c4b0: 0xe4410108  swc1        $f1, 0x108($v0)
    ctx->pc = 0x31c4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x31c4b4: 0xc0aa6fc  jal         func_2A9BF0
    ctx->pc = 0x31C4B4u;
    SET_GPR_U32(ctx, 31, 0x31C4BCu);
    ctx->pc = 0x31C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C4B4u;
    // 0x31c4b8: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BF0u, 0x31C4B4u, 0x31C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4BCu;
label_31c4bc:
    // 0x31c4bc: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x31c4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31c4c0: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x31C4C0u;
    SET_GPR_U32(ctx, 31, 0x31C4C8u);
    ctx->pc = 0x31C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C4C0u;
    // 0x31c4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x31C4C0u, 0x31C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C4C8u;
label_31c4c8:
    // 0x31c4c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31c4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c4cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4D4u;
        // 0x31c4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C4DCu;
    // 0x31c4dc: 0x0  nop
    ctx->pc = 0x31c4dcu;
    // NOP
    ctx->pc = 0x31c4e0u;
}
