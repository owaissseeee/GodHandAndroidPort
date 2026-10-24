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

// Function: cParts_calcLocal
// Address: 0x150138 - 0x1501d0
void cParts_calcLocal_0x150138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cParts_calcLocal_0x150138");
#endif

    switch (ctx->pc) {
        case 0x15018cu: goto label_15018c;
        case 0x150198u: goto label_150198;
        case 0x1501acu: goto label_1501ac;
        case 0x1501bcu: goto label_1501bc;
        default: break;
    }

    ctx->pc = 0x150138u;

    // 0x150138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15013c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150140: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x150140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x150144: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x150144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x150148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15014c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15014cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x150150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150154: 0xc6030130  lwc1        $f3, 0x130($s0)
    ctx->pc = 0x150154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150158: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x150158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15015c: 0xc6040134  lwc1        $f4, 0x134($s0)
    ctx->pc = 0x15015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x150160: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x150160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x150164: 0xc6020104  lwc1        $f2, 0x104($s0)
    ctx->pc = 0x150164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150168: 0xc6030138  lwc1        $f3, 0x138($s0)
    ctx->pc = 0x150168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15016c: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x15016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150170: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x150170u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x150174: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x150174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x150178: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x150178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15017c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x15017cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x150180: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x150180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x150184: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x150184u;
    SET_GPR_U32(ctx, 31, 0x15018Cu);
    ctx->pc = 0x150188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150184u;
    // 0x150188: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x150184u, 0x15018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15018Cu;
label_15018c:
    // 0x15018c: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x150190: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x150190u;
    SET_GPR_U32(ctx, 31, 0x150198u);
    ctx->pc = 0x150194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150190u;
    // 0x150194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x150190u, 0x150198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150198u;
label_150198:
    // 0x150198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15019c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1501a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501a4: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x1501A4u;
    SET_GPR_U32(ctx, 31, 0x1501ACu);
    ctx->pc = 0x1501A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501A4u;
    // 0x1501a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x1501A4u, 0x1501ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501ACu;
label_1501ac:
    // 0x1501ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1501acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1501b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501b4: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x1501B4u;
    SET_GPR_U32(ctx, 31, 0x1501BCu);
    ctx->pc = 0x1501B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501B4u;
    // 0x1501b8: 0x24860110  addiu       $a2, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1501B4u, 0x1501BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501BCu;
label_1501bc:
    // 0x1501bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1501bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1501c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1501c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1501c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1501C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1501C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501C4u;
        // 0x1501c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1501C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1501CCu;
    // 0x1501cc: 0x0  nop
    ctx->pc = 0x1501ccu;
    // NOP
    ctx->pc = 0x1501d0u;
}
